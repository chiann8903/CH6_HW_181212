#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void random(int);
main() {
	int point[12] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 36000; i++) {
		random(point);
	}
	for (int k = 1; k < 12; k++) {
		printf("%-2d have %d\n", k + 1, point[k]);
	}
	system("pause");
}
void random(int point[]) {
	int a, b;
	int total;
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	total = a + b;
	for (int j = 1; j <= 12; j++) {
		if (total == j) {
			point[j - 1]++;
		}
	}
}