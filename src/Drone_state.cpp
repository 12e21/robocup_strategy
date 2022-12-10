
#include "Drone_state.h"
using namespace drone_state;
Drone_state* Drone_state::instance=NULL;

Drone_state *Drone_state::get_instance() {
    if(this->instance==NULL)
    {
        instance=new Drone_state();
    }
    return this->instance;
}