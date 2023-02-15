#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char* end;

    cout << "Infinity" << " to double = " << strtod("infinity", &end) << endl;
    cout << "end string = " << end << endl << endl;

    cout << "Infpqrs" << " to double = " << strtod("Infpqrs", &end) << endl;
    cout << "end string = " << end << endl << endl;

    cout << "NaN11x" << " to double = " << strtod("NaN11x", &end) << endl;
    cout << "end string = " << end << endl << endl;

    _getch();
    return 0;
}