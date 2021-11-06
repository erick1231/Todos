#include<conio.h>
#include<graphics.h>

void main(void)
{

   /*fondo del edificio en plomo bajo*/
int edifondo[]={6,169,14,47,40,17,61,23,60,36,66,38,117,3,126,28,130,36,141,33,150,35,156,34,168,7,201,39,207,38,209,25,223,24,231,32,222,150,3,179};

 /*Estos arreglos son para los recuadros de cada lado del edificio*/
int ladoderecho[]={26,41,32,33,47,35,33,175,28,175,42,49,33,49,16,177,10,177,28,40,26,41};
int ladoizquierdo[]={212,39,222,37,225,40,219,151,215,151,221,48,215,48,209,152,205,152,213,39,222,37};

/*Arreglos pilares verticales*/
int pilarderecho[]={99,16,104,11,90,168,85,168,99,16};
 int pilarizquierdo[]={178,16,182,19,172,157,168,157,176,16};

   /*esquinita derecha*/
 int esquinader[]={14,46,40,18,32,33,27,38,14,46};



/*Arreglos pilares Horizontales parte derecha*/
 int Pimuro1[]={66,43,98,25,98,29,66,48,66,43};
 int Pimuro2[]={64,67,96,50,96,56,63,72,64,67};
 int Pimuro3[]={61,90,93,80,93,87,61,97,61,91};
 int Pimuro4[]={58,119,89,109,89,115,57,124,58,119};
 int Pimuro5[]={55,147,86,142,86,147,55,153,55,147};

   /*Arreglos pilares Horizontales izquierdos*/
  int Pimuro6[]={181,29,200,47,200,50,180,34,181,29};
  int Pimuro7[]={180,51,199,65,199,69,179,56,180,51};
  int Pimuro8[]={178,78,197,88,197,92,177,83,178,78};
  int Pimuro9[]={176,105,195,109,195,113,175,111,176,105};
  int Pimuro10[]={173,135,193,135,193,139,173,138,173,135};

  /*Arreglos pilares horizontales azules derechos*/
 int Piazul1[]={65,55,97,38,97,45,64,61,65,55};
 int Piazul2[]={62,81,93,69,93,75,62,86,62,81};
 int Piazul3[]={59,108,90,99,90,107,59,115,59,108};
 int Piazul4[]={56,137,87,129,87,139,55,144,56,137};
 int Piazul5[]={54,164,84,160,85,168,53,171,54,164};

   /*Pilares horizontales azules izquierdos*/
 int Piazul6[]={180,44,199,58,199,62,180,49,180,44};
 int Piazul7[]={178,67,197,78,197,84,178,74,178,67};
 int Piazul8[]={177,94,196,100,196,106,176,101,177,94};
 int Piazul9[]={175,122,194,124,194,132,174,131,175,122};
 int Piazul10[]={173,148,194,148,194,153,173,157,173,148};

/*Picos que forman E en el centro derechos*/
 int picosderecho1[]={105,11,116,3,114,14,107,20,106,33,112,42,105,45,104,61,109,61,108,76,101,78,101,93,107,94,106,106,99,108,97,126,104,126,103,141,95,141,93,167,91,168,105,11};
 int picosderecho2[]={118,4,124,26,122,35,118,30,117,44,121,49,121,55,117,52,115,72,119,75,119,80,115,79,113,96,115,99,116,107,111,127,114,128,114,134,109,134,106,166,104,166,118,4};

   /*muritos azules de las puntas del frente del lado izquierdo*/
 int picosizquierdo1[]={167,7,157,34,157,41,163,32,162,46,156,52,156,56,162,53,161,67,156,71,154,79,158,77,157,97,153,100,153,105,156,104,155,124,151,125,151,129,155,129,153,158,157,159,167,7};
 int picosizquierdo2[]={178,16,170,9,170,19,174,21,173,37,170,35,169,43,173,45,171,63,168,62,167,73,170,76,170,92,165,91,163,101,167,104,162,120,161,131,166,132,165,158,167,158,178,16};

/*Cuadros del centro*/
 int centro1[]={128,62,134,62,143,62,147,63,147,68,128,69,128,62};
 int centro2[]={125,87,144,87,145,92,126,92,125,87};
 int centro3[]={123,111,144,111,144,119,124,118,123,111};
 int centro4[]={121,136,141,135,140,143,122,143,121,136};

 /*ventanas de los lados*/
 int ven1[]={32,71,36,71,35,92,30,92,32,71};
 int ven2[]={24,124,31,124,30,144,23,144,24,124};
 int ven3[]={56,52,61,52,59,69,54,69,56,52};  /*lado derecho*/
 int ven4[]={52,75,56,75,55,94,49,94,52,75};
 int ven5[]={49,101,55,102,54,117,49,117,49,102};
 int ven6[]={45,124,52,124,51,144,44,144,44,144,45,124};

  int ven7[]={216,68,218,68,218,82,215,82,216,68};
  int ven8[]={213,106,217,106,216,122,212,122,213,106};
  int ven9[]={204,52,208,52,208,63,204,63,204,52};  /*lado izquierdo*/
  int ven10[]={203,68,207,68,207,86,203,86,203,68};
  int ven11[]={202,90,206,90,205,104,202,104,202,90};
  int ven12[]={199,110,203,110,203,125,199,125,199,110};

/*ventanas de los laterales/*ventanas de los lados*/
int ventana1[]={65,48,98,30,98,38,65,55,65,48};
  int ventana2[]={63,72,95,56,95,67,63,81,63,72};
  int ventana3[]={61,98,93,87,92,97,61,107,61,98};   /*derecha*/
  int ventana4[]={58,125,88,116,88,129,56,136,58,125};
  int ventana5[]={54,153,85,147,85,159,53,164,54,153};

  int pico1[]={110,24,112,25,112,30,110,30,110,24};
  int pico2[]={108,53,111,52,111,60,108,59,108,53};
  int pico3[]={104,85,108,84,108,90,104,90,104,85};
  int pico4[]={101,116,105,117,105,125,101,126,101,116};  /*estos son las ventanas  de frente*/
  int pico5[]={96,149,101,149,101,167,96,167,96,149};  /*del lado derecho*/

 int pico6[]={120,36,122,39,122,45,120,43,120,36};
 int pico7[]={117,59,120,63,119,70,117,69,117,59};
  
  int pico9[]={112,116,114,116,114,126,112,125,112,116};
  int pico10[]={107,145,112,145,110,164,107,164,107,145};


  int pico11[]={158,41,160,40,160,45,159,46,158,41};
  int pico12[]={157,59,159,56,159,68,156,68,157,59};
  int pico13[]={154,83,158,80,157,90,154,98,154,83};
  int pico14[]={152,109,156,107,155,125,151,122,152,109};
  int pico15[]={150,139,154,139,152,160,149,159,150,139}; /*del lado izquierdo*/

  int pico16[]={169,27,171,28,171,33,168,32,169,27};
  int pico17[]={166,50,169,50,169,59,166,59,166,50};
  int pico18[]={164,80,167,80,166,89,164,89,164,80};
  int pico19[]={161,109,165,110,164,119,161,119,161,109};
  int pico20[]={159,144,163,144,163,158,160,158,159,144};


 /*ventanas del centro*/
  int ventanacentro1[]={122,48,155,48,155,58,122,58,122,48};
  int ventanacentro2[]={120,71,154,70,153,80,120,81,120,71};
  int ventanacentro3[]={118,94,152,94,152,104,118,105,118,94};
  int ventanacentro4[]={115,120,150,120,150,130,115,131,115,120};
  int ventanacentro5[]={115,145,148,145,147,159,114,163,115,145};

/*Rayas para hacer visualizar ventanas*/
  int primero[]={128,46,130,46,122,163,120,162,128,46};
  int segundo[]={138,46,140,46,132,161,129,161,138,46};
  int tercero[]={149,47,151,47,142,161,140,161,149,47};
 

int driver=DETECT,modo;
initgraph(&driver,&modo,"c:\\tc20\\bin");

setbkcolor(15);


   /*fondo del edificio plomo */
 setfillstyle(SOLID_FILL,LIGHTGRAY);
 setcolor(LIGHTGRAY);
 fillpoly(21,edifondo);
  drawpoly(22,edifondo);

  /*esquinita superior derecha*/
 setcolor(DARKGRAY);
 fillpoly(4,esquinader);
   drawpoly(5,esquinader);


 /*parte laterales de recuadros y pilares verticales*/
 setfillstyle(SOLID_FILL,DARKGRAY);
 fillpoly(10,ladoderecho);
 fillpoly(10,ladoizquierdo); 
 drawpoly(11,ladoderecho);
  drawpoly(11,ladoizquierdo);
  fillpoly(4,pilarderecho);
 fillpoly(4,pilarizquierdo);
  drawpoly(5,pilarderecho);
  drawpoly(5,pilarizquierdo);

 setfillstyle(SOLID_FILL,DARKGRAY);
 /*Parte pilares horizontales plomo*/
 setfillstyle(SOLID_FILL,DARKGRAY);
 fillpoly(4,Pimuro1);
 fillpoly(4,Pimuro2);
 fillpoly(4,Pimuro3);
 fillpoly(4,Pimuro4);
 fillpoly(4,Pimuro5);
  drawpoly(5,Pimuro1);        /*derecha*/
  drawpoly(5,Pimuro2);
  drawpoly(5,Pimuro3);
  drawpoly(5,Pimuro4);
  drawpoly(5,Pimuro5);

 fillpoly(4,Pimuro6);
  fillpoly(4,Pimuro7);
  fillpoly(4,Pimuro8);
  fillpoly(4,Pimuro9);
  fillpoly(4,Pimuro10);
   drawpoly(5,Pimuro6);
   drawpoly(5,Pimuro7);
   drawpoly(5,Pimuro8);       /*izquierda*/
   drawpoly(5,Pimuro9);
   drawpoly(5,Pimuro10);

   /*Pilares azules*/
 setfillstyle(SOLID_FILL,BLUE);
 fillpoly(4,Piazul1);
 fillpoly(4,Piazul2);
 fillpoly(4,Piazul3);
 fillpoly(4,Piazul4);
 fillpoly(4,Piazul5);
  drawpoly(5,Piazul1);
  drawpoly(5,Piazul2);
  drawpoly(5,Piazul3);     /*derecha*/
  drawpoly(5,Piazul4);
  drawpoly(5,Piazul5);

 fillpoly(4,Piazul6);
 fillpoly(4,Piazul7);
 fillpoly(4,Piazul8);
 fillpoly(4,Piazul9);  /*Izquierda*/
 fillpoly(4,Piazul10);
  drawpoly(5,Piazul6);
  drawpoly(5,Piazul7);
  drawpoly(5,Piazul8);
  drawpoly(5,Piazul9);
  drawpoly(5,Piazul10);

/*Picos que forman E en el centro azules*/
  fillpoly(22,picosderecho1);
 fillpoly(22,picosderecho2);      /*derecha*/
  drawpoly(23,picosderecho1);
  drawpoly(23,picosderecho2);

 fillpoly(22,picosizquierdo1);
 fillpoly(22,picosizquierdo2);
  drawpoly(23,picosizquierdo1);    /*izquierda*/
  drawpoly(23,picosizquierdo2);

/*centros azules*/
	setfillstyle(SOLID_FILL,BLUE);
 fillpoly(6,centro1);
 fillpoly(5,centro2);
 fillpoly(4,centro3);
 fillpoly(4,centro4);
  drawpoly(6,centro1);
  drawpoly(6,centro2);
  drawpoly(5,centro3);
  drawpoly(5,centro4);
     

  setfillstyle(SOLID_FILL,WHITE);
  fillpoly(4,ven1);
  fillpoly(4,ven2);
  fillpoly(4,ven3);
  fillpoly(4,ven4);  /*lado derecho*/
  fillpoly(4,ven5);
  fillpoly(4,ven6);
   drawpoly(5,ven1);
   drawpoly(5,ven2);
   drawpoly(5,ven3);
   drawpoly(5,ven4);
   drawpoly(5,ven5);
   drawpoly(5,ven6);

   fillpoly(4,ven7);
   fillpoly(4,ven8);
   fillpoly(4,ven9);
   fillpoly(4,ven10); /*lado izquierdo*/
   fillpoly(4,ven11);
   fillpoly(4,ven12);
	drawpoly(5,ven7);
	drawpoly(5,ven8);
	drawpoly(5,ven9);
	drawpoly(5,ven10);
	drawpoly(5,ven11);
	drawpoly(5,ven12);

	fillpoly(4,ventana1);
   fillpoly(4,ventana2);
   fillpoly(4,ventana3);
   fillpoly(4,ventana4);  /*Ventanaslaterales izquierda*/
   fillpoly(4,ventana5);
	drawpoly(5,ventana1);
	drawpoly(5,ventana2);
	drawpoly(5,ventana3);
	drawpoly(5,ventana4);
	drawpoly(5,ventana5);
    /*ventanas de los picos*/
   fillpoly(4,pico1);
   fillpoly(4,pico2);
   fillpoly(4,pico3);
   fillpoly(4,pico4);
   fillpoly(4,pico5);
   fillpoly(4,pico6);
   fillpoly(4,pico7);
   
   fillpoly(4,pico9);
   fillpoly(4,pico10);
	drawpoly(5,pico1);
	drawpoly(5,pico2);
	drawpoly(5,pico3);
	drawpoly(5,pico4);
	drawpoly(5,pico5);  /*los de la derecha*/
	drawpoly(5,pico6);
	drawpoly(5,pico7);
	
	drawpoly(5,pico9);
	drawpoly(5,pico10);

	fillpoly(4,pico11);
	fillpoly(4,pico12);
	fillpoly(4,pico13);
	fillpoly(4,pico14);
	fillpoly(4,pico15);
	fillpoly(4,pico16);
	fillpoly(4,pico17);
	fillpoly(4,pico18);
	fillpoly(4,pico19);
	fillpoly(4,pico20);
	 drawpoly(5,pico11);
	 drawpoly(5,pico12);
	 drawpoly(5,pico13);
	 drawpoly(5,pico14);
	 drawpoly(5,pico15);
	 drawpoly(5,pico16);
	 drawpoly(5,pico17);
	 drawpoly(5,pico18);
	 drawpoly(5,pico19);
	 drawpoly(5,pico20);


 setfillstyle(SOLID_FILL,WHITE);
   /*ventanas del centro*/

	  fillpoly(10,ventanacentro1);
	  fillpoly(7,ventanacentro2);
	  fillpoly(4,ventanacentro3);
	  fillpoly(4,ventanacentro4);
	  fillpoly(4,ventanacentro5);
		 drawpoly(11,ventanacentro1);
		 drawpoly(8,ventanacentro2);
		 drawpoly(5,ventanacentro3);
		 drawpoly(5,ventanacentro4);
		 drawpoly(5,ventanacentro5);

setcolor(LIGHTGRAY);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
 fillpoly(4,primero);
	fillpoly(4,segundo);
	fillpoly(4,tercero);
	 drawpoly(5,primero);
	 drawpoly(5,segundo);
	 drawpoly(5,tercero);

	 /*centros azules para rellenar los cuadros azules tapados por las visualizaciones de ventana/*centros azules*/
	setfillstyle(SOLID_FILL,BLUE);
 fillpoly(6,centro1);
 fillpoly(5,centro2);
 fillpoly(4,centro3);
 fillpoly(4,centro4);
  drawpoly(7,centro1);
  drawpoly(6,centro2);
  drawpoly(5,centro3);
  drawpoly(5,centro4);

	setfillstyle(SOLID_FILL,BLUE);
 fillpoly(6,centro1);
 fillpoly(5,centro2);
 fillpoly(4,centro3);
 fillpoly(4,centro4);
  drawpoly(7,centro1);
  drawpoly(6,centro2);
  drawpoly(5,centro3);
  drawpoly(5,centro4);
  /*rayas de en medio que realiza particiones dl edificio*/
setcolor(DARKGRAY);
  line(66,38,53,173);
  line(124,25,112,164);
  line(157,34,149,160);
  line(201,39,194,153);


getch();


/* silueta del joven en la pc */
   line(165,407,166,404);
   line(166,404,167,402);
   line(167,402,168,400);
   line(168,400,169,398);
   line(169,398,170,396);
   line(170,396,172,394);
   line(172,394,174,392);
   line(174,392,176,390);
   line(176,390,177,390);
   line(177,390,179,388);
   line(179,388,181,387);
   line(181,387,184,386);
   line(184,386,186,385);
   line(186,385,187,384);
   line(187,384,189,383);
   line(189,383,191,382);
   line(191,382,194,381);
   line(194,381,197,380);
   line(197,380,198,379);
   line(198,379,201,378);
   line(201,378,204,377);
   line(204,377,208,377);
   line(208,377,211,376);
   line(211,376,213,375);
   line(213,375,217,374);
   line(217,374,222,374);
   line(222,374,228,374);
   line(228,374,233,374);
   line(232,374,236,374);
   line(236,374,240,375);
   line(240,375,243,375);
   line(243,375,246,376);
   line(246,376,249,376);
   line(249,376,252,377);
   line(252,377,255,378);
   line(255,378,258,379);
   line(258,379,261,380);
   line(261,380,264,381);
   line(264,381,267,382);
   line(267,382,270,384);
   line(270,384,273,386);
   line(273,386,276,388);
   line(276,388,279,390);
   line(279,390,282,392);
   line(282,392,285,394);
   line(285,394,287,396);
   line(287,396,289,399);
   line(289,399,291,402);
   line(291,402,292,404);
   line(292,404,293,407);

   /*brazo*/

   line(286,395,287,393);
   line(287,393,289,391);
   line(289,391,292,392);
   line(292,392,295,393);
   line(295,393,297,394);
   line(297,394,300,395);
   line(300,395,303,396);
   line(303,396,306,397);
   line(306,397,309,398);
   line(309,398,312,399);
   line(312,399,318,401);
   line(318,401,321,402);
   line(321,402,333,402);
   line(333,402,336,401);
   line(336,401,339,398);
   line(339,398,342,395);
   line(342,395,346,392);
   line(346,392,349,389);
   line(349,389,350,386);
   line(350,386,352,384);
   line(352,384,354,381);
   line(354,381,355,379);
   line(355,379,356,378);
   line(356,378,357,375);
   line(357,375,358,373);
   line(358,373,360,368);
   line(360,368,362,367);
   line(362,367,364,367);
   line(364,367,366,366);
   line(366,366,368,365);
   line(368,365,368,363);
   line(368,363,367,362);
   line(367,362,367,359);
   line(367,357,366,359);
   line(366,359,366,356);
   line(366,356,365,353);
   line(365,353,363,353);
   line(363,353,362,352);
   line(362,352,362,351);
   line(362,351,363,350);
   line(363,350,362,349);
   line(362,349,361,348);
   line(361,348,360,349);
   line(360,349,358,350);
   line(358,350,357,349);
   line(357,349,358,348);
   line(358,348,358,347);
   line(358,347,357,346);
   line(357,346,356,346);
   line(356,346,355,348);
   line(355,348,355,349);
   line(355,349,353,350);
   line(353,350,352,349);
   line(352,349,351,348);
   line(351,348,350,347);
   line(350,347,349,348);
   line(349,348,348,349);
   line(348,349,348,351);
   line(348,351,348,353);
   line(348,353,347,355);
   line(347,355,346,357);
   line(346,357,345,356);
   line(345,356,345,352);
   line(345,352,343,353);
   line(343,353,342,355);
   line(342,355,342,360);
   line(342,360,342,362);
   line(342,362,345,364);
   line(345,364,346,366);
   line(346,366,345,368);
   line(345,368,343,370);
   line(343,370,340,372);
   line(340,372,337,374);
   line(337,374,334,376);
   line(334,376,331,378);
   line(331,378,328,380);
   line(328,380,325,379);
   line(325,379,322,378);
   line(322,378,320,377);
   line(320,377,318,376);
   line(318,376,315,374);
   line(315,374,312,371);
   line(312,371,308,367);
   line(308,367,305,364);
   line(305,364,301,360);
   line(301,360,298,357);
   line(298,357,296,355);
   line(296,355,293,353);
   line(293,353,289,351);
   line(289,351,282,349);
   line(282,349,276,347);
   line(276,347,270,346);
   line(270,346,264,345);
   line(264,345,259,344);
   line(259,344,254,343);

   /* cabeza */

   line(254,343,249,340);
   line(249,340,246,336);
   line(246,336,246,331);
   line(246,331,246,327);
   line(246,327,248,324);
   line(248,324,251,321);
   line(251,321,253,320);
   line(253,320,255,318);
   line(255,318,255,315);
   line(255,315,256,313);
   line(256,313,256,302);
   line(256,302,255,300);
   line(255,300,254,298);
   line(254,298,253,295);
   line(253,295,253,284);
   line(253,284,252,280);
   line(252,280,251,277);
   line(251,277,249,275);
   line(249,275,247,273);
   line(247,273,244,270);
   line(244,270,241,268);
   line(241,268,237,266);
   line(237,266,234,265);
   line(234,265,222,265);
   line(222,265,218,266);
   line(218,266,215,267);
   line(215,267,211,268);
   line(211,268,207,270);
   line(207,270,204,272);
   line(204,272,201,275);
   line(201,275,198,278);
   line(198,278,195,282);
   line(195,282,193,286);
   line(193,286,191,294);
   line(191,294,191,299);
   line(191,299,192,304);
   line(192,304,194,310);
   line(194,310,195,316);
   line(195,316,198,321);
   line(198,321,200,325);
   line(200,325,203,328);
   line(203,328,206,330);
   line(206,330,209,331);
   line(209,331,212,331);
   line(212,331,215,332);
   line(215,332,215,339);
   line(215,339,213,342);
   line(213,342,209,346);
   line(209,346,204,349);
   line(204,349,199,352);
   line(199,352,193,355);
   line(193,355,188,358);
   line(188,358,183,362);
   line(183,362,179,367);
   line(179,367,176,374);
   line(176,374,175,380);
   line(175,380,174,387);
   line(174,387,174,392);

   /* computadora */

   line(229,265,229,227);
   line(229,227,230,225);
   line(230,225,232,224);
   line(232,224,315,224);
   line(315,224,317,225);
   line(317,225,317,298);
   line(317,298,316,300);
   line(316,300,314,301);
   line(314,301,255,301);

   line(237,266,237,237);
   line(237,237,238,235);
   line(238,235,240,234);
   line(240,234,306,234);
   line(306,234,308,235);
   line(308,235,309,237);
   line(309,237,309,284);
   line(309,284,308,286);
   line(308,286,306,287);
   line(306,287,253,287);

   /* Puntero */

   line(282,255,282,248);
   line(282,248,288,255);
   line(288,255,282,257);
   line(284,256,287,262);
   line(287,262,289,261);
   line(289,261,286,255);

   /* CPU */

   line(255,316,319,316);
   line(319,316,323,293);
   line(323,293,317,293);

   line(249,340,319,340);
   line(319,340,319,316);

   line(319,340,323,312);
   line(323,312,323,293);

   /* mouse */
   line(323,312,338,313);
   line(338,313,351,315);
   line(351,315,359,317);
   line(359,317,362,320);
   line(362,320,361,324);
   line(361,324,358,326);
   line(358,326,354,327);
   line(354,327,349,329);
   line(349,329,347,332);
   line(347,332,348,335);
   line(348,335,351,337);
   line(351,337,354,340);
   line(354,340,356,344);
   line(356,344,356,346);

   line(325,342,361,342);
   line(361,342,363,344);
   line(363,344,366,359);
   line(345,367,330,367);
   line(330,367,325,342);
   line(360,368,366,359);

closegraph();
}