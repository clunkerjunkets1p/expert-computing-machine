#include <stdio.h>

int main() {
    for (int i = 32; i < 127; i++) {
        printf("%3d = %c\t", i, i);
        if ((i - 31) % 6 == 0) printf("\n");
    }
    return 0;
}
