#include <stdio.h>

int main(void) {
    int height;

    printf("Please enter your height: ");
    scanf("%d",&height);
        
    if (height >= 120) {
        printf("Green Rides\n");
    }
    if (height >= 130) {
        printf("Yellow Rides\n");
    }
    if (height >= 140) {
        printf("Red Rides\n");
    }
    if (height < 120) {
        printf("Sorry, no rides are safe for you!\n");
    }

    return 0;
}