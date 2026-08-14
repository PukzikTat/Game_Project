#include <string>
using namespace std;

class Enemy {
private:
    string name;
    int health;
    int attack;

public:
    Enemy(string name, int health, int attack);

    void takeDamage(int damage);
    bool isAlive() const;
    int dropXP() const;

    int getHealth() const;
    int getAttack() const;
};