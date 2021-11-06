
  #include<stdio.h>
  #include<conio.h>
  #include<graphics.h>
  #include<stdlib.h>
  #include<math.h>
  #include<time.h>

/*definicion de variables globales*/
  #define arriba 72
  #define abajo 80
  #define izquierda 75
  #define derecha 77
  #define ESC 27
  #define ENTER 13

  #define poner_cursor(x,y,pColor) dib_cursor(x,y,pColor);

/*definiciones de funciones*/
  void dib_cursor(int x, int y, char pColor);
  void borrar_cursor(int x, int y, char pColor);
  void establecer_figura(int vColor, int vFigura, int movxy,int vcortar,int vescalar,int vmover); 
  int acciones (int x, int y);
  int funcion_limite(int x, int y);
  int funcion_color(int x, int y);
  int funcion_figura( int x, int y);
  int funcion_estilo(int x, int y);

  void dibujar_fondo();
  void ver_contorno();
  void definir_colores();  
  void definir_primitivas();
  void dibujar_formas();
  void definir_estilos();
  void ver_figura();
  void dibujar_triangulo();
  void propiedades_figura();


  int ce=0;/*CAMBIO DEL BOTON INICIO*/
  int cc=0; /*CARGAR FORMAS UNA VEZ QUE SE PRESIONO EL BOTON INICIO*/
  int cs=0;/*CONTROL DE LA SEGUNDA PANTALLA*/
  int figuraGlobal=0;
  int colorGlobal =0;
  int movGlobal=0;
  int vcortar =0;
  int vescalar=0;
  int vmover =0;
  int x1=300;
  int y1=100; 
  int x2=350; 
  int y2=150; 
  void main(void){
    
    char r;
  	int adap,modo,x,y,vColor,vFigura,vEstilo;  /*variables del programa*/

  	 x=300;
     y=280;
     vColor=0;
     vFigura=0;
     vEstilo=0;

   detectgraph(&adap,&modo);  /*inicio de modo grafico*/
   initgraph(&adap,&modo,"c:\\tc20\\bin");
   ver_contorno();
   dibujar_fondo();
   /* propiedades_figura();*/

   do{
    r=getch();

      switch(r){

        case arriba:
        if(cc==1){
          borrar_cursor(x,y,LIGHTGRAY);
          y=y-6;  
          dib_cursor(x,y,LIGHTBLUE);
        }
        else
        { 
         borrar_cursor(x,y,LIGHTGRAY);
         y=y-6;  
         if( funcion_limite(x,y)>0)
         {
          dib_cursor(x,y,LIGHTBLUE);
         }
         else{
          y=y+6;
         }
          dibujar_fondo();
        }
               
        break;

        case abajo:
        if(cc==1){
         borrar_cursor(x,y,LIGHTGRAY);
         y=y+6;
         dib_cursor(x,y,LIGHTBLUE);
        }
        else{
         borrar_cursor(x,y,LIGHTGRAY);
         y=y+6;
         if( funcion_limite(x,y)>0)
         {
        dib_cursor(x,y,LIGHTBLUE);
        }
        else{
            y=y-6;
        }
        dibujar_fondo();
        }
        break;

        case izquierda:
         if(cc==1){
          borrar_cursor(x,y,LIGHTGRAY);
           x=x-6;
          dib_cursor(x,y,LIGHTBLUE);
        }
        else{
          borrar_cursor(x,y,LIGHTGRAY);
          x=x-6;
          if( funcion_limite(x,y)>0)
           {
           dib_cursor(x,y,LIGHTBLUE);
            }
            else{
              x=x+6;
          }
          dibujar_fondo();
        }        

        break;

        case derecha:
         if(cc==1){
          borrar_cursor(x,y,LIGHTGRAY);
          x=x+6;
          dib_cursor(x,y,LIGHTBLUE);
        }
        else
        {
          x=x+6;
         if( funcion_limite(x,y)>0)
         {
         dib_cursor(x,y,LIGHTBLUE);
          }
       else{
         x=x-6;
       }
        dibujar_fondo();
        }
  
        break;

        case ENTER:        
  
           if(x<=342 && x>=294 && y>=220 && y<=232)
           {             
            ce=1;
            cc=1;
            dibujar_fondo();
            dibujar_formas();
           }
            if(funcion_color(x,y)> 0)
            {
              vColor = funcion_color(x,y);              
            }
             if( funcion_figura(x,y)> 0)
              {
                vFigura = funcion_figura(x,y);            
              }

              if(funcion_estilo(x,y)> 0)
              {
                vEstilo = funcion_estilo(x,y);               
              }  


             if(vFigura > 0 && vColor >0)
              { ce=0;
                cleardevice();
                ver_contorno();
                dibujar_fondo();
                establecer_figura(vColor,vFigura,movGlobal,vcortar,vescalar,vmover);
                propiedades_figura();
                figuraGlobal=vFigura;
                colorGlobal =vColor;
                movGlobal = 1;
                vColor=0;
                vFigura=0;
                cs=1;
               }

               if(acciones(x,y)> 0 && cs> 0)
               {
                if(acciones(x,y) == 1){                  
                   vcortar = 0;
                   vescalar =0;
                   vmover = 1;
                   establecer_figura(colorGlobal,figuraGlobal,movGlobal,vcortar,vescalar,vmover);      
                 }

                  if(acciones(x,y) == 2){
                   vcortar = 1;
                   vescalar =0;
                   vmover = 0;
                   establecer_figura(colorGlobal,figuraGlobal,movGlobal,vcortar,vescalar,vmover);      
                 }

                 if(acciones(x,y) == 3){
                   vcortar = 0;
                    vescalar =0;
                    vmover = 0;
                   establecer_figura(colorGlobal,figuraGlobal,movGlobal,vcortar,vescalar,vmover);         
                 } 
                 if(acciones(x,y) == 4){
                    vcortar = 0;
                    vescalar =0;
                    vmover = 0;
                   establecer_figura(colorGlobal,figuraGlobal,movGlobal,vcortar,vescalar,vmover);         
                 }  

                 if(acciones(x,y) == 5){
                    vcortar = 1;
                    vescalar =0;
                    vmover = 0;
                   establecer_figura(colorGlobal,figuraGlobal,movGlobal,vcortar,vescalar,vmover);         
                 }  

                 if(acciones(x,y) == 8){    
                    vcortar = 0;
                    vescalar =1;
                    vmover = 0;
                   establecer_figura(colorGlobal,figuraGlobal,movGlobal,vcortar,vescalar,vmover);               
                 }

                 if(acciones(x,y) == 9)
                 {
                    vcortar = 0;
                    vescalar =0;
                    vmover = 1;
                    establecer_figura(colorGlobal,figuraGlobal,movGlobal,vcortar,vescalar,vmover);  
                 }

               }

        break;

        if(r==ESC)
         exit(0);
                  
      }
   }
   while(r!=ESC);
   exit(0);
   getch();
 }

