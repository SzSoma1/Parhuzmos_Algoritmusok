#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    // Ellenőrizzük az argumentumok számát
    if (argc != 3) {
        printf("Hiba: Két egész számot kell megadni a zárt intervallum határaihoz!\n");
        printf("Példa: %s 500 1000\n", argv[0]);
        return 1; // Kilépés hibakóddal
    }

    // Konvertáljuk az argumentumokat egész számokká
    int lower_bound = atoi(argv[1]);
    int upper_bound = atoi(argv[2]);

    // Ellenőrizzük, hogy az argumentumok valóban egész számok-e és a megfelelő intervallumban vannak-e
    if (lower_bound == 0 || upper_bound == 0 || lower_bound >= upper_bound) {
        printf("Hiba: Hibás bemeneti adatok!\n");
        return 1; // Kilépés hibakóddal
    }

    // Inicializáljuk a random generátort az aktuális idővel
    srand(time(NULL));

    // Generálunk egy véletlen számot az intervallumban
    int random_number = rand() % (upper_bound - lower_bound + 1) + lower_bound;

    // Kiírjuk a generált véletlen számot
    printf("Generált véletlen szám az [%d, %d] intervallumban: %d\n", lower_bound, upper_bound, random_number);

    return 0;
}
