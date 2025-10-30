#include <stdio.h>
#include <math.h>

int main() {
    int dai, rong;
    printf("Nhap chieu dai: ");
    scanf("%d", &dai);
    printf("Nhap chieu rong: ");
    scanf("%d", &rong);
    int i;
    for ( i = 0; i < dai; i++) {
    	int j;
        for ( j = 0; j < rong; j++) { 
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}

