#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100000

void Load1(const char* Valstrax1)
{
    FILE* file = fopen(Valstrax1, "r");

    char buffer[SIZE] = { 0, };

    fread(buffer, 1, SIZE, file);

    printf("%s", buffer);

    fclose(file);
}
void Load2(const char* Valstrax2)
{
    FILE* file = fopen(Valstrax2, "r");

    char buffer[SIZE] = { 0, };

    fread(buffer, 1, SIZE, file);

    printf("%s", buffer);

    fclose(file);
}
void Load3(const char* Valstrax3)
{
    FILE* file = fopen(Valstrax3, "r");

    char buffer[SIZE] = { 0, };

    fread(buffer, 1, SIZE, file);

    printf("%s", buffer);

    fclose(file);
}

int main()
{
#pragma region ���� �����

#pragma region ���� ����

    // ù ��° �Ű����� (������ �̸�)
    // �� ��° �Ű����� (������ ����� ���)
    // FILE * file = fopen("data.txt", "w");
    // 
    // fputs("Character Information\n", file);
    // fputs("Health : \n", file);
    // fputs("Attack : \n", file);
    // fputs("Defense : \n", file);
    // 
    // fclose(file);

#pragma endregion

#pragma region ���� �б�

    Load1("Valstrax1.txt");


#pragma endregion




#pragma endregion



    return 0;
}