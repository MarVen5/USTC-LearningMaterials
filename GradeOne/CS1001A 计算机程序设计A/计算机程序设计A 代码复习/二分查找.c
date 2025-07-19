#include <stdio.h>
int MinSearch(int n, int a[], int m) {
	int low = 0, high = n - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (a[mid] == m)return mid;
		else if (a[mid] > m)high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}
int main() {

}

