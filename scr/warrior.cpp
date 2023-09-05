#include "../heder/warrior.h"

Warrior::Warrior(std::string n)
:name_(n){};

int Warrior::getDamage(){return damage_;};

int Warrior::getHP(){return healthPoints_;};

void Warrior::levelUp(){
    if(xp_ >= 10){
        healthPoints_+=2;
        damage_ += 1;
        WarriorLevel_+=1;
        xp_ = 0;
    }
}
void Warrior::attack(Warrior &target, Warrior &aggressor){
    target.healthPoints_ -= aggressor.damage_; 
};

void Warrior::addXp(int x){
    xp_+=x;
    levelUp();
}

int Warrior::getLevel(){return WarriorLevel_;};
