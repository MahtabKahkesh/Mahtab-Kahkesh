#include <stdio.h>
#include <string.h>
int main() {
    char input[100];
    char data1[20], data2[20], data3[20];
    printf("data1:\t data2:\t data3:");
    scanf("%s", input);
    sscanf(input, "%[^,],%[^,],%s", data1, data2, data3); 
    printf("index 0: %s\n", data1);
    printf("index 1: %s\n", data2);
    printf("index 2: %s\n", data3);
    printf("%s-%s-%s\a", data1, data2, data3);
return 0; 
}
