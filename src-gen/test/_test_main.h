#ifndef _TEST_MAIN_H
#define _TEST_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_2049837144_H
#define TOP_LEVEL_PREAMBLE_2049837144_H
#include <stdio.h>
#include <unistd.h>
#include <gpiod.h>
#endif // TOP_LEVEL_PREAMBLE_2049837144_H
typedef struct {
    struct self_base_t base;
#line 13 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src-gen/test/_test_main.h"
    #line 17 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src/test.lf"
    bool led_on;
#line 16 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src-gen/test/_test_main.h"
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _test_main_main_self_t;
_test_main_main_self_t* new__test_main();
#endif // _TEST_MAIN_H
