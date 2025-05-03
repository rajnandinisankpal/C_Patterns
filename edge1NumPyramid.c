#include<stdio.h>
int main(){
    int n, i, j, k, l;
    printf("enter row count\n");
    scanf("%d", &n);
   
    
    for(i=1; i<=n; i++){
       

        for(k=1; k<=n-i; k++){
            printf(" ");
        }

        for(j=1; j<=i; j++){
            printf("%d", j);
        }
         int a =i-1;
        for(l=1; l<=i-1; l++){
            printf("%d", a);
            a--;
        }
       
        
        printf("\n");
    }

}