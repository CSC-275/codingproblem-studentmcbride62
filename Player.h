#ifndef CONSOLE_H
#define CONSOLE_H
#include <vector>

class Player {
private:
    std::vector<int> m_playerNumbers;
public:
    void inputPlayerNumbers();
    std::vector<int> getPlayerNumbers();
    void printPlayerNumbers();
    void clearPlayerNumbers();
};

#endif //CONSOLE_H
