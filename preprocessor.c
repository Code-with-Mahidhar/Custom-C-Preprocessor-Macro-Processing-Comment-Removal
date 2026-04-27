

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

// Function to remove comments
void removeComments(FILE *fp1, FILE *fp2) {
        char ch, prev = 0;

        while ((ch = fgetc(fp1)) != EOF) {
                // Single line comment //
                if (prev == '/' && ch == '/') {
                        while ((ch = fgetc(fp1)) != '\n' && ch != EOF);
                        prev = 0;
                }
                // Multi-line comment /* */
                else if (prev == '/' && ch == '*') {
                        char next;
                        while ((ch = fgetc(fp1)) != EOF) {
                                if (ch == '*') {
                                        next = fgetc(fp1);
                                        if (next == '/')
                                                break;
                                }
                        }
                        prev = 0;
                }
                else {
                        if (prev != 0)
                                fputc(prev, fp2);
                        prev = ch;
                }
        }
        if (prev != 0)
                fputc(prev, fp2);
}


void replaceWord(char *line, char *oldWord, char *newWord) {
        char buffer[MAX];
        char *pos;

        while ((pos = strstr(line, oldWord)) != NULL) {
                buffer[0] = '\0';

                // Copy part before match
                strncat(buffer, line, pos - line);

                // Add new word
                strcat(buffer, newWord);

                // Add remaining part
                strcat(buffer, pos + strlen(oldWord));

                // Copy back to original line
                strcpy(line, buffer);
        }
}

void macroReplace(FILE *fp) {
        char line[MAX];

        while (fgets(line, MAX, fp)) {

                // Skip macro definitions
                if (strncmp(line, "#define", 7) != 0) {
                        replaceWord(line, "abc", "3456");
                        replaceWord(line, "coding", "65");
                        replaceWord(line, "pf(", "printf(");
                }

                printf("%s", line);
        }
}


// Main function
int main(int argc, char *argv[]) {
        if (argc != 2) {
                printf("Usage: %s <input_file>\n", argv[0]);
                return 1;
        }
FILE *fp1 = fopen(argv[1], "r");
FILE *fp2 = fopen("output.c", "w");

        if (fp1 == NULL || fp2 == NULL) {
                printf("Error opening file\n");
                return 1;
        }


        // Step 1: Remove comments
        removeComments(fp1, fp2);

        fclose(fp1);
        fclose(fp2);

        // Step 2: Macro replacement
        fp2 = fopen("output.c", "r");

        printf("\n--- Final Output ---\n");
        macroReplace(fp2);

        fclose(fp2);

        return 0;
}


