#include <stdio.h>

int main(void)
{
    const int rows = 5;
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    for (int row = 1; row <= rows; row++) {
        // Print the leading spaces.
        for (int space = 0; space < rows - row; space++) {
            putchar(' ');
        }

        // Print letters from 'a' up to the middle letter.
        for (int letter = 0; letter < row; letter++) {
            putchar(alphabet[letter]);
        }

        // Go back down, starting one letter before the middle.
        for (int letter = row - 2; letter >= 0; letter--) {
            putchar(alphabet[letter]);
        }

        putchar('\n');
    }

    return 0;
}
