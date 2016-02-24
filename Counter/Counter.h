//
//  Counter.h
//  Counter
//

#ifndef Counter_h
#define Counter_h

#include <iostream>
using namespace std;

// class for a counter object
class Counter {
private:
    int n_count;
    char key;
    
public:
    Counter() { n_count = 0;}
    ~Counter() { }
    
    char getKey() { return key; }
    void Reset() { n_count = 0; }
    void Increment() { n_count++; }
    void Decrement() { n_count--; }
    
    void input() { cin >> key; }
    void output() { cout << "count : " << n_count << endl; }
};

#endif /* Counter_h */
