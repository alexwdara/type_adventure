#include <iostream>
#include <cmath>
#include <string>

enum Direction{
    Up,
    Down,
    Left,
    Right

};



struct player
{
    int row;
    int column;
    
    void start (int r, int c){
        row = r;
        column = c;
    }

        void move (Direction way){
            switch (way)
            {
                case Up:
                row--;
                break;

                case Down:
                row++;
                break;

                case Left:
                column--;
                break;

                case Right:
                column++;
                break;
            
                default:
                    break;
            }
        }
};

int main()
{
    player Thomas;
    Thomas.start (1,4);
    Thomas.move (Up);
    return 0;
}