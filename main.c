#include <stdio.h>
#include <math.h>

void kalkulator();

void kalkulator_pobierzDane(double *kalkulator_A, double *kalkulator_B, char *kalkulator_znak);

void kalkulator_wyniki(double kalkulator_A, double kalkulator_B, char kalkulator_znak, int *kalkulator_wybor);

void delta();

void delta_pobierzDane(double *a, double *b, double *c);

void delta_wyniki(double a, double b, double delta, double x1, double x2);

void wyznaczniki();

void wyznaczniki_pobierzDane(double *a1, double *a2, double *b1, double *b2, double *c1, double *c2);

void wyznaczniki_obliczenia(double a1, double a2, double b1, double b2, double c1, double c2, double *w, double *wx,
                            double *wy);

void wyznaczniki_pokazWyniki(double w, double wx, double wy);

void main() {
    int wybor;
    printf(
            "Witaj w systemie Matematyk 1.0!\nWybierz jeden z dostępnych programów:\n"
            "1. Kalkulator podstawowy\n"
            "2. Delta i miejsca zerowe\n"
            "3. Wyznacznik macierzy drugiego stopnia\n"
            "9. Wyjście\n"
            "Twój wybór: "
    );
    scanf(" %i", &wybor);
    if (wybor == 1) {
        printf("Wybrano opcję nr 1\n");
        kalkulator();
    } else if (wybor == 2) {
        printf("Wybrano opcję nr 2\n");
        delta();
    } else if (wybor == 3) {
        printf("Wybrano opcję nr 3\n");
        wyznaczniki();
    } else if (wybor == 9) {
        printf("Kończenie pracy programu...");
    } else {
        printf(
                "Wprowadzono nieprawidłowe dane.\nCzy chcesz zacząć od początku?\n"
                "1. Tak!\n"
                "2. Nope.\n"
        );
        wybor = 0;
        scanf(" %i", &wybor);
        if (wybor == 1) {
            main();
        } else {
            printf("Kończenie pracy programu...");
        }
    }
}

void kalkulator() {
    double kalkulator_A, kalkulator_B;
    char kalkulator_znak;
    int kalkulator_wybor = 0;
    kalkulator_pobierzDane(&kalkulator_A, &kalkulator_B, &kalkulator_znak);
    kalkulator_wyniki(kalkulator_A, kalkulator_B, kalkulator_znak, &kalkulator_wybor);
}

void kalkulator_pobierzDane(double *kalkulator_A, double *kalkulator_B, char *kalkulator_znak) {
    printf(
            "Kalkulator podstawowy\n"
            "Dozwolone działania: dodawanie (+), odejmowanie (-), mnożenie (*), dzielenie (/)\n"
            "A - pierwsza liczba, B - druga liczba\n"
    );
    printf("Podaj A: ");
    scanf(" %lf", kalkulator_A);
    printf("Podaj B: ");
    scanf(" %lf", kalkulator_B);
    printf("Podaj znak działania: ");
    scanf(" %c", kalkulator_znak);
}

void kalkulator_wyniki(double kalkulator_A, double kalkulator_B, char kalkulator_znak, int *kalkulator_wybor) {
    switch (kalkulator_znak) {
        case '+' :
            printf("A + B = %.2lf", kalkulator_A + kalkulator_B);
            break;
        case '-' :
            printf("A - B = %.2lf", kalkulator_A - kalkulator_B);
            break;
        case '*' :
            printf("A * B = %.2lf", kalkulator_A * kalkulator_B);
            break;
        case '/' :
            if (!kalkulator_B) {
                printf("Nie dziel cholero przez zero!\n");
                kalkulator();
            } else {
                printf("A / B = %.2lf", kalkulator_A / kalkulator_B);
                break;
            }
        default :
            printf(
                    "Wprowadzono nieprawidłowe dane.\nCzy chcesz ponownie wprowadzić dane?\n"
                    "1. Tak!\n"
                    "2. Nope.\n"
            );
            scanf(" %i", kalkulator_wybor);
            if ((*kalkulator_wybor) == 1) {
                kalkulator();
            } else {
                printf("Kończenie pracy programu...");
            }
    }
}

void delta() {
    double a, b, c, delta, x1, x2;
    delta_pobierzDane(&a, &b, &c);
    delta = b * b - 4 * a * c;
    delta_wyniki(a, b, delta, x1, x2);
}

void delta_pobierzDane(double *a, double *b, double *c) {
    printf("Obliczanie delty\n");
    printf("Podaj a: \n");
    scanf(" %lf", a);
    printf("Podaj b: \n");
    scanf(" %lf", b);
    printf("Podaj c: \n");
    scanf(" %lf", c);
}

void delta_wyniki(double a, double b, double delta, double x1, double x2) {
    if (!a) {
        printf("To nie jest równanie kwadratowe");
    } else if (delta > 0) {
        x1 = (-b + (sqrt(delta))) / (2 * a);
        x2 = ((-b) - sqrt(delta)) / (2 * a);
        printf("Równanie ma dwa pierwiastki: x1 = %lf x2 = %lf", x1, x2);
    } else if (!delta) {
        x1 = -b / 2 * a;
        printf("Równanie ma jeden pierwiastek: x1 = %lf", x1);
    } else {
        printf("Brak pierwiastków");
    }
}

void wyznaczniki() {
    double a1, a2, b1, b2, c1, c2, w, wx, wy;
    wyznaczniki_pobierzDane(&a1, &a2, &b1, &b2, &c1, &c2);
    wyznaczniki_obliczenia(a1, a2, b1, b2, c1, c2, &w, &wx, &wy);
    wyznaczniki_pokazWyniki(w, wx, wy);
}

void wyznaczniki_pobierzDane(double *a1, double *a2, double *b1, double *b2, double *c1, double *c2) {
    printf("Wyznacznik macierzy drugiego stopnia\n");
    printf("Podaj a1: ");
    scanf(" %lf", a1);
    printf("Podaj b1: ");
    scanf(" %lf", b1);
    printf("Podaj c1: ");
    scanf(" %lf", c1);
    printf("Podaj a2: ");
    scanf(" %lf", a2);
    printf("Podaj b2: ");
    scanf(" %lf", b2);
    printf("Podaj c2: ");
    scanf(" %lf", c2);
}

void wyznaczniki_obliczenia(double a1, double a2, double b1, double b2, double c1, double c2, double *w, double *wx,
                            double *wy) {
    (*w) = a1 * b2 - b1 * b2;
    (*wx) = c1 * b2 - c2 * b1;
    (*wy) = a1 * c2 - c1 * a2;
    printf(
            "Twój układ równań to:\n"
            "%.2lfX * %.2lfY = %.2lf\n"
            "%.2lfX * %.2lfY = %.2lf\n", a1, b1, c1, a2, b2, c2
    );
}

void wyznaczniki_pokazWyniki(double w, double wx, double wy) {
    if (w) {
        printf("Układ ma jedno rozwiązanie x = %.2lf, y = %.2lf\n", wx / w, wy / w);
    } else if (!w && !wx && !wy) {
        printf("Układ ma nieskończenie wiele rozwiązań\n");
    } else if ((!w && wx) || (!w && wy)) {
        printf("Układ jest sprzeczny\n");
    }
}