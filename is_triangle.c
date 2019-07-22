#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter 3 sides: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("These can be the sides of a triangle\n");
    }
    else {
        printf("These cannot be the sides of a triangle\n");
    }


    return 0;
}