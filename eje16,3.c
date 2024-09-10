#include <stdio.h>
int main()
{
	int i =2, suma=0;
	do
	{
		if (i%5==0)
		{
			printf(" %d ",i );
			suma+=i;
		}
		i+=3;
	} while (i<100);
	printf("\nLa suma total es: [%d]\n", suma);

	return 0;
}