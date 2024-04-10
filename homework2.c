#include <stdio.h>

int main() {
    char Name[50];  // برای ذخیره نام
    char last_name[50];   // برای ذخیره نام خانوادگی

    // ورود نام از کاربر
    printf("Enter your Name:");
    scanf("%s", Name);

    // ورود نام خانوادگی از کاربر
    printf("Enter your last Name:");
    scanf("%s", last_name);

    // چاپ نام و نام خانوادگی به صورت کد ASCII
    printf("ASCII code your Name:");
    for (int i = 0; Name[i] != '\0'; i++) {
        printf("%c: %d\n", Name[i], Name[i]);
    }

    printf("ASCII code your Last Name:");
    for (int i = 0; last_name[i] != '\0'; i++) {
        printf("%c: %d\n", last_name[i], last_name[i]);
    }

    return 0;
}