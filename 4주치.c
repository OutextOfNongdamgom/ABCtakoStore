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

//�ݺ��� ������ �� ����� �����ϱ�
//	2. �迭 / ��� 1�ܺ��� 9�ܱ����� �������� 2���� �迭�� 
// �����ϰ� ����ڷκ��� ������ ���� �ϳ��� �޾Ƽ� 2���� �迭���� 
// ã�� �� ����� ȭ�鿡 ����ϴ� ���α׷� �����