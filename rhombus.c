#include<stdio.h>
int main(){
    int i, k, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++){
            printf(" ");
        }
        for(k=1; k<=5; k++){
            printf("*");
        }
        printf("\n");
    }
}