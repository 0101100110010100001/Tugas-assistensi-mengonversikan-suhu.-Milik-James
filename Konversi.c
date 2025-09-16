#include <stdio.h>

int main() {
    float celsius, kelvin, fahrenheit, reamur;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 9/5) + 32;
    reamur = celsius * 4/5;

    printf("\nHasil Konversi:\n");
    printf("Kelvin     : %.2f K\n", kelvin);
    printf("Fahrenheit : %.2f F\n", fahrenheit);
    printf("Reamur     : %.2f R\n", reamur);

    return 0;
}