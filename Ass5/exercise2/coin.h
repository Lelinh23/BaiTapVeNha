#ifndef COIN_H
#define COIN_H

#include <iostream>
using namespace std;

class Coin {
private:
   string sideUp;
public:
    Coin();
    void toss();
    string getSideUp();
};

#endif