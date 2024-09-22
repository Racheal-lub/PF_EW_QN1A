#include <iostream>
using namespace std;
bool is_leap_year(unsigned int Y) {
   
    if (Y % 100 == 0) {

        return Y % 400 == 0;
    } else {
        
        return Y % 4 == 0;
    }
}

int main() {
    
    cout << boolalpha;
    cout << "Is 2000 a leap year? " << is_leap_year(2000) <<endl;  
    cout << "Is 1900 a leap year? " << is_leap_year(1900) <<endl;  
    cout << "Is 2020 a leap year? " << is_leap_year(2020) <<endl;  
    cout << "Is 2021 a leap year? " << is_leap_year(2021) <<endl;  

    
    unsigned int year;
    cout << "Enter a year: ";
    cin >> year;
    cout << "Is " << year << " a leap year? " << is_leap_year(year) << endl;

    return 0;
}
