include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shuffle(int array[], int size)
{
	srand(time(NULL));
	int x = 0;

	for (int i = 0; i < size - 1; i++)
	{
		int random = rand() % size;

		x = array[i];
		array[i] = array[random];
		array[random] = x;
	}

}

int main()
{
#pragma region �����Լ�
	////  1   2   3   4   5   6   7   8   9   10
	//// [1] [2] [3] [4] [5] [6] [7] [8] [9] [10]
	//int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//
	//int size = sizeof(list) / sizeof(int);
	//
	//Shuffle(list, size);
	//
	//for (int i = 0; i <= size - 1; i++)
	//{
	//	printf("array[%d] : %d\n", i + 1, list[i]);
	//}
#pragma endregion
#pragma region ����Ʈ �迭
	const char* dialog[3];

	dialog[0] = "�ȳ��ϼ���?";
	dialog[1] = "�����Ű���?";
	dialog[2] = "Ž���Դϴ�.";

	for (int i = 0; i <= 2; i++)
	{
		printf("%s\n", dialog[i]);
	}
#pragma endregion

	return 0;
}