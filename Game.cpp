#include <iostream>
#include "Game.h"
#include <vector>
#include "Player.h"
#include "Enemy.h"
using namespace std;

void Game::start() {
    cout << "Welcome to the Game!" << endl;

    // Create a player
    Player player("Hero");
    players.push_back(player);

    // Create an enemy
    Enemy enemy("Goblin", 50, 5);
    enemies.push_back(enemy);

    // Display player stats
    players[0].displayStats();

    // Simulate a battle
    while (players[0].isAlive() && enemies[0].isAlive()) {
        players[0].attackEnemy();
        enemies[0].takeDamage(players[0].getAttack());

        if (enemies[0].isAlive()) {
            cout << "Enemy attacks!" << endl;
            players[0].takeDamage(enemies[0].getAttack());
        }
    }

    if (players[0].isAlive()) {
        cout << "You defeated the enemy!" << endl;
        players[0].gainXP(50);
        players[0].displayStats();
    } else {
        cout << "You were defeated by the enemy." << endl;
    }
}