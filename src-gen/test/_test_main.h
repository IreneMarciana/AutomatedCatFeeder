#ifndef _TEST_MAIN_H
#define _TEST_MAIN_H
#include "include/core/reactor.h"
#include "_stepper.h"
#ifndef TOP_LEVEL_PREAMBLE_103394942_H
#define TOP_LEVEL_PREAMBLE_103394942_H
#include <stdio.h>
#endif // TOP_LEVEL_PREAMBLE_103394942_H

typedef struct {
    struct self_base_t base;
#line 13 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src-gen/test/_test_main.h"
#line 14 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src-gen/test/_test_main.h"
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _test_main_main_self_t;
_test_main_main_self_t* new__test_main();
#endif // _TEST_MAIN_H
