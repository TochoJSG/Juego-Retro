#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>
void gotoxy(int,int);
int main(){
	gotoxy(25,5); printf("\a%c\n\n",'*');
	gotoxy(5,25); printf("\a%c\n\n",'&');
	gotoxy(10,10); printf("\a%c\n\n",'$');
	system("pause");	return 0;
	}
void gotoxy(int x,int y){
	 HANDLE hCon;
	 COORD pos;
	 hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	 pos.X=x;
	 pos.Y=y;
	 SetConsoleCursorPosition(hCon,pos);
	 }
