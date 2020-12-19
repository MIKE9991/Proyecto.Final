#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main()
{
	float al, pe, imc;
	printf ("Ingresa tu peso\n");
	scanf ("%f", pe);
	printf ("Ingresa tu altura\n");
	scanf ("%f", al);
	imc=pe/al;
	if (imc<18.5)
	{
		printf ("Peso bajo\n");
		getch ();
	}
	else if (imc>=18.5 && imc<=24.9)
	{
		printf ("Peso normal\n");
		getch ();
	}
	else if (imc>=25.0 && imc<=29.9)
	{
		printf ("Sobrepeso\n");
		getch ();
	}
	else if (imc>=30 && imc<=34.9)
	{
		printf ("Obesidad tipo 1\n");
		getch ();
	}
	else if (imc>=35 && imc<=39.9)
	{
		printf ("Obesidad tipo 2\n");
		getch ();
	}
	else if (imc>=40)
	{
		printf ("Hiper obesidad\n");
		getch ();
	}
}
