# numcrunch
A collection of functions that crunches numbers

Currently implemented:
* clenshaw: both scalar and vectorized version

# compile
```sh
cd _build
cmake ..
make
# executables can be found under _bin
```
To generate assembly, which is handy if you want to verify certain optimization has kicked in, use the following:
```sh
SRC=
gcc -c -std=c11 -ggdb3 -O3 -fverbose-asm -S -march=native $SRC
```