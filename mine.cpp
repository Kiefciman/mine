#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
using namespace std;

//Variables
string command;
int stone0;
int stone1 = 0;
int coal0;
int coal1 = 0;
int fish0;
int fish1 = 0;
double money0;
double money1 = 0;
string pickaxe;
string craft;
int copper0;
int copper1 =0;
int iron0;
int iron1 = 0;
int mines;
string enchant;
int fortune;
int efficiency;
int lapis0;
int lapis1;

int main() {

    //Number randomizer
    srand (time(NULL));

    //File system
    fstream file;

    file.open ("pickaxe.txt", ios::in);
    file >> pickaxe;
    file.close();
    file.open ("stone.txt", ios::in);
    file >> stone0;
    file.close();
    file.open ("coal.txt", ios::in);
    file >> coal0;
    file.close();
    file.open ("fish.txt", ios::in);
    file >> fish0;
    file.close();
    file.open ("money.txt", ios::in);
    file >> money0;
    file.close();
    file.open ("copper.txt", ios::in);
    file >> copper0;
    file.close();
    file.open ("iron.txt", ios::in);
    file >> iron0;
    file.close();
    file.open ("mines.txt", ios::in);
    file >> mines;
    file.close();
    file.open ("efficiency.txt", ios::in);
    file >> efficiency;
    file.close();
    file.open ("fortune.txt", ios::in);
    file >> fortune;
    file.close();
    file.open ("lapis.txt", ios::in);
    file >> lapis0;
    file.close();

    //Color handler
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int k = 1; k < 255; k++) {

        SetConsoleTextAttribute(h, k = 13);
        cout << "help - list of commands\n" << "\n";
    
        SetConsoleTextAttribute(h, k = 7);
        cin >> command;

        while (1 < 2) { 

            //Mining
            if (command == "mine") {
               file.open ("mines.txt", ios::out);
               mines++;
               file << mines << endl;
               file.close();
               file.open ("mines.txt, ios::in");
               file >> mines;
               file.close();

               if (mines % 100 == 0)  {
                   cout << "you found a chest:\n";
                   coal1 = coal1 + rand() % 25 + 1;
                   iron1 = iron1 + rand() % 5 + 1;
                   cout << "+ " << coal1 << " coal\n";
                   cout << "+ " << iron1 << " iron\n" << "\n";
               }

               else if (mines % 30 == 0 && pickaxe != "wood") {
                   lapis1 = lapis1 + rand() % 10 + 1;
                   cout << "+ " << lapis1 << " lapis\n" << "\n";
               }

                //Wood pickaxe
                if (pickaxe == "wood") {
                    SetConsoleTextAttribute(h, k = 2);
                    stone1 = stone1 + rand() % 10 + 1;
                    coal1 = coal1 + rand() & 6;
                    cout << "+ " << stone1 << " stone\n";
                    if (coal1 > 0) {
                        cout << "+ " << coal1 << " coal\n";
                    }
                    cout << endl;
                }

                //Stone pickaxe
                else if (pickaxe == "stone") {
                    SetConsoleTextAttribute(h, k = 2);
                    if (efficiency == 0) {
                        stone1 = stone1 + rand() % 20 + 5;
                        coal1 = coal1 + rand() & 10 + 1;
                        copper1 = copper1 + rand() % 7;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        if (copper1 > 0) {
                            cout << "+ " << copper1 << " copper\n";
                        }
                        cout << endl;
                    }

                    else if (efficiency == 1) {
                        stone1 = stone1 + rand() % 22 + 8;
                        coal1 = coal1 + rand() & 12 + 2;
                        copper1 = copper1 + rand() % 10;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        if (copper1 > 0) {
                            cout << "+ " << copper1 << " copper\n";
                        }
                        cout << endl;
                    }

                    else if (efficiency == 2) {
                        stone1 = stone1 + rand() % 26 + 10;
                        coal1 = coal1 + rand() & 15 + 5;
                        copper1 = copper1 + rand() % 12;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        if (copper1 > 0) {
                            cout << "+ " << copper1 << " copper\n";
                        }
                        cout << endl;
                    }

                    else if (efficiency == 3) {
                        stone1 = stone1 + rand() % 30 + 12;
                        coal1 = coal1 + rand() & 16 + 10;
                        copper1 = copper1 + rand() % 16;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        if (copper1 > 0) {
                            cout << "+ " << copper1 << " copper\n";
                        }
                        cout << endl;
                    }
                }

                //Copper pickaxe
                else if (pickaxe == "copper") {
                    SetConsoleTextAttribute(h, k = 2);
                    if (efficiency == 0) {
                        stone1 = stone1 + rand() % 30 + 10;
                        coal1 = coal1 + rand() & 20 + 1;
                        copper1 = copper1 + rand() % 12 + 3;
                        iron1 = iron1 + rand() % 5;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        if (iron1 > 0) {
                            cout << "+ " << iron1 << " iron\n";
                        } 
                        cout << endl;
                    }

                    else if (efficiency == 1) {
                        stone1 = stone1 + rand() % 30 + 15;
                        coal1 = coal1 + rand() & 20 + 5;
                        copper1 = copper1 + rand() % 15 + 6;
                        iron1 = iron1 + rand() % 10;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        if (iron1 > 0) {
                            cout << "+ " << iron1 << " iron\n";
                        } 
                        cout << endl;
                    }  

                    else if (efficiency == 2) {
                        stone1 = stone1 + rand() % 35 + 18;
                        coal1 = coal1 + rand() & 23 + 10;
                        copper1 = copper1 + rand() % 16 + 10;
                        iron1 = iron1 + rand() % 15;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        if (iron1 > 0) {
                            cout << "+ " << iron1 << " iron\n";
                        } 
                        cout << endl;
                    }

                    else if (efficiency == 3) {
                        stone1 = stone1 + rand() % 40 + 25;
                        coal1 = coal1 + rand() & 30 + 15;
                        copper1 = copper1 + rand() % 20 + 12;
                        iron1 = iron1 + rand() % 20;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        if (iron1 > 0) {
                            cout << "+ " << iron1 << " iron\n";
                        } 
                        cout << endl;
                    }

                }

                //Iron pickaxe
                else if (pickaxe == "iron") {
                    SetConsoleTextAttribute(h, k = 2);
                    if (efficiency == 0) {
                        stone1 = stone1 + rand() % 40 + 15;
                        coal1 = coal1 + rand() & 15 + 2;
                        copper1 = copper1 + rand() % 20 + 1;
                        iron1 = iron1 + rand() % 10 + 1;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        cout << "+ " << iron1 << " iron\n";
                    }

                    else if (efficiency == 1) {
                        stone1 = stone1 + rand() % 45 + 18;
                        coal1 = coal1 + rand() & 18 + 10;
                        copper1 = copper1 + rand() % 25 + 5;
                        iron1 = iron1 + rand() % 15 + 6;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        cout << "+ " << iron1 << " iron\n";
                    }

                    else if (efficiency == 2) {
                        stone1 = stone1 + rand() % 48 + 20;
                        coal1 = coal1 + rand() & 25 + 15;
                        copper1 = copper1 + rand() % 28 + 10;
                        iron1 = iron1 + rand() % 20 + 10;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        cout << "+ " << iron1 << " iron\n";
                    }

                    else if (efficiency == 3) {
                        stone1 = stone1 + rand() % 60 + 25;
                        coal1 = coal1 + rand() & 30 + 20;
                        copper1 = copper1 + rand() % 35 + 12;
                        iron1 = iron1 + rand() % 25 + 12;
                        cout << "+ " << stone1 << " stone\n";
                        cout << "+ " << coal1 << " coal\n";
                        cout << "+ " << copper1 << " copper\n";
                        cout << "+ " << iron1 << " iron\n";
                    }

                }

                file.open ("stone.txt", ios::out);
                stone0 = stone0 + stone1;
                file << stone0 << endl;
                file.close();
                file.open ("coal.txt", ios::out);
                coal0 = coal0 +coal1;
                file << coal0 << endl;
                file.close();
                file.open ("copper.txt", ios:: out);
                copper0 = copper0 + copper1;
                file << copper0 << endl;
                file.close();
                file.open ("iron.txt", ios::out);
                iron0 = iron0 + iron1;
                file << iron0 << endl;
                file.close();
                file.open ("lapis.txt", ios::out);
                lapis0 = lapis0 + lapis1;
                file << lapis0 << endl;
                file.close();
                stone1 = 0;
                coal1 = 0;
                copper1 = 0;
                iron1 = 0;
                lapis1 = 0;

                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Inventory
            else if (command == "inv") {
                SetConsoleTextAttribute(h, k = 10);
                file.open ("pickaxe.txt", ios::in);
                file >> pickaxe;
                cout << "Pickaxe: " << pickaxe << endl;
                file.close();
                SetConsoleTextAttribute(h, k = 14);
                file.open ("stone.txt", ios::in);
                file >> stone0;
                cout << stone0 << " stone\n";
                file.close();
                file.open ("coal.txt", ios::in);
                file >> coal0;
                cout << coal0 << " coal\n";
                file.close();
                file.open ("copper.txt",ios::in);
                file >> copper0;
                if (copper0 > 0) {
                    cout << copper0 << " copper\n"; 
                }
                file.close();
                file.open ("iron.txt", ios::in);
                file >> iron0;
                if (iron0 > 0) {
                    cout << iron0 << " iron\n";
                }
                file.close();
                file.open ("fish.txt", ios::in);
                file >> fish0;
                cout << fish0 << " fish\n";
                file.close();
                SetConsoleTextAttribute(h, k = 12);
                file.open ("money.txt", ios::in);
                file >> money0;
                cout << "$ " << money0 << "\n" << "\n";
                file.close();
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //sell stone
            else if (command == "sellstone") {
                SetConsoleTextAttribute(h, k = 12);
                money1 = money1 + stone0;
                file.open ("stone.txt", ios::out);
                stone0 = 0;
                file << stone0 << endl;
                file.close();
                cout << "+ $ " << money1 << "\n" << "\n";
                file.open ("money.txt", ios::out);
                money0 = money0 + money1;
                file << money0 << endl;
                file.close();
                money1 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Sell coal
            else if (command == "sellcoal") {
                SetConsoleTextAttribute(h, k = 12);
                money1 = money1 + 1.5 * coal0;
                file.open ("coal.txt", ios::out);
                coal0 = 0;
                file << coal0 << endl;
                file.close();
                cout << "+ $ " << money1 << "\n" << "\n";
                file.open ("money.txt", ios::out);
                money0 = money0 + money1;
                file << money0 << endl;
                file.close();
                money1 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Sell fish
            else if (command == "sellfish") {
                SetConsoleTextAttribute(h, k = 12);
                money1 = money1 + 5 * fish0;
                file.open ("fish.txt", ios::out);
                fish0 = 0;
                file << fish0 << endl;
                file.close();
                cout << "+ $ " << money1 << "\n" << "\n";
                file.open ("money.txt", ios::out);
                money0 = money0 + money1;
                file << money0 << endl;
                file.close();
                money1 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Sell copper
            else if (command == "sellcopper") {
                SetConsoleTextAttribute(h, k = 12);
                money1 = money1 + 7 * copper0;
                file.open ("copper.txt", ios::out);
                copper0 = 0;
                file << copper0 << endl;
                file.close();
                cout << "+ $ " << money1 << "\n" << "\n";
                file.open ("money.txt", ios::out);
                money0 = money0 + money1;
                file << money0 << endl;
                file.close();
                money1 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Sell iron
            else if (command == "selliron") {
                SetConsoleTextAttribute(h, k = 12);
                money1 = money1 + 10 * iron0;
                file.open ("iron.txt", ios::out);
                iron0 = 0;
                file << iron0 << endl;
                file.close();
                cout << "+ $ " << money1 << "\n" << "\n";
                file.open ("money.txt", ios::out);
                money0 = money0 + money1;
                file << money0 << endl;
                file.close();
                money1 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Sell eveything
            else if (command == "sellall") {
                SetConsoleTextAttribute(h, k = 12);
                money1 = money1 + stone0 + 1.5 * coal0 + 5 * fish0 + 7 * copper0 + 10 * iron0;
                file.open ("stone.txt", ios::out);
                stone0 = 0;
                file << stone0 << endl;
                file.close();
                file.open ("coal.txt", ios::out);
                coal0 = 0;
                file << coal0 << endl;
                file.close();
                file.open ("fish.txt", ios::out);
                fish0 = 0;
                file << fish0 << endl;
                file.close();
                cout << "+ $ " << money1 << "\n" << "\n";
                file.open ("money.txt", ios::out);
                money0 = money0 + money1;
                file << money0 << endl;
                file.close();
                money1 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Fishing
            else if (command == "fish") {
                SetConsoleTextAttribute(h, k = 11);
                fish1 = fish1 + rand() % 5;
                if (fish1 > 0) {
                    cout << "+ " << fish1 << " fish\n" << "\n";
                }
                else {
                    cout << "fish escaped\n" << "\n";
                }
                file.open ("fish.txt", ios::out);
                fish0 = fish0 + fish1;
                file << fish0 << endl;
                file.close();
                fish1 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Prices
            else if (command == "price") {
                SetConsoleTextAttribute(h, k = 12);
                cout << "stone = $ 1\n";
                cout << "coal = $ 1.5\n";
                cout << "copper = $7\n";
                cout << "iron = $10\n";
                cout << "fish = $ 5\n" << "\n";
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Help
            else if (command == "help") {
                SetConsoleTextAttribute(h, k = 13);
                cout << "list of commands:\n";
                cout << "mine\n";
                cout << "fish\n";
                cout << "sell+item to sell (eg. sellstone)\n";
                cout << "sellall\n";
                cout << "inv\n";
                cout << "price\n";
                cout << "craft\n";
                cout << "enchant\n";
                cout << "exit / quit\n";
                cout << endl;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            //Crafting
            else if (command == "craft") {

                //Wood pickaxe
                if (pickaxe == "wood") {
                    SetConsoleTextAttribute(h, k =6);
                    cout << "stone pickaxe  - $ 15.000 + 1.000  stone\n";
                    cout << "copper pickaxe - $ 35.000 + 7.000  copper\n";
                    cout << "iron pickaxe   - $ 75.000 + 20.000 iron\n";
                    cout << "type exit to cancel\n" << "\n";
                    file.open ("money.txt", ios::in);
                    file >> money0;
                    file.close();
                    file.open ("stone.txt", ios::in);
                    file >> stone0;
                    file.close();
                    file.open ("copper.txt", ios::in);
                    file >> copper0;
                    file.close();
                    file.open ("iron.txt", ios::in);
                    file >> iron0;
                    file.close();
                    SetConsoleTextAttribute(h, k =7);
                    cin >> craft;

                    if (craft == "stone" || "stone pickaxe") {
                        if (money0 >= 15000 && stone0 >= 1000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "stone";
                            file << pickaxe << endl;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 15000;
                            file << money0 << endl;
                            file.close();
                            file.open ("stone.txt", ios::out);
                            stone0 = stone0 - 1000;
                            file << stone0 << endl;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "stone pickaxe crafted\n" << "\n";
                        }
                        
                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (craft == "copper" || "copper pickaxe") {
                        if (money0 >= 35000 && copper0 >= 7000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "copper";
                            file << pickaxe << endl;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 35000;
                            file << money0 << endl;
                            file.close();
                            file.open ("copper.txt", ios::out);
                            copper0 = copper0 - 7000;
                            file << copper0 << endl;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }

                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }

                    }

                    else if (craft == "iron" || "iron pickaxe") {
                        if (money0 >= 75000 && iron0 >= 20000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "iron";
                            file << pickaxe << endl;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 75000;
                            file << money0 << endl;
                            file.close();
                            file.open ("iron.txt", ios::out);
                            iron0 = iron0 - 20000;
                            file << iron0 << endl;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }

                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (craft == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command; 
                    }

                    else {
                        cout << endl;
                        cin >> craft; 
                    }
                }

                //Stone pickaxe
                else if (pickaxe == "stone") {
                    SetConsoleTextAttribute(h, k =6);
                    cout << "copper pickaxe - $ 35.000 + 7.000  copper\n";
                    cout << "iron pickaxe   - $ 75.000 + 20.000 iron\n";
                    cout << "type exit to cancel\n" << "\n";
                    file.open ("money.txt", ios::in);
                    file >> money0;
                    file.close();
                    file.open ("copper.txt", ios::in);
                    file >> copper0;
                    file.close();
                    file.open ("iron.txt", ios::in);
                    file >> iron0;
                    file.close();
                    SetConsoleTextAttribute(h, k =7);
                    cin >> craft;

                    if (craft == "copper" || "copper pickaxe") {
                        if (money0 >= 35000 && copper0 >= 7000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "copper";
                            file << pickaxe << endl;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 35000;
                            file << money0 << endl;
                            file.close();
                            file.open ("copper.txt", ios::out);
                            copper0 = copper0 - 7000;
                            file << copper0 << endl;
                            file.close();
                            file.open ("efficiency.txt", ios::out);
                            efficiency = 0;
                            file << efficiency << endl;
                            file.close();
                            file.open ("fortune.txt", ios::out);
                            fortune = 0;
                            file << fortune << endl;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }

                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }

                    }

                    else if (craft == "iron" || "copper pickaxe") {
                        if (money0 >= 75000 && iron0 >= 20000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "iron";
                            file << pickaxe << endl;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 75000;
                            file << money0 << endl;
                            file.close();
                            file.open ("iron.txt", ios::out);
                            iron0 = iron0 - 20000;
                            file << iron0 << endl;
                            file.close();
                            file.open ("efficiency.txt", ios::out);
                            efficiency = 0;
                            file << efficiency << endl;
                            file.close();
                            file.open ("fortune.txt", ios::out);
                            fortune = 0;
                            file << fortune << endl;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }

                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (craft == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command; 
                    }

                    else {
                        cout << endl;
                        cin >> craft; 
                    }
                }

                //Copper pickaxe
                else if (pickaxe == "copper") {
                    SetConsoleTextAttribute(h, k =6);
                    cout << "iron pickaxe   - $ 75.000 + 20.000 iron\n";
                    cout << "type exit to cancel\n" << "\n";
                    file.open ("money.txt", ios::in);
                    file >> money0;
                    file.close();
                    file.open ("iron.txt", ios::in);
                    file >> iron0;
                    file.close();
                    SetConsoleTextAttribute(h, k =7);
                    cin >> craft;

                    if (craft == "iron" || "iron pickaxe") {
                        if (money0 >= 75000 && iron0 >= 20000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "iron";
                            file << pickaxe << endl;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 75000;
                            file << money0 << endl;
                            file.close();
                            file.open ("iron.txt", ios::out);
                            iron0 = iron0 - 20000;
                            file << iron0 << endl;
                            file.close();
                            file.open ("efficiency.txt", ios::out);
                            efficiency = 0;
                            file << efficiency << endl;
                            file.close();
                            file.open ("fortune.txt", ios::out);
                            fortune = 0;
                            file << fortune << endl;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }

                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (craft == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command; 
                    }

                    else {
                        cout << endl;
                        cin >> craft; 
                    }
                }

                //Iron pickaxe
                else if (pickaxe == "iron") {
                    SetConsoleTextAttribute(h, k =6);
                    cout << "you already have the best pickaxe\n" <<  "\n";

                    if (craft == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command; 
                    }

                    else {
                        cout << endl;
                        cin >> craft;
                }
            }

            //Enchanting
            else if (command == "enchant") {

                //Fortune
                if (fortune == 0) {
                    SetConsoleTextAttribute(h, k =6);
                    cout << "fotune I - $ 5.000 + 150 lapis\n" << "\n";
                    
                    if (enchant == "fortune" || "fortune 1" || "fortune I" || "fortune i") {
                        file.open ("money.txt", ios::in);
                        file >> money0;
                        file.close();
                        file.open ("lapis.txt", ios::in);
                        file >> lapis0;
                        file.close();

                        if (money0 >= 5000 && lapis0 >= 150) {
                            file.open ("fortune.txt", ios::out);
                            fortune = 1;
                            file << fortune << endl;
                            file.close();
                            cout << "enchant complete\n" << "\n";
                        }

                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            cin >> enchant;
                        }
                    }    
                }
                
                //Wood pickaxe
                if (pickaxe == "wood") {
                    SetConsoleTextAttribute(h, k =6);
                    cout << "can't enchant wood pickaxe\n";
                    cout << "type exit to cancel\n" << "\n";
                    SetConsoleTextAttribute(h, k =7);
                    cin >> enchant;
                    
                    if (enchant == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command;
                    }

                    else {
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;
                    }
                }

                //Stone pickaxe
                else if (pickaxe == "stone") {
                    SetConsoleTextAttribute(h, k =6);
                    
                    //With no efficiency
                    if (efficiency == 0) {
                        cout << "efficiency I - $ 600 + 200 lapis\n";
                        cout << "efficiency II - $ 1.500 + 350 lapis\n";
                        cout << "efficiency III - $ 4.000 + 500 lapis\n" << "\n";
                        file.open ("money.txt", ios::in);
                        file >> money0;
                        file.close();
                        file.open ("lapis.txt", ios::in);
                        file >> lapis0;
                        file.close();
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "efficiency 1" || "efficiency I" || "efficiency i") {
                            if (money0 >= 600 && lapis0 >= 200) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 1;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 600;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 200;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 2" || "efficiency II" || "efficiency ii") {
                            if (money0 >= 1500 && lapis0 >= 350) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 2;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 1500;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 350;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 4000 && lapis0 >= 500) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 4000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 500;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }

                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }
                    
                    //With efficiency I
                    else if (efficiency == 1) {                 
                        cout << "efficiency II - $ 1.500 + 350 lapis\n";
                        cout << "efficiency III - $ 4.000 + 500 lapis\n" << "\n";
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "efficiency 2" || "efficiency II" || "efficiency ii") {
                            if (money0 >= 1500 && lapis0 >= 350) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 2;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 1500;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 350;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 4000 && lapis0 >= 500) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 4000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 500;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }
                    
                    //With efficiency II
                    else if (efficiency == 2) {
                       cout << "efficiency III - $ 4.000 + 500 lapis\n" << "\n";
                       SetConsoleTextAttribute(h, k =7);
                       cin >> enchant;

                       if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 4000 && lapis0 >= 500) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 4000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 500;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }

                    //With efficiency III
                    else if (efficiency == 3) {
                        cout << "efficiency level already at maximum\n" << "\n";
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }
                    }
                }

                //Copper pickaxe
                else if (pickaxe == "copper") {
                    SetConsoleTextAttribute(h, k =6);

                    //With no efficiency
                    if (efficiency == 0) {
                        cout << "efficiency I - $ 700 + 400 lapis\n";
                        cout << "efficiency II - $ 2.500 + 550 lapis\n";
                        cout << "efficiency III - $ 4.500 + 600 lapis\n" << "\n";
                        file.open ("money.txt", ios::in);
                        file >> money0;
                        file.close();
                        file.open ("lapis.txt", ios::in);
                        file >> lapis0;
                        file.close();
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "efficiency 1" || "efficiency I" || "efficiency i") {
                            if (money0 >= 700 && lapis0 >= 400) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 1;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 700;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 400;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 2" || "efficiency II" || "efficiency ii") {
                            if (money0 >= 2500 && lapis0 >= 550) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 2;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 2500;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 550;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 4500 && lapis0 >= 600) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 4500;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 600;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }

                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }
                    
                    //With efficiency I
                    else if (efficiency == 1) {                 
                        cout << "efficiency II - $ 2.500 + 550 lapis\n";
                        cout << "efficiency III - $ 4.500 + 600 lapis\n" << "\n";
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "efficiency 2" || "efficiency II" || "efficiency ii") {
                            if (money0 >= 2500 && lapis0 >= 550) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 2;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 2500;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 550;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 4500 && lapis0 >= 600) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 4500;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 600;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }
                    
                    //With efficiency II
                    else if (efficiency == 2) {
                       cout << "efficiency III - $ 4.500 + 600 lapis\n" << "\n";
                       SetConsoleTextAttribute(h, k =7);
                       cin >> enchant;

                       if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 4500 && lapis0 >= 600) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 4500;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 600;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }

                    //With efficiency III
                    else if (efficiency == 3) {
                        cout << "efficiency level already at maximum\n" << "\n";
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }
                    }
                }

                //Iron pickaxe
                else if (pickaxe == "iron") {
                    SetConsoleTextAttribute(h, k =6);

                    //With no efficiency
                    if (efficiency == 0) {
                        cout << "efficiency I - $ 1.050 + 600 lapis\n";
                        cout << "efficiency II - $ 5.000 + 650 lapis\n";
                        cout << "efficiency III - $ 6.000 + 800 lapis\n" << "\n";
                        file.open ("money.txt", ios::in);
                        file >> money0;
                        file.close();
                        file.open ("lapis.txt", ios::in);
                        file >> lapis0;
                        file.close();
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "efficiency 1" || "efficiency I" || "efficiency i") {
                            if (money0 >= 1050 && lapis0 >= 600) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 1;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 1050;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 600;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 2" || "efficiency II" || "efficiency ii") {
                            if (money0 >= 5000 && lapis0 >= 650) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 2;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 5000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 650;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 6000 && lapis0 >= 800) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 6000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 800;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }

                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }
                    
                    //With efficiency I
                    else if (efficiency == 1) {                 
                        cout << "efficiency II - $ 5000 + 650 lapis\n";
                        cout << "efficiency III - $ 6.000 + 800 lapis\n" << "\n";
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "efficiency 2" || "efficiency II" || "efficiency ii") {
                            if (money0 >= 5000 && lapis0 >= 650) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 2;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 5000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 650;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 6000 && lapis0 >= 800) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 6000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 800;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }
                    
                    //With efficiency II
                    else if (efficiency == 2) {
                       cout << "efficiency III - $ 6.000 + 800 lapis\n" << "\n";
                       SetConsoleTextAttribute(h, k =7);
                       cin >> enchant;

                       if (enchant == "efficiency 3" || "efficiency III" || "efficiency iii") {
                            if (money0 >= 6000 && lapis0 >= 800) {
                                file.open ("efficiency.txt", ios::out);
                                efficiency = 3;
                                file << efficiency << endl;
                                file.close();
                                file.open ("money.txt", ios::out);
                                money0 = money0 - 6000;
                                file << money0 << endl;
                                file.close();
                                file.open ("lapis.txt", ios::out);
                                lapis0 = lapis0 - 800;
                                file << lapis0 << endl;
                                file.close();
                                SetConsoleTextAttribute(h, k =6);
                                cout << "enchant complete\n" << "\n";
                            }

                            else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "enchant failed\n" << "\n";
                            }
                        }

                        else if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }

                    }

                    //With efficiency III
                    else if (efficiency == 3) {
                        cout << "efficiency level already at maximum\n" << "\n";
                        SetConsoleTextAttribute(h, k =7);
                        cin >> enchant;

                        if (enchant == "exit") {
                            SetConsoleTextAttribute(h, k =7);
                            cout << endl;
                            cin >> command;
                        }
                    }
                }

            }

            else if (command == "exit") {
                return 0;
            }
            
            else {
                SetConsoleTextAttribute(h, k = 7);
                cout << endl;
                cin >> command; 
            }
        }
    }
}