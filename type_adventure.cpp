#include    <iostream>
#include    <cmath>
#include    <stdint.h>
#include    <string>
#include    <list>

using namespace std;

void dungeon(int width, int height)
{
    int min = 1;
    int max = 256;

    if (width < min || width > max && height < min || height > max){
        std::cout << "The value's entered for dungeon are out of bounds!" << width << " " << height << std::endl;
    }
    else
    {
        string dugeon_space[width][height];
        std::cout << "Size of dungeon, " << width * height << std::endl;
    }
}

std::list <string> number_players()
{
    std::list <string> amount;
    int player_amount;
    std::cout << "Please press 1 to only have 1 player and 2 to have 2 players" << endl;
    std::cin >> player_amount >> endl;

    if (player_amount == 1){
        amount.push_back("Player_1"); 
        std::cout << "There is only 1 player" << std::endl;
    }
    else if (player_amount == 2){
        amount.push_back("Player_2");
        std::cout << "There are 2 players" << std::endl;
    }

    return amount;
}

int main()
{
    dungeon(0,0);
    number_players();

    return 0;
}

