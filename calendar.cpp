#include <iostream>
using namespace std;

int main() {
    
    int daysInApril = 30;

   
    cout << "\033[33m   April   2023\033[0m" << endl;
    cout << "\033[33mMo Tue Wed Thu St Sd\033[0m" << endl;

    
    int startDay = 6; 

   
    for (int i = 0; i < startDay; i++) {
        cout << "   ";
    }

   
    for (int i = 1; i <= daysInApril; i++) {
       
        cout << "\033[33m" << i << "\033[0m";

       
        if (i < 10) {
            cout << "  ";
        }
        else {
            cout << " ";
        }

        
        if ((startDay + i) % 7 == 0) {
            cout << endl;
        }
    }

   
    if ((startDay + daysInApril) % 7 != 0) {
        cout << endl;
    }

    return 0;
}








