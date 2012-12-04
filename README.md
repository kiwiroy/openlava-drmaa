## openlava-drmaa

A very young port of the
[FedStage](http://sourceforge.net/projects/lsf-drmaa/) DRMAA for LSF
(see original README) to work with Openlava so YMMV.

## Dependencies

Openlava, autotools so you can run autogen.sh. ragel for code
generation

## Installation

Prepare openlava

``` bash
   $ cd /opt/openlava-2.0/include
   $ ln -s ../include lsf
   $ touch config.h
```

Clone openlava-drmaa and install

``` bash
   $ git clone ...
   $ cd ...
   $ ./autogen.sh --prefix=/path/to/prefix --with-lsf-lib=/opt/openlava-2.0/lib --with-lsf-inc=/opt/openlava-2.0/include --with-lsf-static --enable-static
   $ make
```

Complain it doesn't compile! Keep calm there's no drama here (sic).

Compiling openlava with CFLAGS=-fPIC helps the static
compilation. Also make sure you specify a --prefix to
autogen/configure.  The original code needs this.

## See Also

* Subversion repositories for [lsf-drmaa](http://apps.man.poznan.pl/trac/lsf-drmaa/browser) and [pbs-drmaa](http://apps.man.poznan.pl/trac/pbs-drmaa/browser)
* [Openlava](http://www.openlava.org) and [Git](http://github.com/openlava/openlava)
* [FedStage](http://sourceforge.net/projects/lsf-drmaa/)

.
