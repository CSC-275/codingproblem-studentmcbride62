#ifndef KENONUMBERS_H
#define KENONUMBERS_H
#include <vector>

class KenoNumbers {
private:
    std::vector<int> m_kenoNumbers;
public:
    void generateNumbers();
    std::vector <int> getKenoNumbers();
    void printKenoNumbers();
    void clearKenoNumbers();
};

#endif //KENONUMBERS_H
