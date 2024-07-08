#
#  This file is part of Multicolor-MG 
#    set by Yongfei Wang and Gangqiang Yang
#  on Thu APR 08 20:58:08 UTC 2021


# the UMFPACK of Suitsparse packages
################################################################################
IUMFPACK = -I$(topdir)/libSuiteSparse/SuiteSparse_config -I$(topdir)/libSuiteSparse/include

LUMFPACK = -L$(topdir)/libSuiteSparse/lib -lumfpack -lamd -lsuitesparseconfig -llapack

################################################################################

PLAT    =
LIBEXT  = .a
OUTC    = -o
OUTF    = -o
RM = rm -f
CC = gcc # -O2 -fopenmp -fexceptions -fPIC 
FC = gfortran
FL = gfortran
AR = ar vr
RANLIB = ranlib

#Preprocessor defs for calling Fortran from C (-DAdd_ or -DAdd__ or -DUPPER)
CDEFS   = -DAdd_

#Begin Optimized options
OPTF    = -O2 -fopenmp
OPTL    = -O2 -fopenmp
OPTC    = -O2 -fopenmp
#End Optimized options
