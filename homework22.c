#include <stdio.h>
#include <string.h>
int main() {
    char input[500];
    char data1[20], data2[20], data3[20];
    printf("data1:\t data2:\t data3:");
    scanf("%s", input);
    sscanf(input, "%[^,],%[^,],%s", data1, data2, data3); 
    printf("index 0: %lu len\n  ", strlen (data1));
    printf("index 1: %lu len\n  ", strlen (data2));
    printf("index 2: %lu len\n\a ", strlen (data3));
return 0; 
}

