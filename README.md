# gap_riscv_toolchain

## About
A precompiled riscv toolchain for GAP8 IoT Application Processor, which is compiled with:
gcc version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.9)

The precompiled toolchain should be clone by using git lfs, this should be installed by using the following command:

~~~~~shell
curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
sudo apt-get install git-lfs
git lfs install
~~~~~

For compiling the toolchain, please clone the source from:
https://github.com/pulp-platform/pulp-riscv-gnu-toolchain
