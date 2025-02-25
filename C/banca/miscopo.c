#include <stdio.h>
char chi[10000]; 
int quanto;
int main(){
    printf("chi vuoi scopare? ");
    scanf("%s", chi);
    printf("quante volte? ");
    scanf("%d", &quanto);
    for (int i = 0; i < quanto; i++) {
        printf("mi scopo %s\n", chi);
    }
}