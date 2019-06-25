#include <iostream>
#include <time.h>
#include "board.h"
#include "player.h"
#include "game.h"

void welcome(){
    int size;
    cout<<"Please enter board size (greater than 1)"<<endl;
    cin>>size;
    if (size<1){
        cout<<"invalid size"<<endl;
        exit(1);
    }
    else{
        game g(size);
        g.Game();
    }
}

int main() {
    srand (time(NULL));

    welcome();

    return 0;
}
