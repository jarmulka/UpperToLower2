#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int choice;
    char text[100] = "";
    size_t len;

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

                while (getchar() != '\n');
                fgets(text, sizeof(text), stdin);
                len = strlen(text);
                if (len > 0 && text[len - 1] == '\n') {
                    text[len - 1] = '\0';
                }
                break;

            case 2:
                printf("Text: %s\n", text);
                break;

            case 3:
                for (int i = 0; text[i] != '\0'; i++) {
                    text[i] = tolower(text[i]);
                }
                printf("Text converted to lower case: %s\n", text);
                break;

            case 4:
                for (int i = 0; text[i] != '\0'; i++) {
                    text[i] = toupper(text[i]);
                }
                printf("Text converted to upper case: %s\n", text);
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
