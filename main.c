#include <stdio.h>

void main() {
    int wybor;
    printf("Witaj w systemie Matematyk 1.0!\nWybierz jeden z dostępnych programów:\n");
    printf("1. Kalkulator podstawowy\n");
    printf("2. Delta i miejsca zerowe\n");
    printf("3. Wyznacznik macierzy drugiego stopnia\n");
    printf("9. Wyjście\n");
    printf("Twój wybór: ");
    scanf(" %i", &wybor);
    if (wybor == 1) {
        printf("Wybrano opcję nr 1");
    } else if (wybor == 2) {
        printf("Wybrano opcję nr 2");
    } else if (wybor == 3) {
        printf("Wybrano opcję nr 3");
    } else if (wybor == 9) {
        printf("Kończenie pracy programu...");
    } else {
        printf("Wprowadzono nieprawidłowe dane.\nCzy chcesz zacząć od początku?\n");
        printf("1. Tak!\n");
        printf("2. Nope.\n");
        wybor = 0;
        scanf(" %i", &wybor);
        if (wybor == 1) {
            main();
        } else {
            printf("Kończenie pracy programu...");
        }
    }
}