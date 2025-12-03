#include <stdio.h>

int main() {

    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int k = 0; k < taille; k++) {

        int n = nombres[k];
        int bits[32];          // stockage des bits
        int index = 0;

        int temp = n;

        // Cas spécial : 0
        if (n == 0) {
            printf("0 en binaire = 0\n");
            continue;
        }

        // Conversion en binaire (division par 2)
        while (temp > 0) {
            bits[index] = temp % 2;  // reste → bit
            temp = temp / 2;
            index++;
        }

        // Affichage en ordre inverse
        printf("%d en binaire = ", n);
        for (int i = index - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
        printf("\n");
    }

    return 0;
}
