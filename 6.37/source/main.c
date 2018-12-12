#include<stdio.h>
#include<stdlib.h>
int maxi(int,int,int);
main() {
	int a[10] = { 0 };
	printf("input 10 numbers:\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	int max = a[0];
	printf("the maximum number is %d\n", maxi(a,max,1));
	system("pause");
}
int maxi(int array[], int mmax, int x) {
	while (x < 10) {
	if (mmax < array[x])
		mmax = array[x];
	x++;
	maxi(array, mmax,x);
	}
	return mmax;
}