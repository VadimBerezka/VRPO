#include "card.h"
#include "game.h"
using namespace std;

int chislo_bot(int random_bot)
{
    if (random_bot == 0)
        cout << "[��������� ����� ����]: 7-��.\n";
    else if (random_bot == 1)
        cout << "[��������� ����� ����]: 8-��.\n";
    else if (random_bot == 2)
        cout << "[��������� ����� ����]: 9-��.\n";
    else if (random_bot == 3)
        cout << "[��������� ����� ����]: 10-��.\n";
    else if (random_bot == 4)
        cout << "[��������� ����� ����]: �����.'2-����'\n";
    else if (random_bot == 5)
        cout << "[��������� ����� ����]: ����.'3-����'\n";
    else if (random_bot == 6)
        cout << "[��������� ����� ����]: ������.'4-����.'\n";
    else if (random_bot == 7)
        cout << "[��������� ����� ����]: ���.'11-�����.'\n";
    return random_bot;
}

int chislo(int random_player)
{
    if (random_player == 0)
        cout << "[�������� �����]: ��� ������ 7-��.\n";
    else if (random_player == 1)
        cout << "[�������� �����]: ��� ������ 8-��.\n";
    else if (random_player == 2)
        cout << "[�������� �����]: ��� ������ 9-��.\n";
    else if (random_player == 3)
        cout << "[�������� �����]: ��� ������ 10-��.\n";
    else if (random_player == 4)
        cout << "[�������� �����]: ��� ����� �����.'2-����'\n";
    else if (random_player == 5)
        cout << "[�������� �����]: ��� ������ ����.'3-����'\n";
    else if (random_player == 6)
        cout << "[�������� �����]: ��� ����� ������.'4-����.'\n";
    else if (random_player == 7)
        cout << "[�������� �����]: ��� ����� ���.'11-�����'\n";

    return 0;
}
