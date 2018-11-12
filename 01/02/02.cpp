// 02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include  <stdlib.h>
#include  <math.h>

int soma(int n)
{
	if (n == 0)
		return 0;
	else
		return n + soma(n - 1);
}

int LerNumerInteiro()
{
	int a;
	printf("Digite um numero: ");
	scanf_s("%i", &a);
	return a;
}

int fatorial(int n)
{
	if (n == 0)
		return 1;

	return n * fatorial(n - 1);
}

int main()
{
	int numero = LerNumerInteiro();
	int result = soma(numero);
	printf("Resultado: %i ", result);
	
	int resultFatorial = fatorial(numero);
	
	system("pause");
    return 0;
}

