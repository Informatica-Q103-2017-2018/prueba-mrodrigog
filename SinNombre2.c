#include <stdio.h>
int main()
{
int year;
_Bool isBisiesto;
printf("Indique el a�o.\n");
scanf(" %d", &year);
isBisiesto = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
if (isBisiesto)
printf("El a�o %d es bisiesto.\n", year);
else
printf("El a�o %d no es bisiesto.\n", year);
return 0;
}
