#include <stdio.h>

int main(){
	int num, i ;
	
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &num);
	
	printf("\n Cac chu so trong so da nhap: ");
	
	while ( num > 0 ){
		i = num % 10;
		printf("%d   ", i);
		num = num/10;
		
	}
	

	return 0;
}
