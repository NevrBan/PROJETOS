// lista_de_exercicios.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <stdlib.h>
#include  <math.h>

float CalculoDeDistancia(float x1, float y1, float x2, float y2)
{
	float resultado = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return resultado;
}

int main()
{
	float pontox1, pontoy1, pontox2, pontoy2, resultado;
	printf("Digite um valor para Px1: \n");
	scanf_s("%f", &pontox1);
	printf("Digite um valor para Py1: \n");
	scanf_s("%f", &pontoy1);
	printf("Digite um valor para Px2: \n");
	scanf_s("%f", &pontox2);
	printf("Digite um valor para Py2: \n");
	scanf_s("%f", &pontoy2);

	resultado = CalculoDeDistancia(pontox1, pontoy1, pontox2, pontoy2);

	printf("A distancia os pontos e: %f ", resultado);

	system("pause");
    return 0;
}

