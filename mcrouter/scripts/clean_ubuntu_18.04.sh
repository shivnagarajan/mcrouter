#!/usr/bin/env bash

set -ex

sudo apt-get install -y libdouble-conversion1 libgflags2.2 libjemalloc1 libgoogle-glog0v5 \
     libboost-context1.65.1 libboost-program-options1.65.1 libboost-regex1.65.1 \
     libevent-2.1-6 libboost-system1.65.1 libboost-filesystem1.65.1 libssl1.0.0

sudo apt-get purge -y gcc g++ ragel autoconf \
    git libtool python-dev libssl1.0-dev libevent-dev \
    binutils-dev make libdouble-conversion-dev libgflags-dev \
    libgoogle-glog-dev libjemalloc-dev

sudo apt-get purge -y 'libboost.*-dev'
sudo apt-get autoremove --purge -y
sudo apt-get autoclean -y
sudo apt-get clean -y

if [[ "x$1" != "x" ]]; then
    PKG_DIR=$1/pkgs
    INSTALL_DIR=$1/install
    strip "$INSTALL_DIR"/bin/mcrouter
    rm -rf "$PKG_DIR"
    rm -rf "$INSTALL_DIR"/lib/*.a
    rm -rf "$INSTALL_DIR"/include
fi
