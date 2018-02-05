/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bot.cpp
 * Author: johnjmcdonnell aka Phrixus Darkstone.
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
 * FrequncyBot
 * Created on January 27, 2018, 11:50 PM
 */

#include "FrequencyBot.h"

FrequencyBot::FrequencyBot(unsigned short int threads) {
    if (this->setThreadCount(threads)) {
        cout << "New FrequencyBot Instantiated...";
    }
}

FrequencyBot::FrequencyBot(const FrequencyBot& orig) {
}

FrequencyBot::~FrequencyBot() {
}

bool FrequencyBot::setThreadCount(unsigned short int threads) {
    if (threads > 0) {
        this->threads = threads;
        return true;
    } else {
        return false;
    }
}

unsigned short int FrequencyBot::parseConfig(char * filename) {
    this->configFile = filename;
    return 0;
}

