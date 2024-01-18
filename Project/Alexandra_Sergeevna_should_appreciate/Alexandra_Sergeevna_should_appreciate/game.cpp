#include <iostream>
#include <cstdlib>
#include "game.h"
#include "game_logic.h"
#include "card.h"

using namespace std;


void playGame()

{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int G1 = 0, G2 = 0, G3 = 0, G4 = 0;
    int sum1_player = 0, sum2_player = 0, sum3_player = 0, sum4_player = 0, sum5_player = 0;
    int sum1_bot = 0, sum2_bot = 0, sum3_bot = 0, sum4_bot = 0, sum5_bot = 0;
    int GFINAL = 0;
    int player_Score = 0;
    int bot_Score = 0;
    int random_player = 0;
    int random_bot = 0;

        cout << "\n�� ������ ����, ������� �����...\n\n";
        random_player = rand() % 8;
        random_bot = rand() % 8;
        player_Score = randomplayer(random_player);
        bot_Score = randombot(random_bot);
        chislo(random_player);
        sum1_player = player_Score;
        sum1_bot = bot_Score;
        cout << "���� ����: " << sum1_player << endl;
        cout << "��������� ��������:\n1.����� ��� �����\n2.���������� \n��������! �� ������ ����� ����� ����� 4 ����!\n";
        cin >> G1;

        if (G1 == 1)
        {
            random_player = rand() % 8;
            random_bot = rand() % 8;
            player_Score = randomplayer(random_player);
            bot_Score = randombot(random_bot);
            chislo(random_player);
            sum2_player = player_Score + sum1_player;
            sum2_bot = bot_Score + sum1_bot;
            cout << "���� ����: " << sum2_player << endl;
            cout << "��������� ��������:\n1.����� ��� �����\n2.���������� \n��������! �� ������ ����� ����� ����� 4 ����!\n";
            cin >> G2;
        }
        else if (G1 == 2)
        {
            proschet(sum1_player, sum1_bot);
            chislo_bot(random_bot);
            cout << "���� ����: " << sum1_bot << endl;
        }

        if (G2 == 1)
        {
            random_player = rand() % 8;
            random_bot = rand() % 8;
            player_Score = randomplayer(random_player);
            bot_Score = randombot(random_bot);
            chislo(random_player);
            sum3_player = player_Score + sum2_player;
            sum3_bot = bot_Score + sum2_bot;
            cout << "���� ����: " << sum3_player << endl;
            cout << "��������� ��������:\n1.����� ��� �����\n2.���������� \n��������! �� ������ ����� ����� ����� 4 ����!\n";
            cin >> G3;
        }
        else if (G2 == 2) {
            proschet(sum2_player, sum2_bot);
            chislo_bot(random_bot);
            cout << "���� ����: " << sum2_bot << endl;
        }

        if (G3 == 1)
        {
            random_player = rand() % 8;
            random_bot = rand() % 8;
            player_Score = randomplayer(random_player);
            bot_Score = randombot(random_bot);
            chislo(random_player);
            sum4_player = player_Score + sum3_player;
            sum4_bot = bot_Score + sum3_bot;
            cout << "���� ����: " << sum4_player << endl;
            cout << "��������� ��������:\n1.����� ��� �����\n2.���������� \n��������! �� ������ ����� ����� ����� 4 ����!\n";
            cin >> G4;
        }
        else if (G3 == 2)
        {
            proschet(sum3_player, sum3_bot);
            chislo_bot(random_bot);
            cout << "���� ����: " << sum3_bot << endl;
        }

        if (G4 == 1)
        {
            random_player = rand() % 8;
            random_bot = rand() % 8;
            player_Score = randomplayer(random_player);
            bot_Score = randombot(random_bot);
            chislo(random_player);
            sum5_player = player_Score + sum4_player;
            sum5_bot = bot_Score + sum4_bot;
            cout << "���� ����: " << sum5_player << endl;
            cout << "��������� ��������: 1.����������\n";
            cin >> GFINAL;
        }
        else if (G4 == 2)
        {
            proschet(sum4_player, sum4_bot);
            chislo_bot(random_bot);
            cout << "���� ����: " << sum4_bot << endl;
        }

        if (GFINAL == 1) {
            proschet(sum5_player, sum5_bot);
            chislo_bot(random_bot);
            cout << "���� ����: " << sum5_bot << endl;
            system("Pause");
        }
    }