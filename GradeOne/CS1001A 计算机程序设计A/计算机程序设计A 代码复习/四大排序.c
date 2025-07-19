#include <stdio.h>
void MaoPaoSort(int a[], int n) {
	int i, j, t;
	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
};
void JiaoHuanSort(int a[], int n) {
	int i, j, t;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
				t = a[i], a[i] = a[j], a[j] = t;
};
void XuanZeSort(int a[], int n) {
	int i, j, k, t;
	for (i = 0; i < n - 1; i++) {
		k = i;
		for (j = i + 1; j < n; j++)
			if (a[k] > a[j])
				k = j;
		t = a[i], a[i] = a[k], a[k] = t;
	}
};
void ChaRuSort(int a[], int n) {
	int i, j, b[n] = {-1};
	for (i = 0; i < n; i++) {
		for (j = i; j > 0; j--) {
			if (b[j - 1] > a[i])
				b[j] = b[j - 1];
			else
				break;
		}
		b[j] = a[i];
	}
	for (i = 0; i < n; i++)
		a[i] = b[i];
};
void Print(int a[], int n) {
	for (int i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");
}
int main() {
	int a[10] = {1, 5, 9, 3, 8, 2, 7, 6, 4, 0};
	MaoPaoSort(a, 10);
	Print(a, 10);
	int b[10] = {1, 5, 9, 3, 8, 2, 7, 6, 4, 0};
	JiaoHuanSort(b, 10);
	Print(b, 10);
	int c[10] = {1, 5, 9, 3, 8, 2, 7, 6, 4, 0};
	XuanZeSort(c, 10);
	Print(c, 10);
	int d[10] = {1, 5, 9, 3, 8, 2, 7, 6, 4, 0};
	ChaRuSort(d, 10);
	Print(d, 10);
}

