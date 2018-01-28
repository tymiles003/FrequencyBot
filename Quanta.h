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

class Quanta {
public:
    Quanta();
    Quanta(const Quanta& orig);
    virtual ~Quanta();
private:
    int parseConfig();
};

#endif /* QUANTA_H */

