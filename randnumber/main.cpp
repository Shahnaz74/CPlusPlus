#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    srand(time(nullptr));
    int number = rand() % 10;
    cout << number;
    return 0;


}