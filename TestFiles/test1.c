#include <stdio.h>

int main() {
    int x = 5;
    float y = 2.5;
    char c = 'A';
    int z = 10;

    z = x + 3 * 2;
    y = y + 1.5;

    if (x < z) {
        printf("x is less than z\n");
        x = z - 2;

        if (y > 3.0) {
            printf("y is greater than 3\n");
            y = y + 1.0;
        }
        else {
            y = y - 0.5;
        }
    }
    else {
        z = z + x;
    }

    if (c == 'A') {
        printf("Character is A\n");
        c = 'B';
    }
    else {
        c = 'C';
    }

    return 0;
}
