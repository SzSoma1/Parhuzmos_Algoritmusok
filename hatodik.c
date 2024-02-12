#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializáljuk a random generátort az aktuális idővel
    srand(time(NULL));

    // Generálunk két véletlen számot 1 és 100 között
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int result, user_answer;

    printf("Számítsa ki a következő műveletet: %d + %d\n", num1, num2);

    // Felhasználó válaszának bekérése
    scanf("%d", &user_answer);

    // Az eredmény ellenőrzése
    result = num1 + num2;
    if (result == user_answer) {
        printf("Helyes válasz!\n");
    } else {
        printf("Helytelen válasz!\n");
    }

    return 0;
}
