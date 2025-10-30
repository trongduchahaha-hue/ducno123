#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    printf("Nhap khoang gia tri [a, b]: ");
    scanf("%d %d", &a, &b);

    printf("Cac so Armstrong trong khoang [%d, %d]:\n", a, b);
    int n;
    for (n = a; n <= b; n++) {
        int temp = n;
        int count = 0;

        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = n;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    printf("\n");
    return 0;
}





