#ifndef MS_EXEC_HPP
#define MS_EXEC_HPP

#include "fast2.hpp"

namespace ms::run {

    using namespace ms::types;

    namespace alu {



    };

    struct vm {
        int exec_state = 0;
    };

    state init_vm(vm* vm) {
        vm->exec_state = 1;
    }

}

#endif