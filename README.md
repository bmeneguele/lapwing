# lapwing
Small, simple, open source crypto library for anyone willing to learn more on
the field

[![Build Status](https://travis-ci.com/bmeneguele/lapwing.svg?branch=master)](https://travis-ci.com/bmeneguele/lapwing)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# Features

**TBD**

# Goal

As decoupled as possible. Build an architecture that allows the user
enable/disable features in a per-algorithm granularity. The idea is not make
this library as complete as possible, but as simples as possible. Focus in size
first, then performance. Bring the library up-to-date regarding hardware crypto
capabilities. Make this library be suitable mainly for small projects (at
first).

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

A dedicated file will be added to the source code in the future about coding
style and other subjects, but for now make sure to:

* use built-in GitHub pull requests for contributing with code;
* feel free to open issues and reference them in any pull request;
* use `<tabs>` instead of `<spaces>` on source code;
* make sure to limit the line length to 79 (13" screens with tmux sessions
  might have a hard time with more than that);
* commit must always start with a `<file>: ` prefix to indicate where the most
* changes were performed, just by reading the commit title. In case of doubt,
* check older commits.

I'll keep an IRC channel alive on `irc.freenode.net` server and `#lapwing`
channel. Feel free to join to discuss anything related to the project.
