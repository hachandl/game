#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

#define WIDTH 11
#define HEIGHT 11

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

typedef struct Character
{
	int x, y;
	const char * shape;

}Character;

char maze[HEIGHT][WIDTH] ={
	{'1','1','1','1','1','1','1','1','1','1','1'},
	{'0','0','0','1','0','0','1','0','0','2','1'},
	{'1','1','0','1','1','0','1','0','1','1','1'},
	{'1','0','0','0','1','0','0','0','1','0','1'},
	{'1','0','1','1','1','0','1','1','1','0','1'},
	{'1','0','0','0','1','0','0','0','0','0','1'},
	{'1','1','1','0','1','0','1','0','1','0','1'},
	{'1','0','1','0','1','0','1','0','1','0','1'},
	{'1','0','1','0','1','0','1','1','1','0','1'},
	{'1','0','0','0','0','0','1','0','0','0','1'},
	{'1','1','1','1','1','1','1','1','1','1','1'},
};
void Position(int x, int y)
{
	// x와 y축을 설정하는 구조체
	COORD position = { x, y };

	//콘솔 커서의 좌표를 설정하는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void player()
{
	char key = 0;
	int x = -2, y = 1;

	while (1)
	{
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
		Position(x, y);
		printf("☆");
	}
}
void Render()
	{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{

			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("■");
			}
			else if (maze[i][j] == '2')
			{
				printf("◎");
			}
		}
		printf("\n");
	}
}

int main()
{
	Character character = {1,1,"★"};

	Render();
	player();

	return 0;
}
