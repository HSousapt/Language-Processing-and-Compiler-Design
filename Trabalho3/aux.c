#include<stdio.h>
#include<string.h>

#define MAX 50
#define ocup 1
#define livre 0

struct pos{
	char* nome;
	char estado;
	char* type;
}POS[MAX];


void _initVars(POS p)
{
	int i = 0;
	for(i=0;i<MAX;i++)
	{
	       	p[i].estado = livre;
		p[i].nome = "";
		p[i].type = "";
	}
}

int _isDeclared(POS p, char* nome)
{
	int i;
	int r = 0;
	for(i=0;i<MAX;i++)
	{
		if(!strcmp(nome,p[i].nome)) r=1;
	}
	return r;
}


int _getposi(POS p, char *nome)
{
	int i;
	for(i=0;i<MAX;i++)
	{
		if(!strcmp(nome,p[i].nome)) return i;
	}
}

void _addVar(POS p, char* nome, char* tipo)
{	
	int i = 0;
	while(p[i].estado == ocup) i++;
	p[i].nome = nome;
	p[i].estado = ocup;
	p[i].type = tipo;
}

char* _getType(POS p, char* nome)
{
	int i;
	char* tipo;
	for(i=0;i<MAX;i++)
	{
		if(!strcmp(nome,p[i].nome)) tipo = p[i].type;
	}
	return tipo;
}

int main(){
POS q;
return 1;
}
