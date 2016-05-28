#!/bin/bash

echo "Waiting for you to plug your keyboard in in DFU mode"
DFU_LINES_OUTPUT=$(dfu-util --list | wc -l)
DFU_LINES_OUTPUT_STARTING=$DFU_LINES_OUTPUT

until [ $DFU_LINES_OUTPUT -gt $DFU_LINES_OUTPUT_STARTING ]; do
    DFU_LINES_OUTPUT=$(dfu-util --list | wc -l)
    sleep 2
done
