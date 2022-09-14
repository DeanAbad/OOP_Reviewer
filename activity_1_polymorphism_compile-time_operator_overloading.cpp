#include <iostream>
#include <string.h>
using namespace std;

class Complex {
    private:
        int real_number, imaginary_number;
    
    public:
        Complex(int R = 0, int i = 0) {
            real_number = R;
            imaginary_number = i;
        }
        
        // As this is yet another constructor,
        // it will automatically run together
        // with the operator once it is used
        // with between two Complex objects
        Complex operator + (Complex const &object) {
            Complex result;
            result.real_number = real_number + object.real_number;
            result.imaginary_number = imaginary_number + object.imaginary_number;
            return result;
        }

        void result() {
            cout << "Result: " << to_string(real_number) << " + i" << to_string(imaginary_number) << endl;
        }
};
   
int main() {
    // Firstly, the two objects have their own, individual results
    Complex c1(10, 5), c2(2, 4);
    // Then, operator + is applied between the two Complex objects
    Complex c3 = c1 + c2;
    c3.result();
    return 0;
}