#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main()

{
	int num;
	printf ("Ingresa un numero\n");
	scanf ("%d", &num);
	if (num%2==0)
	{
		printf ("El numero es par\n");
		getch ();
	}
	else
	{
		printf ("El numero es impar\n");
		getch ();
	}
}
