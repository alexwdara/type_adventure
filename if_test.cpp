#include    <iostream>
#include    <cmath>

using namespace std;

int main ()
{
   int player_join;
   std::cout << "Enter 1, to play!" << std::endl;
   std::cin >> player_join;

   if (player_join == 1)
   {
       std::cout << "Player 1 has entered the game!" << std::endl;
   }
   else
   {
       std::cout << "Player is not known" << std::endl;
   }
 return 0;   

}
