#include <stdio.h>

int readpoly(int poly[]) {
    int degree, i;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    for (i = 0; i <= degree; i++) {
        printf("Enter the coefficient of x^%d: ", i);
        scanf("%d", &poly[i]);
    }
    return degree + 1;
}

int addpoly(int p1[], int p2[], int size1, int size2, int p3[]) {
    int i = 0;
    while (i < size1 || i < size2) {
        if (i < size1 && i < size2) {
            p3[i] = p1[i] + p2[i];
        } else if (i < size1) {
            p3[i] = p1[i];
        } else {
            p3[i] = p2[i];
        }
        i++;
    }
    return i;
}

void displaypoly(int poly[], int degree) {
    int i;
    if (degree == 0) {
        printf("Polynomial is empty.\n");
        return;
    }
    for (i = 0; i < degree; i++) {
        if (i > 0 && poly[i] != 0) {
            printf(" + ");
        }
        if (poly[i] != 0) {
            printf("%d", poly[i]);
            if (i > 0) {
                printf("x^%d", i);
            }
        }
    }
    printf("\n");
}

int main() {
    int poly1[100], poly2[100], poly3[100];
    int size1, size2, size3;

    printf("Reading first polynomial:\n");
    size1 = readpoly(poly1);

    printf("Reading second polynomial:\n");
    size2 = readpoly(poly2);

    size3 = addpoly(poly1, poly2, size1, size2, poly3);

    printf("First Polynomial: ");
    displaypoly(poly1, size1);

    printf("Second Polynomial: ");
    displaypoly(poly2, size2);

    printf("Resultant Polynomial after addition: ");
    displaypoly(poly3, size3);

    return 0;
}


