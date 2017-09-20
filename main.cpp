#include <iostream>
#include "TXLib.h"
#include "cstdlib"

using namespace std;

void Title ();
void Real (const char* schemaKomandy);
void BayernMunich (const char* schemaKomandy);
void Volga (const char* schemaKomandy);
void Real2 ();
void BayernMunich2 ();
void Volga2 ();
void Circle1 (const char* schemaKomandy);
void Circle2 ();

int main()
{
    txCreateWindow ( 1250, 600);

    Title ();

    return 0;
}


void Title ()
{
    char komanda1[20];
    char komanda2[20];
    char schema_komanda1[20];

    cout << "������� (1-����, 2-�������, 3-�����)" << endl;
    cin >> komanda1;
    cout << "�������� ���������� (1-����, 2-�������, 3-�����)" << endl;
    cin >> komanda2;
    cout << "�������� c���� ���� (1, 2, 3)" << endl;
    cin >> schema_komanda1;

    if (strcmp(komanda1, komanda2) == 0)
    {
        system("cls");
        cout << "���������� �������!" << endl;
        Title () ;
    }

    HDC FootballPole;
    FootballPole = txLoadImage ("FootballPole.bmp");
    txBitBlt (txDC(), 0, 0, 1000, 800, FootballPole, 0, 0);

    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txSelectFont ("Arial", 50, 0, FW_BOLD);

    if (strcmp(komanda1, "1") == 0)
    {
        Real (schema_komanda1);
    }
    else if (strcmp(komanda1, "2") == 0)
    {
        BayernMunich (schema_komanda1);
    }
    else if (strcmp(komanda1, "3") == 0)
    {
        Volga (schema_komanda1);
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
    }

void Circle1 (const char* schemaKomandy)
{
    if (strcmp(schemaKomandy, "1") == 0)
    {
        txCircle (125, 300, 20);
        txCircle (200, 130, 20);
        txCircle (200, 200, 20);
        txCircle (200, 430, 20);
        txCircle (300, 385, 20);
        txCircle (310, 460, 20);
        txCircle (385, 350, 20);
        txCircle (400, 200, 20);
        txCircle (450, 352, 20);
        txCircle (480, 250, 20);
    }
    else if (strcmp(schemaKomandy, "2") == 0)
    {
        txCircle (25, 300, 20);
        txCircle (200, 130, 20);
        txCircle (200, 200, 20);
        txCircle (200, 430, 20);
        txCircle (300, 385, 20);
        txCircle (310, 460, 20);
        txCircle (385, 350, 20);
        txCircle (400, 200, 20);
        txCircle (450, 352, 20);
        txCircle (480, 250, 20);
    }

    else if (strcmp(schemaKomandy, "3") == 0)
    {
        txCircle (25, 300, 20);
        txCircle (200, 130, 20);
        txCircle (200, 200, 20);
        txCircle (200, 430, 20);
        txCircle (300, 385, 20);
        txCircle (310, 460, 20);
        txCircle (385, 350, 20);
        txCircle (400, 200, 20);
        txCircle (450, 444, 20);
        txCircle (480, 250, 20);
    }
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

void Real (const char* schemaKomandy)
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (50, 550, "Real Madrid");

    Circle1 (schemaKomandy);

    txSelectFont ("Arial", 20, 0, FW_BOLD);

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
    txTextOut  (1000, 575, "Navas");
}

void Real2 ()
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (550, 550, "Real Madrid");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    Circle2 ();
}

void BayernMunich (const char* schemaKomandy)
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (50, 550, "BayernMunich");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    Circle1 (schemaKomandy);

    txSelectFont ("Arial", 20, 0, FW_BOLD);
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
}

void BayernMunich2 ()
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (550, 550, "BayernMunich");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    Circle2 ();
}

void Volga (const char* schemaKomandy)
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (50, 550, "Volga");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    Circle1(schemaKomandy);

    txSelectFont ("Arial", 20, 0, FW_BOLD);
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
}

void Volga2 ()
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txTextOut (550, 550, "Volga");
    Circle2 ();
}
