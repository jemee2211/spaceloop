#include<stdio.h>
main(){
	
	char r = 'A';
	char c = 'E';
	char k;

	
	for(r='A'; r<='E'; r++){
		for(k=r; k<'E'; k++){
			printf(" ");
		}
		for(c='A'; c<=r; c++){			
			printf("%c",c);
		}
			printf("\n");
	}

	
	
}
