
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num,i;
	printf("<質因數分解>");
	printf("請輸入數字:");
	scanf("%d",&num);
	
 	for(i=2;i<=num;i++) 
	{  
        while(num!=i ) 
		{    
            if ( num%i== 0 )
			{ 
                printf ( "%d*" , i ); 
                num = num / i ;   
            } 
			else
            break ; 
        }
    }
    printf ( "%d" , num );
} 
