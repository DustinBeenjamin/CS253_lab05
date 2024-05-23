#include <stdio.h>
#include <stdlib.h>

int main(){

    int height;
    char c;

    printf("Enter triangle height\n");
    if (scanf("%d", &height) != 1) {
        printf("Unrecognized input, please enter only integer values. Closing program.\n");
        exit(1);
    }
    printf("Enter a character:\n");
    //If the user types a string, this will only grad the first character. Its not a bug, its a feature.
    getchar();
    c = getchar();
    
    printf("\n");
    for (int i = 1; i <= height; i++){
        for (int j = 0; j < i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

}