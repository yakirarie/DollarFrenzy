//
// Created by YakirLaptop on 24/06/2019.
//
#include <random>
#include <iostream>


#include "board.h"
void board::addFruit() {
    int x = rand()%size;
    int y = rand()%size;
    while (matrix[x][y] == PLAYER || matrix[x][y] == FRUIT){
        x = rand()%size;
        y = rand()%size;
    }
    matrix[x][y] = FRUIT;

}
void board::print() {
    cout<<"-------------------"<<endl;
    for(auto i : matrix){
        for(char j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"-------------------"<<endl;
}

bool board::checkBoard() {
    int num_of_fruit = 0;
    for(auto i : matrix){
        for(char j : i){
            if (j==FRUIT)
                num_of_fruit++;
        }
    }
    return num_of_fruit<size*size*0.5;
}