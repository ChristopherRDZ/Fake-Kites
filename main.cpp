#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <list>

#define Arriba 72
#define Abajo 80
#define Izquierda 75
#define Derecha 77


void Gotoxy(int x, int y){
    HANDLE Con;
    Con = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Pos;
    Pos.X= x;
    Pos.Y= y;
    SetConsoleCursorPosition(Con,Pos);

}

void Bordes(){
    for (int i=3;i<117;i++){
        Gotoxy(i,2); printf("%c",205);
        Gotoxy(i,27); printf("%c",205);
    }
    for (int i=3;i<28;i++){
        Gotoxy(117,i); printf("%c",186);
        Gotoxy(3,i); printf("%c",186);
    }
    Gotoxy(117,27); printf("%c",188);
    Gotoxy(3,27); printf("%c",200);
    Gotoxy(3,2); printf("%c",201);
    Gotoxy(117,2); printf("%c",187);
}

void Borrar_Cuenta(){
        Gotoxy (52,15); printf ("         ");
        Gotoxy (43,13); printf ("                         ");
        Gotoxy (43,17); printf ("                         ");
}

void tam_consola(){
    HANDLE wHnd;
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, 122, 29};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
}

/* int Cuenta_Atras(){
    int f=0;
        for (int i=10;i>=1;i--){
        Gotoxy (52,15); printf ("        ");
        Gotoxy (52,15); printf ("%d",i);
        Gotoxy (54,15); printf (". . . ");
        Gotoxy (43,13); printf ("Do you want to continue?");
        Gotoxy (43,17); printf ("Press enter to continue.");
        Sleep (1000);
            if (GetAsyncKeyState(VK_RETURN)){
                    f=1;
                    break;
            }
        }
    if (f==1){
        Borrar_Cuenta();
        JA=true;
    }
}
*/
void Ocultar_Mouse(){
    HANDLE Con;
    Con = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO uwu;
    uwu.dwSize = 1;
    uwu.bVisible = false;
    SetConsoleCursorInfo(Con,&uwu);
}

void Menu(){
    for (int i=3;i<117;i++){
        Gotoxy(i,1); printf("%c",205);
        Gotoxy(i,27); printf("%c",205);
    }
    for (int i=1;i<28;i++){
        Gotoxy(117,i); printf("%c",186);
        Gotoxy(3,i); printf("%c",186);
    }
    Gotoxy(117,27); printf("%c",188);
    Gotoxy(3,27); printf("%c",200);
    Gotoxy(3,1); printf("%c",201);
    Gotoxy(117,1); printf("%c",187);

    Gotoxy(30+6,3); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(30+6,4); printf  ("%c",219);
    Gotoxy(30+6,5); printf  ("%c%c",219,219);
    Gotoxy(30+6,6); printf ("%c",219);
    Gotoxy(30+6,7); printf ("%c",219);
    Gotoxy(35+6,3); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(35+6,4); printf  ("%c  %c",219,219);
    Gotoxy(35+6,5); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(35+6,6); printf ("%c  %c",219,219);
    Gotoxy(35+6,7); printf ("%c  %c",219,219);
    Gotoxy(40+6,3); printf  ("%c  %c",219,219);
    Gotoxy(40+6,4); printf  ("%c %c",219,219);
    Gotoxy(40+6,5); printf  ("%c%c",219,219);
    Gotoxy(40+6,6); printf ("%c %c",219,219);
    Gotoxy(40+6,7); printf ("%c  %c",219,219);
    Gotoxy(45+6,3); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(45+6,4); printf  ("%c",219);
    Gotoxy(45+6,5); printf  ("%c%c%c",219,219,219);
    Gotoxy(45+6,6); printf ("%c",219);
    Gotoxy(45+6,7); printf ("%c%c%c%c",219,219,219,219);
    Gotoxy(52+6,3); printf  ("%c  %c",219,219);
    Gotoxy(52+6,4); printf  ("%c %c",219,219);
    Gotoxy(52+6,5); printf  ("%c%c",219,219);
    Gotoxy(52+6,6); printf ("%c %c",219,219);
    Gotoxy(52+6,7); printf ("%c  %c",219,219);
    Gotoxy(57+6,3); printf  ("%c%c",219,219);
    Gotoxy(57+6,4); printf  ("%c%c",219,219);
    Gotoxy(57+6,5); printf  ("%c%c",219,219);
    Gotoxy(57+6,6); printf ("%c%c",219,219);
    Gotoxy(57+6,7); printf ("%c%c",219,219);
    Gotoxy(60+6,3); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(61+6,4); printf  ("%c%c",219,219);
    Gotoxy(61+6,5); printf  ("%c%c",219,219);
    Gotoxy(61+6,6); printf ("%c%c",219,219);
    Gotoxy(61+6,7); printf ("%c%c",219,219);
    Gotoxy(65+6,3); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(65+6,4); printf  ("%c",219);
    Gotoxy(65+6,5); printf  ("%c%c%c",219,219,219);
    Gotoxy(65+6,6); printf ("%c",219);
    Gotoxy(65+6,7); printf ("%c%c%c%c",219,219,219,219);
    Gotoxy(70+6,3); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(70+6,4); printf  ("%c",219);
    Gotoxy(70+6,5); printf  ("%c%c%c%c",219,219,219,219);
    Gotoxy(70+6,6); printf ("   %c",219);
    Gotoxy(70+6,7); printf ("%c%c%c%c",219,219,219,219);
    Gotoxy(54,12); printf  ("Play.");
    Gotoxy(54,16); printf  ("Credits.");
    Gotoxy(54,20); printf  ("Exit.");
    Gotoxy(18,15);   printf("   %c ",193);
    Gotoxy(18,16); printf("  %c%c%c ",223,223,223);
    Gotoxy(18,17); printf(" %c%c%c%c%c",223,223,223,223,223);
    Gotoxy(102,15);   printf("   %c ",193);
    Gotoxy(102,16); printf("  %c%c%c ",223,223,223);
    Gotoxy(102,17); printf(" %c%c%c%c%c",223,223,223,223,223);
}

