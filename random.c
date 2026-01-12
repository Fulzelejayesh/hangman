#include<stdio.h>  
#include<stdlib.h> 
#include<time.h> 
int main() {
	srand(time(NULL)) ;
	int num = rand() %100  +1 ; 
	int c=0; 
	int guess_number ;
		 
	scanf("%d",&guess_number) ;

	do{
		
		if(num > guess_number) {
			printf("go higher\n") ;  
		}else if(num < guess_number) {
			printf("go lower\n") ; 
		}	 
		c++ ;
		scanf("%d",&guess_number) ;  
	}while(num != guess_number) ; 
	
	
	 if(num==guess_number){
			printf("on point, your number is %d the requried attempt are %d",num,c) ; 
		}
		
	return 0; 
	
}
