#include <string>
#include <iostream>
#include <vector>
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
void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}
void Player::heal(int amount) {
    health += amount;
    if (health > maxHealth) {
        health = maxHealth;
    }
}
void Player::attackEnemy() {
    // Placeholder for attack logic
    cout << name << " attacks the enemy!" << endl;
}
void Player::gainXP(int amount) {
    xp += amount;
    if (xp >= 100) {
        levelUp();
    }
}
void Player::levelUp() {
    level++;
    maxHealth += 20;
    health = maxHealth;
    attack += 5;
    xp = 0;
    cout << name << " leveled up to level " << level << "!" << endl;
}
void Player::displayStats() const {
    cout << "Player: " << name << endl;
    cout << "Health: " << health << "/" << maxHealth << endl;
    cout << "Attack: " << attack << endl;
    cout << "Level: " << level << endl;
    cout << "XP: " << xp << "/100" << endl;
}