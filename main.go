package main


/*
#ifdef linux
#cgo CFLAGS: -I./include/
#cgo LDFLAGS: ${SRCDIR}/./cmake-build-debug/libspc_lib.a -lpthread
#endif

#ifdef _WIN32
#cgo CFLAGS: -I./include/
#cgo LDFLAGS: ${SRCDIR}/./cmake-build-debug/libspc_lib.a -lpthread
#endif


#include "library.h"
 */
import "C"

func main()  {
	C.hello()
}