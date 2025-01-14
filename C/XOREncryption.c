#include <stdio.h>
#include <string.h>

void xorEncryptDecrypt(char *input, const char *key) {
    int keyLen = strlen(key);
    for (int i = 0; i < strlen(input); i++) {
        input[i] ^= key[i % keyLen];
    }
}

void printHex(const char *input) {
    for (int i = 0; i < strlen(input); i++) {
        printf("%02x", (unsigned char)input[i]);
    }
    printf("\n");
}

void hexToBytes(const char *hex, char *bytes) {
    int len = strlen(hex);
    for (int i = 0; i < len; i += 2) {
        sscanf(hex + i, "%2hhx", &bytes[i / 2]);
    }
    bytes[len / 2] = '\0';
}

int main() {
    char choice;
    char input[256];
    char key[256];
    char hexInput[512];

    printf("Do you want to (E)ncrypt or (D)ecrypt? ");
    scanf(" %c", &choice);

    printf("Enter the key: ");
    scanf("%s", key);

    if (choice == 'E' || choice == 'e') {
        printf("Enter the text to encrypt: ");
        scanf("%s", input);
        xorEncryptDecrypt(input, key);
        printf("Encrypted text: ");
        printHex(input);
    } else if (choice == 'D' || choice == 'd') {
        printf("Enter the hex text to decrypt: ");
        scanf("%s", hexInput);
        hexToBytes(hexInput, input);
        xorEncryptDecrypt(input, key);
        printf("Decrypted text: %s\n", input);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}