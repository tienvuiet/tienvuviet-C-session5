#include<stdio.h>
int main() {
	float a, b;
	printf("nhap vao so bat ki 1: ");
	scanf("%f",&a);
	printf("nhap vao so bat ki 2: ");
	scanf("%f",&b);
	int c;
	float tong=a+b;
	float hieu=a-b;
	float tich=a*b;
	float thuong=(float)a/b;
    while(1){
		printf("1.Tong hai so\n ");
		printf("2.Hieu hai so\n");
		printf("3.Tich hai so\n");
		printf("4.Thuong hai so\n");
		printf("5.Thoat\n");
		printf("nhap lua chon cua ban:");
		scanf("%d",&c);
		if(c==1){
			printf("ket qua tong la: %f\n",tong);
		}else if(c==2){
			printf("ket qua hieu la: %f\n",hieu);
		}else if(c==3){
			printf("ket qua tich la: %f\n",tich);
		}else if(c==4){
			printf("ket qua thuong la: %f\n",thuong);
		}else if(c==5){
			printf("da thoat");
			break;
		}
} 
return 0;
}
