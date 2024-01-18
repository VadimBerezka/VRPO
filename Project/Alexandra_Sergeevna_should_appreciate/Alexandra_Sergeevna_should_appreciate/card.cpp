#include "card.h"
#include "game.h"
using namespace std;

int chislo_bot(int random_bot)
{
    if (random_bot == 0)
        cout << "[Последняя карта бота]: 7-ка.\n";
    else if (random_bot == 1)
        cout << "[Последняя карта бота]: 8-ка.\n";
    else if (random_bot == 2)
        cout << "[Последняя карта бота]: 9-ка.\n";
    else if (random_bot == 3)
        cout << "[Последняя карта бота]: 10-ка.\n";
    else if (random_bot == 4)
        cout << "[Последняя карта бота]: Валет.'2-очка'\n";
    else if (random_bot == 5)
        cout << "[Последняя карта бота]: Дама.'3-очка'\n";
    else if (random_bot == 6)
        cout << "[Последняя карта бота]: Король.'4-очка.'\n";
    else if (random_bot == 7)
        cout << "[Последняя карта бота]: Туз.'11-очков.'\n";
    return random_bot;
}

int chislo(int random_player)
{
    if (random_player == 0)
        cout << "[Выпавшая карта]: Вам выпала 7-ка.\n";
    else if (random_player == 1)
        cout << "[Выпавшая карта]: Вам выпала 8-ка.\n";
    else if (random_player == 2)
        cout << "[Выпавшая карта]: Вам выпала 9-ка.\n";
    else if (random_player == 3)
        cout << "[Выпавшая карта]: Вам выпала 10-ка.\n";
    else if (random_player == 4)
        cout << "[Выпавшая карта]: Вам выпал Валет.'2-очка'\n";
    else if (random_player == 5)
        cout << "[Выпавшая карта]: Вам выпала Дама.'3-очка'\n";
    else if (random_player == 6)
        cout << "[Выпавшая карта]: Вам выпал Король.'4-очка.'\n";
    else if (random_player == 7)
        cout << "[Выпавшая карта]: Вам выпал Туз.'11-очков'\n";

    return 0;
}
