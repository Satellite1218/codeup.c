#include <stdio.h>
int main() {
	int a[10], b = 0, c = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 7; i++) {
		if (a[i] % 2 == 0) {
			if (a[i] > b) {
				b = a[i];
			}
		}
		else {
			if (a[i] > c) {
				c = a[i];
			}
		}
	}
	printf("%d", b + c);
	return 0;
}
