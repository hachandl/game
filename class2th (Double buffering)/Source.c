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
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
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
				printf("¡á");
			}
			else if (maze[i][j] == '2')
			{
				printf("¡Ý");
			}
		}
		printf("\n");
	}
}

int main()
{
	Character character = { 0,1,"¡Ú" };

	char key = 0;

	Render();

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
			{
				key = _getch();
			}

			switch (key)
			{
			case UP: 
				if (maze[character.y - 1][character.x / 2] != '1')
				{
					character.y -= 1;
				}
					break;
				
			case DOWN: 
				if (maze[character.y + 1][character.x / 2] != '1')
				{
					character.y += 1;
				}
					break;
				
			case LEFT: 
				if (maze[character.y][character.x / 2 - 1] != '1')
				{
					character.x -= 2;
				}
					break;
				
			case RIGHT: 
				if (maze[character.y][character.x / 2 + 1] != '1')
				{
					character.x += 2;
				}
					break;
			}

	

			system("cls");
			Render();
		}

		

		Position(character.x, character.y);
		printf("%s", character.shape);

	}


	return 0;
}
