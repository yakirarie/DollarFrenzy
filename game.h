//
// Created by YakirLaptop on 24/06/2019.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H

#include "board.h"
#include "player.h"

class game {
private:
    int turns;
    player* p;

public:
    game(): turns{0}{}
    game(int size):turns{0}{
        board b{size};
        p = new player{b};
    }
    void Game();
    ~game(){ delete p;}
};


#endif //GAME_GAME_H
