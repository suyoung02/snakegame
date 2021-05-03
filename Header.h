#ifndef Function_h
#define Function_h
#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<thread>
#include<fstream>
#include<MMsystem.h>
using namespace std;
#define MAX_SIZE_FOOD 8
#define MAX_SPEED 3
//Biến toàn cục 
POINT snake[24]; //Con rắn
POINT food[8]; // Thức ăn
 int CHAR_LOCK;//Biến xác định hướng không thể di chuyển (Ở một thời điểm có một hướng rắn không thể di chuyển)
 int MOVING;//Biến xác định hướng di chuyển của snake (Ở một thời điểm có ba hướng rắn có thể di chuyển)
 int SPEED;// Có thể hiểu như level, level càng cao thì tốc độ càng nhanh
 int HEIGH_CONSOLE, WIDTH_CONSOLE;// Độ rộng và độ cao của màn hình console
 int FOOD_INDEX; // Chỉ số food hiện hành đang có trên màn hình
 int SIZE_SNAKE; // Kích thước của snake, lúc đầu có 6 và tối đa lên tới 1
 int STATE; // Trạng thái sống hay chết của rắn
 int curPosX;
 int curPosY;
 int score;
 int COUNT;
 void FixConsoleWindow();
 void GotoXY(int x, int y);
 bool IsValid(int x, int y);
 void GenerateFood();
 void ResetData();
 void StartGame();
 void DrawBoard(int x, int y, int width, int height);
 void ExitGame(HANDLE t);
 void PauseGame(HANDLE t);
 void Eat();
 void ProcessDead(); 
 void MoveRight();
 void MoveLeft();
 void MoveDown();
 void MoveUp();
 void ThreadFunc(char *str);
 void DrawGate();
 bool CheckGate();
 void CreateGate();
 void CloseGate();
 bool eatGate();
 void LoadGame();
#endif
