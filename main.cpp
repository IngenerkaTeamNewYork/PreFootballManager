#include <iostream>
#include "TXLib.h"

using namespace std;

void Real ();
void BayernMunich ();
void Volga ();
void Real2 ();
void BayernMunich2 ();
void Volga2 ();
void Circle1 ();
void Circle2 ();

int main()
{
    txCreateWindow ( 1250, 600);

    char komanda1[20];
    char komanda2[20];

    cout << "Команда (1-Реал, 2-Бавария, 3-Волга)" << endl;
    cin >> komanda1;
    cout << "Выберите противника (1-Реал, 2-Бавария, 3-Волга)" << endl;
    cin >> komanda2;

    HDC FootballPole;
    FootballPole = txLoadImage ("FootballPole.bmp");
    txBitBlt (txDC(), 0, 0, 1000, 800, FootballPole, 0, 0);

    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txSelectFont ("Arial", 50, 0, FW_BOLD);

    if (strcmp(komanda1, "1") == 0)
    {
        txTextOut (50, 550, "Real Madrid");
        Real ();
    }
    else if (strcmp(komanda1, "2") == 0)
    {
        txTextOut (50, 550, "Bayren Munich");
        BayernMunich ();
    }
    else if (strcmp(komanda1, "3") == 0)
    {
        txTextOut (50, 550, "Volga");
        Volga ();
    }

    if (strcmp(komanda1, komanda2) == 0)
    {
        //error;
        return 0;
    }


    if (strcmp(komanda2, "1") == 0)
    {
        Real2 ();
    }
    else if (strcmp(komanda2, "2") == 0)
    {
        BayernMunich2 ();
    }
    else if (strcmp(komanda2, "3") == 0)
    {
        Volga2 ();
    }



    txDeleteDC (FootballPole);

    return 0;
}

    void Circle1 ()
    {
    txCircle (200, 130, 20);
    txCircle (200, 200, 20);
    txCircle (125, 300, 20);
    txCircle (200, 430, 20);
    txCircle (300, 385, 20);
    txCircle (385, 350, 20);
    txCircle (400, 200, 20);
    txCircle (450, 352, 20);
    txCircle (480, 250, 20);
    txCircle (310, 460, 20);
    }

    void Circle2 ()
    {
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);

    txCircle (800, 130, 20);
    txCircle (800, 230, 20);
    txCircle (900, 300, 20);
    txCircle (800, 430, 20);
    txCircle (700, 300, 20);
    txCircle (600, 350, 20);
    txCircle (600, 200, 20);
    txCircle (550, 400, 20);
    txCircle (590, 250, 20);
    txCircle (690, 460, 20);
    }

    void Real ()
    {
    txSelectFont ("Arial", 20, 0, FW_BOLD);

    Circle1 ();

    txTextOut  (1000, 100, "Ronaldo");
    txTextOut  (1000, 150, "Benzema");
    txTextOut  (1000, 200, "Bale");
    txTextOut  (1000, 250, "Mondric");
    txTextOut  (1000, 300, "Kroos");
    txTextOut  (1000, 350, "Casemiro");
    txTextOut  (1000, 400, "Marselo");
    txTextOut  (1000, 450, "Carvajai");
    txTextOut  (1000, 500, "Ramos");
    txTextOut  (1000, 550, "Pepe");
    txTextOut  (1000, 575, "Mavus");


    }
    void Real2 ()
    {
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txTextOut (550, 550, "Real Madrid");
    Circle2 ();
    }

    void BayernMunich ()
    {
   txSelectFont ("Arial", 20, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    Circle1 ();

    txTextOut  (1000, 100, "Lewandowski");
    txTextOut  (1000, 150, "Riberg");
    txTextOut  (1000, 200, "Muller");
    txTextOut  (1000, 250, "Robben");
    txTextOut  (1000, 300, "Thiago");
    txTextOut  (1000, 350, "Kroos");
    txTextOut  (1000, 400, "Alaba");
    txTextOut  (1000, 450, "Kimmicn");
    txTextOut  (1000, 500, "Boateng");
    txTextOut  (1000, 550, "Hummeis");
    txTextOut  (1000, 575, "Neuer");

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);

    }

    void BayernMunich2 ()
    {
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txTextOut (550, 550, "BayernMunich");
    Circle2 ();

    }

    void Volga ()
    {
    txSelectFont ("Arial", 20, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    Circle1();

    txTextOut  (1000, 100, "Нигматуллин Артур");
    txTextOut  (1000, 150, "Пасько Артём");
    txTextOut  (1000, 200, "Полянин Дмитрий");
    txTextOut  (1000, 250, "Маляка Дмитрий");
    txTextOut  (1000, 300, "Костюков Михаил");
    txTextOut  (1000, 350, "Шеляков Алексей");
    txTextOut  (1000, 400, "Леандро да Силва");
    txTextOut  (1000, 450, "Петров Илья");
    txTextOut  (1000, 500, "Саркисов Артур");
    txTextOut  (1000, 550, "Кухарчук Илья");
    txTextOut  (1000, 575, "Вдовиченко Николай");

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);


    }

    void Volga2 ()
    {
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txTextOut (550, 550, "Volga");
    Circle2 ();

    }
