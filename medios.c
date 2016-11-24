#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void rellenar(int *unarray, int lalong);
void imprimir(int *unarray, int lalong);
void Quicksort (int *unarray, int izq, int der);
int pivot (int *unarray, int izq, int der);
float Datos [10];
void intercambio(int *a, int *b);
int totalDatos=10;
int car,opcion;
void shakersort(int a[], int n);
void ordenarDatos();
void consultarDatos();
void inicializar(int *unarray, int lalong);
void pedirDatos();
void mostrarMenu();
#define N 10
main(){
	int miarray[N];
	 int arre[10];
		  int indice1;
printf("\n\n\t\t ***** Metodos de Ordenamiento *****");
printf("\n1.- burbuja");
printf("\n2.- sacudida");
printf("\n3.- quicksort");
printf("\n4.- salir");

printf("\n que opcion desea: ");
scanf("%d",opcion);

switch(opcion){
case 1:
	pedirDatos();
	break;
	case 2:

	printf("\n inserte los datos: ");

	 for(indice1=0; indice1<totalDatos; indice1++){
     printf("\n Inserte EL DATO #%d: ",indice1+1);
     scanf("%d",&arre[indice1]);
     }
	 int i;
    shakersort(arre, 10);
    for (i = 0 ; i < 10; i++)
        printf("%d ", arre[i]);
        case 3:
        	 inicializar(miarray,N);

        		rellenar(miarray,N);
        		Quicksort(miarray, 0, N-1);
        		 imprimir(miarray,N);

        		 break;

    case 4:
    	exit(0);
    	default:
    		printf("\n**** Opcion no valida ****\a\n");
       }

   	getch();

}

	void rellenar(int *unarray, int lalong) {
   int cont;
   for (cont=0;cont<lalong;cont++) {
	printf("Introduce el numero para %d casilla: ",cont);
	scanf("%d", &unarray[cont]);
   }
}
void inicializar(int *unarray, int lalong) {
   int cont;

   for (cont=0;cont<lalong;cont++) {
	unarray[cont]=0;
   }
}


void pedirDatos(){
     system("cls");
     int indice;
     printf("INSERTE LOS DATOS\n");
     for(indice=0; indice<totalDatos; indice++){
     printf("\n Inserte EL DATO #%d: ",indice+1);
     scanf("%f",&Datos[indice]);
     }
      ordenarDatos();
}
void ordenarDatos(){

     int repetir=0;
     int indice=0;
     float aux=0;

for(repetir=0; repetir<totalDatos-1; repetir++){
for(indice=0 ; indice<totalDatos -1; indice++){

             if(Datos[indice]>Datos[indice+1]){
             aux=Datos[indice];
             Datos[indice]=Datos[indice+1];
             Datos[indice+1]=aux;
             }
             }
             }
             consultarDatos();
             }
             void consultarDatos(){
     int  indice;
     for(indice=0; indice<totalDatos; indice++){
                   printf("#%d: %.1f\n", (indice+1), Datos[indice]);
                   }
                   }





void intercambio(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void shakersort(int a[], int n)
{
    int p, i;
    for (p = 1; p <= n / 2; p++)
    {
        for (i = p - 1; i < n - p; i++)
            if (a[i] > a[i+1])
                intercambio(&a[i], &a[i + 1]);
        for (i = n - p - 1; i >= p; i--)
            if (a[i] < a[i-1])
                intercambio(&a[i], &a[i - 1]);
    }
}
void imprimir(int *unarray, int lalong) {
   int cont;
   for (cont=0;cont<lalong;cont++) {
        printf("En casilla %d esta el número %d.\n", cont, unarray[cont]);
   }
}

int pivot(int *unarray, int izq, int der)
{
    int i;
    int pivote, valor_pivote;
    int aux;

    pivote = izq;
    valor_pivote = unarray[pivote];
    for (i=izq+1; i<=der; i++){
        if (unarray[i] < valor_pivote){
                pivote++;
                aux=unarray[i];
                unarray[i]=unarray[pivote];
                unarray[pivote]=aux;

        }
    }
    aux=unarray[izq];
    unarray[izq]=unarray[pivote];
    unarray[pivote]=aux;
    return pivote;
}

void Quicksort(int *unarray, int izq, int der)
{
     int pivote;
     if(izq < der){
        pivote=pivot(unarray, izq, der);
        Quicksort(unarray, izq, pivote-1);
        Quicksort(unarray, pivote+1, der);
     }

}

