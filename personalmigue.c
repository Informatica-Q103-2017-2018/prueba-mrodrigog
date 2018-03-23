#include<stdio.h>
#include<math.h>
#define PI 3.1416


	float aCirc (float r);
float aCuad (float l);
float aTri (float b, float h);

void main()
{
	int n ;
	float radio, base , altura, lado, area_cir,area_cuad,area_trig ;
	printf("elija su area: circulo= 1 ; triangulo=2 ; cuadrado=3\n ");
	scanf("%d",&n);
	if(n==1)
	{
		printf("introduce el radio del circulo\n");
		scanf("%f",&radio);
		area_cir=aCir(radio);
		printf("el area del circulo es %2.f");
		
	}
	else if (n==2)
	{
		printf("introduce la base del triangulo y la altura\n");
		scanf("%f %f",&base,&altura);
		area_trig=aTri(base,altura);
		pritf("el area deltriangulo es %2.f",area_trig);
		
	}
	else if (n==3)
	{
		printf("introduce el lado del cuadrdo\n");
		scanf("%f",lado);
		area_cuad=aCuad(lado);
		printf("el area del circulo es %2.f",area_cuad);
	}
	else
 printf("No ha seleccionado la opcion correcta\n");
 
 
}


float aCirc (float r)
{
 return PI*r*r;
}
float aTri (float b, float h)
{
 float area;
 area=b*h/2.0;
 return area;
}
float aCuad (float l)
{
 return l*l;
}
