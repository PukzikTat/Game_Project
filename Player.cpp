#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

Player::Player(string name) {
    this->name = name;
    this->health = 100;
    this->maxHealth = 100;
    this->attack = 10;
    this->level = 1;
    this->xp = 0;
}