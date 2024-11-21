#include <stdio.h>

int main(){
	int canh,chieu_cao;
	    printf("nhap lan luot canh va chieu cao cua hinh tam giac:");
	    scanf("%d %d",&canh,&chieu_cao);
	float dien_tich = 0.5 * canh * chieu_cao;
	    printf("dien tich hinh tam giac la: %.2f",dien_tich);
	    
return 0;
}
