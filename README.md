# Tamiya RC truck:

Here you can find the software (+ a little bit of hardware) for a RC truck. Mainly the lighting system and gear shifter.

## High level design

The truck will be build on a Tamiya chassis. Currently the plan is to make a Volvo FH 16, but like everything plans change.

The truck will consist of two systems:
1. Remote controlled steering and acceleration
2. Shifting, lighting and misc.

Why the two systems? because I can salvage an RC transmitter and reciever of an old RC car _see Hardware_, wich contains 4 channels, and if I want to add the shifting and lighting to that system too i have to buy another transmitter and reciever.

## Hardware

For the 3D model of the cabin I'm using [this model](https://cults3d.com/en/3d-model/architecture/volvo-fh-cub-tamiya-truck).
Printed on an Creality Ender 3 @ 205°C / 55°C in PLA. 

For the microcontroller im using an "Arduino uno" (actually a ELEGOO UNO, but it's the same thing).

To steer and accelerate the truck im using a 2.4Ghz RC setup salvaged from an old Traxxas Bandit [Traxxas 2216 reciever and transmitter](https://traxxas.com/sites/default/files/2238-2208-2209-24GHz-INST.pdf).

For the lights im just using simple 3mm and 5mm led's wired up on a breadboard (when the sofware and truck is done, I will upgrade to an PCB). In the frame of the Truck there are two simple 5V servo's, one for the steering one for the gear shifting (The servo's are 180° but 90° is the mechanical max). As for the main driving power a Carson 500906219 - Launcher 80 x 2 Turns DC motor is used. How I am going to power this moter, I haven't figured out jet.

## Software

> TODO write Software
