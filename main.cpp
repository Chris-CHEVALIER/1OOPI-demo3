#include "Character.cpp"
#include "Wizard.cpp"
#include "Warrior.cpp"
#include <vector>

void introduce(Character &c)
{
    c.display();
}

int main()
{
    /* Character legolas;
    Wizard gandalf;
    Warrior aragorn;

    introduce(legolas);
    introduce(gandalf);
    introduce(aragorn); */

    Wizard *gandalf = new Wizard("Gandalf", 60, 120);

    vector<Character *> characters;
    characters.push_back(new Warrior("Legolas", 80, 70));
    characters.push_back(gandalf);
    characters.push_back(new Warrior("Aragorn", 100, 100));

    for (int i = 0; i < characters.size(); i++)
    {
        characters[i]->display();
        cout << characters[i]->getWeapon() << endl;
        delete characters[i];
        characters[i] = 0;
    }

    return 0;
}