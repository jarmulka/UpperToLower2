#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int choice;
    char text[100] = "";

    while (1) {

        printf("Menu:\n");
        printf("1. Enter text\n");
        printf("2. Display the text\n");
        printf("3. Change every single letter in the text to lower case\n");
        printf("4. Change every single letter to upper case\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter text: ");
                // Clear the input buffer
                while (getchar() != '\n');
                fgets(text, sizeof(text), stdin);
                // Remove the newline character at the end if present
                size_t len = strlen(text);
                if (len > 0 && text[len - 1] == '\n') {
                    text[len - 1] = '\0';
                }
                break;
