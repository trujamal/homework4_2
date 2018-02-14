/**
 * Binary Conversion with determining the amount of 1's in a value
 * @author Jamal Rasool
 * @date February 14th, 2018
 */

#include <iostream>
#include "binrep.h"

/**
 * Main
 * This function is designed to go through and pass through a number N, to the binrep algorithm file in order to
 * determine the amount of 1's in the binary equivalent of N. Then print the information to the console.
 * @return exit code zero meaning it completed with no errors.
 */

int main() {
    _binary_algorithim b;
    int _passthrough = 553432;
    int total = b._decimal_to_binary_converter(_passthrough);
    std :: cout << "The number of 1's for N equal to " << _passthrough <<  " is " << total << "." << std::endl;
    return 0;
}