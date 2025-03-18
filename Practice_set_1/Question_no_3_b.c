#include <stdio.h>

int main(){
    float C;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &C);
    printf("Converted Celsius value in Fahrenheit is: %f" , (C * 9/5) + 32);
    return 0;
}