#include<stdio.h>
#include<stdlib.h>
int main(){
	int nb1,nb2,nb3,sum,avg,max,min;
	printf("Nhap vao 3 so nguyen: ");
	scanf("%d %d %d",&nb1,&nb2,&nb3);
	printf("CALCULATOR\n");
	do{
		printf("1. Tong 3 so nguyen\n");
		printf("2. Trung binh cong cua 3 so nguyen\n");
		printf("3. So lon nhat va nho nhat trong 3 so\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban la: ");
	int choose;
	scanf("%d",&choose);
	switch(choose){
		case 1:
			sum=nb1+nb2+nb3;
			printf("Tong ba so la: %d\n",sum);
			break;
		case 2:
			avg=(nb1+nb2+nb3)/3;
			printf("Trung binh cong cua 3 so la: %d\n",avg);
			break;
		case 3:
			max=nb1;
			max=(nb2>max)?nb2:max;
			max=(nb3>max)?nb3:max;
			min=nb1;
			min=(min<nb2)?min:nb2;
			min=(min<nb3)?min:nb3;
			printf("So lon nhat va so nho nhat la: %d, %d\n",max,min);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("So nhap vao khong hop le\n");
			break;
			
	}
	}while("Chon so tu 1-4\n");
}
