#include <stdio.h>

int main(){
    float p , r , t;
    printf("Enter Principal ammount: ");
    scanf("%f", &p);
    printf("Enter Anual Interest rate: ");
    scanf("%f", &r);
    printf("Enter Time in Years: ");
    scanf("%f", &t);
    printf("The value after calculation is: %f" , (p * r * t) / 100);
    /*
    we can use this as:

       float s = (p * r * t) / 100;
        printf("The value after calculation is: %f" , s);
        return 0;
        */
    return 0;
}