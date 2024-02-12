#include <stdio.h>
#include <string.h>

void print_aligned_numbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        char num_str[9]; // Helyet foglalunk a számnak + a lezáró nullának
        snprintf(num_str, sizeof(num_str), "% 8d", numbers[i]); // Formázzuk a számot 8 karakter hosszúra
        printf("%s ", num_str);
    }
    printf("\n");
}

int main() {
    // Teszt adatok
    int numbers[] = {123, 456789, 0, 98765432333, 12};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    print_aligned_numbers(numbers, size);

    return 0;
}