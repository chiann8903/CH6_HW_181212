#include<stdio.h>
#include<stdlib.h>
void back(char,int);
main() {
	char s[20] = { 0 };
	int a=0;
	int b = 0;
	printf("Input a string:");
	for (int i = 0; i < 20; i++) {
		scanf_s("%c", &s[i]);
		if (s[i] == '\n') {
			printf("Changing the string...\n");
			printf("Change into -> ");
			a = i;
			break;
		}		
	}
	back(s,a);
	printf("\n");
	system("pause");
}
void back(char str[], int x) {
	for (int k = x - 1; k >= 0; k--) {
		printf("%c", str[k]);
	}
}