#include <stdio.h>

int main() {
    int a[] = {2, 3, 5, 1, 7};
    int n = sizeof(a) / sizeof(a[0]); 

    printf("Cac so chan la: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\nCac so le la: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
