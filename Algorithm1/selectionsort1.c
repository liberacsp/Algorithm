#include <stdio.h>
#define max 10

int main(void) {
	// ����� ������ �����Ѵ�.
	int i, j, min, index, temp;
	// ������ ����
	int array[max] = { 4,3,2,4,1,5,4,8,9,10 };

	for (i = 0; i < max; i++) {
		
		// �ּҰ� ������ �񱳸� ���ؼ� ���� ���� ���� �־�� �ϱ� ������ 
		// ���� ū ���� �������μ� ���ʿ� � ���ҿ� ���ϴ��� �ּҰ��� �ǵ��� �ϱ� �����̴�.

		min = 9999;

		
		for (j = i; j < max; j++) {
			// min ������ �� ���� ���� array[j]������ ũ�� 
			// (j���� min���� ������) array[j]���� min���� ��ü�Ѵ�
			if (min > array[j]) {
				min = array[j];

				// array[i] = array[index]�� �����Ű�� ����
				index = j;

			}
			
			
		}
		// j�ݺ����� �� ���� ����, swap�ϱ� ���� temp ������ ���� �迭 array[i]�� �ִ´�.
		temp = array[i];

		// ��迭�ϰ� ���� array[i]�� j�ݺ������� ã�� �ּҰ� (�����迭)array[index]�� �ִ´�.
		array[i] = array[index];

		// �Ʊ� �ּҰ��� ã�Ҵ� �� ���°� �� �迭 �ε����� ��� �ٲٸ鼭 �ڸ��� �Ҿ���� ������ �迭����(temp)�� �־��ش�.
		array[index] = temp;

	}

	for (i = 0; i < max; i++) {
		printf("%d ", array[i]);
	}
	
	return 0;
}