class Nave{
    int x,y;
    int cora;
    int vidas;
public:
    int jeje=vidas;
    Nave(int _x, int _y,int _cora,int _vidas): x(_x), y(_y), cora(_cora), vidas(_vidas){}
    int X(){
        return x;
    }
    int Y(){
        return y;
    }
    void CO(){
        cora--;
    }
    int VI(){
        return vidas;
    }
    void Pintar();
    void Borrar();
    void Mover();
    void corazon();
    void morir();

};

void Nave::Pintar(){
    Gotoxy(x,y);   printf("   %c ",193);
    Gotoxy(x,y+1); printf("  %c%c%c ",223,223,223);
    Gotoxy(x,y+2); printf(" %c%c%c%c%c",223,223,223,223,223);
}

void Nave::Borrar(){
    Gotoxy(x,y);   printf("        ");
    Gotoxy(x,y+1); printf("        ");
    Gotoxy(x,y+2); printf("        ");
}

void Nave::Mover(){
    if (kbhit()){
            char tecla = getch();
            Borrar();
            if ((tecla == Izquierda) && (x>4) )   x--;
            if ((tecla == Derecha) && (x+6<115) ) x++;
            if ((tecla == Arriba) && (y>5) )      y--;
            if ((tecla == Abajo) && (y+2<26) )    y++;
            Pintar();
        }

}

void Nave::corazon(){
    Gotoxy(60,1); printf ("Vidas: %d",jeje);
    Gotoxy(80,1); printf ("Salud:");
    Gotoxy(87,1); printf ("           ");
    for (int f=0;f<cora;f++){
        Gotoxy(87+f,1); printf ("%c",219);
    }
}

void Nave::morir(){
   if (cora==0){
        Borrar();
        Gotoxy(x,y);   printf ("   F    ");
        Gotoxy(x,y+1); printf ("  FFF   ");
        Gotoxy(x,y+2); printf (" FFFFF  ");
        Sleep(600);
        Borrar();
        Gotoxy(x,y);   printf ("F      F  ");
        Gotoxy(x,y+1); printf ("   FF     ");
        Gotoxy(x,y+2); printf ("F      F  ");
        Sleep(600);
        Borrar();
        jeje--;
        cora=3;
        Pintar();
   }
}


class Meteoro {
    int x,y;
public:
    int X(){return x;}
    int Y(){return y;}
    Meteoro(int _x, int _y): x (_x), y (_y){}
    void pintar_Meteoro();
    void mover_Meteoro();
    void colision(Nave &A);

};

void Meteoro::pintar_Meteoro(){
    Gotoxy(x,y); printf  ("%c",178);
}

void Meteoro::mover_Meteoro(){
    Gotoxy(x,y); printf (" ");
    y++;
    if (y>26){
        x = rand()%108 + 4;
        y = 3;
    }
    pintar_Meteoro();
}

void Meteoro::colision(Nave &A){
    if (x >= A.X() && x < A.X()+6 && y > A.Y() && y <= A.Y()+3 ){
        A.CO();
        A.Borrar();
        A.Pintar();
        A.corazon();
        x = rand()%108 + 4;
        y = 3;
    }
}

class balas{
    int x,y;
public:
    int X(){return x;}
    int Y(){return y;}
    balas(int _x, int _y): x (_x), y (_y){}
    void mover();
    bool lim();
};

void balas::mover(){
    Gotoxy(x,y); printf (" ");
    y--;
    Gotoxy(x,y); printf ("*");
}

bool balas::lim(){
    if (y==3){
        return true;
    }else{
        return false;
    }
}

