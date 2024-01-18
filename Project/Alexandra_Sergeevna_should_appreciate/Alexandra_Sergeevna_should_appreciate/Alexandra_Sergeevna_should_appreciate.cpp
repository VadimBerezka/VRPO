#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int N; // когда в гл.меню
    cout << "Игра 21 \nВаша задача набрать больше очков чем у бота. Если вы наберете больше 21 очка, вы проиграете!\n";

    while (true) {
        cout << "\n1.Начать игру\n2.Выйти из игры\n";
        cin >> N;

        switch (N) {
        case 1:
            playGame();
            break;
        case 2:
            cout << "Вы вышли из игры.\n";
            return 0;
        default:
            cout << "Пожалуйста, введите корректное значение\n\n";

        }
    }
        return 0;
}
   
