#include <stdio.h>

int main() {

    int shaft_width, shaft_length, tip_base_width;

    // The arrows base width must be larger than the width of the shaft

    printf("Enter the arrow's base width.\n");
    while (scanf("%d", &shaft_width) != 1 || shaft_width < 1) {
        printf("Enter the arrow's base width. (must be an integer larger than 0)\n");
    }

    printf("Enter the arrow's base height.\n");
    while (scanf("%d", &shaft_length) != 1 || shaft_length < 1) {
        printf("Enter the arrow's base height. (must be an integer larger than 0)\n");
    }

    printf("Enter the arrow tip's base width.\n");
    while (scanf("%d", &tip_base_width) != 1 || tip_base_width <= shaft_width) {
        printf("Enter the arrow tip's base width. (must be an integer larger than %d)\n", shaft_width);
    }

    printf("\n\n\n");

    for (int i = 0; i < shaft_length; i++) {
        for (int j = 0; j < shaft_width; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = tip_base_width; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }



}