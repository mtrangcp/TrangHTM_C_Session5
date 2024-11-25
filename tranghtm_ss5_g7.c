#include <stdio.h>

int main(){
	int a, b, i = 0;
	
	printf("Nhap 2 so nguyen duong bat ki: ");
	scanf("%d %d", &a, &b);
	
	if ( a < 0 || b < 0 ){
		printf(" So k hop le, nhap so nguyen duong! ");
		
	}else if ( a == b ){
		printf(" bCNN la: %d", a);
		
	}else if ( a == 0 || b == 0 ){
		int bCNN = ( a == 0 ) ? b:a ;
		
		printf("\n bCNN la: %d", bCNN);
		
	}else{
		int bCNN = ( a > b ) ? b:a ;
		
		while ( i == 0 ){ 
			if ( (a % bCNN == 0) && (b % bCNN == 0) ){
				i = 1;
				break;
			}
			bCNN--;
			
		}
		printf("\n bCNN la: %d", bCNN);
	}

	return 0;
}
