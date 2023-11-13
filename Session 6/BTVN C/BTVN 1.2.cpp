#include<stdio.h>
main(){
	int n, a, product;
	printf("BANG CUU CHUONG\n");
	for(n=2;n<=9;n++){
		for(a=1;a<=10;a++){
			product = n*a;
			printf("%d x %d = %d\n",n,a,product);
		}
	}
}

