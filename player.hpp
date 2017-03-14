#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include "common.hpp"
#include "board.hpp"


using namespace std;

class Player {
private:
    Side color;

public:
	Board *playerboard;

    Player(Side side);
    ~Player();

    Move *heuristicPlayer(Move *opponentsMove, int msLeft);
	Move *doMove(Move *opponentsMove, int msLeft);
	
    // Flag to tell if the player is running within the test_minimax context
    bool testingMinimax;
    
};

#endif
