#include "game_logic.h"
#include "card.h"
#include "game.h"
#include <iostream>


using namespace std;

void proschet(int Z, int Y)
{
    if (Z < Y && Y <= 21)
        cout << "Вы проиграли. Вы набрали меньше очков, чем бот.\n";
    if (Z > Y && Z <= 21)
        cout << "Вы выиграли. Вы набрали больше очков, чем бот.\n";
    if (Z > 21 && Y <= 21)
        cout << "Вы проиграли. У вас перебор.";
    if (Y > 21 && Z <= 21)
        cout << "Вы выиграли. У бота перебор.";
    if (Y == Z)
        cout << "Бот победил. Очки бота и ваши одинаковые.";
    if (Y > 21 && Z > 21)
        cout << "Ничья. У вас и у бота перебор.\n";
    cout << "Игра окончена.\n";
}

int randomplayer(int player)
{
    int player_Score = 0;
    switch (player)
    {
    case 0:
    {
        player_Score = 7;
        break;
    }
    case 1:
    {
        player_Score = 8;
        break;
    }
    case 2:
    {
        player_Score = 9;
        break;
    }
    case 3:
    {
        player_Score = 10;
        break;
    }
    case 4:
    {
        player_Score = 2;
        break;
    }
    case 5:
    {
        player_Score = 3;
        break;
    }
    case 6:
    {
        player_Score = 4;
        break;
    }
    case 7:
    {
        player_Score = 11;
        break;
    }
    default:
    {
        cout << "Ошибка";
    }
    }
    return player_Score;
}
int randombot(int bot) {
    int bot_Score = 0;
    switch (bot)
    {
    case 0:
    {
        bot_Score = 7;
        break;
    }
    case 1:
    {
        bot_Score = 8;
        break;
    }
    case 2:
    {
        bot_Score = 9;
        break;
    }
    case 3:
    {
        bot_Score = 10;
        break;
    }
    case 4:
    {
        bot_Score = 2;
        break;
    }
    case 5:
    {
        bot_Score = 3;
        break;
    }
    case 6:
    {
        bot_Score = 4;
        break;
    }
    case 7:
    {
        bot_Score = 11;
        break;
    }
    default:
    {
        cout << "Ошибка";
    }
    }
    return bot_Score;
}

