#include <stdio.h>

int main(){
	int a, b, i = 0;
	
	printf("\nNhap 2 so nguyen duong bat ki: ");
	scanf("%d %d", &a, &b);
	
	if ( a < 0 || b < 0 ){
		printf("\n So k hop le, nhap so nguyen duong! ");
		
	}else if ( a == b ){
		printf("\n bCNN la: %d", a);
		
	}else if ( a == 0 || b == 0 ){
		printf("\n bCNN la: 0");
		
	}else{
		int bCNN = ( a > b ) ? a:b ;
		
		while ( i == 0 ){ 
			if ( ( bCNN % a == 0) && ( bCNN % b == 0) ){
				i = 1;
				break;
			}
			bCNN++;
			
		}
		printf("\n bCNN la: %d", bCNN);
	}

	return 0;
}
