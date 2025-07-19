#include <stdio.h>

void H(int n, char a, char z, char t) {
	if (n == 1)
		printf("%c->%c\n", a, z);
	else {
		H(n - 1, a, t, z);
		H(1, a, z, t);
		H(n - 1, t, z, a);
	}
}
int main() {
	H(1, 'A', 'C', 'B');
}

