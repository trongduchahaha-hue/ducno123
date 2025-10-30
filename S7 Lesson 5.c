#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, num_digits = 0;
    int sum = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, num_digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d la so Armstrong\n", n);
    else
        printf("%d khong phai la so Armstrong\n", n);

    return 0;
}

