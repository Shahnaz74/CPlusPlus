#include <iostream>

using namespace std;

int main() {

   bool isCitizen = false;
    bool hasBachelorDegree = true;
    short workExperience = 10;

    bool isEligible = isCitizen && (hasBachelorDegree || workExperience >= 2);
    cout << boolalpha << isEligible;

 return 0;
}