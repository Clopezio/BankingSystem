#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("printf serve per stampare qualcosa nel terminale\n");
    printf("usa il backslash n per creare una nuova riga\n");

    // Questo è un commento, viene ignorato dal compilatore
    printf("usa il backslash t per creare una tabulazione\t\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    // VARIABILI

    // Prima le dichiariamo, poi assegniamo un valore
    int a, i; // Dichiarazione    
    a = 5; // Assegnazione
    int b = 10; // Dichiarazione e assegnazione

    int age = 16;                // Numero intero
    float pi = 3.14;             // Numero in virgola mobile
    char lettera = 'a';          // Carattere
    char nome[] = "John";        // Array di caratteri (stringa)

    printf("Hai %d anni\n", age); // %d è un segnaposto per un intero
    printf("Ciao %s\n", nome); // %s è un segnaposto per una stringa
    printf("Il valore di pi greco e' %f\n", pi); // %f è un segnaposto per un float
    printf("La prima lettera dell'alfabeto e' %c\n", lettera); // %c è un segnaposto per un carattere

    // RIEPILOGO DEI TIPI DI DATI
    char x = 'a'; // Singolo carattere %c
    char y[] = "hello"; // Stringa %s
    int z = 5; // Numero intero senza decimali %d
    float l = 3.141592; // Numero in virgola mobile %f
    double m = 3.141592653589793; // Numero in virgola mobile a doppia precisione %lf
    bool n = true; // Booleano %d (0 o 1)

    // IF 
    if(age < 18) { // All'interno del primo if mettiamo la prima condizione
        printf("Adolescente\n");
    }
    else if(age >= 18) { // Per aggiungere più condizioni singole usiamo else if
        printf("Adulto\n");
    }
    else {
        printf("Errore\n"); // È utile inserire un "else" con errore anche nei programmi semplici per il debugging
    }
    // Negli if bisogna fare attenzione alle "{}": vanno messe prima dell'if e dopo il risultato della condizione!

    // FOR
    for(i = 1; i <= 5; i++) { // Inizializzazione, condizione, aggiornamento
        printf("%d\n", i);    // i parte da 1, aumenta di 1 (i++), fino a raggiungere il valore massimo (i <= 5)
    }
    //WHILE
    int j = 0;
    while (j < 5) {
    printf("%d \n", j);  // Stampa i numeri da 0 a 4
    j++;               //il ciclo finisce quando finisce la graffa, si ripete finchè la condizione non si verifica. 
    }                  //OCCHIO A METTERE UNA CONDIZIONE RAGGIUNGIBILE TRAMITE LE FUNZIONI NELLA GRAFFA!!!

    // SCANF
    printf("inserisci un numero qui: ");
    scanf("%d", &age); //Legge l'età in input, se non è un numero l'età rimarrà invariata (16)
    printf("hai inserito il numero '%d'", age); //Da in output il numero inserito prima (age)
    return 0;
}
