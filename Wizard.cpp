#include "Wizard.hpp"

Wizard::Wizard()
{
    mana = 100;
}

Wizard::Wizard(string newName, int newLife, int newMana) : Character(newName, newLife)
{
    mana = newMana;
}

void Wizard::display() const
{
    cout << "Ceci est un mage." << endl;
}

string Wizard::getWeapon() const
{
    return "Bâton";
}