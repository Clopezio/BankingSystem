#include <stdio.h>
int choice;
int main() {
	printf("-------------------\n");
    printf("|   BIGLIETTERIA  |\n");
    printf("|     (evento)    |\n");
    printf("-------------------\n");
    printf("-------------------\n");
    printf("| 1. Acquista     |\n");
    printf("| 2. Annulla      |\n");
    printf("| 3. Info         |\n");
    printf("-------------------\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Seleziona evento\n");
        printf("1. Concerto\n");
        printf("2. Cinema\n");
        printf("3. Teatro\n");
        
    }
	return 0;
}
