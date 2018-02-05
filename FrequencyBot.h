/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FrequencyBot.h
 * Author: johnjmcdonnell
 *
 * Created on January 27, 2018, 11:50 PM
 */

#ifndef QUANTA_H
#define QUANTA_H
#include <iostream>
#include <string>

using namespace std;

class FrequencyBot {
public:
    FrequencyBot(unsigned short int);
    FrequencyBot(const FrequencyBot& orig);
    virtual ~FrequencyBot();
    bool setThreadCount(unsigned short int);
    unsigned short int parseConfig(char * filename);
private:
    unsigned short int threads = 0;
    string configFile;
};

#endif /* FREQUENCY_H */

