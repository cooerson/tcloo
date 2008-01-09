/*
 * $Id: tclOOStubInit.c,v 1.9 2008/01/09 10:14:08 dkf Exp $
 *
 * This file is (mostly) automatically generated from tclOO.decls.
 * It is compiled and linked in with the tclOO package proper.
 */

#include "tclOO.h"
#include "tclOOInt.h"

/* !BEGIN!: Do not edit below this line. */

TclOOStubs tclOOStubs = {
    TCL_STUB_MAGIC,
    TCLOO_STUBS_EPOCH,
    TCLOO_STUBS_REVISION,
    0,
    Tcl_CopyObjectInstance, /* 0 */
    Tcl_GetClassAsObject, /* 1 */
    Tcl_GetObjectAsClass, /* 2 */
    Tcl_GetObjectCommand, /* 3 */
    Tcl_GetObjectFromObj, /* 4 */
    Tcl_GetObjectNamespace, /* 5 */
    Tcl_MethodDeclarerClass, /* 6 */
    Tcl_MethodDeclarerObject, /* 7 */
    Tcl_MethodIsPublic, /* 8 */
    Tcl_MethodIsType, /* 9 */
    Tcl_MethodName, /* 10 */
    Tcl_NewMethod, /* 11 */
    Tcl_NewClassMethod, /* 12 */
    Tcl_NewObjectInstance, /* 13 */
    Tcl_ObjectDeleted, /* 14 */
    Tcl_ObjectContextIsFiltering, /* 15 */
    Tcl_ObjectContextMethod, /* 16 */
    Tcl_ObjectContextObject, /* 17 */
    Tcl_ObjectContextSkippedArgs, /* 18 */
    Tcl_ClassGetMetadata, /* 19 */
    Tcl_ClassSetMetadata, /* 20 */
    Tcl_ObjectGetMetadata, /* 21 */
    Tcl_ObjectSetMetadata, /* 22 */
    Tcl_ObjectContextInvokeNext, /* 23 */
    Tcl_ObjectGetMethodNameMapper, /* 24 */
    Tcl_ObjectSetMethodNameMapper, /* 25 */
    Tcl_ClassSetConstructor, /* 26 */
    Tcl_ClassSetDestructor, /* 27 */
};

TclOOIntStubs tclOOIntStubs = {
    TCL_STUB_MAGIC,
    TCLOOINT_STUBS_EPOCH,
    TCLOOINT_STUBS_REVISION,
    0,
    TclOOGetDefineCmdContext, /* 0 */
    TclOOMakeProcObjectMethod, /* 1 */
    TclOOMakeProcClassMethod, /* 2 */
    TclOONewProcMethod, /* 3 */
    TclOONewProcClassMethod, /* 4 */
    TclOOObjectCmdCore, /* 5 */
    TclOOIsReachable, /* 6 */
    TclOONewForwardClassMethod, /* 7 */
    TclOONewForwardMethod, /* 8 */
    TclOONewProcInstanceMethodEx, /* 9 */
    TclOONewProcClassMethodEx, /* 10 */
    TclOOInvokeObject, /* 11 */
};

/* !END!: Do not edit above this line. */

struct TclOOStubAPI tclOOStubAPI = {
    &tclOOStubs,
    &tclOOIntStubs
};
