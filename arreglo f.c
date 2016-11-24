#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
    int numeros[]={45,25,78,26,59};
    int valores[4];
    int i,j;//acumuladores
    for(i=0;i<4;i++)
    {
        cout<<"\n INGRESE UN VALOR PARA EL ARREGLO:\t";
        cin>>valores[i];
    }
    for(j=0;j<4;j++)
    {
        cout<<"\n VALOR ALMACENADO "<<j+1<<":\t"<<valores[j]<<"\n";
    }
    system("pause");
    return 0;

}
