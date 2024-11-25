#include <stdio.h>
#include <stdbool.h>

int main(){
	bool checkLoop = true, checkDigit = false;
	float  a, b, c;
	int rep;
	
	do{
		printf("\n--------------------------------------------");
		printf("\n MENU ");
		printf("\n 1. Nhap 3 so ");
		printf("\n 2. Tong 3 so ");
		printf("\n 3. Trung binh cong 3 so ");
		printf("\n 4. So nho nhat ");
		printf("\n 5. So lon nhat");
		printf("\n 6. Thoat \n");
		printf("\n Lua chon cua ban:  ");
		scanf("%d", &rep);
		
		switch ( rep ){
			case 1: {
				printf(" Nhap 3 so bat ki: ");
				scanf("%f %f %f", &a, &b, &c);
				fflush(stdin);
				checkDigit = true;
				break;
			}
			case 2:{
				if ( checkDigit == true ){
					printf("\n Tong 3 so la: %.2f ", a+b+c);
					
				}else{
					printf("\n Dung cn1 truoc khi dung cac cn khac! " );
				}
				break;
			}
			case 3:{
				if ( checkDigit == true ){
					printf("\n Trung binh cong 3 so la: %.2f ", (a+b+c)/3);
					
				}else{
					printf("\n Dung cn1 truoc khi dung cac cn khac! " );
				}
				break;
			}
			case 4:{
				if ( checkDigit == true ){
					float min = ( a > b ) ? b:a ;
					min = ( min > c ) ? c:min ;
					printf("\n Min trong 3 so la: %.2f ", min);
					
				}else{
					printf("\n Dung cn1 truoc khi dung cac cn khac! " );
				}
				break;
			}
			case 5:{
				if ( checkDigit == true ){
					float max = ( a > b ) ? a:b ;
					max = ( max > c ) ? max:c ;
					printf("\n Max trong 3 so la: %.2f ", max);
					
				}else{
					printf("\n Dung cn1 truoc khi dung cac cn khac! " );
				}
				break;
			}
			case 6:{
				checkLoop = false;
				break;
			}
			default:{
				printf("\n Chon dung menu di:)) ");
				break;
			}
		}
		
	}while(checkLoop);
	
	
	return 0;
}
