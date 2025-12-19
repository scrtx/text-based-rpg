#include "Player.h"
#include <iostream>

// Constructor definition
Player::Player() : baseStats(0, 0, 0, 0), currentHP(0), level(1), expPoints(0) {}

int Player::getLevel() const { return level; }
int Player::getCurrentHP() const { return currentHP; }
const rpg::Stat& Player::getBaseStats() const { return baseStats; }

void Player::gainXP(int xpValue) {
    this->expPoints += xpValue;
}

void Player::takeDamage(int damageAmount) {
    this->currentHP -= damageAmount;
}

void Player::levelUp() {
    level++;
    currentHP += 10; // Example: increase HP on level up
}
