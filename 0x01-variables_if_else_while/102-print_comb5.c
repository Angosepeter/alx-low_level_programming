#include <stdio.h>
/**main - Entry main point.
 * Descritption : 'program tat prints new random integer eac time it is printes'
 * Return o - always
 */

int main() {
    int i, j;

    for (i = 0; i < 100; i++) {
        for (j = i; j < 100; j++) {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
