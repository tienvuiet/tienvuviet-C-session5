#include<stdio.h>
int main(){
	int dem;
	for(int i=1;i<10;i++){
		for(int j=1;j<11;j++){
			dem=i*j;
			printf("%d*%d=%d\n",i,j,dem);
		}
		printf("\n");
	}
	return 0;
}
