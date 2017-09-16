#include <iostream>
#include <TXLib.h>

using namespace std;


int main()
{
    txCreateWindow ( 1000, 600);

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
    }
    else if (strcmp(komanda, "2") == 0)
    {
        txTextOut (50, 550, "Bayern Munich");
    }
    else if (strcmp(komanda, "3") == 0)
    {
        txTextOut (50, 550, "Volga");
    }

    txCircle(200, 130, 20);
    txCircle(200, 230, 20);
    txCircle(100, 300, 20);
    txCircle(200, 430, 20);
    txCircle(300, 300, 20);
    txCircle(400, 350, 20);
    txCircle(400, 200, 20);
    txCircle(450, 400, 20);
    txCircle(410, 250, 20);
    txCircle(310, 460, 20);

    txDeleteDC (FootballPole);

    return 0;
}



