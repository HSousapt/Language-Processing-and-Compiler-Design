Compilador: proc.l ygram.y

	flex proc.l
	yacc ygram.y
	gcc -lm -std=gnu99 -o Compilador y.tab.c

