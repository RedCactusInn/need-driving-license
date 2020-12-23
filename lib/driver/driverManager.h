//
// Created by pi on 12.12.2020.
//

#ifndef NEED_DRIVING_LICENSE_DRIVER_MANAGER_H
#define NEED_DRIVING_LICENSE_DRIVER_MANAGER_H

#include "driver.h"

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

#endif //NEED_DRIVING_LICENSE_DRIVER_MANAGER_H
