#ifndef Warrior_H
#define Warrior_H

#include <string>

class Warrior{
private:
    std::string name_;
    int healthPoints_ = 10;
    int damage_ = 3;
    int xp_ = 0;
    int WarriorLevel_ = 1;
    

public:
    Warrior(std::string n);
    int getDamage();   
    int getHP();
    int getLevel();
    void levelUp();
    void attack(Warrior & target,Warrior & aggressor);
    void addXp(int x);
    
};




#endif //Warrior_H
