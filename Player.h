#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Player {
private:
    string name;
    int health;
    int maxHealth;
    int attack;
    int level;
    int xp;

public:
    Player(string name);

    void takeDamage(int damage);
    void heal(int amount);
    void attackEnemy();

    bool isAlive() const;

    int getHealth() const;
    int getAttack() const;
};