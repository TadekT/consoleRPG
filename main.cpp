#include<iostream>
#include"heder/warrior.h"

int main(){

    Warrior boo__("bob");
    Warrior auc__("auc");
    std::cout<<auc__.getHP()<<"\n";
    std::cout<<boo__.getHP()<<"\n";

    boo__.attack(auc__,boo__);

    std::cout<<auc__.getHP()<<"\n";

    std::cout<<boo__.getLevel()<<"\n";

    boo__.addXp(11);

    std::cout<<boo__.getLevel()<<"\n";
    
    return 0;
}