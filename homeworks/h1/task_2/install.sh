#!/bin/bash

#set the destination directory for installation
INSTALL_DIR="./install"

# create the install directory structure
mkdir -p "$INSTALL_DIR/bin"
mkdir -p "$INSTALL_DIR/lib"

# copy necessary files to the install directory
cp -r ./results/bin/* "$INSTALL_DIR/bin/"
cp -r ./results/lib/* "$INSTALL_DIR/lib/"

ehco "Installation complete! Files are in the '$INSTALL_DIR' directory."
