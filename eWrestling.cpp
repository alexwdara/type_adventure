#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Wrestler{
    string name;
    string weight;
    string origin;
    string special_move;
};

//string name, string weight, string special_move, string origin
void wrestler_info (string place, Wrestler &x){
    string name, weight, special_move, origin;
    std::cout << "Please enter the " << place <<  " wreslters name !" << std::endl;
    std::getline(std::cin, name);
    x.name = name;
    std::cout << "Please enter " << name << "'s weight!" << std::endl;
    std::getline(std::cin, weight);
    x.weight = weight;
    std::cout << "Where is " << name << " from?" << std::endl;
    std::getline(std::cin, origin);
    x.origin = origin;
    std::cout << "What is " << name << "'s special move?" <<std::endl;
    std::getline(std::cin, special_move);
    x.special_move = special_move;
    }

int main ()
{
    // Inputting information for wrestler 1
    Wrestler w1;
    wrestler_info ("first", w1);
    Wrestler w2;
    wrestler_info ("second", w2);

    std::cout << "Two fighters from different parts of the globe come to fight! " << w1.name << " from " << w1.origin << "! He weighs " << w1.weight << " lbs and has the strength of two deers!" << std::endl;
    std::cout << "Our second fighter comes from " << w2.origin << ", weighing at " << w2.weight << ". Make a round of applause for " << w2.name << "!!!" << std::endl;


    return 0;
}