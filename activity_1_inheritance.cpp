#include <iostream>
#include <string.h>
using namespace std;

class vehicle {
    // Accessible only to class itself
    private:
        double _speed;
        string _color;


    // Accessible externally and internally
    public:
        // Setter functions

        /// @brief Sets the speed of the vehicle.
        /// @param speed the speed in kph e.g. '156.73'.
        void set_speed(double speed) {
            _speed = speed;
        }

        /// @brief Sets the color coating of the vehicle.
        /// @param color the color coating e.g. 'yellow'.
        void set_color(string color) {
            _color = color;
        }


        // Getter functions

        /// @brief Gets the speed of the vehicle.
        /// @return speed
        double get_speed() {
            return _speed;
        }

        /// @brief Gets the color.
        /// @return color
        string get_color() {
            return _color;
        }

        /// @brief Prints out the speed and color of the vehicle.
        /// @return string 
        string get_specs() {
            return "\nVehicle Specifications\nSpeed: " + to_string(get_speed()) + "\nColor: " + get_color();
        }
};

class taxi : public vehicle {
    public:
        taxi() {
            set_speed(156.52);
            set_color("white");
            cout << get_specs() << endl;
        }
};

class bus : protected vehicle {
    public:
        bus() {
            set_speed(143.31);
            set_color("yellow");
            cout << get_specs() << endl;
        }
};

class truck : private vehicle {
    public:
        truck() {
            set_speed(161.94);
            set_color("blue");
            cout << get_specs() << endl;
        }
};

class van : vehicle {
    public:
        van() {
            set_speed(140.02);
            set_color("pink");
            cout << get_specs() << endl;
        }
};

int main() {
    taxi taxi;
    bus bus;
    truck truck;
    van van;
    return 0;
}