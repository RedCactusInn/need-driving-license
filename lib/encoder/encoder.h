//
// Created by Ludmila on 23.12.2020.
//

#ifndef NEED_DRIVING_LICENSE_ENCODER_H
#define NEED_DRIVING_LICENSE_ENCODER_H

#include <wiringPi.h>
#include <thread>
#include <chrono>

class Encoder {

    unsigned long long counter;

    unsigned long long speed;

    int pin;

public:

    Encoder(int pin);

    void threadUpdateCounter();

    void threadUpdateSpeed();

    unsigned long long getSpeed();

    unsigned long long getCounter();
};


#endif //NEED_DRIVING_LICENSE_ENCODER_H
