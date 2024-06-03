#include <stdio.h>

int main() {

    float P, R, T, SI;


    printf("Enter the principal amount: ");
    scanf("%f", &P);


    printf("Enter the rate of interest per amount: ");
    scanf("%f", &R);


    printf("Enter the time period in years: ");
    scanf("%f", &T);


    SI = (P * R * T) / 100;


    printf("The simple interest is: %.2f\n", SI);

    return 0;
}
