%{
    #include <stdio.h>
    #include <strings.h>
    #include "aux.h"
    int asprintf(char **strp,const char *fmt,...);
    void yyerror(char *s);
    int yylex();
    char erro[100];
    char aux[100];
    POS pos;
    char* type;
    int jmp=0;
    int test=0;
    FILE* file;
%}

%union
{
    int inteiro;
    float real;
    int boolconst;
    char* others;
    char* terms;
    char* increments;
}

%token<terms> START END READ WRITE IF THEN ELSE UNTIL DO RETURN VAR REAL BOOL STR INT
%token<terms> STRING EQ LE GE LT GT NE nome sin cos

%token<increments>INC DEC
%token<inteiro> num
%token<real> rial
%token<boolconst> booleans

%type<others>Program Tasks Task startVars Var Inst Atrib Calc Exp Fat typeVar ELSES Cond
%type<others>Calc2 Exp2 Fat2 typeVar2 Var2 STRINGS


%%

Program : START Tasks END           {fprintf(file,"start\n%s\nstop\n",$2);}
    ;



Tasks : Tasks Task ';'              {asprintf(&$$,"%s%s",$1,$2);}
      | Task ';'                {asprintf(&$$,"%s",$1);}
      ;



Task : startVars                {asprintf(&$$,"%s",$1);}
     | Inst                 {asprintf(&$$,"%s",$1);}
     ;



startVars : INT Var     {
                                if(_isDeclared(pos,$2))
                    {
                                strcat(erro,$2);
                    strcat(erro," -> Esta variável já está declarada!");
                    yyerror(erro);
                    }
                    _addVar(pos,$2,"INT");
                    asprintf(&$$,"\tpushi 0\n",$1);
                }

            | REAL Var2         {
                                        if(_isDeclared(pos,$2))
                                {
                    strcat(erro,$2);
                    strcat(erro,"-> Esta variável já está declarada!");
                    yyerror(erro);
                    }
                    _addVar(pos,$2,"REAL");
                    asprintf(&$$,"\tpushi 0\n");
                }

            | BOOL Var      {

                    if(_isDeclared(pos,$2))
                    {
                    strcat(erro,$2);
                    strcat(erro,"-> Esta variável já está declarada!");
                    yyerror(erro);
                    }
                    _addVar(pos,$2,"BOOL");
                    asprintf(&$$,"\tpushi 0\n");
                }

        ;

Var : STR           {asprintf(&$$,"%s",$1);}
    ;

Var2 : nome         {asprintf(&$$,"%s",$1);}
    ;

Inst : READ Var                 {
                            if(!_isDeclared(pos,$2))
                            {
                                strcat(erro,$2);
                                strcat(erro,"-> Esta variável não está declarada!");
                                yyerror(erro);
                            }


                                    asprintf(&$$,"\tread\n\tatoi\n\tstoreg %d\n",_getposi(pos,$2));

                            }
    | READ Var2                 {
                            if(!_isDeclared(pos,$2))
                            {
                                strcat(erro,$2);
                                strcat(erro,"-> Esta variável não está declarada!");
                                yyerror(erro);
                            }

                                asprintf(&$$,"\tread\n\tatof\n\tstoreg %d\n",_getposi(pos,$2));
                            }



     | WRITE Var                {
                            if(!strcmp(_getType(pos,$2),"INT"))
                                asprintf(&$$,
                                "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\twritei\n\tpushs %s\n\twrites\n",
                                _getposi(pos,$2),"\"\\n\"");
                            if(!strcmp(_getType(pos,$2),"BOOL"))
                                asprintf(&$$,
                                "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\twritei\n\tpushs %s\n\twrites\n",
                                _getposi(pos,$2),"\"\\n\"");

                        }
     | WRITE Var2               {

                                asprintf(&$$,
                                "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\twritef\n\tpushs %s\n\twrites\n",
                                _getposi(pos,$2),"\"\\n\"");

                        }


     | WRITE STRINGS                {
                            asprintf(&$$,"%s",$2);
                        }

     | Var INC {
                        asprintf(&$$,
                        "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\tpushi 1\n\tadd\n\tstoreg %d",
                        _getposi(pos,$1),_getposi(pos,$1));



                }

     | Var DEC {
                    asprintf(&$$,
                    "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\tpushi 1\n\tsub\n\tstoreg %d",
                    _getposi(pos,$1),_getposi(pos,$1));


               }



     | IF '(' Cond ')' THEN '{' Tasks '}' ELSES {

                            asprintf(&$$,
                            "%s\tjz Aqui%d\n%s\njump Ali%d\nAqui%d\n:\n%s\nAli%d:"
                            ,$3,jmp,$7,jmp,jmp,$9,jmp);
                            jmp++;

                        }




     | UNTIL '('Cond')' DO '{'Tasks'}'      {
                            asprintf(&$$,
                            "Ali%d:\n%s\tjz Aqui%d\n\tjump Fora%d\nAqui%d:\n%s\tjump Ali%d\nFora%d:",
                            jmp,$3,jmp,jmp,jmp,$7,jmp,jmp);
                            jmp++;
                        }


     | Atrib                    {asprintf(&$$,"%s",$1);}
     ;






ELSES :                                  {asprintf(&$$,"");}
      | ELSE '{' Tasks '}'             {asprintf(&$$, "%s",$3);}
      ;

