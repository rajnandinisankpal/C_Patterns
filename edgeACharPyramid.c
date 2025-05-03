#include<stdio.h>
int main(){
    int i, j, k, l;
    for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("%c", k+64);
        }
        int a=i-1;
        for(l=1; l<=i-1; l++){
            printf("%c", a+64);
            a--;
        }
        printf("\n");
    }
}