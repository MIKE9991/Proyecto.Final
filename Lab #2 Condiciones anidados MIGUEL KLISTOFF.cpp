#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main()
{
	int op;
	float ing, ti;
	printf ("Seleccione su estado civil: 1.- Soltero \t 2.- Casado\n");
	scanf ("%d", &op);
	printf ("Escriba sus ingresos mensuales (en pesos)\n");
	scanf ("%f", &ing);
	if (op==1 && ing<32000)
	{
		ti=(ing*0.2);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
	else if (op==1 && ing>32000)
	{
		ti=(ing*0.25);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
	else if (op==1 && ing<64000)
	{
		ti=(ing*0.1);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
	else if (op==2 && ing>64000)
	{
		ti=(ing*0.25);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
}
