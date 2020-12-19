#include <stdio.h>
int D1,D2,D3,D4;

int main()
{
	printf("ingrese un codigo valido de 4 digitos\n");
	printf("no ingrese digitos repetidos");
	do{
		printf("ingrese digito 1\t");
		scanf("%d",&D1);
		printf("ingrese digito 2\t");
		scanf("%d",&D2);
		printf("ingrese digito 3\t");
		scanf("%d",&D3);
		printf("ingrese digito 4\t");
		scanf("%d",&D4);
	}while (D1==D2 && D2==D3 && D3==D4);
}
