function build_default() {
    mkdir build_default
    cd build_default
    cmake .. -DWITH_IPP=OFF -DWITH_OPENCL=OFF -DWITH_OPENMP=OFF
    make
}
function build_ipp() {
    mkdir build_ipp
    cd build_ipp
    cmake .. -DWITH_IPP=ON -DWITH_OPENCL=OFF -DWITH_OPENMP=OFF
    make
}
function build_opencl() {
    mkdir build_opencl
    cd build_opencl
    cmake .. -DWITH_IPP=OFF -DWITH_OPENCL=ON -DWITH_OPENMP=OFF
    make
}
function build_openmp() {
    mkdir build_openmp
    cd build_openmp
    cmake .. -DWITH_IPP=OFF -DWITH_OPENCL=OFF -DWITH_OPENMP=ON
    make
}

build_default&
build_ipp&
build_opencl&
build_openmp&
