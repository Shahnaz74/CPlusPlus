#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    const int maxValue = 6;
    const int minValue = 1;

    srand(time(nullptr));
    short first = (rand() % (maxValue - minValue + 1) + minValue);
    short second = (rand() % (maxValue - minValue + 1) + minValue);

    cout << first << ", " << second;
    return 0;
}