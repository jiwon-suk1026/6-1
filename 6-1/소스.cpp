#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("ũ�⸦ �Է��Ͻÿ� : \n");
	scanf("%d", &a);

	if (0 < a && a < 90) {
		printf(" 1��и� ");
	}
	else if (90 < a && a < 180) {
		printf(" 2��и� ");
	}
	else if (180 < a && a < 270) {
		printf(" 3��и� ");
	}
	else if (270 < a && a < 360) {
		printf(" 4��и� ");
	}
	else if (a == 0 && a == 360) {
		printf("���� x��");
	}
	else if (a == 90) {
		printf(" ���� y�� ");
	}
	else if (a == 180) {
		printf(" ���� x��");
	}
	else if (a == 270) {
		printf(" ���� y��");
	}
}