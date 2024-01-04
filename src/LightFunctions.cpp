//
// Created by Eigenaar on 4-1-2024.
//

#include "LightFunctions.h"

t_IrCodes decodeRemote(long unsigned int remoteCode) {

    /// @todo enter all other numbers

    switch (remoteCode) {
        case 0xBB44FF00:    // fast backwards
            return LEFT;
        case 0xBC43FF00:    // fast foreward
            return RIGHT;
        case 0xF30CFF00:    // 1
            return ONE;
        case 0xE718FF00:    // 2
            return TWO;
        case 0xA15EFF00:    // 3
            return THREE;
        default:
            break;

    }
}
