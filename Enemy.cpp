#include <string>
#include <iostream>
#include <vector>
#include "Enemy.h"
using namespace std;

Enemy::Enemy(string name, int health, int attack) {
    this->name = name;
    this->health = health;
    this->attack = attack;
}

void Enemy::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}   

int Enemy::dropXP() const {
    // Placeholder for XP drop logic
    return 50; // Example: Enemy drops 50 XP when defeated
}
bool Enemy::isAlive() const {
    return health > 0;
}
int Enemy::getHealth() const {
    return health;
}

bool Enemy::isAlive() const {
    return health > 0;
}