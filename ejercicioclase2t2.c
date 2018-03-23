#include<stdio.h>
int main()
{
	int x,y;
	printf("escribe el primer numero\n");
	scanf("%i",&x);
	printf("escribe el segundo numero\n");
	scanf("%i",&y);
	if (x%y==0)
	   printf("el nuemro escrito %i si es divisiblen entre %i con el resultado %i",x,y,x/y);
	else
	    printf("el numero %i NO es divisible entre %i",x,y);
	    
    return 0;
	
	
}

