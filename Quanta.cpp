/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Quanta.cpp
 * Author: johnjmcdonnell
 *              __________
         ______/ ________ \______
       _/      ____________      \_
     _/____________    ____________\_
    /  ___________ \  / ___________  \
   /  /XXXXXXXXXXX\ \/ /XXXXXXXXXXX\  \
  /  /############/    \############\  \
  |  \XXXXXXXXXXX/ _  _ \XXXXXXXXXXX/  |
__|\_____   ___   //  \\   ___   _____/|__
[_       \     \  X    X  /     /       _]
__|     \ \                    / /     |__
[____  \ \ \   ____________   / / /  ____]
     \  \ \ \/||.||.||.||.||\/ / /  /
      \_ \ \  ||.||.||.||.||  / / _/
        \ \   ||.||.||.||.||   / /
         \_   ||_||_||_||_||   _/   Welcome to Paradise.
           \     ........     /
 * QuantaBot
 * Created on January 27, 2018, 11:50 PM
 */

#include "Quanta.h"

Quanta::Quanta(unsigned short int threads) {
    if (this->setThreadCount(threads)) {
        cout << "New QuantaBot Instantiated...";
    }
}

Quanta::Quanta(const Quanta& orig) {
}

Quanta::~Quanta() {
}

bool Quanta::setThreadCount(unsigned short int threads) {
    if (threads > 0) {
        this->threads = threads;
        return true;
    } else {
        return false;
    }
}

unsigned short int Quanta::parseConfig(char * filename) {
    this->configFile = filename;
    return 0;
}

