#include <stdio.h>
int main() {
    int a, b;
    scanf("%d-%d", &a, &b);
    if (b >= 1000000 && b < 2000000) {
        printf("19%02d/%02d/%02d M", a / 10000, a % 10000 / 100, a % 100);
    }
    else if (b >= 2000000 && b < 3000000) {
        printf("19%02d/%02d/%02d F", a / 10000, a % 10000 / 100, a % 100);
    }
    else if (b >= 3000000 && b < 4000000) {
        printf("20%02d/%02d/%02d M", a / 10000, a % 10000 / 100, a % 100);
    }
    else {
        printf("20%02d/%02d/%02d F", a / 10000, a % 10000 / 100, a % 100);
    }

    return 0;
}
