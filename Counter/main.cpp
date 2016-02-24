//
//  main.cpp
//
//  Project: Counter
//

#include <iostream>
using namespace std;
#include "Counter.h"

// function: get user choices key stroke
void getUserChoice(char &key);

int main() {
    bool b_error = false;
    char ans;
    Counter obj_count;
    
    do
    {
        if (!b_error) {
            cout << "Please enter + for increment, - for decrement, r for reset, x for exit: ";
        }
        else {
            b_error = false;
        }
        
        obj_count.input();
        ans = obj_count.getKey();
        
        if (ans == '+') {
            obj_count.Increment();
            obj_count.output();
        }
        else if (ans == '-') {
            obj_count.Decrement();
            obj_count.output();
            
        }
        else if (ans == 'r' || ans == 'R') {
            obj_count.Reset();
            cout << "Counter has been reset" << endl;
            obj_count.output();
        }
        else if (ans == 'x' || ans == 'X') {
            exit(1);
        }
        else {
            cout << "You entered invalid key! please enter R for reset the counter" << endl;
            b_error = true;
        }

    } while(1);
    
    return 0;
}

void getUserChoice(char &key) {
    cin >> key;
}
