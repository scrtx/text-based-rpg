#ifndef PLAYER_H
#define PLAYER_H

#include "Stat.h"
#include "CharacterClass.h"

class Player 
{
private:
    rpg::Stat baseStats;
    int currentHP;
    int level;
    int expPoints;
    // rpg::CharacterClass &assignedClass;

public:
    Player();  // Constructor declaration
    int getLevel() const;
    int getCurrentHP() const;
    const rpg::Stat& getBaseStats() const;
    void createNewPlayer(const rpg::Stat& stats);
    void takeDamage(int damageAmount);
    void gainXP(int xpValue);
    void levelUp();
};

#endif