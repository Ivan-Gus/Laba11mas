#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
//#define N 5

int main() {
	setlocale(LC_CTYPE, "RUS");
	int N;
	printf("Введите размер массива: \n");
	scanf("%d", &N);
	int *M = malloc(N * sizeof(int));
	printf("Введите %d целых чисел: \n", N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &M[i]);
	}
	int z1 = -1;
	int z2 = -1;
	for (int i = 0; i < N; i++) {
		if (M[i] == 0) {
			if (z1 == -1) {
				z1 = i;
			}
			else  {
				z2 = i;
				break;
			}
		}
	}
	

	int rez = 1;
	for (int i = z1 + 1; i < z2; i++) {
		rez = rez * M[i];
	}
	printf("Произведение элементов - %d", rez);


	return 0;
}