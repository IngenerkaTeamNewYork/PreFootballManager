#include <iostream>
#include "TXLib.h"

using namespace std;

void Real ();
void BayernMunich ();
void Volga ();
void Circle1 ();
void Circle2 ();

int main()
{
    txCreateWindow ( 1250, 600);

    char komanda[20];

    cout << "������� (1-����, 2-�������, 3-�����)" << endl;
    cin >> komanda;

    HDC FootballPole;
    FootballPole = txLoadImage ("FootballPole.bmp");
    txBitBlt (txDC(), 0, 0, 1000, 800, FootballPole, 0, 0);

    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txSelectFont ("Arial", 50, 0, FW_BOLD);

    if (strcmp(komanda, "1") == 0)
    {
        txTextOut (50, 550, "Real Madrid");
        Real ();
    }
    else if (strcmp(komanda, "2") == 0)
    {
        txTextOut (50, 550, "Bayren Munich");
        BayernMunich ();
    }
    else if (strcmp(komanda, "3") == 0)
    {
        txTextOut (50, 550, "Volga");
        Volga ();
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

    Circle2 ();
    }

    void Volga ()
    {
    txSelectFont ("Arial", 20, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    Circle1();

    txTextOut  (1000, 100, "����������� �����");
    txTextOut  (1000, 150, "������ ����");
    txTextOut  (1000, 200, "������� �������");
    txTextOut  (1000, 250, "������ �������");
    txTextOut  (1000, 300, "�������� ������");
    txTextOut  (1000, 350, "������� �������");
    txTextOut  (1000, 400, "������� �� �����");
    txTextOut  (1000, 450, "������ ����");
    txTextOut  (1000, 500, "�������� �����");
    txTextOut  (1000, 550, "�������� ����");
    txTextOut  (1000, 575, "���������� �������");

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);

   Circle2 ();
    }
