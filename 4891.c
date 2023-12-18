#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    int n = 0;
    int arr[1000] = { 0 };
    int l = 1000, h = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < l) {
            l = arr[i];
        }
        if (arr[i] > h) {
            h = arr[i];
        }
    }
    printf("%d", h - l);
    return 0;
}
