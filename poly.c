#include <stdio.h>

// Step 2: Create a structure with members coeff and exp
struct Poly {
    int coeff;
    int exp;
};

int main() {
    // Step 4: Create structure variables
    struct Poly p1[10], p2[10], p3[20];
    int t1, t2, i = 0, j = 0, k = 0;

    // Step 3: Read number of terms in P1 and P2
    printf("Enter number of terms in First Polynomial (P1): ");
    scanf("%d", &t1);
    
    // Step 5: Read terms for P1
    printf("Enter coefficient and exponent for P1 (in descending order of exponent):\n");
    for (i = 0; i < t1; i++) {
        printf("Term %d (coeff exp): ", i + 1);
        scanf("%d %d", &p1[i].coeff, &p1[i].exp);
    }

    printf("\nEnter number of terms in Second Polynomial (P2): ");
    scanf("%d", &t2);

    // Step 5: Read terms for P2
    printf("Enter coefficient and exponent for P2 (in descending order of exponent):\n");
    for (j = 0; j < t2; j++) {
        printf("Term %d (coeff exp): ", j + 1);
        scanf("%d %d", &p2[j].coeff, &p2[j].exp);
    }

    // Reset pointers to 0 before addition (Step 5)
    i = 0; j = 0; k = 0;

    // Step 6: Check whether i < t1 and j < t2 inside while loop
    while (i < t1 && j < t2) {
        // Step 6.1: Exponents are equal -> add coefficients
        if (p1[i].exp == p2[j].exp) {
            p3[k].exp = p1[i].exp;
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            i++;
            j++;
            k++;
        }
        // Step 6.2: P1 exponent > P2 exponent -> copy P1 term
        else if (p1[i].exp > p2[j].exp) {
            p3[k].exp = p1[i].exp;
            p3[k].coeff = p1[i].coeff;
            i++;
            k++;
        }
        // Step 6.3: P2 exponent > P1 exponent -> copy P2 term
        else {
            p3[k].exp = p2[j].exp;
            p3[k].coeff = p2[j].coeff;
            j++;
            k++;
        }
    }

    // Remaining terms in P1 (if any)
    while (i < t1) {
        p3[k].exp = p1[i].exp;
        p3[k].coeff = p1[i].coeff;
        i++;
        k++;
    }

    // Remaining terms in P2 (if any)
    while (j < t2) {
        p3[k].exp = p2[j].exp;
        p3[k].coeff = p2[j].coeff;
        j++;
        k++;
    }

    // Display Resultant Polynomial (P3)
    printf("\nResultant Polynomial (P3 = P1 + P2):\n");
    for (i = 0; i < k; i++) {
        printf("%dx^%d", p3[i].coeff, p3[i].exp);
        if (i < k - 1) {
            printf(" + ");
        }
    }
    printf("\n");

    return 0;
}