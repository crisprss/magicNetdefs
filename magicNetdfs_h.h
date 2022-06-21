

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for newfuzzing.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __newfuzzing_h_h__
#define __newfuzzing_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [version][uuid] */ 

typedef /* [switch_type] */ /* [switch_type] */ union union_24
    {
    /* [case()][unique] */ struct Struct_148_t *unionMember_1;
    /* [case()][unique] */ struct Struct_166_t *unionMember_2;
    /* [case()][unique] */ struct Struct_236_t *unionMember_3;
    /* [case()][unique] */ struct Struct_306_t *unionMember_4;
    /* [case()][unique] */ struct Struct_342_t *unionMember_5;
    /* [case()][unique] */ struct Struct_432_t *unionMember_6;
    /* [case()][unique] */ struct Struct_470_t *unionMember_7;
    /* [case()][unique] */ struct Struct_496_t *unionMember_8;
    /* [case()][unique] */ struct Struct_558_t *unionMember_9;
    /* [case()][unique] */ struct Struct_604_t *unionMember_50;
    /* [case()][unique] */ struct Struct_616_t *unionMember_100;
    /* [case()][unique] */ struct Struct_634_t *unionMember_101;
    /* [case()][unique] */ struct Struct_634_t *unionMember_102;
    /* [case()][unique] */ struct Struct_644_t *unionMember_103;
    /* [case()][unique] */ struct Struct_656_t *unionMember_104;
    /* [case()][unique] */ struct Struct_670_t *unionMember_105;
    /* [case()][unique] */ struct Struct_692_t *unionMember_106;
    /* [case()][unique] */ struct Struct_718_t *unionMember_107;
    /* [case()][unique] */ struct Struct_760_t *unionMember_150;
    } 	union_24;

typedef struct Struct_148_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    } 	Struct_148_t;

typedef struct Struct_166_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    } 	Struct_166_t;

typedef struct Struct_192_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    } 	Struct_192_t;

typedef struct Struct_236_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    /* [size_is][unique] */ struct Struct_192_t *StructMember4;
    } 	Struct_236_t;

typedef struct Struct_272_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    byte StructMember3[ 8 ];
    } 	Struct_272_t;

typedef struct Struct_306_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    struct Struct_272_t StructMember4;
    long StructMember5;
    /* [size_is][unique] */ struct Struct_192_t *StructMember6;
    } 	Struct_306_t;

typedef struct Struct_342_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    struct Struct_272_t StructMember4;
    long StructMember5;
    long StructMember6;
    long StructMember7;
    } 	Struct_342_t;

typedef struct Struct_376_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    } 	Struct_376_t;

typedef struct Struct_384_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    struct Struct_376_t StructMember3;
    } 	Struct_384_t;

typedef struct Struct_432_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    struct Struct_272_t StructMember4;
    long StructMember5;
    long StructMember6;
    long StructMember7;
    /* [size_is][unique] */ struct Struct_384_t *StructMember8;
    } 	Struct_432_t;

typedef struct Struct_470_t
    {
    struct Struct_272_t StructMember0;
    } 	Struct_470_t;

typedef struct Struct_496_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    struct Struct_272_t StructMember4;
    long StructMember5;
    long StructMember6;
    long StructMember7;
    /* [size_is][unique] */ unsigned char *StructMember8;
    long StructMember9;
    } 	Struct_496_t;

typedef struct Struct_558_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    struct Struct_272_t StructMember4;
    long StructMember5;
    long StructMember6;
    long StructMember7;
    /* [size_is][unique] */ unsigned char *StructMember8;
    long StructMember9;
    /* [size_is][unique] */ struct Struct_384_t *StructMember10;
    } 	Struct_558_t;

typedef struct Struct_604_t
    {
    long StructMember0;
    long StructMember1;
    hyper StructMember2;
    } 	Struct_604_t;

typedef struct Struct_616_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    } 	Struct_616_t;

typedef struct Struct_634_t
    {
    long StructMember0;
    } 	Struct_634_t;

typedef struct Struct_644_t
    {
    long StructMember0;
    long StructMember1;
    } 	Struct_644_t;

typedef struct Struct_656_t
    {
    struct Struct_376_t StructMember0;
    } 	Struct_656_t;

typedef struct Struct_670_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    long StructMember1;
    long StructMember2;
    long StructMember3;
    long StructMember4;
    } 	Struct_670_t;

typedef struct Struct_692_t
    {
    long StructMember0;
    struct Struct_376_t StructMember1;
    } 	Struct_692_t;

typedef struct Struct_718_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    long StructMember1;
    long StructMember2;
    long StructMember3;
    long StructMember4;
    long StructMember5;
    /* [size_is][unique] */ unsigned char *StructMember6;
    } 	Struct_718_t;

