#ifndef ModuleC_H
#define ModuleC_H

#include "Logger.h"


class ModuleC {
    public:
        ModuleC() {}
        void doSmth() {
            Logger l;
            l.log("ModuleC is doing smth");
        }
};

#endif // ModuleC_H
