/*
@autor:
 * César Villalobos
 * Estudiante: Ing.Sistemas UDI
 *29/09/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define LIMITE 50
FILE *numeros;
int main() {
	char cadena1 [7];
    int i;
	int numero,c,r;
    int n;
    srand(time(NULL));
	int **m;
	m=(int**)malloc(n*sizeof(int*));
	int v[n];
    char direccion[]="DIRECCION DEL TXT";
	numeros=fopen(direccion,"a");
	printf("1.Para llenar el archivo\n2.Burbuja\n3.Insercion\n4.Seleccion\n5.QuickSort\n6.MergeSort\n");
	scanf("%d",&r);
	switch(r){
		case 1:llenararchivo();break;
		case 2:burbuja();break;
		case 3:insercion();break;
		case 4:seleccion();break;
		case 5:quick();break;
		case 6:merge();break;
	}
} 

void merge(){
	
	
	int j,aux,p,n,i,min;
	int pos;
	char cadena1 [7];
	int numero,c,r;
    srand(time(NULL));
    printf("Ingrese la cantidad de numeros");
    scanf("%d",&n);
	int **m;
	m=(int**)malloc(n*sizeof(int*));
	int v[n];
    char direccion[]="DIRECCION DEL TXT";
	numeros=fopen(direccion,"a");
	numeros = fopen(direccion, "rt");
    char texto[7]="cadena";
	char a[7];
	for(i=0;i<n;i++){
   			sprintf(a, "%d", numero);
			strcat(texto,a);
			c=atoi(fgets (texto,LIMITE,numeros));
			v[i]=c;
		}
    fclose(numeros);
	
	mezcla(v,n);
    for(i=0;i<n;i++)
        printf("\n%i", v[i]);}
        
void mezclar(int arreglo1[], int n1, int arreglo2[], int n2, int arreglo3[])
{
    int x1=0, x2=0, x3=0;
    while (x1<n1 && x2<n2) {
        if (arreglo1[x1]<arreglo2[x2]) {
            arreglo3[x3] = arreglo1[x1];
            x1++;
        } else {
            arreglo3[x3] = arreglo2[x2];
            x2++;
        }
        x3++;
    }
    while (x1<n1) {
        arreglo3[x3] = arreglo1[x1];
        x1++;
        x3++;
    }
    while (x2<n2) {
        arreglo3[x3] = arreglo2[x2];
        x2++;
        x3++;
    }
}
void mezcla(int v[], int n)
{
    int *vector1, *vector2, n1, n2,x,y;
    if (n>1)
    {
        if (n%2 == 0)
            n1=n2=(int) n / 2;
        else
        {
            n1=(int) n / 2;
            n2=n1+1;
        }
        vector1=(int *) malloc(sizeof(int)*n1);
        vector2=(int *) malloc(sizeof(int)*n2);
        for(x=0;x<n1;x++)
            vector1[x]=v[x];
        for(y=0;y<n2;x++,y++)
            vector2[y]=v[x];
        mezcla(vector1, n1);
        mezcla(vector2, n2);
        mezclar(vector1, n1, vector2, n2, v);
        free(vector1);
        free(vector2);
    }    
}

void quick(){
	int  n, i,aleatorio,U,P;
	
	int j,aux,p,min;
	int pos;
	char cadena1 [7];
	int numero,c,r;
    srand(time(NULL));
    printf("Ingrese la cantidad de numeros");
    scanf("%d",&n);
	int **m;
	m=(int**)malloc(n*sizeof(int*));
	int v[n];
    char direccion[]="DIRECCION DEL TXT";
	numeros=fopen(direccion,"a");
	numeros = fopen(direccion, "rt");
    char texto[7]="cadena";
	char a[7];
	for(i=0;i<n;i++){
   			sprintf(a, "%d", numero);
			strcat(texto,a);
			c=atoi(fgets (texto,LIMITE,numeros));
			v[i]=c;
		}
    fclose(numeros);
  quicksort(v, 0, n-1);
  for(i = 0; i < n; i++)
    printf("\n%d", v[i]);
}
void quicksort(int *v, int low, int high)
{
  int pivot, i, j, temp;
  if(low < high) {
    pivot = low;
    i = low;
    j = high;
    while(i < j) {
      while(v[i] <= v[pivot] && i <= high)
        i++;
      while(v[j] > v[pivot] && j >= low)
        j--;
      if(i < j) {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
    temp = v[j];
    v[j] = v[pivot];
    v[pivot] = temp;
    quicksort(v, low, j-1);
    quicksort(v, j+1, high);
  }
}

void seleccion(){
	int i,j,aux,n,p,min,aleatorio,P,U;
	int pos;
	char cadena1 [7];
	int numero=i,c,r;
    srand(time(NULL));
    printf("Ingrese la cantidad de numeros");
    scanf("%d",&n);
	int **m;
	m=(int**)malloc(n*sizeof(int*));
	int v[n];
    char direccion[]="DIRECCION DEL TXT";
	numeros=fopen(direccion,"a");
	numeros = fopen(direccion, "rt");
    char texto[7]="cadena";
	char a[7];
	for(i=0;i<n;i++){
   			sprintf(a, "%d", numero);
			strcat(texto,a);
			c=atoi(fgets (texto,LIMITE,numeros));
			v[i]=c;
		}
    fclose(numeros);
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(v[j]<v[min]){
				min=j;
			}
		}
		aux=v[i];
		v[i]=v[min];
		v[min]=aux;
	}
	for(i=0;i<n;i++){
		printf("\n%d",v[i]);
	}
}

void insercion(){
	int i,pos,n,aux,p,aleatorio,P,U;
	char cadena1 [7];
	int numero=i,c,r;
    srand(time(NULL));
    printf("Ingrese la cantidad de numeros");
    scanf("%d",&n);
	int **m;
	m=(int**)malloc(n*sizeof(int*));
	int v[n];
    char direccion[]="DIRECCION DEL TXT";
	numeros=fopen(direccion,"a");
	numeros = fopen(direccion, "rt");
    char texto[7]="cadena";
	char a[7];
	for(i=0;i<n;i++){
   			sprintf(a, "%d", numero);
			strcat(texto,a);
			c=atoi(fgets (texto,LIMITE,numeros));
			v[i]=c;
		}
    fclose(numeros);

	for(i=0;i<n;i++){
		pos=i;
		aux=v[i];
		while((pos>0)&&(aux<v[pos-1])){
			v[pos]=v[pos-1];
			pos--;
		}
		v[pos]=aux;
	}
	for (i=0;i<n;i++){
		printf("\n%i",v[i]);
	}
}

void llenararchivo(){
	char cadena1 [7];
    int i;
  	int n;
    srand(time(NULL));
    printf("Ingrese la cantidad de numeros");
    scanf("%d",&n);
	int **m;
	m=(int**)malloc(n*sizeof(int*));
	
	int v[n];
    char direccion[]="DIRECCION DEL TXT";
	numeros=fopen(direccion,"a");
	if(numeros==NULL){
		printf("No se puede crear el archivo");
	}
	else{
		for(i=0;i<n;i++){
			char z[20];
			int ale;
			ale=rand();
			itoa(ale,z,10);
			fprintf(numeros,"%s \n",z);
			
		}
		fclose(numeros);
	}
	
}

void burbuja(int n){
	char cadena1 [7];
    int i;
	int numero=i,c,r;
    srand(time(NULL));
    printf("Ingrese la cantidad de numeros");
    scanf("%d",&n);
	int **m;
	m=(int**)malloc(n*sizeof(int*));
	int v[n];
    char direccion[]="DIRECCION DEL TXT";
	numeros=fopen(direccion,"a");
	numeros = fopen(direccion, "rt");
    char texto[7]="cadena";
	char a[7];
	for(i=0;i<n;i++){
   			sprintf(a, "%d", numero);
			strcat(texto,a);
			c=atoi(fgets (texto,LIMITE,numeros));
			v[i]=c;
		}
    fclose(numeros);
	int j,aux;
    for(i=0;i<(n-1);i++){
		for(j=0;j<(n-1);j++){ 
				if(v[j]>v[j+1]){ 
				aux=v[j]; 
				v[j]=v[j+1]; 
				v[j+1]=aux; 
			}
		}
	}
    for(i=0;i<n;i++){
		printf("%d\n",v[i]);
	}
}
