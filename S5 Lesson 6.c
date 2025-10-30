#include <stdio.h>
#include <math.h>

int main() {
    int n, a = 0, b, c;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    c = n;
    while (c > 0) {
        b = c % 10;  
        a += b;        
        c /= 10;          
    }

    printf("Tong cac chu so cua %d la: %d\n", n, a);
    return 0;
}

