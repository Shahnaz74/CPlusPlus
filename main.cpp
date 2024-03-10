#include <iostream>


using namespace std;

int main() {
    string street;
    cout << "Enter your street number: ";
    getline(cin, street);

    string city;
    cout << "Enter your city: ";
    getline(cin, city);

    string state;
    cout << "Enter the state: ";
    getline(cin, state);

    string zipcode;
    cout << "Enter the Zipcode:";
    getline(cin, zipcode);

    cout << street << endl
         << city << ", " <<state << ", "<< zipcode;
    return 0;


}