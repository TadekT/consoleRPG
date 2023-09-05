#include "../heder/player.h"

Player::Player(std::string n)
:name_(n){};

int Player::getDamage(){return damage_;};

int Player::getHP(){return healtPoints_;};

void Player::levelUp(){
    if(xp_ >= 10){
        healtPoints_+=2;
        damage_ += 1;
        playerLevel_+=1;
        xp_ = 0;
    }
}
void Player::attack(Player &target, Player &aggressor){
    target.healtPoints_ -= aggressor.damage_; 
};

void Player::addXp(int x){
    xp_+=x;
    levelUp();
}

int Player::getLevel(){return playerLevel_;};
