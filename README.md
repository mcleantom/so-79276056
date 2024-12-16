To build:

1. Clone the git repo with submodules
2. Open the project from Developer Command Prompt for VS 2022
then run:
```
./vcpkg/bootstrap-vcpkg.bat
mkdir build
cd build
cmake ..
cmake --build . --config Release --parallel 4
```
