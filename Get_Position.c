/*Programa que proporciona coordenadas de la posiocion actual de cursor;
Afectar clic en posicion deseada*/
#include<stdio.h>
#include<winuser.h>//funciones para Cursor
#include<conio.h>
#include<windows.h>
int main(){
     int x, y;//Varibales para posiciones
     while(1){//para actualizar coordenadas sin cerrar programa
              Sleep(1000);//Intervalo de segundo
              POINT cursor;//Variable tipo POINT, para cursor, tio cursor
              //Ya esta posicion, donde guardamois(aqui)... &int
              GetCursorPos(&cursor);//obtenemos posicion y guardamos en variable creada
              //Actualizamos valores de posicion, antes no tenian valor
              x=cursor.x;
              y=cursor.y;
              //imprimimos pos. de x && y
              printf("\r X=%i , Y=%i ",x,y);
              }
     getch(); return 0;
     }
/*int main(){
       int x=1212,y=372;
       //Hacemos que señale a la posicion
       SetCursorPos(x,y);
       //Efectuamos clic
       mouse_event(MOUSEEVENT_LEFTDOWN,x,y,0,0);
       return 0; }
       }*/
