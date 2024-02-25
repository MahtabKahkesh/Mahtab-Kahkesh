#include <stdio.h>
#include <string.h>
#define Maximum_name_characters 50
#define Maximum_character_length_of_name 100

int main() {
    char names[Maximum_name_characters][Maximum_character_length_of_name];
    int nameCount = 0;
    char inputName[Maximum_character_length_of_name];
    strcpy(names[0], "Mahtab");
    strcpy(names[1], "Reza");
    strcpy(names[2], "Mahdis");
    nameCount = 3;
    printf("Enter your name:");
    scanf("%s", inputName);
    int found = 0;
    for (int i = 0; i < nameCount; i++) {
        if (strcmp(names[i], inputName) == 0) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Login successful\n \a");
    } else {
       strcpy(names[nameCount], inputName);
        nameCount++;

     
        printf("New Name: %s\n \a", inputName);
    }

    return 0;
}