#include <iostream>
#include <TXLib.h>

using namespace std;

void Real ();
void Bavaria ();
void Volga ();

int main()
{
    txCreateWindow ( 1250, 600);

    char komanda[20];

    cout << "Команда (1-Реал, 2-Бавария, 3-Волга)" << endl;
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
        txTextOut (50, 550, "Bayern Munich");
    }
    else if (strcmp(komanda, "3") == 0)
    {
        txTextOut (50, 550, "Volga");
    }



    txDeleteDC (FootballPole);

    return 0;
}

    void Real ()
    {
    txSelectFont ("Arial", 20, 0, FW_BOLD);

    txCircle (200, 130, 20);
    txCircle (200, 230, 20);
    txCircle (100, 300, 20);
    txCircle (200, 430, 20);
    txCircle (300, 300, 20);
    txCircle (400, 350, 20);
    txCircle (400, 200, 20);
    txCircle (450, 400, 20);
    txCircle (410, 250, 20);
    txCircle (310, 460, 20);

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

    void Bavaria ()
    {
    txSelectFont ("Arial", 20, 0, FW_BOLD);

    txCircle (200, 130, 20);
    txCircle (200, 230, 20);
    txCircle (100, 300, 20);
    txCircle (200, 430, 20);
    txCircle (300, 300, 20);
    txCircle (400, 350, 20);
    txCircle (400, 200, 20);
    txCircle (450, 400, 20);
    txCircle (410, 250, 20);
    txCircle (310, 460, 20);

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

    void Volga ()
    {
    txSelectFont ("Arial", 20, 0, FW_BOLD);

    txCircle (200, 130, 20);
    txCircle (200, 230, 20);
    txCircle (100, 300, 20);
    txCircle (200, 430, 20);
    txCircle (300, 300, 20);
    txCircle (400, 350, 20);
    txCircle (400, 200, 20);
    txCircle (450, 400, 20);
    txCircle (410, 250, 20);
    txCircle (310, 460, 20);

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
