#include <stdio.h>
#include <math.h>
int main() {
    int number, temp, reversed = 0, digit;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 0;
    }
    temp = number;
    while (temp > 0) {
        digit = temp % 10;      
        reversed = reversed * 10 + digit;  
        temp /= 10;             
    }
    if (number == reversed)
        printf("%d la so doi xung.\n", number);
    else
        printf("%d khong phai la so doi xung.\n", number);

    return 0;
}

