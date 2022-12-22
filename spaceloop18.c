#include<stdio.h>
main(){
	
	int r,c,k;
	
	for(r=1; r<=5; r++){
		for(k=r; k<=4; k++){
			printf(" ");
		}
		for(c=1; c<=r; c++){			
			if(r%2 != 0){
				
				printf("1",r);
			}
			else{
				
				printf("0",r);
			}
		}
			printf("\n");
	}

	
	
}