class Flecha_Menu{
    int x,y;
public:
    Flecha_Menu (int _x, int _y): x (_x), y (_y){}
    int X(){ return x; }
    int Y(){ return y; }
    void Borrar();
    void Mover();
    void pintar();
    void Limite();
};

void Flecha_Menu::pintar(){
    Gotoxy(x,y); printf ("-->");
}

void Flecha_Menu::Borrar(){
    Gotoxy(x,y); printf("   ");
}

void Flecha_Menu::Limite(){
    if (y<12){
        y=20;
    }
    if (y>20){
        y=12;
    }
}

void Flecha_Menu::Mover(){
    if (kbhit()){
        char goku;
        goku=getch();
        Borrar();
        if (goku == Arriba) y=y-4;
        if (goku == Abajo)  y=y+4;
        Limite();
        pintar();
    }
}


using namespace std;

int main()
{
    Ocultar_Mouse();
    tam_consola();
    Flecha_Menu UwU(50,12);
    Menu();
    int puntos=0;
    list <balas*> B;
    list <balas*>::iterator it;
    list <Meteoro*> M;
    list <Meteoro*>::iterator ft;

    bool Fin = false;
    bool Ini=false;
    while(Ini==false){
        bool gg=false;
        bool gg1=false;
        UwU.pintar();
        UwU.Mover();
        if (GetAsyncKeyState(VK_RETURN)){
            if (UwU.Y() == 12){
                system("cls");
                Bordes();
                Nave N(55,24,3,3);
                N.Pintar();
                N.corazon();
                Gotoxy(2,1); printf("Puntos: %d",puntos);
                for (int i=0;i<4;i++){
                    M.push_back(new Meteoro(rand()%100 + 4, 3));
                }
                while(Fin == false){
                    if (kbhit()){
                        char pul;
                        pul=getch();
                        if (GetAsyncKeyState(0X20))
                            B.push_back(new balas(N.X()+3,N.Y()-1));
                    }
                    N.Mover();
                    for (it=B.begin(); it != B.end(); it++){
                       (*it)->mover();
                       if ((*it)->lim()==true){
                            Gotoxy((*it)->X(),(*it)->Y());
                            printf (" ");
                            delete(*it);
                            it =B.erase(it);
                       }
                    }
                    for (ft = M.begin() ; ft != M.end() ; ft++){
                        (*ft)->mover_Meteoro();
                        (*ft)->colision(N);
                    }

                    for(ft = M.begin() ; ft != M.end() ; ft++){
                        for (it = B.begin() ; it != B.end() ; it++){
                            if (((*ft)->X() == (*it)->X()) && ( (*ft)->Y() == (*it)->Y() || (*ft)->Y()+1 == (*it)->Y() )){
                                    Gotoxy((*it)->X(), (*it)->Y()); printf (" ");
                                    delete (*it);
                                    it = B.erase(it);

                                    M.push_back(new Meteoro(rand()%110 + 4, 3));
                                    Gotoxy((*ft)->X(), (*ft)->Y()); printf (" ");
                                    delete (*ft);
                                    ft =M.erase(ft);

                                    puntos=puntos+10;
                                    Gotoxy(2,1); printf("Puntos: %d",puntos);
                            }
                        }
                    }

                    N.morir();

                    if (N.jeje==0){
                        system("cls");
                        int f=0;
                        for (int i=5;i>=1;i--){
                            Gotoxy (52,15); printf ("        ");
                            Gotoxy (52,15); printf ("%d",i);
                            Gotoxy (54,15); printf (". . . ");
                            Gotoxy (43,13); printf ("Do you want to continue?");
                            Gotoxy (43,17); printf ("Press enter to continue.");
                            Sleep (1000);
                            if (GetAsyncKeyState(VK_RETURN)){
                                f=1;
                                break;
                            }
                        }
                        if (f==1){
                            Borrar_Cuenta();
                            Bordes();
                            N.Pintar();
                            N.corazon();
                            Gotoxy(2,1); printf("Puntos: %d",puntos);
                            N.jeje=3;
                        }else{
                            break;
                        }
                    }
                    Sleep(8);
                }
                system("cls");
                Gotoxy(54,14); printf ("Game Over.");
                Gotoxy(52,15); printf ("Tu record fue:");
                Gotoxy(57,16); printf ("%d",puntos);
                Sleep (2000);
                gg=true;
            }

            if (gg==true){
                system ("cls");
                Menu();
                UwU.pintar();
                UwU.Mover();
            }

            if (UwU.Y()==16){
                system ("cls");
                gg1=true;
                while (1==1){
                    Gotoxy (1,1); printf ("<- ESC.");
                    Gotoxy (37 ,15); printf ("Created by Christopher Gael Contla Rodriguez.");
                    char w;
                    w = getch();
                    if (w == 27 ) break;
                }
            }
            if (gg1==true){
                system ("cls");
                Menu();
                UwU.pintar();
                UwU.Mover();
            }
            if (UwU.Y()==20) break;
        }
    }
    return 0;
}

