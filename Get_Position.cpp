/*Programa que proporciona coordenadas de la posiocion actual de cursor;
Afectar clic en posicion deseada*/
#include<stdio.h>
#include<winuser.h>//funciones para Cursor
#include<windows.h>
void main(){
     int x, y;//Varibales para posiciones
     while(1){//para actualizar coordenadas sin cerrar programa
              POINT cursor;//Variable tipo POINT, para cursor, tio cursor
              GetCursorPos(&cursor);//obtenemos posiocion y guardamos en variaable creada
              //Actualizamos valores de posicion, antes no tenian valor
              x=cursor.x;
              y=cursor.y;
              //imprimimos pos. de x & y
              printf("\r X=%i , Y=%i ",x,y);
              }
     }
