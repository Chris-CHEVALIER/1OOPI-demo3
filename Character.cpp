#include "Character.hpp"

Character::Character()
{
    name = "";
    life = 100;
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}

void Character::display() const
{
    cout << "Ceci est un personnage" << endl;
}

Character::~Character()
{
}