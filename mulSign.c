#include<stdio.h>
int main(){
    int i, j;
   
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (i == j || i + j==4) { // Corrected condition
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
