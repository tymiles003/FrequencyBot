/* 
 * File:   main.cpp
 * Author: johnjmcdonnell
 *
 * Created on January 27, 2018, 11:48 PM
 */

#include <cstdlib>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <fstream>
#include <thread>
#include "Quanta.h"

using namespace std;
char configFile[] = "QuantaBot.conf";

/*
 * Handle all the arguments and commands passed upon initialization 
 */
int argumentHandler(unsigned int argc, char * argv[]) {
    unsigned int sentinel = 0;
    for (unsigned int i = 0; i < argc; i++) {
        if (strcmp(argv[i], configFile) == 0) {
            sentinel = i;
        }
    }
    return sentinel;
}

/*
 * Main expects to be fed the location
 * of the QuantaBot Configuration File.
 * @argc = 1 by Default - We're Expecting @ least 2.
 * @argv location of configuration file.
 * @return true-false boolean integer.
 */
int main(unsigned int argc, char * argv[]) {
    unsigned short int threads = thread::hardware_concurrency();
    Quanta QuantaBot(threads);
    /*
     * If the count is less than the amount of expected arguments 
     * Throw an error to the application user.
     */
    if (argc < 1) {
        std::cout << "@minimum please specify a conf file path to spawn QuantaBot.";
    } else {
        /*
         * If we get a legit command to spool a bot - do it.
         */
        unsigned int result = argumentHandler(argc, argv);
        if (result) {
            QuantaBot.parseConfig(argv[result]);
        }
    }
    return 0;
}

