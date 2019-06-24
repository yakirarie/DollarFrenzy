#include <iostream>
#include <time.h>
#include "board.h"
#include "player.h"
#include "game.h"
int main() {
    srand (time(NULL));
    game g(3);
    g.Game();

    return 0;
}