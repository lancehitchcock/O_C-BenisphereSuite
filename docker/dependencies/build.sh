#!/bin/bash

mkdir -p /tmp/arduino_build

set +e
/opt/arduino-1.8.1/arduino-builder -compile -logger=machine -hardware /opt/arduino-1.8.1/hardware -tools /opt/arduino-1.8.1/tools-builder -tools /opt/arduino-1.8.1/hardware/tools/avr -built-in-libraries /opt/arduino-1.8.1/libraries -fqbn=teensy:avr:teensy31:usb=midi,speed=120,opt=o2std,keys=en-us -ide-version=10801 -build-path /tmp/arduino_build -warnings=none -verbose /source/o_c_REV.ino
set -e

cp /tmp/arduino_build/o_c_REV.ino.hex /output/hemispheres.hex