STRINGS:                            {asprintf(&$$,"\n\tpushs %s\n\twrites","\"\\n\"");}
       | STRING STRINGS             {asprintf(&$$,"\n\tpushs %s\n\twrites%s",$1,$2);}

Atrib : Var '=' Calc        {
                        if(!_isDeclared(pos,$1))
                    {
                    strcat(erro,$1);
                    strcat(erro,"-> Esta variável não está declarada!");
                    yyerror(erro);
                    }
                    asprintf(&$$,"%s\tstoreg %d\n",$3,_getposi(pos,$1));
                }

        | Var2 '=' Calc2 {
                        if(!_isDeclared(pos,$1))
                    {
                    strcat(erro,$1);
                    strcat(erro,"-> Esta variável não está declarada!");
                    yyerror(erro);
                    }
                    asprintf(&$$,"%s\tstoreg %d\n",$3,_getposi(pos,$1));
                }
        ;


Calc : Exp                      {asprintf(&$$,"%s",$1);}
       | Calc '+' Exp           {asprintf(&$$,"%s%s\tadd\n",$1,$3);}
       | Calc '-' Exp           {asprintf(&$$,"%s%s\tsub\n",$1,$3);}
       ;

Calc2 : Exp2                        {asprintf(&$$,"%s",$1);}
       | Calc2 '+' Exp2         {asprintf(&$$,"%s%s\tfadd\n",$1,$3);}
       | Calc2 '-' Exp2         {asprintf(&$$,"%s%s\tfsub\n",$1,$3);}
       ;





Exp : Fat                       {asprintf(&$$,"%s",$1);}
    | Exp '*' Fat               {asprintf(&$$,"%s%s\tmul\n",$1,$3);}

    | Exp '/' Fat               {if (test>0) {
                                strcat(erro,"Impossível dividir por 0!");
                                yyerror(erro);

                                }
                                asprintf(&$$,"%s%s\tdiv\n",$1,$3);}
    | Exp '%' Fat               {asprintf(&$$,"%s%s\tmod\n",$1,$3);}
    ;

Exp2 : Fat2                     {asprintf(&$$,"%s",$1);}

     | Exp2 '*' Fat2            {asprintf(&$$,"%s%s\tfmul\n",$1,$3);}

     | Exp2 '/' Fat2            {if (test>0) {
                                strcat(erro,"Impossível dividir por 0!");
                                yyerror(erro);

                                } asprintf(&$$,"%s%s\tdiv\n",$1,$3);}
    ;



Fat : '('Calc')'            {asprintf(&$$,"%s",$2);}
    | typeVar               {asprintf(&$$,"%s",$1);}
    ;


Fat2 : '('Calc2')'          {asprintf(&$$,"%s",$2);}

    | cos'('Calc2')'    {
                                    asprintf(&$$,"%s\tfcos\n",$3);

                        }

    | sin'('Calc2')'        {
                                    asprintf(&$$,"%s\tfsin\n",$3); }

    | typeVar2              {asprintf(&$$,"%s",$1);}
    ;




Cond : Calc EQ Calc         {asprintf(&$$,"%s%s\tequal\n",$1,$3);}
     | Calc NE Calc         {asprintf(&$$,"%s%s\tsub\n",$1,$3);}
     | Calc GE Calc         {asprintf(&$$,"%s%s\tsupeq\n",$1,$3);}
     | Calc LE Calc         {asprintf(&$$,"%s%s\tinfeq\n",$1,$3);}
     | Calc GT Calc         {asprintf(&$$,"%s%s\tsup\n",$1,$3);}
     | Calc LT Calc         {asprintf(&$$,"%s%s\tinf\n",$1,$3);}
     | Calc2 EQ Calc2           {asprintf(&$$,"%s%s\tequal\n",$1,$3);}
     | Calc2 NE Calc2           {asprintf(&$$,"%s%s\tfsub\n",$1,$3);}
     | Calc2 GE Calc2           {asprintf(&$$,"%s%s\tfsupeq\n",$1,$3);}
     | Calc2 LE Calc2           {asprintf(&$$,"%s%s\tfinfeq\n",$1,$3);}
     | Calc2 GT Calc2           {asprintf(&$$,"%s%s\tfsup\n",$1,$3);}
     | Calc2 LT Calc2           {asprintf(&$$,"%s%s\tfinf\n",$1,$3);}
     ;


typeVar : num           { if ($1==0) test++; asprintf(&$$,"\tpushi %d\n", $1);}
    | booleans          { if ($1==0) test++;asprintf(&$$,"\tpushi %d\n", $1);}
    | Var               {
                        if(!_isDeclared(pos,$1))
                        {
                            strcat(erro,$1);
                            strcat(erro," -> Variável não declarada!");
                            yyerror(erro);
                        }
                        asprintf(&$$,"\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n",_getposi(pos,$1));
                    }
    ;

typeVar2 :  rial                { if ($1==0.0) test++ ;asprintf(&$$,"\tpushf %f \n", $1);}
            | Var2              {
                        if(!_isDeclared(pos,$1))
                        {
                            strcat(erro,$1);
                            strcat(erro," -> Variável não declarada!");
                            yyerror(erro);
                        }
                        asprintf(&$$,"\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n",_getposi(pos,$1));
                    }
    ;


%%

#include "lex.yy.c"

void yyerror(char *s)
{
    printf("ERRO %s\n",s);
    exit(-1);
}

int main()
{
    file=fopen("cenas.vm","w+");
    _initVars(pos);
    yyparse();
    fclose(file);
    return 0;
}
