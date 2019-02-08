#include    <iostream>
#include    <cmath>
#include    <string>

using namespace std;

int main ()
{
   string player_join;
   std::cout << "Enter yes, to play!" << std::endl;
   std::cin >> player_join;

//    if (player_join == "yes"){
//        std::cout << "Player 1 has entered the game!" << std::endl;
//    }
//    else{
//        std::cout << "Player is not known" << std::endl;
//    }

    while(player_join != "yes")
    {
        std::cout << "Player is not known" << std::endl;
        std::cout << "We do not accept this input" << std::endl;
        std::cout << "Enter yes, to play!" << std::endl;
        std::cin >> player_join;
    }
    std::cout << "Player 1 has entered the game!" << std::endl;

    
 return 0;   

}
