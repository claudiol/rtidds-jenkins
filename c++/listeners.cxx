

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from listeners.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "listeners.h"

#ifndef NDDS_STANDALONE_TYPE
#include "listenersPlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *listenersTYPENAME = "listeners";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* listeners_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member listeners_g_tc_members[1]=
    {

        {
            (char *)"x",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode listeners_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"listeners", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            listeners_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for listeners*/

    if (is_initialized) {
        return &listeners_g_tc;
    }

    listeners_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    listeners_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short_w_new;

    /* Initialize the values for member annotations. */
    listeners_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
    listeners_g_tc_members[0]._annotations._defaultValue._u.short_value = 0;
    listeners_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
    listeners_g_tc_members[0]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
    listeners_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
    listeners_g_tc_members[0]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;

    listeners_g_tc._data._sampleAccessInfo =
    listeners_get_sample_access_info();
    listeners_g_tc._data._typePlugin =
    listeners_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &listeners_g_tc;
}

#define TSeq listenersSeq
#define T listeners
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *listeners_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo listeners_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(listenersSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        listenersSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &listeners_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *listeners_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    listeners *sample;

    static RTIXCdrMemberAccessInfo listeners_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo listeners_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &listeners_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        listeners);
    if (sample == NULL) {
        return NULL;
    }

    listeners_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->x - (char *)sample);

    listeners_g_sampleAccessInfo.memberAccessInfos = 
    listeners_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(listeners);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            listeners_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            listeners_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    listeners_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    listeners_g_sampleAccessInfo.getMemberValuePointerFcn = 
    listeners_get_member_value_pointer;

    listeners_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &listeners_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *listeners_get_type_plugin_info()
{
    static RTIXCdrTypePlugin listeners_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        listeners_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        listeners_finalize_w_return,
        NULL
    };

    return &listeners_g_typePlugin;
}
#endif

RTIBool listeners_initialize(
    listeners* sample) {
    return listeners_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool listeners_initialize_ex(
    listeners* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return listeners_initialize_w_params(
        sample,&allocParams);

}

RTIBool listeners_initialize_w_params(
    listeners* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->x = 0;

    return RTI_TRUE;
}

RTIBool listeners_finalize_w_return(
    listeners* sample)
{
    listeners_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void listeners_finalize(
    listeners* sample)
{

    listeners_finalize_ex(sample,RTI_TRUE);
}

void listeners_finalize_ex(
    listeners* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    listeners_finalize_w_params(
        sample,&deallocParams);
}

void listeners_finalize_w_params(
    listeners* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void listeners_finalize_optional_members(
    listeners* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool listeners_copy(
    listeners* dst,
    const listeners* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyShort (
            &dst->x, &src->x)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'listeners' sequence class.
*/
#define T listeners
#define TSeq listenersSeq

#define T_initialize_w_params listeners_initialize_w_params

#define T_finalize_w_params   listeners_finalize_w_params
#define T_copy       listeners_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *msgTYPENAME = "msg";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* msg_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member msg_g_tc_members[1]=
    {

        {
            (char *)"c",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode msg_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"msg", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            msg_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for msg*/

    if (is_initialized) {
        return &msg_g_tc;
    }

    msg_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    msg_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char_w_new;

    /* Initialize the values for member annotations. */
    msg_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_CHAR;
    msg_g_tc_members[0]._annotations._defaultValue._u.char_value = 0;

    msg_g_tc._data._sampleAccessInfo =
    msg_get_sample_access_info();
    msg_g_tc._data._typePlugin =
    msg_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &msg_g_tc;
}

#define TSeq msgSeq
#define T msg
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *msg_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo msg_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(msgSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        msgSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &msg_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *msg_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    msg *sample;

    static RTIXCdrMemberAccessInfo msg_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo msg_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &msg_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        msg);
    if (sample == NULL) {
        return NULL;
    }

    msg_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->c - (char *)sample);

    msg_g_sampleAccessInfo.memberAccessInfos = 
    msg_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(msg);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            msg_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            msg_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    msg_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    msg_g_sampleAccessInfo.getMemberValuePointerFcn = 
    msg_get_member_value_pointer;

    msg_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &msg_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *msg_get_type_plugin_info()
{
    static RTIXCdrTypePlugin msg_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        msg_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        msg_finalize_w_return,
        NULL
    };

    return &msg_g_typePlugin;
}
#endif

RTIBool msg_initialize(
    msg* sample) {
    return msg_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool msg_initialize_ex(
    msg* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return msg_initialize_w_params(
        sample,&allocParams);

}

RTIBool msg_initialize_w_params(
    msg* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->c = 0;

    return RTI_TRUE;
}

RTIBool msg_finalize_w_return(
    msg* sample)
{
    msg_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void msg_finalize(
    msg* sample)
{

    msg_finalize_ex(sample,RTI_TRUE);
}

void msg_finalize_ex(
    msg* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    msg_finalize_w_params(
        sample,&deallocParams);
}

void msg_finalize_w_params(
    msg* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void msg_finalize_optional_members(
    msg* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool msg_copy(
    msg* dst,
    const msg* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyChar (
            &dst->c, &src->c)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'msg' sequence class.
*/
#define T msg
#define TSeq msgSeq

#define T_initialize_w_params msg_initialize_w_params

#define T_finalize_w_params   msg_finalize_w_params
#define T_copy       msg_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<listeners>::get() 
        {
            return (const RTIXCdrTypeCode *) listeners_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<msg>::get() 
        {
            return (const RTIXCdrTypeCode *) msg_get_typecode();
        }

    } 
}
#endif
