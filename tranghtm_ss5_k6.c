#include <stdio.h>
#include <stdbool.h>

int main(){
	bool check = true;
	int  a,b, rep;
	
	printf(" Nhap 2 so nguyen duong bat ki: ");
	scanf("%d %d", &a, &b);
	
	do{
		printf("\n--------------------------------------------");
		printf("\n CALCULATOR ");
		printf("\n 1. Tong 2 so ");
		printf("\n 2. Hieu 2 so ");
		printf("\n 3. Tich 2 so ");
		printf("\n 4. Thuong 2 so ");
		printf("\n 5. Thoat \n");
		printf("\n Lua chon cua ban:  ");
		scanf("%d", &rep);
		
		switch ( rep ){
			case 1: {
				printf("\n Tong 2 so la: %d ", a+b);
				break;
			}
			case 2:{
				printf("\n Hieu 2 so la: %d ", a-b);
				break;
			}
			case 3:{
				printf("\n Tich 2 so la: %d ", a*b);
				break;
			}
			case 4:{
				if ( b==0 ){
					printf("\n Khong thuc hien dc phep chia cho 0 ");
				}else{
					printf("\n Thuong 2 so la: %d ", a/b);
				}
				break;
			}
			case 5:{
				check = false;
				break;
			}
			default:{
				printf("\n Chon dung di:)) ");
				break;
			}
		}
		
	}while(check);
	
	
	return 0;
}
