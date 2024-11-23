#include<stdio.h>
int main() {
	float a, b, c;
	printf("nhap vao so bat ki 1: ");
	scanf("%f",&a);
	printf("nhap vao so bat ki 2: ");
	scanf("%f",&b);
	printf("nhap vao so bat ki 3: ");
	scanf("%f",&c);
	int d;
	float tong=a+b+c;
	float trungbinhcong=(float)tong/3;
	float gtnn;
	 if (a>b){
        int gtnn = a; 
        a = b;
        b = gtnn;
    }
    if (a > c) {
        int gtnn = a;
        a = c;
        c = gtnn;
    }
    if (b > c) {
        int gtnn = b; 
        b = c;
        c = gtnn;
    }
	float thuong=(float)a/b;
    while(1){
		printf("1.tong ba so\n ");
		printf("2.trung binh cong 3 so\n");
		printf("3.so nho nhat\n");
		printf("4.so lon nhat\n");
		printf("5.Thoat\n");
		printf("nhap lua chon cua ban:");
		scanf("%d",&d);
		if(d==1){
			printf("ket qua tong ba so la: %f\n",tong);
		}else if(d==2){
			printf("ket qua trung binh cong ba so la: %f\n",trungbinhcong);
		}else if(d==3){
			printf("ket qua so nho nhat la: %f\n",a);
		}else if(d==4){
			printf("ket qua so lon nhat la: %f\n",c);
		}else if(d==5){
			printf("da thoat");
			break;
		}
} 
return 0;
}
