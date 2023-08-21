#include <stdio.h>

int main(){
	
	
	float a, b ,c,f,temp;
	int m=1;
	printf("CALCULADORA DE TEMPERATURAS \n");



	printf("valor de temperatura en celcius: \n");
	scanf("%f", &a);
	printf("valor de temperatura en fahrenheit \n");
	scanf("%f", &b);
	
		c=(a*9/5)+32;
		f=(b-32)*5/9;
		printf("celcius a fahrenheit %f \n", c);
		printf("fahrenheit a celcius %f \n", f);

		
	return 0;
}