void dibujar_fondo(){  

  setcolor(BLUE);
  arc(565,393,277,10,40);
  line(605,390,605,35);
  line(90,35,605,35);

  line(640,50,640,370);
  line(40,433,570,433);
  line(40,433,40,70);
  arc(80,75,75,180,40);
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  floodfill(300,100,BLUE);
  
  if(ce==0)
  {
   setcolor(BLUE);
   ellipse (316,225,0,360,85,25);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(316,225,BLUE);
   setcolor(RED);
   outtextxy (295,223,"INICIO");

  if(movGlobal==1)
  {
    movGlobal=0;
   }

   if(vcortar==1){
    vcortar=0;
   }
   if(vescalar ==1){
    vescalar=0;
   }

   if(vmover == 1)
   {
    vmover =0;
   }


  }  
  else{
   setcolor(BLUE);
   ellipse (316,225,0,360,85,25);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(316,225,BLUE);
   setcolor(WHITE);
   outtextxy (295,223,"INICIO");

  }

  dibujar_triangulo(); 

 }

void dib_cursor(int x, int y, char pColor) 
{
    if(pColor ==LIGHTBLUE ){
      setcolor(RED);
      circle(x,y,3);
      putpixel(x,y,pColor);
    }   

}

void borrar_cursor(int x,int y,char pColor) /* Funcion que dibuja el cursor */
  {
    if(pColor ==LIGHTGRAY ){
     setcolor(pColor);
      circle(x,y,3);
      putpixel(x,y,pColor);
    }   
   }

