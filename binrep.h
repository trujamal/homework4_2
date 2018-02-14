/**
 * Binaryrep.h
 * This header file is designed to handle the conversion of a number into its binary, then increment a counter for every
 * time the program see's that the one is being incremented upwards
 * @author Jamal Rasool
 * @date Febraury 14th
 */

#ifndef HOMEWORK4_2_BINREP_H
#define HOMEWORK4_2_BINREP_H

class _binary_algorithim {
public:
    int _decimal_to_binary_converter(int N) {
        static int counter;
        if (N == 1) {
            counter + 1;
        } else if (N == 0)
            return counter;

        if (N % 2 == 0) {

            _decimal_to_binary_converter(N / 2);
        } else {
            counter++;

            _decimal_to_binary_converter(N / 2);
        }

        return counter;
    }
};


#endif //HOMEWORK4_2_BINREP_H
