#include <stdio.h>

int main(void) {

	int total = 0, num = 0;

	printf_s("���� �Է�(0 to quit):");
	scanf_s("%d", &num);
	total += num;

	while (num != 0) {
		printf_s("���� �Է�(0 to quit):");
		scanf_s("%d", &num);
		total += num;
	}

	printf_s("�հ�: %d \n", total);

	return 0;
}