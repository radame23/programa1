#include <stdio.h>

int main (){
	 int i,cuadrado;
	int suma =0;

    for (i = 1; i <=101; i++) 
	{
    	cuadrado=(i*i);
    	suma=suma+cuadrado;	
	}
  printf("La suma de los cuadrados de los primeros 100 numeros enteros es: %d", suma);

    return 0;
}
