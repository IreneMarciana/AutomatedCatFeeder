#ifndef _test_main_H
#define _test_main_H
#ifndef _TEST_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_2049837144_H
#define TOP_LEVEL_PREAMBLE_2049837144_H
/*Correspondence: Range: [(9, 2), (11, 18)) -> Range: [(0, 0), (2, 18)) (verbatim=true; src=/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src/test.lf)*/#include <stdio.h>
#include <unistd.h>
#include <gpiod.h>
#endif // TOP_LEVEL_PREAMBLE_2049837144_H
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct test_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    bool led_on;
    int end[0]; // placeholder; MSVC does not compile empty structs
} test_self_t;
#endif
#endif
