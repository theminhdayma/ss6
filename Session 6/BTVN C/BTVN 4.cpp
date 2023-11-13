#include<stdio.h>
#include<stdlib.h>
int main(){
	int nb;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&nb);
	printf("PRACTICE\n");
	do{
		printf("1. In ra day so chia het cho 2 va giam dan\n");
		printf("2. In cac so nho hon n va tinh tong\n");
		printf("3. In ra cac uoc so chan cua n\n");
		printf("4. In ra cac uoc so le và so luong các uoc le cua n\n");
		printf("5. In ra uoc so le lon nhat cua n\n");
		printf("Lua chon cua ban la: ");
		int choose,i,sum;
		scanf("%d",&choose);
		switch(choose){
			case 1:
				for(i=0;i<=nb;i++){
					if(i % 2==0){
						printf("%d\n",i);
					}
				}
				printf("\n");
				break;
			case 2:
				for(i=0;i<=nb;i++){
					sum += i;
					printf(" %d ",i);
				}
				printf("\n Tong cac so hang la: %d\n",sum-1);
				break;
			case 3:
				for(i=1;i<=nb;i++){
					if(nb%i==0 && i%2==0){
						printf("Uoc chan la: %d\n",i);
					}
				}
		}
	}while("Chon so tu 1-5");
}
