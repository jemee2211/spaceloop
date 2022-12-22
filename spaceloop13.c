#include<stdio.h>
main(){
	
	char r = 'A';
	char c = 'E';
	char k;
	
	for(r='A'; r<='E'; r++){
		for(k='E'; k>r; k--){
			printf(" ");
		}
		for(c=r; c>='A'; c--){			
			printf("%C",c);
		}
			printf("\n");
	}

	
	
}