typedef struct Struct_760_t
    {
    long StructMember0;
    /* [size_is][unique] */ unsigned char *StructMember1;
    } 	Struct_760_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_804
    {
    /* [case()][unique] */ struct Struct_896_t *unionMember_1;
    /* [case()][unique] */ struct Struct_938_t *unionMember_2;
    /* [case()][unique] */ struct Struct_980_t *unionMember_3;
    /* [case()][unique] */ struct Struct_1022_t *unionMember_4;
    /* [case()][unique] */ struct Struct_1064_t *unionMember_5;
    /* [case()][unique] */ struct Struct_1106_t *unionMember_6;
    /* [case()][unique] */ struct Struct_1148_t *unionMember_8;
    /* [case()][unique] */ struct Struct_1190_t *unionMember_9;
    /* [case()][unique] */ struct Struct_1246_t *unionMember_200;
    /* [case()][unique] */ struct Struct_1304_t *unionMember_300;
    } 	union_804;

typedef struct Struct_896_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_148_t *StructMember1;
    } 	Struct_896_t;

typedef struct Struct_938_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_166_t *StructMember1;
    } 	Struct_938_t;

typedef struct Struct_980_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_236_t *StructMember1;
    } 	Struct_980_t;

typedef struct Struct_1022_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_306_t *StructMember1;
    } 	Struct_1022_t;

typedef struct Struct_1064_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_342_t *StructMember1;
    } 	Struct_1064_t;

typedef struct Struct_1106_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_432_t *StructMember1;
    } 	Struct_1106_t;

typedef struct Struct_1148_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_496_t *StructMember1;
    } 	Struct_1148_t;

typedef struct Struct_1190_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_558_t *StructMember1;
    } 	Struct_1190_t;

typedef struct Struct_1210_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    } 	Struct_1210_t;

typedef struct Struct_1246_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_1210_t *StructMember1;
    } 	Struct_1246_t;

typedef struct Struct_1266_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_1266_t;

typedef struct Struct_1304_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_1266_t *StructMember1;
    } 	Struct_1304_t;

typedef struct Struct_1320_t
    {
    long StructMember0;
    /* [switch_is] */ union union_804 StructMember1;
    } 	Struct_1320_t;

typedef struct Struct_1352_t
    {
    struct Struct_272_t StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_1352_t;

typedef struct Struct_1392_t
    {
    long StructMember0;
    /* [size_is] */ struct Struct_1352_t StructMember1[ 1 ];
    } 	Struct_1392_t;

typedef struct Struct_1408_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_1408_t;

typedef struct Struct_1446_t
    {
    long StructMember0;
    /* [size_is] */ struct Struct_1408_t StructMember1[ 1 ];
    } 	Struct_1446_t;

typedef struct Struct_1466_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    } 	Struct_1466_t;

typedef struct Struct_1502_t
    {
    long StructMember0;
    /* [size_is] */ struct Struct_1466_t StructMember1[ 1 ];
    } 	Struct_1502_t;

typedef struct Struct_1544_t
    {
    long StructMember0;
    long StructMember1;
    hyper StructMember2;
    long StructMember3;
    long StructMember4;
    hyper StructMember5;
    } 	Struct_1544_t;

long Proc0( 
    /* [in] */ handle_t IDL_handle);

long Proc1( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4);

long Proc2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2);

long Proc3( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [switch_is][in] */ union union_24 *arg_4);

long Proc4( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [switch_is][out] */ union union_24 *arg_4);

long Proc5( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_0,
    /* [in] */ long arg_1,
    /* [unique][out][in] */ struct Struct_1320_t *arg_2,
    /* [unique][out][in] */ long *arg_3);

long Proc6( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);

long Proc7( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1);

long Proc8( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_272_t *arg_2,
    /* [unique][out][in] */ struct Struct_1392_t **arg_3);

long Proc9( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_1446_t *arg_1);

long Proc10( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [string][in] */ wchar_t *arg_4,
    /* [string][in] */ wchar_t *arg_5,
    /* [in] */ unsigned char arg_6,
    /* [in] */ long arg_7,
    /* [unique][out][in] */ struct Struct_1502_t **arg_8);

long Proc11( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [unique][out][in] */ struct Struct_1502_t **arg_5);

long Proc12( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3);

long Proc13( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);

long Proc14( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [in] */ long arg_1);

long Proc15( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3);

long Proc16( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][ref][out][in] */ wchar_t **arg_1,
    /* [out][in] */ unsigned char *arg_2,
    /* [out][in] */ long *arg_3);

long Proc17( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3);

long Proc18( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1);

long Proc19( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][unique][in] */ wchar_t *arg_4,
    /* [in] */ long arg_5,
    /* [unique][out][in] */ struct Struct_1502_t **arg_6);

long Proc20( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [unique][out][in] */ struct Struct_1502_t **arg_4);

long Proc21( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [unique][out][in] */ struct Struct_1320_t *arg_3,
    /* [unique][out][in] */ long *arg_4);

long Proc22( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [switch_is][in] */ union union_24 *arg_5,
    /* [unique][out][in] */ struct Struct_1502_t **arg_6);

long Proc23( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ unsigned char arg_4,
    /* [in] */ long arg_5);

long Proc24( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);

long Proc25( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [out] */ struct Struct_1544_t *arg_2);



extern RPC_IF_HANDLE DefaultIfName_v3_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v3_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


