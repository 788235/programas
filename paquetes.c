#include<stdio.h>
#include<stdlib.h>
int main()
{
float promedio;
int paquete, sumaPack=0, i=1, diasHabiles;
system("color 0a");
printf("\n\t\t PROGRAMA PAQUETERIA DE EMPRESA\n");
printf("\n NUMERO DE DIAS TRABAJADOS:\t");
scanf("%i",&diasHabiles);
do
    {
    printf("\n INGRESE DIA %i:\t",i);
    scanf("%i",&paquete);
    while(!(paquete>0))
    {
    printf("\n INGRESE DIA %i:\t",i);
    scanf("%i",&paquete);
    }
    sumaPack+=paquete;
    i++;
    }
    while(i<=diasHabiles);
    promedio=(float)sumaPack/diasHabiles;
    printf("\n EL PROMEDIO ES %0.2f PAQUETES\n", promedio);
    printf("\n LOS PAQUETES REGISTRADOS FUERON: %i\n",sumaPack);
    system("PAUSE");
    return 0;
}
