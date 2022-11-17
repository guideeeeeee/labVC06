#include<stdio.h>
void main() {
	int Num_input[5];
	int i,j,Order;
		for ( i=0;i<5;++i ){
			printf("input number %d : ",i+1);
			scanf("%d",&Num_input[i]);
			}		
		printf("\nYour number 1-5 is :");
		for ( i=0;i<5;++i ){
			printf(" %d",Num_input[i]);
			}					
		for ( i=0;i<5;++i ){			
			for( j=i+1;j<5;++j ){
				if(Num_input[i]<Num_input[j]){
					Order = Num_input[i];
					Num_input[i] = Num_input[j];
					Num_input[j] = Order;								
				}				
			}
		}		
		printf("\nYour ordered number is :\n");
		for ( i=0;i<5;++i ){
			printf(" %d",Num_input[i]);
			}
}
