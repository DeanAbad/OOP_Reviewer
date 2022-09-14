#include <iostream>
#include <string.h>
using namespace std;

class vehicle {
    // Accessible only to class itself
    private:
        double _speed;
        int _wheels;
        string _type, _color, _specs;


    // Accessible externally and internally
    public:
        // Setter functions

        /// @brief Sets the type of the vehicle.
        /// @param type the type of the vehicle e.g. 'bus'.
        void set_type(string type) {
            _type = type;
        }

        /// @brief Sets the color coating of the vehicle.
        /// @param color the color coating e.g. 'yellow'.
        void set_color(string color) {
            _color = color;
        }

        /// @brief Sets the speed of the vehicle.
        /// @param speed the speed in kph e.g. '156.73'.
        void set_speed(double speed) {
            _speed = speed;
        }

        /// @brief Sets the wheels of the vehicle.
        /// @param wheels the number of wheels e.g. '4'.
        void set_wheels(int wheels) {
            _wheels = wheels;
        }

        /// @brief Sets all the properties of the vehicle.
        /// @param type the type of the vehicle e.g. 'bus'.
        /// @param color the color coating e.g. 'yellow'.
        /// @param speed the speed in kph e.g. '156.73'.
        /// @param wheels the number of wheels e.g. '4'.
        void set_specs(
            string type, string color,
            double speed, int wheels
        ) {
            _specs = "\nVehicle Specifications\nType: " + type + "\nColor: " + color + "\nSpeed: " + to_string(speed) + "\nWheels: " + to_string(wheels) + "\n";
        }


        // Getter functions

        /// @brief Gets the speed of the vehicle.
        /// @return speed
        double get_speed() {
            return _speed;
        }

        /// @brief Gets the number of wheels of the vehicle.
        /// @return wheels
        double get_wheels() {
            return _wheels;
        }

        /// @brief Gets the vehicle type.
        /// @return type
        string get_type() {
            return _type;
        }

        /// @brief Gets the color.
        /// @return color
        string get_color() {
            return _color;
        }

        /// @brief Gets the entire vehicle specification.
        /// @return specs
        string get_specs() {
            return _specs;
        }
};


int main() {
    vehicle taxi;
    taxi.set_wheels(4);
    cout << "\nTaxi's number of wheels: " << to_string(taxi.get_wheels()) << "\n" << endl;
    return 0;
}