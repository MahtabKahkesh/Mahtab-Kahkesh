#include <stdio.h>

int main() {
    int rows = 4;
    int columns = 4;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j >= i) {
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}