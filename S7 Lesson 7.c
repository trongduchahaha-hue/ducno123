#include <stdio.h>
#include <math.h>


int main() {
    int a, b;

    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);
    int i;
    for ( i = a; i <= b; i++) {
        int laNguyenTo = 1; 

        if (i < 2) {
            laNguyenTo = 0; 
        } else {
        	int j;
            for ( j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    laNguyenTo = 0;
                    break;
                }
            }
        }

        if (laNguyenTo)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

