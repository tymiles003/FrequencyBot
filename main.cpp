/* 
 * File:   main.cpp
 * Author: johnjmcdonnell
 *
 * Created on January 27, 2018, 11:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <thread>
#include "Quanta.h"

using namespace std;

/*
 * Handle all the arguments and commands passed upon initialization 
 */
void argumentHandler(unsigned int argc, char ** argv[]) {
    cout << "Here in the handler" << endl;
    for (unsigned int i = 1; i < argc; i++) {
        cout << i << endl;
        cout << argv[i] << endl;
    }
}

/*
 * Main expects to be fed the location
 * of the QuantaBot Configuration File.
 * @argc = 1 by Default - We're Expecting @ least 2.
 * @argv location of configuration file.
 * @return true-false boolean integer.
 */
int main(unsigned int argc, char ** argv[]) {
    unsigned short int threads = thread::hardware_concurrency();
    Quanta QuantaBot(threads);
    /*
     * If the count is less than the amount of expected arguments 
     * Throw an error to the application user.
     */
    if (argc < 1) {
        cout << "@minimum please specify a conf file path to spawn QuantaBot.";
    } else {
        //QuantaBot.parseConfig(file);
        argumentHandler(argc, argv);
    }
    return 0;
}

