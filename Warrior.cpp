#include "Warrior.hpp"

Warrior::Warrior()
{
    atk = 100;
}

Warrior::Warrior(string newName, int newLife, int newAtk) : Character(newName, newLife)
{
    atk = newAtk;
}

void Warrior::display() const
{
    cout << "Ceci est un guerrier." << endl;
}

string Warrior::getWeapon() const
{
    return "Épée";
}
