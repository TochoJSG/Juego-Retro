/*codigos para mover teclas, buscar en internet
        VK_[HOME,LEFT,DOWN,END...]
LEFT    0x25
RIGHT   0x27
UP      0x26
DOWN    0x28  */
#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y);
int main(){
    int x=10,y=10;
    gotoxy(x,y); printf("*");
    while(1){//while(1)==bucle infinito, esperamos a que teclasea presionada
             Sleep(100);//intervalo-pausa para que bucle no corra demasiado rapido
//                                      Left(-);Right(+)  
             if(GetAsyncKeyState(0x25)){//if left, codigo predefinido
//                                      regresamos a anterior asterisco
                                        gotoxy(x,y); printf(" ");//borramos anterior posicion de *, si if==true
                                        x--;//modif. posicion de x
                                        gotoxy(x,y); printf("*");//pasamos nueva posicion
                                        }
             if(GetAsyncKeyState(0x27)){//if right, codigo predefinido
                                        gotoxy(x,y); printf(" ");//borramos anterior posicion de *, si if==true  
                                        x++;//modif. posicion de x
                                        gotoxy(x,y); printf("*");//pasamos nueva posicion
                                        }
             if(GetAsyncKeyState(0x28)){//if down, codigo predefinido
                                        gotoxy(x,y); printf(" ");//borramos anterior posicion de *, si if==true  
                                        y++;//modif. posicion de x
                                        gotoxy(x,y); printf("*");//pasamos nueva posicion
                                        }
             if(GetAsyncKeyState(0x26)){//if up, codigo predefinido
                                        gotoxy(x,y); printf(" ");//borramos anterior posicion de *, si if==true  
                                        y--;//modif. posicion de x
                                        gotoxy(x,y); printf("*");//pasamos nueva posicion
                                        }       
             }
    }
void gotoxy(int x, int y){
     HANDLE consola=GetStdHandle(STD_OUTPUT_HANDLE);//HANDLE es controlador, como tipo, se crea variable; CONTOL DE SALIDA DE DATOS CON OUTPUT
     COORD pos;//estructura donde estan coordenadas en eje vertical, horizontal
     pos.X=x;
     pos.Y=y;
//   seteamos posiocion en consola
     SetConsoleCursorPosition(consola,pos);  
     }
