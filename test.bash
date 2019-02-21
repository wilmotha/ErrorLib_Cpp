#!/bin/bash
echo Testing
g++ ErrorTest.cpp -o Test
./Test
rm -f Test*