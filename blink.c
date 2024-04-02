//********************//
//    ___   ___  ____ //
//   / _ | / _ \/ __/ //
//  / __ |/ // / _/   //
// /_/ |_/____/___/   //
//********************//
//!
//! \file: blink.c
//! \brief: Sample for using the GPIO on the Raspberry PI
//! \author: Jose Luis Unibaso

/********************** Include Files **************************/
#include <pigpio.h>

/********************* Type Definitions ************************/
/******************* Constant Definitions **********************/
#define LED 21

/*********** Macros (Inline Functions) Definitions *************/
/******************* Variable Definitions **********************/
/******************** Function Prototypes **********************/

int main() {
    gpioInitialise();
    gpioSetMode(LED, PI_OUTPUT);

    while (1) {
        gpioWrite(LED, 1);
        time_sleep(1.0);
        gpioWrite(LED, 0);
        time_sleep(1.0);
    }
    return 0;
}
