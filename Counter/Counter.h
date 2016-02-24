//
//  Counter.h
//  Counter
//

#ifndef Counter_h
#define Counter_h

// class for a counter object
class CounterType {
private:
    int n_count;
    
public:
    CounterType() { n_count = 0;}
    CounterType(int n_start) { n_count = n_start;}
    ~CounterType() { }
    
    void Reset() { n_count = 0; }
    void Increment() { n_count++; }
    void Decrement() {
        n_count--;
        if (n_count < 0) {
            n_count = 0;
        }
    }
    
    void output(ostream &outs) { outs << "count : " << n_count << endl; }
};

#endif /* Counter_h */
