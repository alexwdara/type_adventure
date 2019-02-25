#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum Actions{
    kick,
    punch,
    toss,
    grapple,
    slam,
    slap,
    knee
};

struct Wrestler{
    string name;
    string weight;
    string origin;
    string special_move;

    void attack (string act, Wrestler opponent){
        std::cout << name << " " << act << " " << opponent.name << " straight to the face! " << std::endl;  
    }
    void response_attack (string act, Wrestler opponent){
        std::cout << name << " responds by " << act << " " << opponent.name << " across the chest " << std::endl;
    }
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
    w1.attack ("kick", w2);
    w2.response_attack ("slapping", w1);
    std::cout << w2.name << " tries to finish off "<< w1.name << " with his special move " << w2.special_move << "!" << std::endl;
    std::cout << w1.name << " counters with his own secrete technique the " << w1.special_move << "!!! Oh the humanity!" << std::endl;
    std::cout << w2.name << " is completely out cold! " << w1.name << " lay's over " << w2.name << " and pin's him down for the win! " << w1.name << " is the winner!" << std::endl;

    return 0;
}