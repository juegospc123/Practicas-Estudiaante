#include <stdio.h>
int main()
{
	int i=2, ncom=0, n=0, j=1, k=0;

	printf(" Incerte el numero de referencia:");
	scanf("%d", &k);
	printf("Defina la n-esima a operar:");
	scanf("%d", & n);
	int  suma=0, suma2=0;
	do
	{
		i=ncom;

		if (i%k==0)
		{
			printf(" %d ",i );
			suma+=i;
		}

		i+=3;
		ncom+=j*n;
		j++;
		suma2+=ncom;
	} while (i<100);
	printf("\nLa suma total es: [%d]\n", suma);
		printf("\nLasuma total de n-esimos es: [%d] \n", suma2);

	return 0;
}