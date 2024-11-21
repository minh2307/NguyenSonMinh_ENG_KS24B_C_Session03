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
        printf("so dao nguoc la: %d%d%d%d",don_vi,chuc,tram,trieu);
        
return 0;
}
