#include <stdio.h>

int main(){
	int i , j = 0;
	for ( i =100; i>=1; i--){
		printf("%d\t", i);
		j++;
		if ( j % 10 == 0){
			printf("\n");
		}
	}
	
	
	return 0;
}

