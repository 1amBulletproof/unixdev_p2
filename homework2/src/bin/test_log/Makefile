# Brandon Tarney 
# 02/2017
PROJECT_ROOT	= ../../..
LIBDIR		= $(PROJECT_ROOT)/lib

# INDIVIDUAL PROGRAM MODIFICATIONS SHOULD BEGIN HERE

# Program to make (binary)
EXECUTABLE	= test_log
# Source files for EXECUTABLE 
SRC	= test_log.c

# LIBS needed to compile the EXECUTABLE (eg: /usr/local/lib/libspecial.a)
# use $(LIBDIR) defined above if appropriate
LIBS	= $(LIBDIR)/liblog_mgr.a

# How they are invoked on the compile line (eg: -lspecial)
LLIBS	= -llog_mgr

# Local additions for CFLAG options
LOCAL_CFLAGS	= -g

# *******************************************************
# THE REST OF THE MAKEFILE SHOULD NOT NEED TO BE MODIFIED
# (EXCEPT BY THE PROJECT SOFTWARE DEVELOPMENT MANAGER)
include ../../../Make_templates/Make.bin
