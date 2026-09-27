#include<iostream>
using namespace std;
class Robot{
    public:
    int speed;
    cout << "Enter the speed of the bot: ";
    cin >> speed;
public:
    void moveForward(int speed){
        cout << "Bot is moving forward with speed " << speed   << endl;
    }
    void moveBackward(int speed){
    cout << "Bot is moving backward with speed " << speed   << endl;
}
void turnLeft(int speed){
    cout << "Bot is turning left with speed " << speed   << endl;
}
void turnRight(int speed){
    cout << "Bot is turning right with speed " << speed    << endl;
}
}
int main() {
    char choice;
    char a;
    Robot bot1;
    cout << "Enter your choice (F, B, L, R): ";
    cin >> choice;
	while (a =='yes') {
    switch (choice) {
        case 'F':
            bot1.moveForward(bot1.speed);
            break;
        case 'B':
            bot1.moveBackward(bot1.speed);
            break;
        case 'L':
            bot1.turnLeft(bot1.speed);
            break;
        case 'R':
            bot1.turnRight(bot1.speed);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}
    return 0;
}


