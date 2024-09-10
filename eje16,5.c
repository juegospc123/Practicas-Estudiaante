#include <stdio.h>
int main()
{
	int suma=0;
	for (int i = 2; i < 230;)
	{
		
		i=i+2;
		suma += i;
		printf("%d +",i );
	}
	printf("\nLa suma de todos los numeros pares del 2 al 230 son:[%d]",suma);

	return 0;
}