int funcion_limite( int x, int y) /*delimitado del borde*/
  {
    if (x>50 && x<600 && y>51 && y < 430)
       {
          return 1;
       }
    return 0;
  }

  void dibujar_formas()
  {
     definir_colores();
     definir_primitivas();    
     definir_estilos();
     ver_figura();
  } /*menu de opciones*/

 void definir_colores() /*menu de colores*/
  {     
    setcolor(BLACK);
    rectangle(94,160,215,289);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(101,194,BLACK);
    
    setcolor(WHITE);
    outtextxy(100,169,"COLORES");

    setcolor(GREEN);
    rectangle(100,180,200,190);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(101,181,GREEN);

    setcolor(RED);
    rectangle(100,193,200,203);
    setfillstyle(SOLID_FILL,RED);
    floodfill(101,194,RED);

    setcolor(CYAN);
    rectangle(100,206,200,216);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(101,207,CYAN);

    setcolor(YELLOW);
    rectangle(100,219,200,229);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(101,220,YELLOW);

    setcolor(MAGENTA);
    rectangle(100,232,200,242);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(101,233,MAGENTA);

    setcolor(BROWN);
    rectangle(100,246,200,256);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(101,247,BROWN);
   }

  void definir_primitivas() /*menu de la opcion primitivas*/
  {   
   setcolor(BLACK);
   rectangle(417,162,538,290);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(418,163,BLACK);

   setcolor(WHITE);
   outtextxy(440,170, "PRIMITIVAS");

   setcolor(WHITE);
   circle(450,210,20);
   setfillstyle(SOLID_FILL,RED);
   floodfill(450,210,WHITE);

   setcolor(WHITE); 
   ellipse (500,240,0,360,20,10);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(501,241,WHITE);
   
   setcolor(WHITE);   
   rectangle(425,250,475,280);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(470,255,WHITE);

   line(525,173,480,210);
   }

  void definir_estilos() /*menu de opcion*/
  {
    setcolor(BLACK);
    rectangle(254,273,375,401);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(260,275,BLACK);
    
    setcolor(WHITE);
    rectangle(264,280,370,290);  
    outtextxy(264,282, "SETLINESTYLE");
    rectangle(264,310,370,320);  
    outtextxy(264,312, "SETFILLSTYLE");
  }
void dibujar_triangulo()
  {
    int triangulo1[]={297,201,315,183,333,201,297,201};
    int triangulo2[]={414,225,397,243,397,210,415,225};
    int triangulo3[]={297,250,315,268,333,250,297,250};
    int triangulo4[]={234,208,217,225,234,242,234,208};

    setfillstyle(SOLID_FILL,YELLOW);
    fillpoly(4,triangulo1);
    setfillstyle(SOLID_FILL,5);
    fillpoly(4,triangulo2);
    setfillstyle(SOLID_FILL,YELLOW);
    fillpoly(4,triangulo3);
    setfillstyle(SOLID_FILL,5);
    fillpoly(4,triangulo4);

  }

