#!/bin/sh

git submodule sync && git submodule update --init --recursive --remote
