//
// Created by Ludmila on 23.12.2020.
//
#include <iostream>
#include "encoder.h"

using namespace std;

Encoder::Encoder(int pin) : pin(pin), counter(0), speed(0) {
    wiringPiSetup();
    pinMode(this->pin, INPUT);
}

void Encoder::threadUpdateCounter() {
    int prewValue = digitalRead(pin);
    while (true) {
        if (prewValue != digitalRead(pin)) {
            prewValue = digitalRead(pin);
            counter++;
//            std::cout << "1" << endl ;
        }
    }
}

void Encoder::threadUpdateSpeed() {
    unsigned long long initCounter = counter;
    unsigned long long delta = 0;
    while (true) {
        this_thread::sleep_for(chrono::microseconds(1000));
        speed = counter - initCounter;
        initCounter = counter;
//        std::cout << "2" << endl ;
    }
}

unsigned long long Encoder::getSpeed() {
    return speed;
}

unsigned long long Encoder::getCounter() {
    return counter;
}


