#pragma once
#include <string>

namespace rpg {
class CharacterClass 
{
public:
    enum Type {
        Fighter,
        Priest,
        Mage
    };
private:
    Type classType;
public:
    static const CharacterClass Fighter;
    static const CharacterClass Priest;
    static const CharacterClass Mage;

    CharacterClass(Type type) : classType(type) {}
    CharacterClass& operator=(const CharacterClass&) = delete;

    Type getType() const { return classType; }

    std::string getName() const {
        switch (classType) {
            case Fighter: return "Fighter";
            case Priest:  return "Priest";
            case Mage:    return "Mage";
            default:      return "Unknown";
        }
    }

    static int getRequiredXPForLevel(int level) {
        if (level < 1 || level > 20) return -1;
        return 50 * level * (1+level);
    }
};
};