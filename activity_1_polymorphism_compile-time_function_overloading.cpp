#include <iostream>
#include <string.h>
using namespace std;

class inequality {
    public:
        void compare(int x, int y) {
            if(x > y) {
                cout << to_string(x) + " is greater than " + to_string(y) << endl;
            } else {
                cout << to_string(y) + " is greater than " + to_string(x) << endl;
            }
        }

        void compare(int x, int y, int z) {
            if(x > y && x > z) {
                cout << to_string(x) + " is greater than " + to_string(y) + " and " + to_string(z) << endl;
            } else if(y > x && y > z) {
                cout << to_string(y) + " is greater than " + to_string(x) + " and " + to_string(z) << endl;
            } else {
                cout << to_string(z) + " is greater than " + to_string(x) + " and " + to_string(y) << endl;
            }
        }

        void compare(float x, float y) {
            if(x > y) {
                cout << to_string(x) + " is greater than " + to_string(y) << endl;
            } else {
                cout << to_string(y) + " is greater than " + to_string(x) << endl;
            }
        }

        void compare(float x, float y, float z) {
            if(x > y && x > z) {
                cout << to_string(x) + " is greater than " + to_string(y) + " and " + to_string(z) << endl;
            } else if(y > x && y > z) {
                cout << to_string(y) + " is greater than " + to_string(x) + " and " + to_string(z) << endl;
            } else {
                cout << to_string(z) + " is greater than " + to_string(x) + " and " + to_string(y) << endl;
            }
        }

        void compare(double x, double y) {
            if(x > y) {
                cout << to_string(x) + " is greater than " + to_string(y) << endl;
            } else {
                cout << to_string(y) + " is greater than " + to_string(x) << endl;
            }
        }

        void compare(double x, double y, double z) {
            if(x > y && x > z) {
                cout << to_string(x) + " is greater than " + to_string(y) + " and " + to_string(z) << endl;
            } else if(y > x && y > z) {
                cout << to_string(y) + " is greater than " + to_string(x) + " and " + to_string(z) << endl;
            } else {
                cout << to_string(z) + " is greater than " + to_string(x) + " and " + to_string(y) << endl;
            }
        }
};

int main() {
    inequality integer, decimal, largest;
    integer.compare(1, 2);
    integer.compare(1, 2, 3);
    decimal.compare(1.25, 3.26);
    decimal.compare(1.25, 3.26, 4.87);
    largest.compare(40.455, 58.1648);
    largest.compare(40.455, 58.1648, 6.1524);
    return 0;
}