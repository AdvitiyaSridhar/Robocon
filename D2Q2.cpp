#include <iostream>
using namespace std;
class Robot {
private:
    int speed;
    int battery;

public:
    void setSpeed(int s) {
        if (s >= 0 && s <= 100)
            speed = s;
        else
            speed = 0;
    }
    void setBattery(int b) {
        if (b >= 0 && b <= 100)
            battery = b;
        else
            battery = 0;
    }
    void moveForward() {
        if (battery == 0) {
            cout << "Battery Empty!" << endl;
            return;
        }
        cout << "Moving Forward" << endl;
        battery -= 5;
    }
    void moveBackward() {
        if (battery == 0) {
            cout << "Battery Empty!" << endl;
            return;
        }
        cout << "Moving Backward" << endl;
        battery -= 5;
    }
    void turnLeft() {
        if (battery == 0) {
            cout << "Battery Empty!" << endl;
            return;
        }
        cout << "Turning Left" << endl;
        battery -= 5;
    }
    void turnRight() {
        if (battery == 0) {
            cout << "Battery Empty!" << endl;
            return;
        }
        cout << "Turning Right" << endl;
        battery -= 5;
    }
    void displayStatus() {
        cout << "Robot Speed: " << speed << endl;
        cout << "Battery: " << battery << "%" << endl;
    }
};

int main() {
    Robot r;
    int speed, battery;
    cout << "Enter Speed: ";
    cin >> speed;
    cout << "Enter Battery: ";
    cin >> battery;
    r.setSpeed(speed);
    r.setBattery(battery);
    r.moveForward();
    r.turnLeft();
    r.moveForward();
    r.turnRight();
    r.displayStatus();

    return 0;
}
