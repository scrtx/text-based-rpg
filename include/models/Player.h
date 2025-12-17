#include"Stat.h"
#include"CharacterClass.h"

class Player 
{
private:
	rpg::Stat baseStats;
	int currentHP;
	int level;
	int expPoints;
    //rpg::CharacterClass &assignedClass;
public:
    Player() : 
        baseStats(0, 0, 0, 0), 
        currentHP(0), 
        level(1), 
        expPoints(0)
	{};
    int getLevel() const { return level; }
    int getCurrentHP() const { return currentHP; }
    const rpg::Stat& getBaseStats() const { return baseStats; }
    void createNewPlayer(const rpg::Stat& stats);
    void takeDamage(int dmg);
    void gainXP(int xpValue);
    void levelUp();
};
