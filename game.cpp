//
// Created by YakirLaptop on 24/06/2019.
//

#include <iostream>
#include "game.h"
void game::Game() {
    cout<<"Objective : get all the $'s before they fill more than 50% of the board!"<<endl;
    cout<<"Contorls :"<<endl;
    cout<<"UP - 8"<<endl;
    cout<<"DOWN - 2"<<endl;
    cout<<"LEFT - 4"<<endl;
    cout<<"RIGHT - 6"<<endl;
    p->print();
    while (cin && p->checkBoard()) {
        int m;
        cin >> m;
        p->addFruit();
        p->move(m);
        turns++;
    }
    cout<<"You survived "<<turns<<" turns, good for you!"<<endl;
}