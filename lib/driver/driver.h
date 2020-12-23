//
// Created by pi on 07.12.2020.
//

#ifndef NEED_DRIVING_LICENSE_DRIVER_H
#define NEED_DRIVING_LICENSE_DRIVER_H

#include <wiringPi.h>
#include <softPwm.h>

class Driver {
    int fwdPin;
    int bwdPin;
public:

    Driver(int fwdPin, int bwdPin);

   // ~Driver();

    void moveFwd(int pwmValue);

    void moveBwd(int pwmValue);

    void stop();
};


#endif //NEED_DRIVING_LICENSE_DRIVER_H
