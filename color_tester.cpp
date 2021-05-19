#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
using namespace std;

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int k = 1; k < 255; k++) {
      SetConsoleTextAttribute(h, k);
      cout << k << endl;
  }
}