#ifndef ModuleC_H
#define ModuleC_H

#include "mezorian/DepTest_Logging/Logger.h"

using Logger = logger7::Logger;

class ModuleC {
    public:
        ModuleC() {}
        void doSmth() {
            Logger l;
            l.log("ModuleC is doing smth");
        }
};

#endif // ModuleC_H
