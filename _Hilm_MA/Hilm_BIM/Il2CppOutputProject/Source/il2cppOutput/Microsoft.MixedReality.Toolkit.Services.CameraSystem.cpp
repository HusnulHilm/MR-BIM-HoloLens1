﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tC5FD8644EB6015DC0B6E05D31B98881E8472EDFB;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider
struct IMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4DB89DE984D6EB17A3EB78E36B8281C29FC0F414;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t79EFDB25F7A94A36FB5FAC9E08A555D48351F8A8;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_tCD6DC619179D0393866597031148409676C28E09;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t2629B7403994FE384DBB10F935AF4592DA31AB29;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tDC1CD40B05CBDE6D48C48DFBEA005235A3D92A73;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB7E8C2D5722DC4602A217AF94A60F5D741898297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC52DD16AEF4363A8F73ED235E6A089F9297BAD3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityService_tBA8FCEEE1F3CECC11375B963E0FD10D80F6F2BDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t9F2AF36C86C99FA4D19C020706ECA4BDFF935BA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tAB27BCC830846CEE67DD2AE6DEDDE9107AEA66EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tD6EE9A60B0F74EA4204E78AD4A2BF3A1C58FBEF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4;
IL2CPP_EXTERN_C String_t* _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE;
IL2CPP_EXTERN_C String_t* _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B;
IL2CPP_EXTERN_C String_t* _stringLiteralD47B37C1B233818E5C869621EE522D30507C5050;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mCCEBF8BFA0AF37DA3979EED2561814268B5A175A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mF157D0135B6FC7F6A1CE78C863ED572A56A3B6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mA9396F818CF73E785A5A78DF0CACE7DC58786523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_m40B570D0E8CC38100A1248732AE8BBC234F86CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m2C829285C423BDBE6919B18C91049F2D6E256B58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E144951E197120E0FF5F7BD038744F8516DB2D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Destroy_m60CAAD5B37313E12226AFB0A710DED4B15257F98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Disable_mA1F0E500B26D0743DC7EC1FA3C624DF5EE35D44B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Enable_mEE53A29DACE9683E7FE7611703E0918541533169_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Initialize_m0C343E01EE2F69522DFA75A82BFDD24548595219_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mBE6C6C10ECA04AF25C0B656EFC53C75A836CAC81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Update_m6E959AA951F49A8FAD41D3A4E54A4CE2AF6463BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__cctor_m0BAC3C713A400AE98CD0131207B9010FF0961FFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__ctor_mB81245F92E671DDC48A9DF5BCADE67FD78A42734_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F_MetadataUsageId;

struct MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2124081EA21E21A020B26A1D1150BA5EBF784CE1 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65, ___isInitialized_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65, ___isEnabled_5)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_t7FCFC7E4F1BEBFED95CF21C722F8192F341A1077 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t7FCFC7E4F1BEBFED95CF21C722F8192F341A1077, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct SupportedPlatforms_t60A41E6E394ADCCDEEEA956C240F0A8645F25322 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_t60A41E6E394ADCCDEEEA956C240F0A8645F25322, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.CameraClearFlags
struct CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41  : public BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_9;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_10;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tDC1CD40B05CBDE6D48C48DFBEA005235A3D92A73 * ___postponedActions_11;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t2629B7403994FE384DBB10F935AF4592DA31AB29 * ___postponedObjectActions_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t79EFDB25F7A94A36FB5FAC9E08A555D48351F8A8 * ___U3CEventHandlersByTypeU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41, ___eventExecutionDepth_9)); }
	inline int32_t get_eventExecutionDepth_9() const { return ___eventExecutionDepth_9; }
	inline int32_t* get_address_of_eventExecutionDepth_9() { return &___eventExecutionDepth_9; }
	inline void set_eventExecutionDepth_9(int32_t value)
	{
		___eventExecutionDepth_9 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41, ___eventSystemHandlerType_10)); }
	inline Type_t * get_eventSystemHandlerType_10() const { return ___eventSystemHandlerType_10; }
	inline Type_t ** get_address_of_eventSystemHandlerType_10() { return &___eventSystemHandlerType_10; }
	inline void set_eventSystemHandlerType_10(Type_t * value)
	{
		___eventSystemHandlerType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_10), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41, ___postponedActions_11)); }
	inline List_1_tDC1CD40B05CBDE6D48C48DFBEA005235A3D92A73 * get_postponedActions_11() const { return ___postponedActions_11; }
	inline List_1_tDC1CD40B05CBDE6D48C48DFBEA005235A3D92A73 ** get_address_of_postponedActions_11() { return &___postponedActions_11; }
	inline void set_postponedActions_11(List_1_tDC1CD40B05CBDE6D48C48DFBEA005235A3D92A73 * value)
	{
		___postponedActions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_11), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41, ___postponedObjectActions_12)); }
	inline List_1_t2629B7403994FE384DBB10F935AF4592DA31AB29 * get_postponedObjectActions_12() const { return ___postponedObjectActions_12; }
	inline List_1_t2629B7403994FE384DBB10F935AF4592DA31AB29 ** get_address_of_postponedObjectActions_12() { return &___postponedObjectActions_12; }
	inline void set_postponedObjectActions_12(List_1_t2629B7403994FE384DBB10F935AF4592DA31AB29 * value)
	{
		___postponedObjectActions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41, ___U3CEventHandlersByTypeU3Ek__BackingField_13)); }
	inline Dictionary_2_t79EFDB25F7A94A36FB5FAC9E08A555D48351F8A8 * get_U3CEventHandlersByTypeU3Ek__BackingField_13() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline Dictionary_2_t79EFDB25F7A94A36FB5FAC9E08A555D48351F8A8 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return &___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_13(Dictionary_2_t79EFDB25F7A94A36FB5FAC9E08A555D48351F8A8 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41, ___U3CEventListenersU3Ek__BackingField_14)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_14() const { return ___U3CEventListenersU3Ek__BackingField_14; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_14() { return &___U3CEventListenersU3Ek__BackingField_14; }
	inline void set_U3CEventListenersU3Ek__BackingField_14(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_14), (void*)value);
	}
};

