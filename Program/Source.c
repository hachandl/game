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
#pragma region 셔플함수
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
#pragma region 포인트 배열
	//const char* dialog[SIZE];
	//int size = sizeof(dialog) / sizeof(int);
	//int i = 0;
	//
	//dialog[0] = "안녕하세요?";
	//dialog[1] = "누구시죠?";
	//dialog[2] = "이번 사건의 조사를 맡게된 탐정입니다.";
	//dialog[3] = "여긴 덱같은 사람 올일이 없는 곳이오.";
	//dialog[4] = "그건 조사를 해보면 알게될 일이죠.";
	//dialog[5] = "여기까지 찾아와서 이러는거는 내가 범인이라는거요?.";
	//dialog[6] = "딱히 사장님이 범인이라는 것은 아닙니다만 이곳에 사건에 관련된 단서가 존재하기에 찾아오게 되었습니다.\n너무 걱정하지 마시길.";
	//dialog[7] = ".........";
	//dialog[8] = "사건 당일 피해자와 관련된 주변인 중에 이 집에서 특이한 것을 발견 했는데.\n하필 피해자가 사망했다 예상되는 날에 이집의 수도사용량이 갑자기 상승한다 라는 점을 말이죠.";
	//dialog[9] = "그게 사건이랑 무슨 관련이오?";
	//dialog[10] = "뭐 그만한 물을 사용했다는건 혈흔을 제거하기 위해 물을 사용한 것일수도 있기 때문에 간단한 조사차원에서 온 것입니다.";
	//
	//while (1)
	//{
	//	//0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태
	//	//0x0001 : 이전에 누른 적이 있고 호출 시점에도 눌려있지 않은 상태
	//	//0x8000 : 이전에 누른 적이 없고 호출 시점에도 눌려있는 상태
	//	//0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태
	//
	//	if (GetAsyncKeyState(VK_SPACE) & 0x00001)
	//	{
	//		if (i % 2 == 0)
	//		{
	//			printf("[탐정]\n");
	//		}
	//		else if (i % 2 == 1)
	//		{
	//			printf("[집주인]\n");
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
	//		printf("대화가 종료되었습니다.");
	//		break;
	//	}
	//}
#pragma endregion

	return 0;
}