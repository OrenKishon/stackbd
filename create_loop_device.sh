#!/bin/bash

file_dev=$HOME/disk_file
loop_dev=/dev/loop0

# if [ -e $loop_dev ]; then
#     echo "$loop_dev already exists"
#     exit 1
#  fi

if [ -e $file_dev ]; then
    echo "$file_dev already exists"
else
    dd if=/dev/urandom of=$file_dev bs=1024 count=100000
fi

sudo losetup $loop_dev $file_dev
