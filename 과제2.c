#include <stdio.h>

int main(void) {

	int total = 0, num = 0;

	printf_s("정수 입력(0 to quit):");
	scanf_s("%d", &num);
	total += num;

	while (num != 0) {
		printf_s("정수 입력(0 to quit):");
		scanf_s("%d", &num);
		total += num;
	}

	printf_s("합계: %d \n", total);

	return 0;
}