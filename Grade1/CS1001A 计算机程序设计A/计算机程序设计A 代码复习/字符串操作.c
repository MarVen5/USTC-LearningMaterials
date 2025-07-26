#include <stdio.h>
int Strlen(char *s) {
	int t = 0;
	while (*s)
		t++, s++;
	return t;
}
char *Strcpy(char *a, char *b) {
	char *t = a;
	while (*a++ = *b++);
	return t;
}
char *Strcat(char *a, char *b) {
	while (*a++);
	while (*a++ = *b++);
	return a;
}
int Strcmp(char *a, char *b) {
	while (*a && *a == *b)
		a++, b++;
	return *a - *b;
}
int main() {

}
