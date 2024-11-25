#include <stdio.h>

int main(){
	int a, b, i = 0;
	
	printf("Nhap 2 so nguyen duong bat ki: ");
	scanf("%d %d", &a, &b);
	
	if ( a < 0 || b < 0 ){
		printf(" So k hop le, nhap so nguyen duong! ");
		
	}else if ( a == b ){
		printf(" uCLN la: %d", a);
		
	}else if ( a == 0 || b == 0 ){
		int uCLN = ( a == 0 ) ? b:a ;
		
		printf("\n uCLN la: %d", uCLN);
		
	}else{
		int uCLN = ( a > b ) ? b:a ;
		
		while ( i == 0 ){ 
			if ( (a % uCLN == 0) && (b % uCLN == 0) ){
				i = 1;
				break;
			}
			uCLN--;
			
		}
		printf("\n uCLN la: %d", uCLN);
	}

	return 0;
}