void ver_figura() /*menu de opcion ver*/
  {  
    setcolor(BLACK);
    rectangle(254,50,375,161);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(260,60,BLACK);

    setcolor(WHITE);
    outtextxy(295,58, "VER");
  }

 void propiedades_figura()
 {
    setcolor(BLACK);
    rectangle(400,50,521,161);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(410,60,BLACK);

    setcolor(WHITE);
    outtextxy(450,58, "VER");  
    outtextxy(410,68, "Mover");
    outtextxy(410,78, "Cortar");
    outtextxy(410,88, "Pegar");
    outtextxy(410,98, "Copiar");
    outtextxy(410,108, "Eliminar");
    outtextxy(410,118, "Seleccionar");
    outtextxy(410,128, "Rotacion");
    outtextxy(410,138, "Escalacion");
    outtextxy(410,148, "Traslacion");
 }/*opcion del menu de la tercer pantalla*/

void ver_contorno() /*bordes*/
{
   setcolor(WHITE);
   rectangle(100,0,550,180);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(141,1,WHITE);

   setcolor(WHITE);
   rectangle(100,300,550,500);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(141,301,WHITE);

   rectangle(540,150,640,300);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(600,200,WHITE);

   rectangle(0,150,100,300);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(10,170,WHITE);

   setcolor(WHITE);
   rectangle(0,0,100,150);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(1,10,WHITE);

   rectangle(540,0,640,150);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(560,10,WHITE);

   rectangle(0,300,100,500);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(1,430,WHITE);

   rectangle(540,300,640,500);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(600,430,WHITE);

}

