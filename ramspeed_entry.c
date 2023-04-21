#include "ramspeed.h"

int ramspeed_entry() {
    int argc = 5;
    char *argv[] = {"ramspeed", "-b", "3", "-g", "2"};
    return ramspeed(argc, argv);
}