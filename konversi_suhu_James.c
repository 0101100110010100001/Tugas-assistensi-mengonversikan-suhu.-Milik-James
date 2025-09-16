#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin, reamur;

    printf("=== Program Konversi Suhu ===\n");
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &celsius);

    // Rumus konversi
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin     = celsius + 273.15;
    reamur     = celsius * 4 / 5;

    printf("\nHasil Konversi:\n");
    printf("Fahrenheit : %.2f °F\n", fahrenheit);
    printf("Kelvin     : %.2f K\n", kelvin);
    printf("Reamur     : %.2f °Re\n", reamur);

    return 0;
}
