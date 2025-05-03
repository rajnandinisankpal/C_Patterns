#include<stdio.h>
int main(){
    int i,j;

    for(i=1; i<4; i++){
        if (i%4==1)
        {
           for(j=1; j<=i; j++){
            printf("%d", j);
           }
        }
        else if(i%4==2){
            for(j=1; j<=i; j++){
                printf("%c", j+64);
               }
        }
        else{
            for(j=1; j<=i; j++){
                printf("*");
               }
        }
        printf("\n");
    }
}