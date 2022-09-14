#include <iostream>
using namespace std;

class parent {
    public:
        virtual void print() {
            cout << "print parent" << endl;
        }

        void show() {
            cout << "show parent" << endl;
        }
};

class child : public parent {
    public:
        void print() {
            cout << "print child" << endl;
        }

        void show() {
            cout << "show child" << endl;
        }
};

int main() {
    parent *parent_pointer;
    child child;
    // Here, the parent_pointer references
    // the child with its address in the
    // memory.
    parent_pointer = &child;

    // As such, the virtual function was
    // binded at runtime, hence the runtime
    // polymorphism
    parent_pointer -> print();

    // Being a non-virtual function, this
    // one retains itself as it was binded
    // at compile time
    parent_pointer -> show();
    
    return 0;
}