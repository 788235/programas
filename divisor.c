#include<stdio.h>
#include<stdlib.h>
int main()
{
  int divisores,otros,num,num2;
  char dato;

    printf("\n\t PROGRAMA DE DIVISORES DE NUEVE\n");
  do
  {
    divisores=0;
    otros=0;
    printf("\n INGRESE UN NUMERO:\t");
    scanf("%i",&num);
    while(num!=0)
    {
     if(num%9==0)
     {
       divisores++;
     }
     else
     {
       otros++;
     }

     printf("\n\t INGRESE UN NUMERO:\t");
     scanf("%i",&num);
    }
    printf("\n\t USTED INGRESO %i NUMEROS DIVISORES DE NUEVE\n%i NO DIVISIBLES\n",divisores,otros);
    fflush(stdin);
    printf("\n\t DESEA HACER OTRO CONTEO? s/n:\t");
    scanf("%c",&dato);
  }while(dato=='s' || dato=='S');
  system("PAUSE");
  return 0;
}
