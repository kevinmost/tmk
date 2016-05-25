#!/bin/bash
echo "Making files"
make 
echo "Waiting 5 seconds for you to plug in your keyboard in DFU mode!"
sleep 5
dfu-util -D build/ch.bin --serial mk20dx128vlf5
