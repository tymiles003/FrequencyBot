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
 * Main expects to be fed the location
 * of the QuantaBot Configuration File.
 * @argc = 1 by Default - We're Expecting @ least 2.
 * @argv location of configuration file.
 * @return true-false boolean integer.
 */
int main(int argc, char *argv[]) {
    unsigned short int threads = thread::hardware_concurrency();
    Quanta QuantaBot(threads);
    /*
     * If the count is less than the amount of expected arguments 
     * Throw an error to the application user.
     */
    if (argc < 1) {
        cout << "You need to specify the location of the configuration file when starting QuantaBot.";
    } else {
        QuantaBot.parseConfig(file);
    }
    return 0;
}
