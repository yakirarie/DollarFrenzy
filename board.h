//
// Created by YakirLaptop on 24/06/2019.
//

#ifndef GAME_BOARD_H
#define GAME_BOARD_H
#define FRUIT '$'
#define EMPTY '*'
#define PLAYER 'P'
#include <vector>
using namespace std;
class board {
private:
    int size;
    vector<vector<char>> matrix;
public:
    board(): size{0}{};
    board(int newSize):size{newSize},matrix(newSize) {
        for (auto &i:matrix) {
            vector<char> vec(newSize,EMPTY);
            i = vec;
        }
    }
    vector<vector<char>>& getBoard() {return matrix;};
    int getSize() const {return size;};
    void addFruit();
    void print();
    bool checkBoard();

};


#endif //GAME_BOARD_H
