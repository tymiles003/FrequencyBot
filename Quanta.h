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
using namespace std;

class Quanta {
public:
    Quanta(unsigned short int);
    Quanta(const Quanta& orig);
    virtual ~Quanta();
    bool setThreadCount(unsigned short int);
private:
    unsigned short int threads = 0;
    unsigned short int parseConfig();
};

#endif /* QUANTA_H */

