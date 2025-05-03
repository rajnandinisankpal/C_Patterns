#include<stdio.h>
int main(){
    int i, j, k, n;
    scanf("%d", &n);
    int nsp=0;
    int nst =n;

    for(int i=1; i<=2*n +1; i++){
        printf("*");
    }
    printf("\n");

    for(i=1; i<=n; i++){

        for(int k=1; k<=nst; k++){
            printf("*");
        }
        
        for(j=1; j<=nsp; j++){
            printf(" ");
        }
         
        for(k=1; k<=nst; k++){
            printf("*");

        }
        nsp+=2;
        nst--;
       

        printf("\n");
    }
   
}