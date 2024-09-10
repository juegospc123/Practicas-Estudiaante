#include <stdio.h>
int main()
{
	int num;

	printf(" Incerte el numero que indique la cantidad de actericos a mostrar:");
	scanf("%d", &num);
	for (int i = 0; i < num; ++i)
	{
		printf("*");
	}
	return 0;
}