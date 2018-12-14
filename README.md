# lapwing
Small, simple, open source crypto library for anyone willing to learn more on
the field

[![Build Status](https://travis-ci.com/bmeneguele/lapwing.svg?branch=master)](https://travis-ci.com/bmeneguele/lapwing)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# Features

**TBD**

# Installation
The steps to install and use the library are pretty much the standard for
others Linuxes projects:

```
$ ./configure
$ make
# make install
```

By default the installation path is `/usr/local/*`, where `*` stands for
`include`, `lib` and so on. You can change this behavior by passing `--prefix`
argument to our configuration script:

```
$ ./configure --prefix=./build
```

Make sure to read each configuration option with `--help`.

# Library usage
First add the library header to your source code:

```C
#include <stdio.h>
#include <lapwing/lapwing.h>
```

and link the object file to the shared library:

```
$ gcc -o <your-app> -llapwing <source-files>
```

In case you've set a different prefix path during configuration make sure to
add the path to your compilation command with `-L<lib-path>` and also set the
environment variable `LD_LIBRARY_PATH` during execution. Lets assume you've set
prefix path to `./build`:

```
$ gcc -o <your-app> -L./build/lib/ -llapwing <source-files>
$ LD_LIBRARY_PATH=./build/lib/ ./<your-app>
```

# Contributing

**TBD**
