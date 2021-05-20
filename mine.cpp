#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
using namespace std;

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
string shop;
int copper0;
int copper1 =0;
int iron0;
int iron1 = 0;

int main() {

    srand (time(NULL));

    fstream file;

    file.open ("pickaxe.txt",ios::in);
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
    file.open ("money.txt",ios::in);
    file >> money0;
    file.close();
    file.open ("copper.txt", ios::in);
    file >> copper0;
    file.close();
    file.open ("iron.txt", ios::in);
    file >> iron0;
    file.close();

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int k = 1; k < 255; k++) {

        SetConsoleTextAttribute(h, k = 13);
        cout << "help - list of commands\n" << "\n";
    
        SetConsoleTextAttribute(h, k = 7);
        cin >> command;

        while (1 < 2) {
            if (command == "mine") {
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
                else if (pickaxe == "stone") {
                    SetConsoleTextAttribute(h, k = 2);
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
                else if (pickaxe == "copper") {
                    SetConsoleTextAttribute(h, k = 2);
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
                else if (pickaxe == "iron") {
                    SetConsoleTextAttribute(h, k = 2);
                    stone1 = stone1 + rand() % 40 + 15;
                    coal1 = coal1 + rand() & 15 + 2;
                    copper1 = copper1 + rand() % 20 + 1;
                    iron1 = iron1 + rand() % 10 + 1;
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
                stone1 = 0;
                coal1 = 0;
                copper0 = 0;
                iron0 = 0;
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

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

            else if (command == "sellall") {
                SetConsoleTextAttribute(h, k = 12);
                money1 = money1 + stone0 + 1.5 * coal0 + 5 * fish0;
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

            else if (command == "price") {
                SetConsoleTextAttribute(h, k = 12);
                cout << "stone = $ 1\n";
                cout << "coal = $ 1.5\n";
                cout << "fish = $ 2\n" << "\n";
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            else if (command == "help") {
                SetConsoleTextAttribute(h, k = 13);
                cout << "list of commands:\n";
                cout << "mine\n";
                cout << "fish\n";
                cout << "sell+item to sell (eg. sellstone)\n";
                cout << "sellall\n";
                cout << "inv\n";
                cout << "price\n" << "\n";
                SetConsoleTextAttribute(h, k = 7);
                cin >> command;
            }

            else if (command == "craft") {
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
                    cin >> shop;

                    if (shop == "stone") {
                        if (money0 >= 15000 && stone0 >= 1000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "stone";
                            file << pickaxe;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 15000;
                            file << money0;
                            file.close();
                            file.open ("stone.txt", ios::out);
                            stone0 = stone0 - 1000;
                            file << stone0;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "stone pickaxe crafted\n" << "\n";
                        }
                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (shop == "copper") {
                        if (money0 >= 35000 && copper0 >= 7000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "copper";
                            file << pickaxe;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 35000;
                            file << money0;
                            file.close();
                            file.open ("copper.txt", ios::out);
                            copper0 = copper0 - 7000;
                            file << copper0;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }
                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }

                    }

                    else if (shop == "iron") {
                        if (money0 >= 75000 && iron0 >= 20000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "iron";
                            file << pickaxe;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 75000;
                            file << money0;
                            file.close();
                            file.open ("iron.txt", ios::out);
                            iron0 = iron0 - 20000;
                            file << iron0;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }
                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (shop == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command; 
                    }

                    else {
                        cout << endl;
                        cin >> shop; 
                    }
                }

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
                    cin >> shop;

                    if (shop == "copper") {
                        if (money0 >= 35000 && copper0 >= 7000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "copper";
                            file << pickaxe;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 35000;
                            file << money0;
                            file.close();
                            file.open ("copper.txt", ios::out);
                            copper0 = copper0 - 7000;
                            file << copper0;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }
                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }

                    }

                    else if (shop == "iron") {
                        if (money0 >= 75000 && iron0 >= 20000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "iron";
                            file << pickaxe;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 75000;
                            file << money0;
                            file.close();
                            file.open ("iron.txt", ios::out);
                            iron0 = iron0 - 20000;
                            file << iron0;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }
                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (shop == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command; 
                    }

                    else {
                        cout << endl;
                        cin >> shop; 
                    }
                }

                if (pickaxe == "copper") {
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
                    cin >> shop;

                    if (shop == "iron") {
                        if (money0 >= 75000 && iron0 >= 20000) {
                            file.open ("pickaxe.txt", ios::out);
                            pickaxe = "iron";
                            file << pickaxe;
                            file.close();
                            file.open ("money.txt", ios::out);
                            money0 = money0 - 75000;
                            file << money0;
                            file.close();
                            file.open ("iron.txt", ios::out);
                            iron0 = iron0 - 20000;
                            file << iron0;
                            file.close();
                            SetConsoleTextAttribute(h, k =6);
                            cout << "copper pickaxe crafted\n" << "\n";
                        }
                        else {
                            SetConsoleTextAttribute(h, k =6);
                            cout << "craft failed\n" << "\n";
                        }
                    }

                    else if (shop == "exit") {
                        SetConsoleTextAttribute(h, k =7);
                        cout << endl;
                        cin >> command; 
                    }

                    else {
                        cout << endl;
                        cin >> shop; 
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
}} 