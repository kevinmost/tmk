#!/bin/bash
make clean
echo "Waiting 5 seconds for you to put your keyboard into DFU mode"
sleep 5
make -f Makefile KEYMAP=kevin dfu
