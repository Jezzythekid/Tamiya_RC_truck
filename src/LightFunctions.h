//
// Created by Eigenaar on 4-1-2024.
//

#ifndef LIGHTING_SYSTEM_IR_LIGHTFUNCTIONS_H
#define LIGHTING_SYSTEM_IR_LIGHTFUNCTIONS_H

typedef enum {
    ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN,
    EIGHT, NINE, ON_OFF, VOL_UP, VOL_DOWN, FUNC_STOP,
    LEFT, RIGHT, PAUSE, ARROW_UP, ARROW_DOWN, EQ,
    ST_REPT

} t_IrCodes;


/// function that decodes the signal into a keyword.
/// @param remoteCode the raw code to be decoded.
/// @return the t_ItCodes keyword
t_IrCodes decodeRemote(long unsigned int remoteCode);

#endif //LIGHTING_SYSTEM_IR_LIGHTFUNCTIONS_H
