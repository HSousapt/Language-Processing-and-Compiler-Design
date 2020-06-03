%option noyywrap

%%

"START:"					{ return START;	}
":END"						{ return END; }
"R:"						{ return READ; }
"W:"						{ return WRITE; }
"IF"						{ return IF;} 
"THEN"						{ return THEN; }
"ELSE"						{ return ELSE; } 
"UNTIL"						{ return UNTIL; }
"DO"						{ return DO; }
"INT"						{ return INT; }
"REAL"						{ return REAL; }
"BOOL"						{ return BOOL; }
"RETURN"					{ return RETURN; }
\"[a-zA-Z0-9áéíóú!#$%&€/()=?*+\-.:,;_^ ]+\"	{ yylval.terms=strdup(yytext); return STRING; }
[0-9]+						{ yylval.inteiro=atoi(yytext); return num; }
[0-9]+\.?[0-9]+				{ yylval.real=atof(yytext); return rial; }
"TRUE"						{ yylval.boolconst = 1; return booleans; }
"FALSE"						{ yylval.boolconst = 0; return booleans; }
[a-zA-Z]+\.					{ yylval.terms=strdup(yytext); return nome; }
[a-zA-Z]+					{ yylval.terms=strdup(yytext); return STR; }
[(){}=\"+\-\*/%\.\[\]|]   { return yytext[0]; }
";"							{ return yytext[0]; }
"=="						{ return EQ; }
">="						{ return GE; }
"<="						{ return LE; }
">"							{ return GT; }
"<"							{ return LT; }
"!="						{ return NE; }
\\"cos"						{return cos;}
\\"sin"						{return sin;}

"++"			 			{return INC;}
"--"						{return DEC;}
[&].+						{ ; }
[ \t\n]*					{ ; }
.							{ printf("erro %c\n",yytext[0]); }

%%
