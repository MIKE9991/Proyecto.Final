#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main()
{
	int num;
	printf ("Ingresa tu edad\n");
	scanf ("%d", &num);
	if (num>=18)
	{
		printf ("Mayor de edad\n");
		getch ();
	}
	else
	{
		printf ("Menor de edad\n");
		getch ();
	}
}
