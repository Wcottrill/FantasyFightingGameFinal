//Wesley Cottrill
//This is my work
#include <iostream>
#include "Armor.h"
#include "PowerUp.h"
#include "Weapon.h"
#include "Character.h"
#include <ctime>
#include <string>
#include <fstream>

using namespace std;
int main() {


    Character myHero(200, " Scooby Doo", 75);
    cout << myHero << endl;


    cout << "Our main protagonist Scooby Doo has awoken underwater in the town of Bikini Bottom with no Shaggy and no Scooby Snacks." << endl;
    cout << "It is a dark day for our character, and Scooby’s only way of living a happy life is to find his best friend." << endl;
    cout << "Upon his realization that Shaggy is nowhere near, he comes across a trading post.At the trading post our character meets a dealer by the name of SpongeBob, at the post Scooby is offered weapons, armor, and magical power ups." << endl;
  
    system("pause");
 
    


    int choice;
    int gold = 75;
    int weapon = 0;
    int armour = 0;
    int PowerUp = 0;
    

    system("cls");
    cout << "\n Item added - 75 gold" << endl;
    cout << "\n ";
    system("pause");

start:
    system("cls");
    cout << "\n Where do you go?" << endl;
    cout << "\n 1. Shop" << endl;
    cout << "\n 2. Advance" << endl;
    cout << "\n> ";
    cin >> choice;
    switch (choice) {
    shop:
    case 1:
        system("cls");
        cout << "\n Shop" << endl;
        cout << "\n Buy or sell?" << endl;
        cout << "\n 1. Buy" << endl;
        cout << "\n 11. Sell" << endl;
        cout << "\n 3. Go back" << endl;
        cout << "\n> ";
        cin >> choice;
        switch (choice) {
        buy:
        case 1:
            system("cls");
            cout << "\n Shop, Buy" << endl;
            cout << "\n What do you buy?" << endl;
            cout << "\n 1. Lightsaber    25 gold" << endl;
            cout << "\n 2. paperclip     35 gold" << endl;
            cout << "\n 3. Blaster       15 gold" << endl;
            cout << "\n 4. SquarePants   20 gold" << endl;
            cout << "\n 5. Chain Armour  30 gold" << endl;
            cout << "\n 6. Paper Cloths  10 gold" << endl;
            cout << "\n 7. Blue milk     5 gold" << endl;
            cout << "\n 8. Scooby Snack  20 gold" << endl;
            cout << "\n 9. Krabby Patty  15 gold" << endl;
            cout << "\n 10. Go back" << endl;
            cout << "\n> ";
            cin >> choice;
            switch (choice) {
            case 1:
                if (gold < 25) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
                else {
                    system("cls");
                    gold = gold - 25;
                    weapon = weapon + 1;
                    cout << "\n Item added - Lightsaber" << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 2:
                if (gold < 35) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
                else {
                    system("cls");
                    gold = gold - 35;
                    weapon = weapon + 1;
                    cout << "\n Item added - Paperclip" << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 3:
                if (gold < 15) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;

                }
                else {
                    system("cls");
                    gold = gold - 15;
                    weapon = weapon + 1;
                    cout << "\n Item added - Blaster"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 4:
                if (gold < 20) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
                else {
                    system("cls");
                    gold = gold - 20;
                    armour = armour + 1;
                    cout << "\n Item added - Square Pants" << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 5:
                if (gold < 30) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
                else {
                    system("cls");
                    gold = gold - 30;
                    armour = armour + 1;
                    cout << "\n Item added - Chain Armour" << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 6:
                if (gold < 10) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;

                }
                else {
                    system("cls");
                    gold = gold - 10;
                    armour = armour + 1;
                    cout << "\n Item added - Paper clothes"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 7:
                if (gold < 5) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
                else {
                    system("cls");
                    gold = gold - 5;
                    PowerUp = PowerUp + 1;
                    cout << "\n Item added - Blue Milk" << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 8:
                if (gold < 20) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
                else {
                    system("cls");
                    gold = gold - 20;
                    PowerUp = PowerUp + 1;
                    cout << "\n Item added - Scooby Snack" << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;

            case 9:
                if (gold < 15) {
                    system("cls");
                    cout << "\n You don't have enough gold!"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;

                }
                else {
                    system("cls");
                    gold = gold - 15;
                    PowerUp = PowerUp + 1;
                    cout << "\n Item added - Krabby Patty"
                        << endl;
                    cout << "\n ";
                    system("pause");
                    goto buy;
                }
            case 10:
                goto shop;
                }

                }

            sell:
            case 11:
                system("cls");
                cout << "\n Shop, Sell" << endl;
                cout << "\n What do you sell?" << endl;
                cout << "\n 1. Weapon   25 gold    Number: " << weapon << endl;
                cout << "\n 2. Armour   10 gold   Number: " << armour << endl;
                cout << "\n 3. Go back" << endl;
                cout << "\n> ";
                cin >> choice;
                switch (choice) {
                weapon:
                case 1:
                    if (weapon < 1) {
                        system("cls");
                        cout << "\n You don't have any Weapons to sell!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    }
                    else {
                        system("cls");
                        gold = gold + 25;
                        weapon = weapon - 1;
                        cout << "\n Item added - 5 Gold" << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    armour:
                case 2:
                    if (armour < 1) {
                        system("cls");
                        cout << "\n You don't have any Armour to sell to "
                            "sell!" << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    }
                    else {
                        system("cls");
                        gold = gold + 10;
                        armour = armour - 1;
                        cout << "\n Item added - 10 Gold"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    }
                    }
                }

            case 12:
                goto start;
            }
        }
       
       Character c(150, "Scooby Doo", 75);
        ofstream file_out("character.out");
        file_out << c.getHealth() << " " << c.getName() << " " << c.getMoney() << " " <<endl;
        file_out.close();



        cout << "Now that everything is settled and saved you are on your way to find your best bud Shaggy,the first thing that you must find is a spaceship to get you out of Bikini Bottom." << endl;
        cout << "As you make your way toward the outskirts of town you run across a generic bad guy that has the ship you want." << endl;
        cout << "In an attempt to get his ship you challenge him to a fight. Having started the fight your character is allowed the first move." << endl;


        int eHealth = 300;
        int pHealth = 250;
        int eAttack = 0;
        int pAttack = 0;
        int selection = 0;
        int hPower = 0;
        int eSelection = 0;
        int counter = 0;
        int itemSelect = 0;
        int ePowerUp = 50;
        int pPowerUp = 50;


        cout << pHealth << "        " << eHealth << endl;
        cout << pPowerUp << "        " << ePowerUp << endl;
        cout << endl;
        cout << endl;
        cout << "1.Attack" << endl;
        cout << "2.Heal" << endl;
        cout << "3.Item" << endl;
        do
        {

            if (counter == 0)
            {
                cin >> selection;
                srand(static_cast<int>(time(0)));

                switch (selection)
                {
                case 1:
                    pAttack = 1 + rand() % (35 - 1 + 1);
                    cout << "ATTACK " << pAttack << endl;
                    system("pause");
                    system("cls");
                    eHealth = eHealth - pAttack;
                    cout << pHealth << "        " << eHealth << endl;
                    cout << pPowerUp << "        " << ePowerUp << endl;
                    cout << endl;
                    cout << endl;
                    cout << "1.Attack" << endl;
                    cout << "2.Heal" << endl;
                    cout << "3.Item" << endl;
                    break;
                case 2:
                    if (pPowerUp > 9)
                    {
                        hPower = 1 + rand() % (35 - 1 + 1);
                        cout << "HEAL" << hPower << endl;
                        system("pause");
                        system("cls");
                        pHealth = pHealth + hPower;
                        pPowerUp = pPowerUp - 10;
                        cout << pHealth << "        " << eHealth << endl;
                        cout << pPowerUp << "        " << ePowerUp << endl;
                        cout << endl;
                        cout << endl;
                        cout << "1.Attack" << endl;
                        cout << "2.Heal" << endl;
                        cout << "3.Use Power Up" << endl;
                    }
                    break;

                case 3:
                    cout << "ITEM INVENTORY" << endl;
                    cout << "1.Blue Milk          Restores HP" << endl;
                    cout << "2.Scoob Snack        Restores MP" << endl;
                    cout << "3.Krabby Patty       Causes Damage to all players" << endl;
                    cout << "4.Surprise           ?????" << endl;
                    cout << "5.Special move       Freezes oponent for 3 Truns" << endl;

                    cin >> itemSelect;
                    switch (itemSelect)
                    {
                    case 1:
                        pHealth = pHealth + 75;
                        system("cls");
                        cout << pHealth << "        " << eHealth << endl;
                        cout << pPowerUp << "        " << ePowerUp << endl;
                        cout << endl;
                        cout << endl;
                        cout << "1.Attack" << endl;
                        cout << "2.Heal" << endl;
                        cout << "3.Item" << endl;
                        break;
                    case 2:


                        break;
                    }
                }
                counter = 1;
            }
            eSelection = rand() % 2 + 1;
            switch (eSelection)
            {
            case 1:
                eAttack = 1 + rand() % (35 - 1 + 1);
                cout << "ATTACK " << eAttack << endl;
                system("pause");
                system("cls");
                pHealth = pHealth - eAttack;
                cout << pHealth << "        " << eHealth << endl;
                cout << pPowerUp << "        " << ePowerUp << endl;
                cout << endl;
                cout << endl;
                cout << "1.Attack" << endl;
                cout << "2.Heal" << endl;
                cout << "3.Item" << endl;
                break;

            case 2:

                if (ePowerUp > 10)
                {
                    hPower = 1 + rand() % (35 - 1 + 1);
                    cout << "HEAL" << hPower << endl;
                    system("pause");
                    system("cls");
                    ePowerUp = ePowerUp - 10;
                    eHealth = eHealth + hPower;
                    cout << pHealth << "        " << eHealth << endl;
                    cout << pPowerUp << "        " << ePowerUp << endl;
                    cout << endl;
                    cout << endl;
                    cout << "1.Attack" << endl;
                    cout << "2.Heal" << endl;
                    cout << "3.Item" << endl;
                }
                break;
            }
            counter = 0;
        } while (eHealth > 210 && pHealth > 1);

        system("pause");

        gold = gold + 25;
        cout << "You have gained 25 pieces of gold for your victory: $" << gold << "   " << endl;
        
        system("pause");


 
        system("cls");
        cout << "\n Where do you go?" << endl;
        cout << "\n 1. Shop" << endl;
        cout << "\n 2. Advance" << endl;
        cout << "\n> ";
        cin >> choice;
        switch (choice) {
        Shop:
        case 1:
        system("cls");
            cout << "\n Shop" << endl;
            cout << "\n Buy or sell?" << endl;
            cout << "\n 1. Buy" << endl;
            cout << "\n 11. Sell" << endl;
            cout << "\n 3. Go back" << endl;
            cout << "\n> ";
            cin >> choice;
            switch (choice) {
            Buy:
            case 1:
                system("cls");
                cout << "\n Shop, Buy" << endl;
                cout << "\n What do you buy?" << endl;
                cout << "\n 1. Lightsaber    50 gold" << endl;
                cout << "\n 2. paperclip   100 gold" << endl;
                cout << "\n 3. Blaster   10 gold" << endl;
                cout << "\n 4. SquarePants 50 gold" << endl;
                cout << "\n 5. Chain Armour 100 gold" << endl;
                cout << "\n 6. Paper Cloths 10 gold" << endl;
                cout << "\n 7. Blue milk 50 gold" << endl;
                cout << "\n 8. Scooby Snack 100 gold" << endl;
                cout << "\n 9. Krabby Patty 10 gold" << endl;
                cout << "\n 10. Go back" << endl;
                cout << "\n> ";
                cin >> choice;
                switch (choice) {
                case 1:
                    if (gold < 50) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                    else {
                        system("cls");
                        gold = gold - 50;
                        weapon = weapon + 1;
                        cout << "\n Item added - Lightsaber" << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 2:
                    if (gold < 100) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                    else {
                        system("cls");
                        gold = gold - 100;
                        weapon = weapon + 1;
                        cout << "\n Item added - Paperclip" << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 3:
                    if (gold < 10) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;

                    }
                    else {
                        system("cls");
                        gold = gold - 10;
                        weapon = weapon + 1;
                        cout << "\n Item added - Blaster"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 4:
                    if (gold < 50) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                    else {
                        system("cls");
                        gold = gold - 50;
                        armour = armour + 1;
                        cout << "\n Item added - Square Pants" << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 5:
                    if (gold < 100) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                    else {
                        system("cls");
                        gold = gold - 100;
                        armour = armour + 1;
                        cout << "\n Item added - Chain Armour" << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 6:
                    if (gold < 10) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;

                    }
                    else {
                        system("cls");
                        gold = gold - 10;
                        armour = armour + 1;
                        cout << "\n Item added - Paper clothes"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 7:
                    if (gold < 50) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                    else {
                        system("cls");
                        gold = gold - 50;
                        PowerUp = PowerUp + 1;
                        cout << "\n Item added - Blue Milk" << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 8:
                    if (gold < 100) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                    else {
                        system("cls");
                        gold = gold - 100;
                        PowerUp = PowerUp + 1;
                        cout << "\n Item added - Scooby Snack" << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;
                    }
                case 9:
                    if (gold < 10) {
                        system("cls");
                        cout << "\n You don't have enough gold!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;

                    }
                    else {
                        system("cls");
                        gold = gold - 10;
                        PowerUp = PowerUp + 1;
                        cout << "\n Item added - Krabby Patty"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto buy;

                case 10:
                    goto shop;
                    }

                }

            Sell:
            case 11:
                system("cls");
                cout << "\n Shop, Sell" << endl;
                cout << "\n What do you sell?" << endl;
                cout << "\n 1. Weapon   25 gold    Number: " << weapon << endl;
                cout << "\n 2. Armour   10 gold   Number: " << armour << endl;
                cout << "\n 3. Go back" << endl;
                cout << "\n> ";
                cin >> choice;
                switch (choice) {
                Weapon:
                case 1:
                    if (weapon < 1) {
                        system("cls");
                        cout << "\n You don't have any weapons to sell!"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    }
                    else {
                        system("cls");
                        gold = gold + 25;
                        weapon = weapon - 1;
                        cout << "\n Item added - 5 Gold" << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    Armour:
                case 2:
                    if (armour < 1) {
                        system("cls");
                        cout << "\n You don't have any Armour to sell to "
                            "sell!" << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    }
                    else {
                        system("cls");
                        gold = gold + 10;
                        armour = armour - 1;
                        cout << "\n Item added - 10 Gold"
                            << endl;
                        cout << "\n ";
                        system("pause");
                        goto sell;
                    }
                    }
                }

            case 12:
                goto start;
            }
        }





        cout << "character won the battle they have now earned the ship and can travel to the planet Mustafar where the evil boss hold Scooby’s beloved pal Shaggy." << endl;
        cout << "Before you leave though your character also earned another $25 and can visit the trading post one more time to either trade in one of their previously chosen items or the can purchased additional items." << endl;
        cout << "If the player chooses to trade in one of their items, they will receive some credit for that allowing them more to spend. This point also serves as an addition all check point so that if the player losses to the boss they will return hear." << endl;
        cout << "After reaching Mustafar, Scooby must now come face to face with the Darth Vader to get Shaggy back. " << endl;


        cout << pHealth << "        " << eHealth << endl;
        cout << pPowerUp << "        " << ePowerUp << endl;
        cout << endl;
        cout << endl;
        cout << "1.Attack" << endl;
        cout << "2.Heal" << endl;
        cout << "3.Item" << endl;
        do
        {

            if (counter == 0)
            {
                cin >> selection;
                srand(static_cast<int>(time(0)));

                switch (selection)
                {
                case 1:
                    pAttack = 1 + rand() % (35 - 1 + 1);
                    cout << "ATTACK " << pAttack << endl;
                    system("pause");
                    system("cls");
                    eHealth = eHealth - pAttack;
                    cout << pHealth << "        " << eHealth << endl;
                    cout << pPowerUp << "        " << ePowerUp << endl;
                    cout << endl;
                    cout << endl;
                    cout << "1.Attack" << endl;
                    cout << "2.Heal" << endl;
                    cout << "3.Item" << endl;
                    break;
                case 2:
                    if (pPowerUp > 9)
                    {
                        hPower = 1 + rand() % (35 - 1 + 1);
                        cout << "HEAL" << hPower << endl;
                        system("pause");
                        system("cls");
                        pHealth = pHealth + hPower;
                        pPowerUp = pPowerUp - 10;
                        cout << pHealth << "        " << eHealth << endl;
                        cout << pPowerUp << "        " << ePowerUp << endl;
                        cout << endl;
                        cout << endl;
                        cout << "1.Attack" << endl;
                        cout << "2.Heal" << endl;
                        cout << "3.Item" << endl;
                    }
                    break;

                case 3:
                    cout << "ITEM INVENTORY" << endl;
                    cout << "1.Blue Milk         Restores HP" << endl;
                    cout << "2.Scooby Snack      Restores MP" << endl;
                    cout << "3.Krabby Patty      Causes Damage to all players" << endl;
                    cout << "4.Surprise          ?????" << endl;
                    cout << "5.Special Move      Freezes oponent for 3 Truns" << endl;

                    cin >> itemSelect;
                    switch (itemSelect)
                    {
                    case 1:
                        pHealth = pHealth + 75;
                        system("cls");
                        cout << pHealth << "        " << eHealth << endl;
                        cout << pPowerUp << "        " << ePowerUp << endl;
                        cout << endl;
                        cout << endl;
                        cout << "1.Attack" << endl;
                        cout << "2.Heal" << endl;
                        cout << "3.Item" << endl;
                        break;
                    case 2:


                        break;
                    }
                }
                counter = 1;
            }
            eSelection = rand() % 2 + 1;
            switch (eSelection)
            {
            case 1:
                eAttack = 1 + rand() % (35 - 1 + 1);
                cout << "ATTACK " << eAttack << endl;
                system("pause");
                system("cls");
                pHealth = pHealth - eAttack;
                cout << pHealth << "        " << eHealth << endl;
                cout << pPowerUp << "        " << ePowerUp << endl;
                cout << endl;
                cout << endl;
                cout << "1.Attack" << endl;
                cout << "2.Heal" << endl;
                cout << "3.Item" << endl;
                break;

            case 2:

                if (ePowerUp > 10)
                {
                    hPower = 1 + rand() % (35 - 1 + 1);
                    cout << "HEAL" << hPower << endl;
                    system("pause");
                    system("cls");
                    ePowerUp = ePowerUp - 10;
                    eHealth = eHealth + hPower;
                    cout << pHealth << "        " << eHealth << endl;
                    cout << pPowerUp << "        " << ePowerUp << endl;
                    cout << endl;
                    cout << endl;
                    cout << "1.Attack" << endl;
                    cout << "2.Heal" << endl;
                    cout << "3.Item" << endl;
                }
                break;
            }
            counter = 0;
        } while (eHealth > 1 && pHealth > 1);

        system("pause");


        cout << "If you win the battle you will get to celebrate the glorious victory with your best buddy Shaggy." << endl;
        cout << "From this point you will head home and live happily ever after eating Scooby Snacks." << endl;


        return 0;
    
}

