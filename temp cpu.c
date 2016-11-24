#include<stdio.h>
#include<stdlib.h>
int main()
{
    float promedio;
    int temperatura, sumaTemp=0, i=1, tiempo;
    system("color 4f");
    printf("\n\t\t PROGRAMA EMPRESA DE CPUs\n");
    printf("\n INGRESE HORAS DEL USO DEL CPU:\t");
    scanf("%i",&tiempo);
    while(i<=tiempo)
    {
        printf("\n INGRESE UNA TEMPERATURA (CERO NO VALIDO)\t",i);
        scanf("%i",&temperatura,i);
        system("cls");
        sumaTemp+=temperatura;
        i++;

    }

promedio=(float)sumaTemp/tiempo;
    printf("\n\t EL PROMEDIO DE LAS TEMPERATURAS ES:%0.2f",promedio);
    printf("\n\t LA SUMA DE LAS TEMPERATURAS ES:%i\n",sumaTemp);
    system ("pause");
    return 0;
}
