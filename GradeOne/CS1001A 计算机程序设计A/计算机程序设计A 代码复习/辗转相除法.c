#include <stdio.h>
int main() {
	int a, b, t;
	scanf("%d %d", &a, &b);
	t = a % b;
	while (t)a = b, b = t, t = a % b;
	printf("%d", b);
}
