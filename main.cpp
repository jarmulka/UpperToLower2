#include <stdio.h>
#include <ctype.h>

int main() {
    int choice;
    char text[100] = "";

    while (1) {
        // Display the menu
        printf("Menu:\n");
        printf("1. Enter text\n");
        printf("2. Display the text\n");
        printf("3. Change every single letter in the text to lower case\n");
        printf("4. Change every single letter to upper case\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);