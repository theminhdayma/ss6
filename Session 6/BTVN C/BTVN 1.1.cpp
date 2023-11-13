#include<stdio.h>
main(){
	int n, a, product;
	printf("Nhap so n: ");
	for(n=1;n<=9;n++){
		scanf("%d",&n);
		for(a=1;a<=10;a++){
			product = n*a;
			printf("%d x %d = %d\n",n,a,product);
		}
	}
}
