#include <stdio.h>

int main(){
	int Celsius;
	    printf("nhap nhiet do theo do C: ");
	    scanf("%d",&Celsius);
	float Fahrenheit = (Celsius * 9/5) + 32;
	    printf("nhiet do F la: %.2f",Fahrenheit);
	
return 0;
}
