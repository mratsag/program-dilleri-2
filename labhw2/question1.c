#include <stdio.h>

void ciz(int n) {
    if (n == 0) {
        return;
    }
    else {
        ciz(n-1);
        for (int i = 0; i < 2*n-1; i++) {
            printf("*");
        }
        printf("\n");
        ciz(n-1);
    }
}

int main() {
    ciz(4);
    printf("     |\n     |\n     |\n");
    return 0;
}

