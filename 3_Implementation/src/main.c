#include <stdio.h>
#include "temperature_converter.h"

int main() {
    float celsius = 25.0;
    float fahrenheit = 77.0;

    printf("%.2f°C = %.2f°F\n", celsius, celsius_to_fahrenheit(celsius));
    printf("%.2f°F = %.2f°C\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));

    return 0;
}
