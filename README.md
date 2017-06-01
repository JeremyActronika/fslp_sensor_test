# FSLP test

## Install tools

To compile and upload program, some tools are required : 

```bash
$ # Install toolchain
$ sudo apt-get install avrdude arduino
$
$ # Get submodule
$ git submodule update --init
$
$ # Install node tools
$ npm install
```

## Link

Using example from [https://github.com/pololu/fslp-led-strip-arduino-demo](https://github.com/pololu/fslp-led-strip-arduino-demo).

Information about sensor : [https://www.pololu.com/product/2730](https://www.pololu.com/product/2730)

## Example

Main program just get value (pressure and position) and send it to user (using Serial).

Library of fslp sensor is in `fslp.hpp` and `fslp.cpp`

Pololu website show how to connect FSLP sensor : 

![pictures/FSLP_pinout.jpg](pictures/FSLP_pinout.jpg)
![pictures/fspl_schematic.jpg](pictures/fslp_schematic.jpg)

Solder wire on fslp sensor like this :

* Red wire : SL
* Blue wire : Bot R0 = 4.7k
* Green wire : D2
* Yellow wire : D1

![pictures/fslp_connection.jpg](pictures/fslp_connection.jpg)
