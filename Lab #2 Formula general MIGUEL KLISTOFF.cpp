#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main()
{
	float x1, x2, a, b, c, exp;
	printf("Ingresa el valor de a. \n");
	scanf ("%f",&a);
	printf("Ingresa el valor de b. \n");
	scanf ("%f",&b);
	printf("Ingresa el valor de c. \n");
	scanf ("%f",&c);
	exp=(pow(b,2)-(4*a*c));
	if (exp>=0)
	{
		x1=(-b+sqrt(exp))/(2*a);
		x2=(-b-sqrt(exp))/(2*a); 
		printf ("El valor de x1 es %.2f \n",x1);
		printf ("El valor de x2 es %.2f \n",x2);
		getch ();
	}
	else
	{
		printf ("No se puede resolver al ser raiz negativa. \n");
		getch ();
	}
}
