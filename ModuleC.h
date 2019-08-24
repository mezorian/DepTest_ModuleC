#ifndef ModuleC_H
#define ModuleC_H

#include "mezorian/DepTest_Logging/Logger.h"

namespace submodule_c {

    using Logger = logger10::Logger;

    class ModuleC {
        public:
            ModuleC() {}
            void doSmth() {
                Logger l;
                l.log("ModuleC is doing smth");
            }
    };

}

#endif // ModuleC_H
