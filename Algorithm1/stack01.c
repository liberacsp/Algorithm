#include <stdio.h>
#define max 10

int main(void) {

	// ����� ������ �����Ѵ�.
	int i, j, min, index, temp;

	// ������ ����
	int array[max] = { 2,5,7,8,9,1,3,6,10,4};

	
	for (i = 0; i < max; i++) {
		// �ּҰ� ������ �񱳸� ���ؼ� ���� ���� ���� �־�� �ϱ� ������
		// ���� ū ���� �������μ� ���ʿ� � ���ҿ� ���ϴ��� �ּҰ��� �ǵ��� �ϱ� �����̴�.
		min = 9999;

		for (j = i; j < max; j++) {
			// min ������ �� ���� ���� j������ ũ��
			// (j���� min���� ������) j���� min���� ��ü�Ѵ�.
			

			if (min > array[j]) {
				min = array[j];

				// array[i] = array[index]�� �����Ű�� ����
				index = j;
			}
		}
		// j�ݺ����� �� ���� ����, swap�ϱ� ���� temp ������ array[i]�� �ִ´�.
		temp = array[i];

		// ��¥ array[i]�� j�ݺ������� ã�� array[index]�� �ִ´�.
		// array�� ��迭�ϴ� ��
		array[i] = array[index];

		array[index] = temp;

	}
	for (i = 0; i < max; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}