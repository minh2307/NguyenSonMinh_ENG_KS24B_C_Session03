#include <stdio.h>

int main(){
	float toan,van,anh;
	    printf("nhap diem cua 3 mon toan, van, anh lan luot la: ");
		scanf("%f %f %f",&toan,&van,&anh);
	float tong = toan + van + anh;
	    printf("tong diem cua ba mon la: %.2f\n",tong);
	float trung_binh = tong/3;
	    printf("trung binh cua ba mon la: %.2f",trung_binh);
	    
return 0;
}
