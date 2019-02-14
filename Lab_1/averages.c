#include <stdio.h>
int main()
	{
	int input,pos_sum =0 ,neg_sum=0,pos_count=0,neg_count=0,avg_pos=0,avg_neg=0;	
	

	
do {
			printf("Please enter an integer: ");
				scanf("%d",&input);
			if(input > 0){
				
					pos_sum+=input;
					pos_count++;

			}else if(input < 0){
		
					neg_sum+=input;
					neg_count++;
					
					
			}	
			  	
			



		}while(input != 0);			

		if(pos_count != 0){		
			avg_pos = (pos_sum)/(pos_count);
			printf("Positive Average: ");			
			printf("%d",avg_pos);
			printf("\n");			
		}
		if(neg_count != 0){			
			avg_neg = (neg_sum)/(neg_count);
			printf("Negative Average: ");
                        //printf("%d, %d", neg_sum, neg_count);
			printf("%d",avg_neg);
		        }
	
	return 0; 
		                     			
				}
