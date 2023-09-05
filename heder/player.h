#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
private:
    std::string name_;
    int healtPoints_ = 10;
    int damage_ = 3;
    int xp_ = 0;
    int playerLevel_ = 1;
    

public:
    Player(std::string n);
    int getDamage();   
    int getHP();
    int getLevel();
    void levelUp();
    void attack(Player & target,Player & aggressor);
    void addXp(int x);
    
};




#endif //PLAYER_H
