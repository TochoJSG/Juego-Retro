#include<iostream>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
using namespace std;
void gotoxy(int,int);
int i;
int main(){
	for(i=0;i<500;i++){
					   gotoxy(i,20); printf("%i",i);
					   }
	system("pause");    return 0;
	}
void gotoxy(int x,int y){
	 HANDLE hCon;
	 COORD dwPos;
	 dwPos.X = x;
	 dwPos.Y = y;
	 hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleCursorPosition(hCon,dwPos);
	 }
