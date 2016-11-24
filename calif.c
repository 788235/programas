#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("color 4f");
    int calif[10],n,pm;
    for(n=0;n<10;n++)
    {
        printf("\n\t INGRESE LA CALIFICIONES DE LA MATERIA %i:\t",n+1);
        scanf("%i",&calif[n]);
        while(calif[n]<0||calif[n]>10)
    {
            printf("\n\t ERROR!! \n\t INGRESE DE NUEVO LA CALIFICACION %i:\t",n+1);
            scanf("%i",&calif[n]);
    }
    }
    for(n=0;n<10;n++)
    {
      if(calif[n]<6)
    {
        printf("\n\t LA MATERIA %i SACO CALIFICACION REPROBATORIA\n",n+1);
    }
        else if(calif[n]>6)
        {
            printf("\t--------------------------------------");
            printf("\n\t LA MATERIA %i SACO CALIFICACION APROBATORIA\n",n+1);
        }

    }

}
