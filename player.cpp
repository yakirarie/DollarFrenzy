//
// Created by YakirLaptop on 24/06/2019.
//
#define KEY_UP 8
#define KEY_DOWN 2
#define KEY_LEFT 4
#define KEY_RIGHT 6

#include <iostream>
#include "player.h"
void player::addPlayer() {

    int x = rand()%b.getSize();
    int y = rand()%b.getSize();
    locationX = x;
    locationY = y;
    b.getBoard()[x][y] = PLAYER;
}
void player::move(const int& arrow) {
    switch (arrow) {
        case KEY_UP:
            if (locationX-1<0)
                cout<<"You cant move there!"<<endl;
            else{
                b.getBoard()[locationX][locationY] = EMPTY;
                locationX--;
                b.getBoard()[locationX][locationY] = PLAYER;
                print();
            }
            break;
        case KEY_DOWN:
            if (locationX+1==b.getSize())
                cout<<"You cant move there!"<<endl;
            else{
                b.getBoard()[locationX][locationY] = EMPTY;
                locationX++;
                b.getBoard()[locationX][locationY] = PLAYER;
                print();
            }
            break;
        case KEY_LEFT:
            if (locationY-1<0)
                cout<<"You cant move there!"<<endl;
            else{
                b.getBoard()[locationX][locationY] = EMPTY;
                locationY--;
                b.getBoard()[locationX][locationY] = PLAYER;
                print();
            }
            break;
        case KEY_RIGHT:
            if (locationY+1==b.getSize())
                cout<<"You cant move there!"<<endl;
            else{
                b.getBoard()[locationX][locationY] = EMPTY;
                locationY++;
                b.getBoard()[locationX][locationY] = PLAYER;
                print();
            }
            break;
        default:
            cout << endl << "enter a valid input5" << endl;  // not arrow
            break;
    }

}

