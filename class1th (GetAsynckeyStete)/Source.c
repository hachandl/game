#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int screenIndex;
HANDLE screen[2];

void Initialize()
{
	CONSOLE_CURSOR_INFO cursor;

	// 화면 버퍼를 2개 생성합니다.
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	);

	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	);

	cursor.dwSize = 1;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}
void Flip()
{
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	screenIndex = !screenIndex;
}
void Clear()
{
	COORD position = { 0,0 };

	DWORD dword;

	FillConsoleOutputCharacter
	(
		screen[screenIndex], ' ', 50 * 20, position, &dword
	);
}
void Release()
{
	CloseHandle(screen[0]);
	CloseHandle(screen[1]);
}
void Render(int x, int y, const char* string)
{
	DWORD dword;
	COORD position = { x, y };

	SetConsoleCursorPosition(screen[screenIndex], position);
	WriteFile(screen[screenIndex], string, strlen(string), &dword, NULL);
}

void Position(int x, int y)
{
	// x와 y축을 설정하는 구조체
	COORD position = {x, y};

	//콘솔 커서의 좌표를 설정하는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0;
	int x = 0, y = 0;

	Initialize();

	while (1)
	{
		Flip();
		Clear();

		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP: //printf("UP\n");
			y -= 1;
			break;

		case DOWN: //printf("DOWN\n");
			y += 1;
			break;

		case LEFT: //printf("LEFT\n");
			x -= 2;
			break;

		case RIGHT: //printf("RIGHT\n");
			x += 2;
			break;
		default: //printf("Exception\n");
			break;
		}

		Render(x, y, "☆");
	}
	
	Release();

		//Position(10, 10);
		//printf("☆");
		//
		//Position(5, 5);
		//printf("★");
		//
		//system("cls");
	

	return 0;
}