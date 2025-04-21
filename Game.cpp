#include<iostream>
#include "Game.h"

// complete the implementation of the Game class here

Game::Game() {
    playGame();
}

void Game::printMatches(std::vector<int>playerPicks,std::vector<int>kenoNumbers) {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 20; j++) {
            if(m_player.getPlayerNumbers().at(i) == m_keno.getKenoNumbers().at(j)) {
                m_matches.push_back(m_player.getPlayerNumbers().at(i));
            }
        }
    }
    for (auto i:m_matches) {
        std::cout << i << " ";
    }
}

void Game::displayResults() {
    std::cout <<"\n----------------------------------Results----------------------------------\n";
    std::cout<<"Keno Numbers: ";
    m_keno.printKenoNumbers();
    std::cout<<"Player Picks: ";
    m_player.printPlayerNumbers();
    std::cout<<"You matched: ";
    printMatches(m_player.getPlayerNumbers(),m_keno.getKenoNumbers());
    if (m_matches.size() > 0) {
        std::cout<<"\nMatching " << m_matches.size() << " of 20 numbers wins ";
        switch (m_matches.size()){
            case 10:
                std::cout<<"the GRAND PRIZE of $250,000";
            break;
            case 9:
                std::cout << "$2,500";
            break;
            case 8:
                std::cout<<"$250";
            break;
            case 7:
                std::cout<<"$50";
            break;
            case 6:
                std::cout<<"$10";
            break;
            case 5:
                std::cout<<"$5";
            break;
            default:
                std::cout<<"$0. Sorry, better luck next time.";
        }
    }
    else {
        std::cout << "\nSorry, you didn't have any matches.";
    }
}

void Game::playGame() {
    std::cout << " **************\n";
    std::cout << " * Play Keno! *\n";
    std::cout << " **************\n";
    char again = 'y';
    do {
        m_player.inputPlayerNumbers();
        m_keno.generateNumbers();
        displayResults();
        std::cout << "\n\nPlay again? (y/n): ";
        std::cin >> again;
        m_player.clearPlayerNumbers();
        m_keno.clearKenoNumbers();
        m_matches.clear();
    } while (tolower(again) == 'y');
    std::cout << "\n\nTHANKS FOR PLAYING!!\n";
}