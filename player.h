//
// Created by YakirLaptop on 24/06/2019.
//

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "board.h"
#include <string>

class player {
private:
    int locationX;
    int locationY;
    board b;
public:
    player():locationX{0},locationY{0}{}
    player(const board& newBoard):b{newBoard.getSize()}{
        addPlayer();
        addFruit();
    }
    void move(const int& arrow);
    void addPlayer();
    void addFruit(){b.addFruit();};
    void print(){b.print();}
    bool checkBoard(){ return b.checkBoard();}

};


#endif //GAME_PLAYER_H
