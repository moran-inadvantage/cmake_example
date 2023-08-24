#!/bin/bash

APP=APP1

if [ ! -z $1 ] ; then
    APP=$1
fi

cmake . -DPROJECT=${APP} -B build
make -C build 
./build/src/app/app