#include "game_logic.h"
#include "card.h"
#include "game.h"
#include <iostream>


using namespace std;

void proschet(int Z, int Y)
{
    if (Z < Y && Y <= 21)
        cout << "�� ���������. �� ������� ������ �����, ��� ���.\n";
    if (Z > Y && Z <= 21)
        cout << "�� ��������. �� ������� ������ �����, ��� ���.\n";
    if (Z > 21 && Y <= 21)
        cout << "�� ���������. � ��� �������.";
    if (Y > 21 && Z <= 21)
        cout << "�� ��������. � ���� �������.";
    if (Y == Z)
        cout << "��� �������. ���� ���� � ���� ����������.";
    if (Y > 21 && Z > 21)
        cout << "�����. � ��� � � ���� �������.\n";
    cout << "���� ��������.\n";
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
        cout << "������";
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
        cout << "������";
    }
    }
    return bot_Score;
}
