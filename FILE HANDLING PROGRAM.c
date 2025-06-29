#include <stdio.h>
#include <stdlib.h>

void writeToFile(const char *filename);
void readFromFile(const char *filename);
void appendToFile(const char *filename);

int main() {
    int choice;
    char filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    do {
        printf("\nFile Operations Menu:\n");
        printf("1. Create and Write to File\n");
        printf("2. Read from File\n");
        printf("3. Append to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                readFromFile(filename);
                break;
            case 3:
                appendToFile(filename);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void writeToFile(const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char data[1000];
    printf("Enter data to write to the file:\n");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);
    fclose(fp);
    printf("Data written successfully.\n");
}

void readFromFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char ch;
    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

void appendToFile(const char *filename) {
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char data[1000];
    printf("Enter data to append to the file:\n");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);
    fclose(fp);
    printf("Data appended successfully.\n");
}
