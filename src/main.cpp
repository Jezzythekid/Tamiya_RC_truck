#include <Arduino.h>
#include <IRremote.h>
#include "LightFunctions.h"

int RECV_PIN = 7;

IRrecv irrecv(RECV_PIN);

void setup()
{
    pinMode(2, OUTPUT);
    Serial.begin(9600);

    irrecv.enableIRIn();  // Start the receiver
}

void loop() {

    long unsigned int rawResult = 0;
    t_IrCodes result;


    if (IrReceiver.decode())  {

        rawResult = IrReceiver.decodedIRData.decodedRawData;

        result = decodeRemote(rawResult);

        Serial.println(result);

        irrecv.resume(); // Receive  the next value
    }

}

//