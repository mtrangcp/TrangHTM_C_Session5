#include <stdio.h>

int main(){
	
	int  n, i;
	for ( n = 1; n <= 9; n++){
		for ( i = 1; i<=10; i++){
			printf("\n %d x %d = %d ", n, i, n*i);
		}
		printf("\n");
	}
	
	return 0;
}
