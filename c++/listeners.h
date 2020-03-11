

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from listeners.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef listeners_615587401_h
#define listeners_615587401_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *listenersTYPENAME;

}

struct listenersSeq;
#ifndef NDDS_STANDALONE_TYPE
class listenersTypeSupport;
class listenersDataWriter;
class listenersDataReader;
#endif
class listeners 
{
  public:
    typedef struct listenersSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef listenersTypeSupport TypeSupport;
    typedef listenersDataWriter DataWriter;
    typedef listenersDataReader DataReader;
    #endif

    DDS_Short   x ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* listeners_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *listeners_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *listeners_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *listeners_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(listenersSeq, listeners);

NDDSUSERDllExport
RTIBool listeners_initialize(
    listeners* self);

NDDSUSERDllExport
RTIBool listeners_initialize_ex(
    listeners* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool listeners_initialize_w_params(
    listeners* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool listeners_finalize_w_return(
    listeners* self);

NDDSUSERDllExport
void listeners_finalize(
    listeners* self);

NDDSUSERDllExport
void listeners_finalize_ex(
    listeners* self,RTIBool deletePointers);

NDDSUSERDllExport
void listeners_finalize_w_params(
    listeners* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void listeners_finalize_optional_members(
    listeners* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool listeners_copy(
    listeners* dst,
    const listeners* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *msgTYPENAME;

}

struct msgSeq;
#ifndef NDDS_STANDALONE_TYPE
class msgTypeSupport;
class msgDataWriter;
class msgDataReader;
#endif
class msg 
{
  public:
    typedef struct msgSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef msgTypeSupport TypeSupport;
    typedef msgDataWriter DataWriter;
    typedef msgDataReader DataReader;
    #endif

    DDS_Char   c ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* msg_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *msg_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *msg_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *msg_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(msgSeq, msg);

NDDSUSERDllExport
RTIBool msg_initialize(
    msg* self);

NDDSUSERDllExport
RTIBool msg_initialize_ex(
    msg* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool msg_initialize_w_params(
    msg* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool msg_finalize_w_return(
    msg* self);

NDDSUSERDllExport
void msg_finalize(
    msg* self);

NDDSUSERDllExport
void msg_finalize_ex(
    msg* self,RTIBool deletePointers);

NDDSUSERDllExport
void msg_finalize_w_params(
    msg* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void msg_finalize_optional_members(
    msg* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool msg_copy(
    msg* dst,
    const msg* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<listeners> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<msg> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* listeners */

