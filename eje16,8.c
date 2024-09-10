#include <stdio.h>
int main()
{
	int num1=0,num2=0;
	char elecion;

	printf("Incertee los numeros de:\n");
	printf(" Inicio:");
	scanf("%d",&num1);
	printf(" Final");
	scanf("%d", & num2);

	printf("Desea buscar los num pares[P] o impares [I], definalos a continuacion:");
	scanf("%s", &elecion);
	for ( num1=num1; num1 <=num2 ; num1++)
	 {
	 	if (elecion == 'P')
	 	{
	 		if (num1%2==0)
	 		{
	 			printf(" %d _",num1 );
	 		}
	 		
	 	}

	 	if (elecion == 'I')
	 	{
	 		if (num1%2==1)
	 		{
	 			printf(" %d _",num1 );
	 		}
	 	}
	 	else{

	 		printf("\n ERROR DATOS NO VALIDOS \n");
	 	break;
	 	}
	 } 
	return 0;
}