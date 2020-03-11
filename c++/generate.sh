#!/bin/sh
#


#
# Generate the makefiles and publisher/subscriber code for listeners.idl
#
rtiddsgen -language C++ -example x64Linux4gcc7.3.0 listeners.idl 

# You will have to add -D__cplusplus to the generated makefile


