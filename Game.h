#ifndef GAME_H
#define GAME_H
#include <vector>
#include "KenoNumbers.h"
#include "Player.h"

class Game {
private:
    KenoNumbers m_keno;
    Player m_player;
    std::vector<int> m_matches;
public:
    Game();
    void printMatches(std::vector<int>playerPicks,std::vector<int>kenoNumbers);
    void displayResults();
    void playGame();
};

#endif //GAME_H