struct BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___TraverseEventSystemHandlerHierarchyPerfMarker_15;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41_StaticFields, ___enableDanglingHandlerDiagnostics_8)); }
	inline bool get_enableDanglingHandlerDiagnostics_8() const { return ___enableDanglingHandlerDiagnostics_8; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_8() { return &___enableDanglingHandlerDiagnostics_8; }
	inline void set_enableDanglingHandlerDiagnostics_8(bool value)
	{
		___enableDanglingHandlerDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_TraverseEventSystemHandlerHierarchyPerfMarker_15() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentType
	SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::settingsProfile
	BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * ___settingsProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772, ___componentType_0)); }
	inline SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_settingsProfile_4() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772, ___settingsProfile_4)); }
	inline BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * get_settingsProfile_4() const { return ___settingsProfile_4; }
	inline BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B ** get_address_of_settingsProfile_4() { return &___settingsProfile_4; }
	inline void set_settingsProfile_4(BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * value)
	{
		___settingsProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772_marshaled_pinvoke
{
	SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * ___settingsProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772_marshaled_com
{
	SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * ___settingsProfile_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tC5FD8644EB6015DC0B6E05D31B98881E8472EDFB  : public BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tC5FD8644EB6015DC0B6E05D31B98881E8472EDFB, ___U3CRegistrarU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_16() const { return ___U3CRegistrarU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_16() { return &___U3CRegistrarU3Ek__BackingField_16; }
	inline void set_U3CRegistrarU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_16), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5  : public BaseCoreSystem_tC5FD8644EB6015DC0B6E05D31B98881E8472EDFB
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_tCD6DC619179D0393866597031148409676C28E09 * ___dataProviders_17;

public:
	inline static int32_t get_offset_of_dataProviders_17() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5, ___dataProviders_17)); }
	inline List_1_tCD6DC619179D0393866597031148409676C28E09 * get_dataProviders_17() const { return ___dataProviders_17; }
	inline List_1_tCD6DC619179D0393866597031148409676C28E09 ** get_address_of_dataProviders_17() { return &___dataProviders_17; }
	inline void set_dataProviders_17(List_1_tCD6DC619179D0393866597031148409676C28E09 * value)
	{
		___dataProviders_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_17), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___LateUpdatePerfMarker_19;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_18() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5_StaticFields, ___UpdatePerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_18() const { return ___UpdatePerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_18() { return &___UpdatePerfMarker_18; }
	inline void set_UpdatePerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5_StaticFields, ___LateUpdatePerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_LateUpdatePerfMarker_19() const { return ___LateUpdatePerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_LateUpdatePerfMarker_19() { return &___LateUpdatePerfMarker_19; }
	inline void set_LateUpdatePerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___LateUpdatePerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B  : public BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF  : public BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D
{
public:
	// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::settingsConfigurations
	MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* ___settingsConfigurations_5;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneOpaqueDisplay
	float ___nearClipPlaneOpaqueDisplay_6;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneOpaqueDisplay
	float ___farClipPlaneOpaqueDisplay_7;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsOpaqueDisplay
	int32_t ___cameraClearFlagsOpaqueDisplay_8;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorOpaqueDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorOpaqueDisplay_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::opaqueQualityLevel
	int32_t ___opaqueQualityLevel_10;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneTransparentDisplay
	float ___nearClipPlaneTransparentDisplay_11;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneTransparentDisplay
	float ___farClipPlaneTransparentDisplay_12;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsTransparentDisplay
	int32_t ___cameraClearFlagsTransparentDisplay_13;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorTransparentDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorTransparentDisplay_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::transparentQualityLevel
	int32_t ___transparentQualityLevel_15;

public:
	inline static int32_t get_offset_of_settingsConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___settingsConfigurations_5)); }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* get_settingsConfigurations_5() const { return ___settingsConfigurations_5; }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F** get_address_of_settingsConfigurations_5() { return &___settingsConfigurations_5; }
	inline void set_settingsConfigurations_5(MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* value)
	{
		___settingsConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_nearClipPlaneOpaqueDisplay_6() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___nearClipPlaneOpaqueDisplay_6)); }
	inline float get_nearClipPlaneOpaqueDisplay_6() const { return ___nearClipPlaneOpaqueDisplay_6; }
	inline float* get_address_of_nearClipPlaneOpaqueDisplay_6() { return &___nearClipPlaneOpaqueDisplay_6; }
	inline void set_nearClipPlaneOpaqueDisplay_6(float value)
	{
		___nearClipPlaneOpaqueDisplay_6 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneOpaqueDisplay_7() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___farClipPlaneOpaqueDisplay_7)); }
	inline float get_farClipPlaneOpaqueDisplay_7() const { return ___farClipPlaneOpaqueDisplay_7; }
	inline float* get_address_of_farClipPlaneOpaqueDisplay_7() { return &___farClipPlaneOpaqueDisplay_7; }
	inline void set_farClipPlaneOpaqueDisplay_7(float value)
	{
		___farClipPlaneOpaqueDisplay_7 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsOpaqueDisplay_8() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___cameraClearFlagsOpaqueDisplay_8)); }
	inline int32_t get_cameraClearFlagsOpaqueDisplay_8() const { return ___cameraClearFlagsOpaqueDisplay_8; }
	inline int32_t* get_address_of_cameraClearFlagsOpaqueDisplay_8() { return &___cameraClearFlagsOpaqueDisplay_8; }
	inline void set_cameraClearFlagsOpaqueDisplay_8(int32_t value)
	{
		___cameraClearFlagsOpaqueDisplay_8 = value;
	}

	inline static int32_t get_offset_of_backgroundColorOpaqueDisplay_9() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___backgroundColorOpaqueDisplay_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorOpaqueDisplay_9() const { return ___backgroundColorOpaqueDisplay_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorOpaqueDisplay_9() { return &___backgroundColorOpaqueDisplay_9; }
	inline void set_backgroundColorOpaqueDisplay_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorOpaqueDisplay_9 = value;
	}

	inline static int32_t get_offset_of_opaqueQualityLevel_10() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___opaqueQualityLevel_10)); }
	inline int32_t get_opaqueQualityLevel_10() const { return ___opaqueQualityLevel_10; }
	inline int32_t* get_address_of_opaqueQualityLevel_10() { return &___opaqueQualityLevel_10; }
	inline void set_opaqueQualityLevel_10(int32_t value)
	{
		___opaqueQualityLevel_10 = value;
	}

	inline static int32_t get_offset_of_nearClipPlaneTransparentDisplay_11() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___nearClipPlaneTransparentDisplay_11)); }
	inline float get_nearClipPlaneTransparentDisplay_11() const { return ___nearClipPlaneTransparentDisplay_11; }
	inline float* get_address_of_nearClipPlaneTransparentDisplay_11() { return &___nearClipPlaneTransparentDisplay_11; }
	inline void set_nearClipPlaneTransparentDisplay_11(float value)
	{
		___nearClipPlaneTransparentDisplay_11 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneTransparentDisplay_12() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___farClipPlaneTransparentDisplay_12)); }
	inline float get_farClipPlaneTransparentDisplay_12() const { return ___farClipPlaneTransparentDisplay_12; }
	inline float* get_address_of_farClipPlaneTransparentDisplay_12() { return &___farClipPlaneTransparentDisplay_12; }
	inline void set_farClipPlaneTransparentDisplay_12(float value)
	{
		___farClipPlaneTransparentDisplay_12 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsTransparentDisplay_13() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___cameraClearFlagsTransparentDisplay_13)); }
	inline int32_t get_cameraClearFlagsTransparentDisplay_13() const { return ___cameraClearFlagsTransparentDisplay_13; }
	inline int32_t* get_address_of_cameraClearFlagsTransparentDisplay_13() { return &___cameraClearFlagsTransparentDisplay_13; }
	inline void set_cameraClearFlagsTransparentDisplay_13(int32_t value)
	{
		___cameraClearFlagsTransparentDisplay_13 = value;
	}

	inline static int32_t get_offset_of_backgroundColorTransparentDisplay_14() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___backgroundColorTransparentDisplay_14)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorTransparentDisplay_14() const { return ___backgroundColorTransparentDisplay_14; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorTransparentDisplay_14() { return &___backgroundColorTransparentDisplay_14; }
	inline void set_backgroundColorTransparentDisplay_14(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorTransparentDisplay_14 = value;
	}

	inline static int32_t get_offset_of_transparentQualityLevel_15() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF, ___transparentQualityLevel_15)); }
	inline int32_t get_transparentQualityLevel_15() const { return ___transparentQualityLevel_15; }
	inline int32_t* get_address_of_transparentQualityLevel_15() { return &___transparentQualityLevel_15; }
	inline void set_transparentQualityLevel_15(int32_t value)
	{
		___transparentQualityLevel_15 = value;
	}
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149  : public BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_21;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_25;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149, ___U3CSourceIdU3Ek__BackingField_21)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_21() const { return ___U3CSourceIdU3Ek__BackingField_21; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_21() { return &___U3CSourceIdU3Ek__BackingField_21; }
	inline void set_U3CSourceIdU3Ek__BackingField_21(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149, ___U3CSourceNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_22() const { return ___U3CSourceNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_22() { return &___U3CSourceNameU3Ek__BackingField_22; }
	inline void set_U3CSourceNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149, ___currentDisplayType_23)); }
	inline int32_t get_currentDisplayType_23() const { return ___currentDisplayType_23; }
	inline int32_t* get_address_of_currentDisplayType_23() { return &___currentDisplayType_23; }
	inline void set_currentDisplayType_23(int32_t value)
	{
		___currentDisplayType_23 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149, ___cameraOpaqueLastFrame_24)); }
	inline bool get_cameraOpaqueLastFrame_24() const { return ___cameraOpaqueLastFrame_24; }
	inline bool* get_address_of_cameraOpaqueLastFrame_24() { return &___cameraOpaqueLastFrame_24; }
	inline void set_cameraOpaqueLastFrame_24(bool value)
	{
		___cameraOpaqueLastFrame_24 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149, ___useFallbackBehavior_25)); }
	inline bool get_useFallbackBehavior_25() const { return ___useFallbackBehavior_25; }
	inline bool* get_address_of_useFallbackBehavior_25() { return &___useFallbackBehavior_25; }
	inline void set_useFallbackBehavior_25(bool value)
	{
		___useFallbackBehavior_25 = value;
	}
};

