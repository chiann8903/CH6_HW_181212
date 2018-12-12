#include<stdio.h>
#include<stdlib.h>
void printarr(int);
void bubble(int);
void binary(int,int,int,int);
main() {
	int *a[5];
	int ans;
	printf("input 5 numbers:\n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
	}
	printf("the original sequence : ");
	printarr(a);
	printf("after arrangement....\nthe new sequence : ");
	bubble(a);
	printarr(a);
	printf("\n\ninput the number that you want to search in the sequence which you input before : ");
	scanf_s("%d", &ans);
	binary(a,ans,a[2],2);
	printf("\n");
	system("pause");
}
void printarr(int a1[]) {
	for (int i = 0; i < 5; i++) {
		printf("%d ", a1[i]);
	}
}
void bubble(int *b[]) {
	int a1, a2;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (b[i] < b[j]) {
				a1 = b[i];
				b[i] = b[j];
				b[j] = a1;
			}
		}
	}
}
void binary(int c[],int ANS,int key,int x) {
	if (key != ANS) {
		if (key < ANS) {	
			key = c[x++];
			if(key!=ANS)
				printf("now the key is ... %d\n", key);
			binary(c, ANS, key, x);
		}
		else {
			key = c[x--];
			if (key != ANS)
				printf("now the key is ... %d\n", key);
			binary(c, ANS, key, x);
		}
	}
	else
		printf("find the number that you search:%d\n", ANS);
}
