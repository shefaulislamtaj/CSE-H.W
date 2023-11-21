#include <stdio.h>
#include <string.h>

void searchWord(char *str, char *word) {
    int i, j, found, len1, len2;

    len1 = strlen(str);
    len2 = strlen(word);

    for (i = 0; i <= len1 - len2; i++) {
        found = 1;
        for (j = 0; j < len2; j++) {
            if (str[i + j] != word[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            printf("'%s' is found at index: %d\n", word, i);
        }
    }

    if (found == 0) {
        printf("'%s' is not found in the given string\n", word);
    }
}

int main() {
    char str[100], word[100];

    printf("Input string: ");
    gets(str);

    printf("Input word to search: ");
    gets(word);

    searchWord(str, word);

    return 0;
}
