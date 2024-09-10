#include <stdio.h>
int main()
{
	char CarSuma='+';
	char CarReSta= '-';
	int  j=0, Bueltas=5;
	int i ;
	int o;
		
		
for (int o= 1; o <= Bueltas; ++o)
	{
		for ( i = 1; i <=Bueltas -o ; i++)
			{
				printf(" ");
			}
		for (i = 1; i <= 2* o -1 ; i++)
			{
				printf("*");
					
			}
			printf("\n");
			}
			
			
for (o = Bueltas -1; o >= 1; --o)
	{
		for ( i = 1; i <=Bueltas -o ; i++)
			{
				printf(" ");
			}
		for (i = 1; i <= 2* o -1 ; i++)
			{
				printf("*");
					
			}
			printf("\n");
			}
			
		
		
	
	return 0;
}