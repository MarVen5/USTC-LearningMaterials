#include <stdio.h>
void Change(int x) {
	if (x)Change(x / 2);
	else return;
	printf("%d", x % 2);
}
int main() {
	int x;
	scanf("%d", &x);
	Change(x);
}

