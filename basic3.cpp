#include<stdio.h>
int main (){
	int n;
	int tong=0;
	printf("nhap vao mot so nguyen duong: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		tong=tong+i;
	}
	printf("ket qua phep tinh la:%d",tong);
	return 0;
}
