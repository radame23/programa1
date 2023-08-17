#include <stdio.h>

int main(){
	int a=10, b=20,c,f,temp;
	
	printf("valor de temperatura en celcius %d \n", a);
	c=(a*9/5)+32;
	printf("valor de temperatura en fahrenheit %d \n", b);
	f=(b-32)*(5/9);
	
		printf("celcius a fahrenheit %d \n", c);
		printf("fahrenheit a celcius %d \n", f);
		
		
	return 0;
}
