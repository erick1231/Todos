
#include <conio.h>  //De aquí utilizaremos la función kbhit()
#include <stdlib.h> //De aquí sacaremos la función random()
#include <dos.h>
#include <graphics.h> //Esta es la librería que nos permite usar gráficos.

void main()
{
 int gdriver=DETECT, gmode, contador=0;                               /*Detectamos modo grafico*/
 initgraph(&gdriver,&gmode,"C:\\BORLANDC\\BGI");
 do                                                                   /*Do-While ciclo infinito hasta presionar una tecla*/
   {
	setcolor(random(15));                                               /*Ramdon movimiento de puntos en el eje x,y*/
	line(random(640),random(480),random(640),random(480));
    setcolor(random(15));
    rectangle(random(640),random(480),random(640),random(480));
    setcolor(random(15));
    ellipse(random(640),random(480),0,360,random(100),random(100));
	contador+=1;
	if(contador%100==0) {
    cleardevice(); }                                                 /*Limpia pantalla modo grafico*/
	delay(100);
	cleardevice();
   }
 while(!kbhit());
 closegraph();                                                   /*Cerramos modo grafico*/
}
