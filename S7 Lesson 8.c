#include <stdio.h>
#include <math.h>

int main() {
    int n, c, b;
    int max = 0, min = 9; 

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    c= n;
    while (c > 0) {
        b = c % 10;    
        if (b > max) max = b;
        if (b < min) min = b; 
        c /= 10;          
    }
    printf("Chu so lon nhat cua %d la: %d\n", n, max);
    printf("Chu so nho nhat cua %d la: %d\n", n, min);

    return 0;
}

