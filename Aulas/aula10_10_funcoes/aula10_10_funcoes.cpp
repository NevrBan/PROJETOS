// aula10_10_funcoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void HelloWord()
{
	printf("Hello Word!\n");
}

int Soma2Valores(int a, int b)
{
	int c; 
	c = a + b;
	return c;
}

int lervalorinteiro()
{
	int variavel;
	printf("\nFavor digitar um valor: ");
	scanf_s("%i", &variavel);
	return variavel;
}

int main()
{
	HelloWord();

	int primeirovalor = lervalorinteiro();
	int segundovalor  = lervalorinteiro();


	int d = Soma2Valores(99, 1);
	printf("\tResultado: %i\n", d);
	
	

	system("pause");
    return 0;
}