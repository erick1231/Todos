#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main (void)
{

	int driver=DETECT,modo;
    initgraph(&driver,&modo,"c:\\tc20\\bin"); /*Deteccion modo grafico*/
    do{
	  int  a=510;

	do{

	 a=a-50;
    

    setbkcolor(15);
    setcolor(2);
	line(2,412,258,412);   /*10-16 Base de la ruleta*/
	line(258,320,258,412);/*Viga izquierda*/
	line(2,412,2,470); /*Base rectangular*/
	line(2,470,633,470);
	line(633,470,633,411);
	line(327,411,633,411);
	line(325,321,325,411);  /*Viga derecha*/
    line(39,57,63,69); /*Estrella superior ayuda*/
    line(63,69,55,46);
    line(55,46,76,30);
    line(76,30,51,28);
	line(51,28,41,7);
	line(41,7,30,26);
	line(30,26,3,30);
	line(3,30,25,43);
	line(25,43,16,70);
	line(16,70,40,58);
	circle(39,266,26);/*Circulo del boton iniciar*/
	setcolor(2);
	line(30,249,63,265); /*28-30 Play */
	line(63,265,28,284);
	line(28,284,30,249);
	circle(41,330,25);/*Circulo boton2 parar*/
	rectangle(24,318,58,345); /*Detener juego*/
	circle(292,161,161); /*Circulo mayor ext*/
	/*Rostro de la carita*/

	circle(292,160,114); /*Circulo interior*/
	line(249,223,332,223); /*Boca*/
	circle(324,151,23); /*Ojo izquierdo*/
	circle(253,148,22);/*Ojo derecho*/
	line(290,176,301,196); /*nariz */
	line(301,196,281,196);
	line(281,196,290,176); /*Fin nariz*/

	/*Piezas Circulo*/
	/*circulo*/
	circle(290,299,20);
	/*Rectangulo*/
	rectangle(337,277,370,295);

	

	/*estrella*/ /*Base*/
	line(395,243,399,251);
	line(399,251,409,251);
	line(409,251,405,260);
	line(405,260,410,267);
	line(410,267,400,268);
	line(400,268,394,276);
	line(394,276,389,268);
	line(389,268,379,268);
	line(379,268,384,261);
	line(384,261,380,251);
	line(380,251,388,251);
	line(388,251,395,243);
	/*Rombo*/
	line(433,194,440,208);
	line(440,208,434,219);
	line(434,219,417,220);
	line(417,220,407,208);
	line(407,208,416,193);
	line(416,193,433,194);
	/*Pentagono*/
	line(426,130,440,141);
	line(440,141,435,157);
	line(435,157,418,157);
	line(418,157,411,141);
	line(411,141,426,130);
	/*Rombo*/
	line(405,82,396,105);
	line(396,105,429,105);
	line(429,105,420,82);
	line(420,82,405,82);
	/*Rectangulo*/
	line(360,37,360,61);
	line(360,61,396,61);
	line(396,61,360,37);
	/*Diamante*/
	line(294,9,281,38);
	line(281,38,309,40);
	line(309,40,320,11);
	line(320,11,294,9);
	/*pentagono*/
	line(229,25,244,32);
	line(244,32,243,45);
	line(243,45,229,52);
	line(229,52,214,46);
	line(214,46,214,32);
	line(214,32,229,25);
	/*triangulo*/
	line(179,66,192,94);
	line(192,94,165,95);
	line(165,95,179,66);
	/*Circulo*/
	circle(157,141,20);
	/*Rectangulo*/
	rectangle(143,184,174,203);
	/*Estrella*/
	line(180,222,186,229);
	line(186,229,195,230);
	line(195,230,191,239);
	line(191,239,196,247);
	line(196,247,186,248);
	line(186,248,181,255);
	line(181,255,175,248);
	line(175,248,165,247);
	line(165,247,169,239);
	line(169,239,165,229);
	line(165,229,175,229);
	line(175,229,180,222);

	/*Diamante*/
	line(233,265,241,278);
	line(241,278,232,290);
	line(232,290,215,290);
	line(215,290,206,278);
	line(206,278,215,266);
	line(215,266,233,265);

	/*Piezas Base*/

	/*trevol*/
	line(42+a,425,46+a,434);
	line(46+a,434,56+a,435);
	line(56+a,435,53+a,443);
	line(53+a,443,58+a,452);
	line(58+a,452,47+a,453);
	line(47+a,453,41+a,460);
	line(41+a,460,35+a,452);
	line(35+a,452,24+a,453);
	line(24+a,453,29+a,445);
	line(29+a,445,25+a,434);
	line(25+a,434,36+a,433);
	line(36+a,433,42+a,425);
    /*Rectangulo*/
    rectangle(74+a,435,105+a,452);
    /*Pentagono*/
    line(123+a,427,142+a,427);
    line(142+a,427,149+a,442);
    line(149+a,442,140+a,458);
    line(140+a,458,124+a,458);
    line(124+a,458,118+a,443);
	line(118+a,443,123+a,427);
	/*Rombo*/
	line(175+a,431,165+a,454);
	line(165+a,454,198+a,454);
	line(198+a,454,190+a,431);
	line(190+a,431,175+a,431);
	/*pentagano2*/
	line(221+a,429,237+a,429);
	line(237+a,429,244+a,443);
	line(244+a,443,236+a,457);
	line(236+a,457,219+a,457);
	line(219+a,457,213+a,444);
	line(213+a,444,221+a,429);
    /*circulo*/
	circle(290+a,440,20);
	/*Rectangulo2*/
	rectangle(358+a,426,324+a,454);
	/*Triangulo Rectangulo*/
	line(377+a,430,377+a,457);
	line(377+a,457,415+a,456);
	line(415+a,456,377+a,430);
	/* estrella base	*/
	line(446+a,432,465+a,445);
	line(465+a,445,447+a,461);
	line(447+a,461,431+a,445);
	line(431+a,445,446+a,432);
	/*rectangulo3*/
	rectangle(484+a,433,514+a,455);
	/*pentagono*/
	line(539+a,430,533+a,445);
	line(533+a,445,541+a,458);
	line(541+a,458,556+a,458);
	line(556+a,458,561+a,445);
	line(561+a,445,555+a,432);
	line(555+a,432,539+a,430);

	/*rombo2*/
	line(591+a,434,610+a,433);
	line(610+a,433,623+a,454);
	line(623+a,454,581+a,455);
	line(581+a,455,591+a,434);

	/*Circulo de mensaje junto a linea*/
	setcolor(2);
    settextstyle(TRIPLEX_FONT,0,1);
    settextstyle(TRIPLEX_FONT,0,2);
    outtextxy(35,28,"?");
    delay(500);
    line(2,412,2,470); /*Base rectangular*/   
    cleardevice();
    line(2,412,2,470); /*Base rectangular*/
    } while(a>=40);
   }while(!kbhit()!=13);
   
   closegraph();
}