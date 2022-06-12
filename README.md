# cv_bmc
Benchmark programs for opencv.

## Requirements
* Ubuntu 18.04
* Open CV v3.2.0
* CMake >= 3.7
* Python 2

## Build
```bash
$ git clone https://github.com/rkoyama1623/cv_bmc.git --recurse-submodules
$ cd cv_bmc
$ ./build.sh
```
## DEMO
```bash
$ cd cv_bmc
$ ./build_default/modules/imgproc/bin/bmc_threshold
average process time: 23[ms]
$ ./build_opencl/modules/imgproc/bin/bmc_threshold
average process time: 1[ms]
```

## LICENSE
MIT License
