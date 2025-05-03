#include<stdio.h>
int main(){
    int i,j;
   
    for ( i = 1; i <= 4; i++)
    {
        if (i%2!=0) 
       for(j=1; j<=i; j++){
       
        {
            printf("%d", j);
        }
    }
        else{
            for(j=1; j<=i; j++){

            
            printf("%c", j+64);
            }
        }
        
        
        
       
       printf("\n");
    }
    
} 