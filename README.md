clang-playground
================

This is the fork of https://github.com/xinhuang/clang-playground the repository for clang-playground series.

Clone & build clang-playground source:  
```
git clone https://github.com/CIS-UO/clang-playground.git
mkdir build && cd build
cmake -G Ninja ..
cmake --build .
```
or if not using Ninja, replace `-G Ninja` with `-G "Unix Makefiles"`.

## Example Run
```
cd find-decl
find-decl decl_test.h
```
![find-decl run](img/find-decl_run.png)


## find-decl

Find all the declarations in a given file.

Tutor: [Clang Playground: Finding Declarations]

[Clang Playground: Finding Declarations]:http://xinhuang.github.io/clang/2014/10/19/clang-playground-finding-declarations

