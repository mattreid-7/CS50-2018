#include <stdio.h>

int main(void) {
    int n;    

    printf("Please enter an integer: ");
    scanf("%d",&n);

    if (n % 2 == 0) {
        printf("EVEN, ");
        
        if (n > 0) {
            printf("POSITIVE\n");
        }
        else if (n < 0) {
            printf("NEGATIVE\n");
        }
        else {
            printf("ZERO\n");
        }
    }
    else {
        printf("ODD, ");

        if (n > 0) {
            printf("POSITIVE\n");
        }
        else if (n < 0) {
            printf("NEGATIVE\n");
        }
        else {
            printf("ZERO\n");
        }
    }



    return 0;
}