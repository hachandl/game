#include <stdio.h>
#include <windows.h>

void Position(int x, int y)
{
	// x�� y���� �����ϴ� ����ü
	COORD position = {x, y};

	//�ܼ� Ŀ���� ��ǥ�� �����ϴ� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	while (1)
	{
		Position(10, 10);
		printf("��");

		Position(5, 5);
		printf("��");

		system("cls");
	}

	return 0;
}