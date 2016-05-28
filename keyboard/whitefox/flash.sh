#!/bin/bash
echo "Making files"
make
../../block-until-dfu-util-plugged-in.sh
dfu-util -D build/ch.bin --serial mk20dx256vlh7
