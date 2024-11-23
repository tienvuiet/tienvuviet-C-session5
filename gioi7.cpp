#include<stdio.h>
int main(){
	int a, b;
	printf("nhap vao so nguyen duong a: ");
	scanf("%d",&a);
	printf("nhap vao so nguyen duong b: ");
	scanf("%d",&b);
	int min=a<b?a:b;
	for(int i=min;i>=0;i--){
		if (a%i==0&&b%i==0){
			printf("ket qua la: %d",i);
			break;
		}
	}
	return 0; 
}