int funcion_color( int x, int y)
  {
      if (x>100 && x<200 && y>180 && y < 190)
       {
          return 2; /*verde*/
       }

       if (x>100 && x<200 && y>193 && y < 203)
       {
          return 4; /*rojo*/
       }
       
       if (x>100 && x<200 && y>206 && y < 216)
       {
          return 3; /*cyan*/
       }

       if (x>100 && x<200 && y>219 && y < 229)
       {
          return 14; /*yellow*/
       }
        
       if (x>100 && x<200 && y>232 && y < 242)
       { 
          return 5; /*mangenta*/
       }

       if (x>100 && x<200 && y>246 && y < 256)
       { 
          return 6; /*cafe*/
       }       
          return 0;
  } /*seleccion de colores*/

 int funcion_figura( int x, int y)
  {
      if(x>432 && x<468 && y>196 && y < 226)
      {
         return 1; /* circulo*/
      }

      if(x>432 && x<468 && y>256 && y < 274)
      {
         return 2; /* rectangulo*/
      }

      if(x>486 && x<516 && y>235 && y < 246)
      {
         return 3; /* elipse*/
      }

      if(x>504 && x<505 && y>190 && y < 192)
      {
       return 4; /* linea*/
      }

        return 0; /* nada*/
  } /**/

 int funcion_estilo(int x, int y)
  {

     if(x>264 && x<372 && y>280 && y < 292)
      {
       return 1; /* linea estilo*/
      }

     if(x>264 && x<372 && y>310 && y < 322)
      {
       return 2; /* linea full*/
      }

    return 0;
  }

  void establecer_figura(int vColor, int vFigura, int movxy, int vcortar, int  vescalar, int vmover)  {   
         
         int col =150;
        
      
        if(vFigura ==1 && vColor> 0 && movxy == 0)
        {  
           setcolor(WHITE);
           circle(300,100,20);
           setfillstyle(SOLID_FILL,vColor);
           floodfill(x1,y1,WHITE);
        }
        if( vFigura ==1 && vColor> 0 && movxy >0 && vcortar ==0 && vescalar ==0 && vmover ==0)
        {   
          x1=x1+35;
          y1=y1-10;
          setcolor(WHITE);
          circle(x1,y1,20);
          setfillstyle(SOLID_FILL,vColor);
          floodfill(x1,y1,WHITE);
        }

        if( vFigura ==1 && vColor> 0 && movxy >0 && vcortar ==0 && vescalar >0 && vmover ==0)
        {
             setcolor(LIGHTGRAY);
             circle(300,100,20);
             setfillstyle(SOLID_FILL,LIGHTGRAY);
             floodfill(x1,y1,LIGHTGRAY);

             setcolor(WHITE);
             circle(300,100,50);
             setfillstyle(SOLID_FILL,vColor);
             floodfill(x1,y1,WHITE);

        }

         if( vFigura ==1 && vColor> 0 && movxy >0 && vcortar ==0 && vescalar ==0 && vmover >0)
        {
             setcolor(LIGHTGRAY);
             circle(300,100,20);
             setfillstyle(SOLID_FILL,LIGHTGRAY);
             floodfill(x1,y1,LIGHTGRAY);
             
             while(!kbhit())  /*movimiento de figura*/
              {  
              setcolor(vColor);  
              circle(col,100,30);  
              delay(50); 

              setcolor(LIGHTGRAY);  
              circle(col,100,30);  
              delay(55); 

              col++;  
              if(col>=300) 
              {
                col=150; 
              } 
                             
              }   
        }


        if( vFigura ==1 && vColor> 0 && movxy >0 && vcortar>0 && vescalar ==0 && vmover ==0){
             setcolor(LIGHTGRAY);
             circle(300,100,20);
             setfillstyle(SOLID_FILL,LIGHTGRAY);
             floodfill(x1,y1,LIGHTGRAY);
          }

        if(vFigura ==2 && vColor> 0 && movxy == 0 )
        { 
          setcolor(WHITE);
          rectangle(300,100,350,150);
          setfillstyle(SOLID_FILL,vColor);
          floodfill(310,110,WHITE);
        }

        if(vFigura ==2 && vColor> 0 && movxy >0  && vcortar ==0 && vescalar >0 && vmover ==0)
        {
             setcolor(LIGHTGRAY);
             circle(300,100,20);
             setfillstyle(SOLID_FILL,LIGHTGRAY);
             floodfill(x1,y1,LIGHTGRAY);

             setcolor(WHITE);
             rectangle(200,100,450,300);
             setfillstyle(SOLID_FILL,vColor);
             floodfill(310,110,WHITE);            
        }

        if(vFigura ==2 && vColor> 0 && movxy >0  && vcortar ==0 && vescalar ==0 && vmover ==0)
        {         
          y1 +=50;
          y2 +=50;
          x1 +=50;
          x2 +=50;
          setcolor(WHITE);
          rectangle(x1,y1,x2,y2);
          setfillstyle(SOLID_FILL,vColor);
          floodfill(x1+1,y1+1,WHITE);
          
        }

         if(vFigura ==2 && vColor> 0 && movxy >0 && vcortar>0 && vescalar ==0 && vmover ==0){  
            setcolor(LIGHTGRAY);
            rectangle(300,100,350,150);
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            floodfill(310,110,LIGHTGRAY);
         }

         if(vFigura ==2 && vColor> 0 && movxy >0 && vcortar==0 && vescalar ==0 && vmover >0){  
            setcolor(LIGHTGRAY);
            rectangle(300,100,350,150);
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            floodfill(310,110,LIGHTGRAY);

            while(!kbhit())  /*movimiento de figura*/
              {  
              setcolor(vColor);  
              rectangle(col,100,col+50,150);
              delay(50); 

              setcolor(LIGHTGRAY);  
              rectangle(col,100,col+50,150);
              delay(55); 

              col++;  
              if(col>=300) 
              {
                col=150; 
              } 
                             
              } 
         }



         if(vFigura ==3 && vColor> 0 && movxy == 0 )
        {
          setcolor(WHITE);
          ellipse (300,100,0,360,20,10);
          setfillstyle(SOLID_FILL,vColor);
          floodfill(300,100,WHITE);
        }  
        if(vFigura ==3 && vColor> 0 && movxy >0  && vcortar ==0 && vescalar ==0 && vmover ==0){   
          x1 +=50;
          y1 +=50;          
          setcolor(WHITE);
          ellipse (x1,y1,0,360,20,10);
          setfillstyle(SOLID_FILL,vColor);
          floodfill(x1,y1,WHITE);
          
        }
        if(vFigura ==3 && vColor> 0 && movxy >0  && vcortar ==0 && vescalar >0 && vmover ==0){  

          setcolor(LIGHTGRAY);
          ellipse (300,100,0,360,20,10);
          setfillstyle(SOLID_FILL,LIGHTGRAY);
          floodfill(300,100,LIGHTGRAY);

          setcolor(WHITE);
          ellipse (300,100,0,360,80,20);
          setfillstyle(SOLID_FILL,vColor);
          floodfill(300,100,WHITE);

        }

        if(vFigura ==3 && vColor> 0 && movxy >0 && vcortar==0 && vescalar ==0 && vmover >0)
        { 

          setcolor(LIGHTGRAY);
          ellipse (300,100,0,360,20,10);
          setfillstyle(SOLID_FILL,LIGHTGRAY);
          floodfill(300,100,LIGHTGRAY);

          while(!kbhit())  /*movimiento de figura*/
          {  
              setcolor(vColor);  
              ellipse (col,100,0,360,20,10);
              delay(50); 

              setcolor(LIGHTGRAY);  
               ellipse (col,100,0,360,20,10);
              delay(55); 

              col++;  
              if(col>=300) 
              {
                col=150; 
              } 
                             
          } 
 

        }

        if(vFigura ==3 && vColor> 0 && movxy >0 && vcortar>0 && vescalar ==0 && vmover ==0){   
          setcolor(LIGHTGRAY);
          ellipse (300,100,0,360,20,10);
          setfillstyle(SOLID_FILL,LIGHTGRAY);
          floodfill(300,100,LIGHTGRAY);

        }

        if(vFigura ==4 && vColor> 0  && movxy == 0 )
        {
           setcolor(WHITE);
           line (300,100,350,100);         
        }  

        if(vFigura ==4 && vColor> 0 && movxy >0  && vcortar ==0 && vescalar ==0 && vmover ==0){ 
            x1 +=50;
            x2 +=50;
           setcolor(WHITE);
           line (x1,100,x2,100); 
        }

        if(vFigura ==4 && vColor> 0 && movxy >0 && vcortar>0 && vescalar ==0 && vmover ==0){ 
          setcolor(LIGHTGRAY);
           line (300,100,350,100); 
        }

        if(vFigura ==4 && vColor> 0 && movxy >0  && vcortar ==0 && vescalar >0 && vmover ==0)
          {
            setcolor(LIGHTGRAY);
            line (300,100,350,100); 
            
           setcolor(WHITE);
           line (x1,50,x2,300);

          }
          if(vFigura ==4 && vColor> 0 && movxy >0  && vcortar ==0 && vescalar ==0 && vmover >0)
          {
            while(!kbhit())  /*movimiento de figura*/
              {  
              setcolor(vColor);  
              line (col,100,col+50,100); 
              delay(50); 

              setcolor(LIGHTGRAY);  
              line (col,100,col+50,100); 
              delay(55); 

              col++;  
              if(col>=300) 
              {
                col=150; 
              } 
                             
          } 

          }

  }

int acciones (int x, int y)
{   

  if(  x>408 && x<474 && y>=64 && y<= 77 ){
         return 1; /*Mover*/
  } 

  if( x>408 && x<474 && y>=78 && y<= 87){
        return 2; /*Cortar*/
  }

  if( x>408 && x<474 && y>=88 && y<= 97 ){
       return 3; /*Pegar*/
  } 

  if(  x>408 && x<474 && y>=98 && y<= 107 ){
      return 4; /*Copiar*/
  }

  if(  x>408 && x<474 && y>=108 && y<= 117){
      return 5; /*Eliminar*/
  }

  if(  x>408 && x<474 && y>=118 && y<= 127){
      return 6; /*Seleccionar*/
  }

  if(x>408 && x<474 && y>=128 && y<= 137){
      return 7; /*Rotacion*/
  }

  if(x>408 && x<474 && y>=138 && y<= 147){
    return 8;  /*Escalacion*/
  }

  if( x>408 && x<474 && y>=147 && y<= 157){
    return 9; /*Traslacion*/
  }

    return 0; /*no realiza nada*/
} /*menu de la ultima pantalla*/


