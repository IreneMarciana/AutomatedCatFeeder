#include "include/api/schedule.h"
#ifdef FEDERATED
#include <string.h>
#endif // FEDERATED
#include "low_level_platform/api/low_level_platform.h"
#include "include/test/test.h"
#include "_test_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _test_mainreaction_function_0(void* instance_args) {
    _test_main_main_self_t* self = (_test_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 13 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/test.lf"
    printf("initializing Raspberry Pi 4.\n");
#line 17 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src-gen/test/_test_main.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _test_mainreaction_function_1(void* instance_args) {
    _test_main_main_self_t* self = (_test_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 17 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/test.lf"
    printf("hello Raspberry Pi 4!\n");
#line 26 "/Users/irene/Downloads/AppliedProject/AutomatedCatFeeder/src-gen/test/_test_main.c"
}
#include "include/api/reaction_macros_undef.h"
_test_main_main_self_t* new__test_main() {
    _test_main_main_self_t* self = (_test_main_main_self_t*)lf_new_reactor(sizeof(_test_main_main_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _test_mainreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _test_mainreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
