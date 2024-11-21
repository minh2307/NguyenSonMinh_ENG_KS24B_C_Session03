#include <stdio.h>

int main(){
	int number,trieu,tram,chuc,don_vi;
        printf("moi ban nhap vao mot so nguyen có 4 chu so:");
        scanf("%d",&number);
        trieu = number / 1000;
    int du1 = number % 1000;
        tram = du1 / 100;
    int du2 = du1 % 100;
        chuc = du2 / 10;
        du1 = du2 % 10;
        don_vi = du1 / 1;
    int tong = trieu + tram + chuc + don_vi;
        printf("Tong cua 4 so %d la: %d",number,tong);
        
        
return 0;
        
}
