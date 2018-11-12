// ListaDeExercicio.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

float Calculo(float x1, float x2, float  y1,float y2)
{
	float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return distancia;

}

void LerValores()
{
	
	float valor;
	printf("Digite o valor de x1");
	scanf_s("%f", &valor);

}

int main()
{
	float valor1 = LerValores();
	float valor2 = LerValores();
	float valor3 = LerValores();
	float  valor4 = LerValores();
	Calculo(valor1, valor2, valor3, valor4);
	system("pause");
	return 0;
}

