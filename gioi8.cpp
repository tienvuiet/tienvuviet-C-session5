#include<stdio.h>
int main(){
	int a, b;
	printf("nhap vao so nguyen duong a: ");
	scanf("%d",&a);
	printf("nhap vao so nguyen duong b: ");
	scanf("%d",&b);
	int min=a<b?a:b;
	int bcnn; 
	for(int i=min;i>=0;i--){
		if (a%i==0&&b%i==0){
			bcnn=(a*b)/i;
			printf("ket qua la: %d",bcnn);
			break;
		}
	}
	return 0; 
}
