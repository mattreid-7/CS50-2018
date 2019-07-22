// Hayden Blair, z5076433
// 22/03/18
// Takes integer input (n) and prints a asterisk sign using '*' and '-' for size n x n. 

#include <stdio.h>

int main(void) {
    int n,row,col;

    printf("Enter size: ");
    scanf("%d",&n);
    
    col = 1;
    while( col <= n) { 
        row = 1;
        while (row <= n) {
            if (row == (n / 2 + 1) || col == (n / 2 + 1) || row == (n / n) - 1 + col || row == n - col + 1) {
                printf("*");
            }
            else {
                printf("-");
            }
            row = row + 1;
        }
        printf("\n");
        col = col + 1;
    }


    return 0;
}