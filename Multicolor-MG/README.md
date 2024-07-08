# Multicolor-MG

Multicolor-MG is a parallel multigrid program for 3D natural source electromagnetic forward modeling 
using finite difference method. The program is developed in Fortran language based on the ModEM code.


# Prerequisites
-------------

Multicolor-MG uses several open source libraries, including:

- UMFPACK
  - [UMFPACK] is a set of routines for solving unsymmetric sparse linear systems, Ax=b, 
    using the Unsymmetric MultiFrontal method. It uses dynamic memory allocation, and 
	has a symbolic preordering and analysis phase that also reports the upper bounds 
	on the nonzeros in L and U, flop count, and memory usage in the numeric phase.
	It can be used for real and complex matrices, rectangular and square, and both 
	non-singular and singular.

- SuiteSparse
  - [SuiteSparse](https://people.engr.tamu.edu/davis/suitesparse.html) is a suite of 
    sparse matrix algorithms, including: 'UMFPACK'
	
We recommend the users install SuiteSparce directly, which includes UMFPACK.


Building
--------

Once installed the dependencies and unpacked the source code of Multicolor-MG.
We encourage user to place the path consent for third-party libraries in the 
“env.sh” file in the folder of src and “Makefile.inc” file. Then load 
third-party libraries using "source env.sh" before "make". After that, A Makefile 
can be found in the folder of src.

    $ make

Note that Multicolor-MG was only tested on Linux systems. 

Usage
-----

To run the forward modeling process, User can use the control files compute.par 
and control.fwd which are included in the folder of example to select input file, 
the forward computational method and the modeling result output, etc. with the 
details about the selection can be found in README in the folder example.


License
-------

Multicolor-MG is distributed under MIT License. Please see the file [LICENSE](./LICENSE)
for more details.

Contributing
------------

The users are encouraged to open an issue for questions or bugs. Pull requests for
any enhancement are also wellcomed.

Authors
-------

- Yongfei Wang, Tsinghua University, Email: <yongfeiwangyfw@126.com>.
- Rongwen Guo, Central South University, Email: <rongwenguo@csu.edu.cn>.




