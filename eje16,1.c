
#include <stdio.h>

int main()
{
	int suma=0, suma2=0;
	int i =2;
	while(i<=100){

		printf("%d +",i= i+3 );
		suma+=i;

	}
	printf("\n LA SUMA TOTAL DE LA SUMA DE TERCEROS ENPESANDO DEL 2 ES [%d]. \n",suma );
	return 0;
}



#include <stdio.h>

int main()
{
	int suma=0, suma2=0;
	int i =2;
	do{

		printf("%d +",i= i+3 );
		suma+=i;

	}while(i<=100);
	printf("\n LA SUMA TOTAL DE LA SUMA DE TERCEROS ENPESANDO DEL 2 ES [%d]. \n",suma );
	return 0;
}


#include <stdio.h>

int main()
{
	int suma=0, suma2 =0;

    
    for (int i = 2; i <= 100;)
    {
        
    	printf("%d + ", i=i+3);
    	suma2+=i;
    
    }
    printf("\nTotal de la suna de los terceros es [%d]\n",suma2);

    return 0;
}