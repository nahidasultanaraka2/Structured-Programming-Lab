#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of element: ");
    scanf("%d", &n);

    int a[n];



    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);


}

     int L1, L2;
    if (a[0] > a[1]) {
        L1 = a[0];
        L2 = a[1];
    } else {
        L1 = a[1];
        L2 = a[0];
    }

    for (i = 2; i < n; i++) {
        if (a[i] > L1) {
            L2 = L1;
            L1 = a[i];
        } else if (a[i] > L2 && a[i] != L1) {
            L2 = a[i];
        }
    }


    printf("2nd largest is %d\n", L2);

    float largest;
    if (L2 % 2 == 0) {
        largest = (float)L2 * 2;
        printf("Even largest: %.2f\n", largest);
    } else {
        largest = (float)L2 / 2;
        printf("Odd largest: %.2f\n", largest);
    }


    int S1, S2;
    S1 = a[0];
    S2 = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < S1) {
            S2 = S1;
            S1 = a[i];
        } else if (a[i] < S2 && a[i] != S1) {
            S2 = a[i];
        }
    }


    printf("2nd smallest is %d\n", S2);


     int smallest ;

    if (S2% 2 == 0) {
        smallest = S2 + 2;
        printf("Even 2nd smallest2: %d\n", smallest);
    } else {
        smallest = S2 - 2;
        printf("Odd 2nd smallest: %d\n", smallest);
    }




        return 0;
}

