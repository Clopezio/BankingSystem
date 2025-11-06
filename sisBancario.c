#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Questo sistema bancario permette all'utente di:
 * Registrarsi e fare il login
 * Visualizzare il proprio profilo: mail, nome, cognome, password criptata, quanti soldi ha, IBAN
 * Mandare soldi ad altri profili tramite l'IBAN * Cancellare l'account
 * Sloggare */

void logOrReg(int* k);
void Login();
void Register();
void Principale();
void Profilo();

char mail[50];
char password[50];
char target[100];
char name[20];
char surname[20];
int money;

int main() {
    int scelta;
    logOrReg(&scelta);
    switch (scelta) {
        case 1: Login(); break;
        case 2: Register(); break;
        default:
            printf("Scelta non presente nel menu, riprova\n\n");
            logOrReg(&scelta);
    }
    Principale();
    scanf("%d", &scelta);
    switch (scelta){
        case 1:Profilo();break;

    }
}

void logOrReg(int* k) {
    printf("-----Benvenuto-----\n");
    printf("1) Login\n");
    printf("2) Register\n");
    printf("-------------------\n");
    printf(": ");
    scanf("%d", k);
    system("clear");
}

void Login() {
    char line[100];
    int found = 0;

    printf("-------------------\n");
    printf("- Inserisci mail: -\n");
    printf("-------------------\n");
    scanf("%s", mail);
    printf("-------------------\n");
    printf("- Inserisci pasw: -\n");
    printf("-------------------\n");
    scanf("%s", password);
    system("clear");

    FILE *f = fopen("accounts.txt", "r");
    if (f == NULL) {
        printf("Errore: impossibile aprire il file.\n");
        exit(1);
    }

    sprintf(target, "%s , %s", mail, password);

    while (fgets(line, sizeof(line), f)) {
        line[strcspn(line, "\n")] = 0;
        if (strcmp(target, line) == 0) {
            found = 1;
            break;
        }
    }

    fclose(f);

    if (!found)
        printf("Email o password errati.\n");
}

void Register() {

    printf("-------------------\n");
    printf("- Inserisci mail: -\n");
    printf("-------------------\n");
    scanf("%s", mail);
    printf("-------------------\n");
    printf("- Inserisci pasw: -\n");
    printf("-------------------\n");
    scanf("%s", password);
    system("clear");
    printf("-----------------------------\n");
    printf("  Benvenuto a ClopezioBank!  \n");
    printf("-----------------------------\n");
    printf("-----------------------------\n");
    printf("      Nome:                  \t\n");
    printf("   Cognome:                  \t\n");
    printf("-----------------------------\n");
    scanf(" %c", &name);
    system("clear");
    printf("-----------------------------\n");
    printf("      Nome: %c                 \t\n", name);
    printf("   Cognome:                  \t\n");
    printf("-----------------------------\n");
    scanf(" %c", &surname);
    system("clear");
    printf("-----------------------------\n");
    printf("      Nome: %c                 \t\n", name);
    printf("   Cognome: %c                 \t\n", surname);
    printf("-----------------------------\n");
    sleep 3s
    system("clear");
    FILE *f = fopen("accounts.txt", "a");
    if (f == NULL) {
        printf("Errore: impossibile aprire il file.\n");
        exit(1);
    }

    fprintf(f, "%s , %s\n", mail, password);
    fclose(f);
}

void Principale(){
    printf("--------------------------------------------------------------------------\t\n");
    printf("                         Buongiorno, %s!                              \t\n", mail);
    printf("--------------------------------------------------------------------------\t\n");
    printf("1) Profilo\t 2) Bonifico\t\n");
}

//Visualizzare il proprio profilo: mail, nome, cognome, password criptata, quanti soldi ha, IBAN
void Profilo(){
    printf("--------------------------------------------------------------------------\t\n");
    printf("                          Email: %s                                 \t\n", mail);
    printf("                          Nome:                                           \t\n");
    printf("--------------------------------------------------------------------------\t\n");
}























