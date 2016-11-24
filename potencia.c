#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,potencia,a,op=1;
system("color 4f");
printf("\n\t\t PROGRAMA DE POTENCIA DE NUMEROS\n");
printf("\n INGRESE EL NUMERO DEL CUAL DESEA SACAR LA POTENCIA:\t");
scanf("%i",&num);
printf("\n INGRESE LA POTENCIA A REALIZAR:\t");
scanf("%i",&potencia);
    for(a=1;a<=potencia;a++)
    {

    op=op*num;
    printf("\n %i ^ %i = %i",num,a,op);
    }
    printf("\n EL RESULTADO DE LA POTENCIA ES:\t%i\n",op);
    system("pause");
    return 0;
}
