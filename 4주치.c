#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int A[10][10];

	int a, b;

	for (int a = 1; a <= 9; a++)
		for (int b = 1; b <= 9;b++)
			A[a][b] = a * b;

	scanf("%d %d", &a, &b);
	printf("%d X %d = %d\n", a, b, A[a][b]);

	return 0;
}

//반복문 복습할 겸 별찍기 공부하기
//	2. 배열 / 행렬 1단부터 9단까지의 구구단을 2차원 배열에 
// 저장하고 사용자로부터 구구단 중의 하나를 받아서 2차원 배열에서 
// 찾은 후 결과를 화면에 출력하는 프로그램 만들기