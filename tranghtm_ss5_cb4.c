#include <stdio.h>

int main(){
	
	int  n, i;
	
	printf(" Nhap so nguyen duong bat ki( 1 - 10 ): ");
	scanf("%d", &n);
	
	for ( i = 1; i<=10; i++){
		printf("\n %d x %d = %d ", n, i, n*i);
	}
	
	return 0;
}
