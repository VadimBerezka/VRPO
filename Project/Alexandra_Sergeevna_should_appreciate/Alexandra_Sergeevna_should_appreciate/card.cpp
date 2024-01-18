#include "card.h"
#include "game.h"
using namespace std;

int chislo_bot(int random_bot) {
    cout << "[Последняя карта бота]: ";
    switch (random_bot) {
    case 0:
        cout << "7-ка.\n";
        break;
    case 1:
        cout << "8-ка.\n";
        break;
    case 2:
        cout << "9-ка.\n";
        break;
    case 3:
        cout << "10-ка.\n";
        break;
    case 4:
        cout << "Валет.'2-очка'\n";
        break;
    case 5:
        cout << "Дама.'3-очка'\n";
        break;
    case 6:
        cout << "Король.'4-очка.'\n";
        break;
    case 7:
        cout << "Туз.'11-очков.'\n";
        break;
    default:
        cout << "Ошибка.\n";
        break;
    }
    return random_bot;
}

int chislo(int random_player) {
    cout << "[Выпавшая карта]: ";
    switch (random_player) {
    case 0:
        cout << "Вам выпала 7-ка.\n";
        break;
    case 1:
        cout << "Вам выпала 8-ка.\n";
        break;
    case 2:
        cout << "Вам выпала 9-ка.\n";
        break;
    case 3:
        cout << "Вам выпала 10-ка.\n";
        break;
    case 4:
        cout << "Вам выпал Валет.'2-очка'\n";
        break;
    case 5:
        cout << "Вам выпала Дама.'3-очка'\n";
        break;
    case 6:
        cout << "Вам выпал Король.'4-очка.'\n";
        break;
    case 7:
        cout << "Вам выпал Туз.'11-очков'\n";
        break;
    default:
        cout << "Ошибка.\n";
        break;
    }

    return 0;
}
