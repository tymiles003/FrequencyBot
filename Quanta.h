/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Quanta.h
 * Author: johnjmcdonnell
 *
 * Created on January 27, 2018, 11:50 PM
 */

#ifndef QUANTA_H
#define QUANTA_H
#include <iostream>
#include <string>

using namespace std;

class Quanta {
public:
    Quanta(unsigned short int);
    Quanta(const Quanta& orig);
    virtual ~Quanta();
    bool setThreadCount(unsigned short int);
    unsigned short int parseConfig(char * filename);
private:
    unsigned short int threads = 0;
    string configFile;
    
};

#endif /* QUANTA_H */

