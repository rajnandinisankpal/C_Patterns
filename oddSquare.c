#include<stdio.h>
int main(){
    int n, i, j;
    printf("enter row count\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        /*for(j=1; j<=2*n; j++){          //this also runs but not an efficient way
            if (j%2!=0)              // half iterations are wasted to check even numbers  
            {
                printf("%d", j);
            }*/
            for(j=1; j<n; j+=2){
                printf("%d", j);
            }
            printf("\n");
            
        }
       
    }

