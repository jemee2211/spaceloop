#include<stdio.h>
main(){
	
	int r,c,k;
	
	for(r=1; r<=5; r++){
		for(k=r; k>1; k--){
			printf(" ");
		}
		for(c=5; c>=r; c--){			
			if(c%2 != 0){
				
				printf("1",c);
			}
			else{
				
				printf("0",c);
			}
		}
			printf("\n");
	}

	
	
}
