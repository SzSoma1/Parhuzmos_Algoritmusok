#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float random_float;
    srand(time(NULL)); // Inicializáljuk a random generátort az aktuális idővel

    // Generálunk egy lebegőpontos véletlen számot az [500, 1000] intervallumban
    random_float = ((float)rand() / RAND_MAX) * 500 + 500;

    printf("A generált lebegőpontos véletlenszám: %.2f\n", random_float);

    return 0;
}
