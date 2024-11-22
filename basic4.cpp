#include<stdio.h>
int main(){
	int n, dem;
	printf("nhap vao so nguyen duong trong khoang tu 1 den 10: ");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		dem=n*i;
		printf("%d*%d=%d\n",n,i,dem);
	} 
	return 0;
}
