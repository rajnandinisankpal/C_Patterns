#include<stdio.h>
int main(){
    int i, j, k;
    int a=1;
    for ( i = 1; i <= 4; i++)
    {
        for(j=1; j<=5-i; j++){
            printf(" ");
        }
       for(k=1; k<=a; k++){
        printf("*");
       }
       a+=2;
       printf("\n");
    }
    
}