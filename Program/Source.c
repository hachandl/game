#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 11
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
	//const char* dialog[SIZE];
	//int size = sizeof(dialog) / sizeof(int);
	//int i = 0;
	//
	//dialog[0] = "�ȳ��ϼ���?";
	//dialog[1] = "��������?";
	//dialog[2] = "�̹� ����� ���縦 �ðԵ� Ž���Դϴ�.";
	//dialog[3] = "���� ������ ��� ������ ���� ���̿�.";
	//dialog[4] = "�װ� ���縦 �غ��� �˰Ե� ������.";
	//dialog[5] = "������� ã�ƿͼ� �̷��°Ŵ� ���� �����̶�°ſ�?.";
	//dialog[6] = "���� ������� �����̶�� ���� �ƴմϴٸ� �̰��� ��ǿ� ���õ� �ܼ��� �����ϱ⿡ ã�ƿ��� �Ǿ����ϴ�.\n�ʹ� �������� ���ñ�.";
	//dialog[7] = ".........";
	//dialog[8] = "��� ���� �����ڿ� ���õ� �ֺ��� �߿� �� ������ Ư���� ���� �߰� �ߴµ�.\n���� �����ڰ� ����ߴ� ����Ǵ� ���� ������ ������뷮�� ���ڱ� ����Ѵ� ��� ���� ������.";
	//dialog[9] = "�װ� ����̶� ���� �����̿�?";
	//dialog[10] = "�� �׸��� ���� ����ߴٴ°� ������ �����ϱ� ���� ���� ����� ���ϼ��� �ֱ� ������ ������ ������������ �� ���Դϴ�.";
	//
	//while (1)
	//{
	//	//0x0000 : ������ ���� ���� ���� ȣ�� �������� �������� ���� ����
	//	//0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �������� ���� ����
	//	//0x8000 : ������ ���� ���� ���� ȣ�� �������� �����ִ� ����
	//	//0x8001 : ������ ���� ���� �ְ� ȣ�� �������� �����ִ� ����
	//
	//	if (GetAsyncKeyState(VK_SPACE) & 0x00001)
	//	{
	//		if (i % 2 == 0)
	//		{
	//			printf("[Ž��]\n");
	//		}
	//		else if (i % 2 == 1)
	//		{
	//			printf("[������]\n");
	//		}
	//
	//		printf("%s\n", dialog[i]);
	//		printf("\n");
	//		++i;
	//	}
	//
	//	Sleep(3000);
	//
	//	if (i >= size / 2)
	//	{
	//		printf("��ȭ�� ����Ǿ����ϴ�.");
	//		break;
	//	}
	//}
#pragma endregion

	return 0;
}