struct MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForOpaquePerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForTransparentPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields, ___ApplySettingsForOpaquePerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForOpaquePerfMarker_27() const { return ___ApplySettingsForOpaquePerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForOpaquePerfMarker_27() { return &___ApplySettingsForOpaquePerfMarker_27; }
	inline void set_ApplySettingsForOpaquePerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForOpaquePerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields, ___ApplySettingsForTransparentPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForTransparentPerfMarker_28() const { return ___ApplySettingsForTransparentPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForTransparentPerfMarker_28() { return &___ApplySettingsForTransparentPerfMarker_28; }
	inline void set_ApplySettingsForTransparentPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForTransparentPerfMarker_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772  m_Items[1];

public:
	inline MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m906A5D110C72D056A116878C0CC4A499DAD2ED70_gshared (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4519417AA050A97716D3419DF52F2F503EFCFD12_gshared (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_mB81245F92E671DDC48A9DF5BCADE67FD78A42734 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mD21AD8A10889C2BCB2DE0CFF14E61C25A16BC41A_inline (BaseCoreSystem_tC5FD8644EB6015DC0B6E05D31B98881E8472EDFB * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_mE2B58460C430530D083B520654FD20E5200D4C09 (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 * __this, BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.HolographicSettings::get_IsDisplayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m793303722A39B1AE95DBB91A54763A7502EA2496 (BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_SettingsConfigurations()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* MixedRealityCameraProfile_get_SettingsConfigurations_mB920A99DD696CDD32234E618D56DCDA5E1F590BB_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * MixedRealityCameraSettingsConfiguration_get_ComponentType_mBBF1C899D14527447B175FFF6E912DEB0C781760_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m3E4725C7CBBFACF5FCCEF239AA52551AB49F746A_inline (SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_mA40CF531B0B41CB3929F74AE8C72AEF8ADF22E1B_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_Priority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m765327788E77123B41E5BECCD5BDFE30965AF086_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_SettingsProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mFB6505D9FF56A023FA1ADA8363ECDDCF34856431_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_RuntimePlatform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m428E10D051B3A7B088C887CE232FC948A377E12E_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mA9396F818CF73E785A5A78DF0CACE7DC58786523 (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 *, Type_t *, String_t*, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m906A5D110C72D056A116878C0CC4A499DAD2ED70_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m2C829285C423BDBE6919B18C91049F2D6E256B58 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E144951E197120E0FF5F7BD038744F8516DB2D2 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_mC5737AD4C0D9AC4A1F6B4B2B81EB175835124C71 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Rotation_mD1AC2BBCAE6BF0A40891FB76E3A5A92E9805FEFC (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m8DA1F1F7B374F1C9B4F05969CB2404B9F20881AB (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m5AA70892A390C996458832179A356D23F3BE3793 (BaseService_t70BC526DDB9261E20947BC374A4BB5D54BF59B65 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_m40B570D0E8CC38100A1248732AE8BBC234F86CE2 (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4519417AA050A97716D3419DF52F2F503EFCFD12_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m88380BB5C5996033CBB241F917E3B29D4415D2EB (BaseEventSystem_t8249BE22E530984A4EAE589FC789F177FE76BD41 * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Update_mE6DD01F609DED14525D71C11FD240E88EC8DFC0E (BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m60ACF1227224AC05F3954DC5F558035E03DC6EA6_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mAE2527EE941226BE013C18BEE90A6A05790AAE41_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m47D3E0805E64A737589C182635FDBFCFC662BF37_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m6781C78829683A4659B5AE9AC8389EE759639140_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_OpaqueQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m9D819A1D666D31F9B132BD8D3362899432D067C4_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551 (int32_t ___index0, bool ___applyExpensiveChanges1, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_mDE11EC3F56069B924200B2FA5F9E7BA0D31C8E81_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m210D277E0781E49D8E70481B3B1C00ACF9401C97_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m49A72BE77A2E0EB5F209F5BCEF90A15EB978671E_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m1F0911B197A669EC4FCDFE21189CB2FCD685447E_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_TransparentQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m0A9203E05482B48B836C670FE5A8A3E14B9F0D15_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_mAA07E4941942A7671D6DE7F1E92AC19733FE8ADE_inline (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC (int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m996EB83AA70FB42C92B5CA84F194DBAAB5F5CF09 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * ___profile1, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile = null) : this(profile)
		BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * L_0 = ___profile1;
		MixedRealityCameraSystem__ctor_mB81245F92E671DDC48A9DF5BCADE67FD78A42734(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mD21AD8A10889C2BCB2DE0CFF14E61C25A16BC41A_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_mB81245F92E671DDC48A9DF5BCADE67FD78A42734 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__ctor_mB81245F92E671DDC48A9DF5BCADE67FD78A42734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		__this->set_U3CNameU3Ek__BackingField_20(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// public string SourceName { get; } = "Mixed Reality Camera System";
		__this->set_U3CSourceNameU3Ek__BackingField_22(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// private bool useFallbackBehavior = true;
		__this->set_useFallbackBehavior_25((bool)1);
		// BaseMixedRealityProfile profile = null) : base(profile)
		BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * L_0 = ___profile0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_t4A0E36A67AF5763D793977472DC9D3151EEE32D5_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_mE2B58460C430530D083B520654FD20E5200D4C09(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_Name_mDDD404FFE0ECFFF3ED8C66A2FEE58E7BE9F40B03 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_set_Name_m7E274A41A9F8E32DDEA1CFC5DC8AB3E9D836D4E8 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// currentDisplayType = DisplayType.Opaque;
		__this->set_currentDisplayType_23(0);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> dataProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mF157D0135B6FC7F6A1CE78C863ED572A56A3B6DB_RuntimeMethod_var, __this);
		V_0 = L_0;
		// if (dataProviders.Count > 0)
		RuntimeObject* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t9F2AF36C86C99FA4D19C020706ECA4BDFF935BA6_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// if (!dataProviders[0].IsOpaque)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tAB27BCC830846CEE67DD2AE6DEDDE9107AEA66EE_il2cpp_TypeInfo_var, L_3, 0);
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::get_IsOpaque() */, IMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->set_currentDisplayType_23(1);
		// }
		goto IL_0046;
	}

IL_002e:
	{
		// Debug.LogWarning("Windows Mixed Reality specific camera code has been moved into Windows Mixed Reality Camera Settings. Please ensure you have this added under your Camera System's Settings Providers, as this deprecated code path may be removed in a future update.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE, /*hidden argument*/NULL);
		// if (!UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque)
		bool L_6 = HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418(/*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->set_currentDisplayType_23(1);
	}

IL_0046:
	{
		// return currentDisplayType == DisplayType.Opaque;
		int32_t L_7 = __this->get_currentDisplayType_23();
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSystem_get_SourceId_mCF9147ADADAC8B201B7583AE3813CFBE46748CBE (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_21();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_mAA07E4941942A7671D6DE7F1E92AC19733FE8ADE (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_22();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MixedRealityCameraProfile CameraProfile => ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Initialize_m0C343E01EE2F69522DFA75A82BFDD24548595219 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Initialize_m0C343E01EE2F69522DFA75A82BFDD24548595219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * G_B5_0 = NULL;
	SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * G_B4_0 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		// base.Initialize();
		BaseService_Initialize_m793303722A39B1AE95DBB91A54763A7502EA2496(__this, /*hidden argument*/NULL);
		// MixedRealityCameraProfile profile = ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t45287282AD75A9735A1BA8F8D2FB409EE2AA3C2D * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF_il2cpp_TypeInfo_var));
		// var cameraSettingProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_1 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mF157D0135B6FC7F6A1CE78C863ED572A56A3B6DB_RuntimeMethod_var, __this);
		// if ((cameraSettingProviders.Count == 0) && (profile != null))
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t9F2AF36C86C99FA4D19C020706ECA4BDFF935BA6_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_00df;
		}
	}
	{
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00df;
		}
	}
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		V_1 = 0;
		goto IL_00d1;
	}

IL_0035:
	{
		// MixedRealityCameraSettingsConfiguration configuration = profile.SettingsConfigurations[i];
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_5 = V_0;
		NullCheck(L_5);
		MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* L_6 = MixedRealityCameraProfile_get_SettingsConfigurations_mB920A99DD696CDD32234E618D56DCDA5E1F590BB_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (configuration.ComponentType?.Type == null)
		SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * L_10 = MixedRealityCameraSettingsConfiguration_get_ComponentType_mBBF1C899D14527447B175FFF6E912DEB0C781760_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_0050;
		}
	}
	{
		G_B6_0 = ((Type_t *)(NULL));
		goto IL_0055;
	}

IL_0050:
	{
		NullCheck(G_B5_0);
		Type_t * L_12 = SystemType_get_Type_m3E4725C7CBBFACF5FCCEF239AA52551AB49F746A_inline(G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_12;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_13 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(G_B6_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.SettingsProfile };
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, __this);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		String_t* L_17 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mA40CF531B0B41CB3929F74AE8C72AEF8ADF22E1B_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_16;
		uint32_t L_19 = MixedRealityCameraSettingsConfiguration_get_Priority_m765327788E77123B41E5BECCD5BDFE30965AF086_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * L_23 = MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mFB6505D9FF56A023FA1ADA8363ECDDCF34856431_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		V_3 = L_22;
		// if (RegisterDataProvider<IMixedRealityCameraSettingsProvider>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args))
		SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * L_24 = MixedRealityCameraSettingsConfiguration_get_ComponentType_mBBF1C899D14527447B175FFF6E912DEB0C781760_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_24);
		Type_t * L_25 = SystemType_get_Type_m3E4725C7CBBFACF5FCCEF239AA52551AB49F746A_inline(L_24, /*hidden argument*/NULL);
		String_t* L_26 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mA40CF531B0B41CB3929F74AE8C72AEF8ADF22E1B_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_27 = MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m428E10D051B3A7B088C887CE232FC948A377E12E_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_3;
		bool L_29 = BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mA9396F818CF73E785A5A78DF0CACE7DC58786523(__this, L_25, L_26, L_27, L_28, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mA9396F818CF73E785A5A78DF0CACE7DC58786523_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00cd;
		}
	}
	{
		// IMixedRealityCameraSettingsProvider provider = GetDataProvider<IMixedRealityCameraSettingsProvider>(configuration.ComponentName);
		String_t* L_30 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mA40CF531B0B41CB3929F74AE8C72AEF8ADF22E1B_inline((MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 *)(&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_31 = GenericVirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mCCEBF8BFA0AF37DA3979EED2561814268B5A175A_RuntimeMethod_var, __this, L_30);
		// provider?.ApplyConfiguration();
		RuntimeObject* L_32 = L_31;
		G_B9_0 = L_32;
		if (L_32)
		{
			G_B10_0 = L_32;
			goto IL_00c1;
		}
	}
	{
		goto IL_00c6;
	}

IL_00c1:
	{
		NullCheck(G_B10_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::ApplyConfiguration() */, IMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_il2cpp_TypeInfo_var, G_B10_0);
	}

IL_00c6:
	{
		// useFallbackBehavior = false;
		__this->set_useFallbackBehavior_25((bool)0);
	}

IL_00cd:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00d1:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_34 = V_1;
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_35 = V_0;
		NullCheck(L_35);
		MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* L_36 = MixedRealityCameraProfile_get_SettingsConfigurations_mB920A99DD696CDD32234E618D56DCDA5E1F590BB_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_0035;
		}
	}

IL_00df:
	{
		// if (useFallbackBehavior)
		bool L_37 = __this->get_useFallbackBehavior_25();
		if (!L_37)
		{
			goto IL_0179;
		}
	}
	{
		// cameraOpaqueLastFrame = IsOpaque;
		bool L_38 = MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F(__this, /*hidden argument*/NULL);
		__this->set_cameraOpaqueLastFrame_24(L_38);
		// if (IsOpaque)
		bool L_39 = MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0106;
		}
	}
	{
		// ApplySettingsForOpaqueDisplay();
		MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m2C829285C423BDBE6919B18C91049F2D6E256B58(__this, /*hidden argument*/NULL);
		// }
		goto IL_010c;
	}

IL_0106:
	{
		// ApplySettingsForTransparentDisplay();
		MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E144951E197120E0FF5F7BD038744F8516DB2D2(__this, /*hidden argument*/NULL);
	}

IL_010c:
	{
		// MixedRealityPlayspace.Position = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tD6EE9A60B0F74EA4204E78AD4A2BF3A1C58FBEF6_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_set_Position_mC5737AD4C0D9AC4A1F6B4B2B81EB175835124C71(L_40, /*hidden argument*/NULL);
		// MixedRealityPlayspace.Rotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		MixedRealityPlayspace_set_Rotation_mD1AC2BBCAE6BF0A40891FB76E3A5A92E9805FEFC(L_41, /*hidden argument*/NULL);
		// if (CameraCache.Main.transform.position != Vector3.zero)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_42 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_43 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_43, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_46 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_44, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0154;
		}
	}
	{
		// Debug.LogWarning($"The main camera is not positioned at the origin ({Vector3.zero}), experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = L_47;
		RuntimeObject * L_49 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0, L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_50, /*hidden argument*/NULL);
	}

IL_0154:
	{
		// if (CameraCache.Main.transform.rotation != Quaternion.identity)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_51 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_53 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		bool L_55 = Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70(L_53, L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0179;
		}
	}
	{
		// Debug.LogWarning($"The main camera is configured with a non-zero rotation, experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD47B37C1B233818E5C869621EE522D30507C5050, /*hidden argument*/NULL);
	}

IL_0179:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Enable_mEE53A29DACE9683E7FE7611703E0918541533169 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Enable_mEE53A29DACE9683E7FE7611703E0918541533169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m8DA1F1F7B374F1C9B4F05969CB2404B9F20881AB(__this, /*hidden argument*/NULL);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mF157D0135B6FC7F6A1CE78C863ED572A56A3B6DB_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		// providers[i].Enable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tAB27BCC830846CEE67DD2AE6DEDDE9107AEA66EE_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Enable() */, IMixedRealityService_tBA8FCEEE1F3CECC11375B963E0FD10D80F6F2BDB_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t9F2AF36C86C99FA4D19C020706ECA4BDFF935BA6_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Disable_mA1F0E500B26D0743DC7EC1FA3C624DF5EE35D44B (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Disable_mA1F0E500B26D0743DC7EC1FA3C624DF5EE35D44B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mF157D0135B6FC7F6A1CE78C863ED572A56A3B6DB_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		// providers[i].Disable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tAB27BCC830846CEE67DD2AE6DEDDE9107AEA66EE_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Disable() */, IMixedRealityService_tBA8FCEEE1F3CECC11375B963E0FD10D80F6F2BDB_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t9F2AF36C86C99FA4D19C020706ECA4BDFF935BA6_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// base.Disable();
		BaseService_Disable_m5AA70892A390C996458832179A356D23F3BE3793(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Destroy_m60CAAD5B37313E12226AFB0A710DED4B15257F98 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Destroy_m60CAAD5B37313E12226AFB0A710DED4B15257F98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_mF157D0135B6FC7F6A1CE78C863ED572A56A3B6DB_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::GetEnumerator() */, IEnumerable_1_tB7E8C2D5722DC4602A217AF94A60F5D741898297_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000e:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Current() */, IEnumerator_1_tC52DD16AEF4363A8F73ED235E6A089F9297BAD3C_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// UnregisterDataProvider(provider);
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_m40B570D0E8CC38100A1248732AE8BBC234F86CE2(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tAD36E687B31B967D96527F5B97B0EA14B636667F_m40B570D0E8CC38100A1248732AE8BBC234F86CE2_RuntimeMethod_var);
		}

IL_001d:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x31, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		// useFallbackBehavior = true;
		__this->set_useFallbackBehavior_25((bool)1);
		// base.Destroy();
		BaseEventSystem_Destroy_m88380BB5C5996033CBB241F917E3B29D4415D2EB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Update_m6E959AA951F49A8FAD41D3A4E54A4CE2AF6463BD (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Update_m6E959AA951F49A8FAD41D3A4E54A4CE2AF6463BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!useFallbackBehavior) { return; }
		bool L_0 = __this->get_useFallbackBehavior_25();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!useFallbackBehavior) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1 = ((MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_26();
		V_1 = L_1;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// base.Update();
			BaseDataProviderAccessCoreSystem_Update_mE6DD01F609DED14525D71C11FD240E88EC8DFC0E(__this, /*hidden argument*/NULL);
			// if (IsOpaque != cameraOpaqueLastFrame)
			bool L_3 = MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F(__this, /*hidden argument*/NULL);
			bool L_4 = __this->get_cameraOpaqueLastFrame_24();
			if ((((int32_t)L_3) == ((int32_t)L_4)))
			{
				goto IL_004d;
			}
		}

IL_002b:
		{
			// cameraOpaqueLastFrame = IsOpaque;
			bool L_5 = MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F(__this, /*hidden argument*/NULL);
			__this->set_cameraOpaqueLastFrame_24(L_5);
			// if (IsOpaque)
			bool L_6 = MixedRealityCameraSystem_get_IsOpaque_m890321B8AA184D96FE40B5E4F90B64B8169FBB0F(__this, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0047;
			}
		}

IL_003f:
		{
			// ApplySettingsForOpaqueDisplay();
			MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m2C829285C423BDBE6919B18C91049F2D6E256B58(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}

IL_0047:
		{
			// ApplySettingsForTransparentDisplay();
			MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E144951E197120E0FF5F7BD038744F8516DB2D2(__this, /*hidden argument*/NULL);
		}

IL_004d:
		{
			// }
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m2C829285C423BDBE6919B18C91049F2D6E256B58 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m2C829285C423BDBE6919B18C91049F2D6E256B58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ApplySettingsForOpaquePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var))->get_ApplySettingsForOpaquePerfMarker_27();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_3 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m60ACF1227224AC05F3954DC5F558035E03DC6EA6_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_6 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7 = MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mAE2527EE941226BE013C18BEE90A6A05790AAE41_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_9 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m47D3E0805E64A737589C182635FDBFCFC662BF37_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_12 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m6781C78829683A4659B5AE9AC8389EE759639140_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.OpaqueQualityLevel, false);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_14 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_OpaqueQualityLevel_m9D819A1D666D31F9B132BD8D3362899432D067C4_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x83, FINALLY_0075);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E144951E197120E0FF5F7BD038744F8516DB2D2 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E144951E197120E0FF5F7BD038744F8516DB2D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ApplySettingsForTransparentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var))->get_ApplySettingsForTransparentPerfMarker_28();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_3 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_mDE11EC3F56069B924200B2FA5F9E7BA0D31C8E81_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_6 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m210D277E0781E49D8E70481B3B1C00ACF9401C97_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_9 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m49A72BE77A2E0EB5F209F5BCEF90A15EB978671E_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_mE3850444AEF0110940C1FF3BDC60F3A2032FD5BA(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_12 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13 = MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m1F0911B197A669EC4FCDFE21189CB2FCD685447E_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.TransparentQualityLevel, false);
		MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * L_14 = MixedRealityCameraSystem_get_CameraProfile_m2FD32E027AD3A6DACC160EFA6EC104F68E1B0C99(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_TransparentQualityLevel_m0A9203E05482B48B836C670FE5A8A3E14B9F0D15_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x83, FINALLY_0075);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_mA0C4D76F9B7C9D3A3F76059962E8169450460412 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mBE6C6C10ECA04AF25C0B656EFC53C75A836CAC81 (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mBE6C6C10ECA04AF25C0B656EFC53C75A836CAC81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0 = MixedRealityCameraSystem_get_SourceName_mAA07E4941942A7671D6DE7F1E92AC19733FE8ADE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__cctor_m0BAC3C713A400AE98CD0131207B9010FF0961FFD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__cctor_m0BAC3C713A400AE98CD0131207B9010FF0961FFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_26(L_0);
		// private static readonly ProfilerMarker ApplySettingsForOpaquePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForOpaqueDisplay");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var))->set_ApplySettingsForOpaquePerfMarker_27(L_1);
		// private static readonly ProfilerMarker ApplySettingsForTransparentPerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForTransparentDisplay");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149_il2cpp_TypeInfo_var))->set_ApplySettingsForTransparentPerfMarker_28(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mD21AD8A10889C2BCB2DE0CFF14E61C25A16BC41A_inline (BaseCoreSystem_tC5FD8644EB6015DC0B6E05D31B98881E8472EDFB * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* MixedRealityCameraProfile_get_SettingsConfigurations_mB920A99DD696CDD32234E618D56DCDA5E1F590BB_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// get { return settingsConfigurations; }
		MixedRealityCameraSettingsConfigurationU5BU5D_tED15E205E76820AC2FD5AD7D083DA46C17BEA82F* L_0 = __this->get_settingsConfigurations_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * MixedRealityCameraSettingsConfiguration_get_ComponentType_mBBF1C899D14527447B175FFF6E912DEB0C781760_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method)
{
	{
		// public SystemType ComponentType => componentType;
		SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m3E4725C7CBBFACF5FCCEF239AA52551AB49F746A_inline (SystemType_tA9531C3CB3B0F43AD421E4B0B0F6E5777DBE857C * __this, const RuntimeMethod* method)
{
	{
		// get => type;
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_mA40CF531B0B41CB3929F74AE8C72AEF8ADF22E1B_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method)
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m765327788E77123B41E5BECCD5BDFE30965AF086_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method)
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mFB6505D9FF56A023FA1ADA8363ECDDCF34856431_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method)
{
	{
		// public BaseCameraSettingsProfile SettingsProfile => settingsProfile;
		BaseCameraSettingsProfile_tFE83FDA5CB4F6253064DE1A3DACB6F8827ACDB5B * L_0 = __this->get_settingsProfile_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m428E10D051B3A7B088C887CE232FC948A377E12E_inline (MixedRealityCameraSettingsConfiguration_tF366A12FC7F490B7867550EAC7BD3AF9A812B772 * __this, const RuntimeMethod* method)
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->get_runtimePlatform_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m60ACF1227224AC05F3954DC5F558035E03DC6EA6_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsOpaqueDisplay => cameraClearFlagsOpaqueDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsOpaqueDisplay_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mAE2527EE941226BE013C18BEE90A6A05790AAE41_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneOpaqueDisplay => nearClipPlaneOpaqueDisplay;
		float L_0 = __this->get_nearClipPlaneOpaqueDisplay_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m47D3E0805E64A737589C182635FDBFCFC662BF37_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneOpaqueDisplay => farClipPlaneOpaqueDisplay;
		float L_0 = __this->get_farClipPlaneOpaqueDisplay_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m6781C78829683A4659B5AE9AC8389EE759639140_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorOpaqueDisplay => backgroundColorOpaqueDisplay;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorOpaqueDisplay_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m9D819A1D666D31F9B132BD8D3362899432D067C4_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public int OpaqueQualityLevel => opaqueQualityLevel;
		int32_t L_0 = __this->get_opaqueQualityLevel_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_mDE11EC3F56069B924200B2FA5F9E7BA0D31C8E81_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsTransparentDisplay => cameraClearFlagsTransparentDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsTransparentDisplay_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m210D277E0781E49D8E70481B3B1C00ACF9401C97_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorTransparentDisplay => backgroundColorTransparentDisplay;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorTransparentDisplay_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m49A72BE77A2E0EB5F209F5BCEF90A15EB978671E_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneTransparentDisplay => nearClipPlaneTransparentDisplay;
		float L_0 = __this->get_nearClipPlaneTransparentDisplay_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m1F0911B197A669EC4FCDFE21189CB2FCD685447E_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneTransparentDisplay => farClipPlaneTransparentDisplay;
		float L_0 = __this->get_farClipPlaneTransparentDisplay_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m0A9203E05482B48B836C670FE5A8A3E14B9F0D15_inline (MixedRealityCameraProfile_t4997B27CA61750B50ABE5162149CB8BCC832BBCF * __this, const RuntimeMethod* method)
{
	{
		// public int TransparentQualityLevel => transparentQualityLevel;
		int32_t L_0 = __this->get_transparentQualityLevel_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_mAA07E4941942A7671D6DE7F1E92AC19733FE8ADE_inline (MixedRealityCameraSystem_t32EC8C5FA39D3709C439331FA1D5D3A2838F6149 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
