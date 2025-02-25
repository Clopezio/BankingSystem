#include <stdio.h>
int number = 2;

int main() {
    switch (number) {
        case 1:
            printf("Il numero e' 1\n");
            break;
        case 2:
            printf("Il numero e' 2\n");
            break;
        case 3:
            printf("Il numero e' 3\n");
            break;
        default:
            printf("Il numero non e' 1, 2, o 3\n");
    }
}
