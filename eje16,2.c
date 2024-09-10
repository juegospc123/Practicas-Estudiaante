#include <stdio.h>
int main()
{
	int i =2,suma=0,n=0, ncom=0, j=1;
	printf("Defina la n-esima a operar:");
	scanf("%d", & n);
	while(suma<=100){

		i=ncom;
		ncom+=j*n;
		j++;

		suma+=ncom;
		printf("%d +",suma );		i+=3;
	}
	printf("\nLasuma total es: [%d] \n", suma);
	return 0;
}

#include <stdio.h>

int main()
{
	int i =2,suma=0,n=0, ncom=0, j=1;
	printf("Defina la n-esima a operar:");
	scanf("%d", & n);
	do{

		i=ncom;
		ncom+=j*n;
		j++;

		suma+=ncom;
		printf("%d +",suma );		i+=3;
	}while(suma<=100);
	printf("\nLasuma total es: [%d] \n", suma);
	
	return 0;
}

#include <stdio.h>
int main()
{
	int i =2,suma=0,n=0, ncom=0, j=1;
	printf("Defina la n-esima a operar:");
	scanf("%d", & n);

	for (int i = 0; suma <= 100; ++i)
	{
		i=ncom;
		ncom+=j*n;
		j++;

		suma+=ncom;
		printf("%d +",suma );
		i+=3;
	}
	printf("\nLasuma total es: [%d] \n", suma);
	
	return 0;
}