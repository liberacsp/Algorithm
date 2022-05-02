#include <stdio.h>
#define max 10

int main(void) {

	// 사용할 변수를 선언한다.
	int i, j, min, index, temp;

	// 정렬할 숫자
	int array[max] = { 2,5,7,8,9,1,3,6,10,4};

	
	for (i = 0; i < max; i++) {
		// 최소값 변수는 비교를 통해서 가장 작은 값을 넣어야 하기 때문에
		// 가장 큰 값을 넣음으로서 최초에 어떤 원소와 비교하더라도 최소값이 되도록 하기 위함이다.
		min = 9999;

		for (j = i; j < max; j++) {
			// min 변수에 들어간 값이 비교한 j값보다 크면
			// (j값이 min보다 작으면) j값이 min값을 대체한다.
			

			if (min > array[j]) {
				min = array[j];

				// array[i] = array[index]를 성사시키기 위해
				index = j;
			}
		}
		// j반복문이 다 돌고 나서, swap하기 위해 temp 변수에 기존 배열 array[i]를 넣는다.
		temp = array[i];

		// 재배열하고 싶은 array[i]에 j반복문에서 찾은 최소값 (기존배열)array[index]를 넣는다.
		array[i] = array[index];

		// 아까 최소값을 찾았던 빈 상태가 된 배열 인덱스에 방금 바꾸면서 자리를 잃어버린 기존의 배열원소(temp)를 넣어준다.
		array[index] = temp;

	}
	// 배열을 출력한다.
	for (i = 0; i < max; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}