#include <stdio.h>
#include <unistd.h> // Szükséges a sleep függvényhez

int main() {
    printf("Előtt a várakozás előtt...\n");

    // Várakozás 5 másodpercig
    sleep(5);

    printf("Után a várakozás után!\n");

    return 0;
}