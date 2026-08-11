#include <string>
using namespace std;

class Game{
public:
    void start();
private:
    vector<Player> players;
    vector<Enemy> enemies;
};