#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int input;
    printf("Enter number : ");
    scanf("%d", &input);
    if (input == 1) {
        printf("*");
        return 0;
    }
    for (int i = 0; i < input; i++) {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < input - 2; i++) {
        printf("*");
        for (int i = 0; i < input - 2; i++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 0; i < input; i++) {
        printf("*");
    }
    return 0;
}