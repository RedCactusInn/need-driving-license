//
// Created by pi on 12.12.2020.
//

#ifndef DRIVER_DRIVERMANAGER_H
#define DRIVER_DRIVERMANAGER_H

#include <iostream>

using namespace std;

class DriverManager {
    Driver left;
    Driver right;
public:
    DriverManager();

//    ~DriverManager();

    void move(int speedLeft, int speedRight);

    void stop();
};

#endif //DRIVER_DRIVERMANAGER_H
