#include <iostream>

#include "driver.h"
#include "driverManager.h"
#include "encoder.h"

int main() {
    DriverManager Robot;
    cout << " Robot created " << endl;

    Encoder leftEncoder(0);
    Encoder rightEncoder(2);

    thread updateLeftCounter([&]() {leftEncoder.threadUpdateCounter();});
    thread updateRightCounter([&]() {rightEncoder.threadUpdateCounter();});
    thread updateLeftSpeed([&]() {rightEncoder.threadUpdateSpeed();});
    thread updateRightSpeed([&]() {leftEncoder.threadUpdateSpeed();});

    updateLeftCounter.detach();
    updateRightCounter.detach();
    updateLeftSpeed.detach();
    updateRightSpeed.detach();

    while(true) {}
}