#include<stdio.h>
#include<stdlib.h>
main(){
	int a, b, sum, difference,product,quotient,surplus,greatest_common_divisor,least_common_multiple;
	printf("Nhap 2 so: ");
	scanf("%d%d",&a,&b);
	printf("\tCACULATOR\n");
	do{
		int choose;
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.Tich 2 so\n");
		printf("4.Thuong 2 so\n");
		printf("5.So du\n");
		printf("6.UCLN\n");
		printf("7.BCNN\n");
		printf("8.Thoat\n");
		printf("Vui long chon so: ");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				sum=a+b;
				printf("Tong a va b là:%d\n",sum);
				break;
			case 2:
				difference=a-b;
				printf("Hieu a va b la:%d\n",difference);
				break;
			case 3:
				product=a*b;
				printf("Tich cua a va b la:%d\n",product);
				break;
			case 4:
				quotient=a/b;
				printf("Thuong cua a va b la: %d\n",quotient);
				break;
			case 5:
				surplus=a%b;
				printf("Du cua a va b la: %d\n",surplus);
				break;
			case 6:
				while(a!=b){
					if(a>b){
						a=a-b;
					}else{
						b=b-a;
					}
		 		}
		 		greatest_common_divisor=a;
		 		printf("Uoc chung lon nhat la: %d\n",a);
		 		break;
		 	case 7:
		 		product=a*b;
				while(a!=b){
					if(a>b){
						a=a-b;
					}else{
						b=b-a;
					}
		 		}
		 		greatest_common_divisor=a;
		 		least_common_multiple=product/greatest_common_divisor;
		 		printf("Boi chung nho nhat la: %d\n",least_common_multiple);
		 		break;
		 	case 8:
		 		printf("Thoat\n");
		 		exit (0);
		 	default:
		 		printf("Khong hop le\n");
		}
	}while("Chon tu 1-8\n");
}
