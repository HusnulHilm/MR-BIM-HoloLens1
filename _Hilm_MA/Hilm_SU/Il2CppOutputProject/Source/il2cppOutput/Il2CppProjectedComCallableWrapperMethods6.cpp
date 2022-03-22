#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


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


IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m28B3DEFC8C5A8DFCBB3F8C8C3761D0B059B2EF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mFDD511B0AEDF0A385A4930959427E2E07153EB2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Key_mCA4DE1BA49165BE017542EBD232B9012151D380B_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Value_m240FE1E4E64C46D31F395DF32A09420739A5DF14_ComCallableWrapperProjectedMethod_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.UInt32>
struct NOVTABLE IKeyValuePair_2_t4AF8B8707730E5DE3D5402785FD05D5D14934791 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mCA4DE1BA49165BE017542EBD232B9012151D380B(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m240FE1E4E64C46D31F395DF32A09420739A5DF14(uint32_t* comReturnValue) = 0;
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

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.UInt32>
struct KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4, ___value_1)); }
	inline uint32_t get_value_1() const { return ___value_1; }
	inline uint32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint32_t value)
	{
		___value_1 = value;
	}
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.UInt32>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m28B3DEFC8C5A8DFCBB3F8C8C3761D0B059B2EF63_gshared_inline (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.UInt32>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mFDD511B0AEDF0A385A4930959427E2E07153EB2C_gshared_inline (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 * __this, const RuntimeMethod* method);

// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.UInt32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m28B3DEFC8C5A8DFCBB3F8C8C3761D0B059B2EF63_inline (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m28B3DEFC8C5A8DFCBB3F8C8C3761D0B059B2EF63_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.UInt32>::get_Value()
inline uint32_t KeyValuePair_2_get_Value_mFDD511B0AEDF0A385A4930959427E2E07153EB2C_inline (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mFDD511B0AEDF0A385A4930959427E2E07153EB2C_gshared_inline)(__this, method);
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.UInt32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mCA4DE1BA49165BE017542EBD232B9012151D380B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mCA4DE1BA49165BE017542EBD232B9012151D380B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m28B3DEFC8C5A8DFCBB3F8C8C3761D0B059B2EF63_inline((KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4*)UnBox(__thisValue, KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m28B3DEFC8C5A8DFCBB3F8C8C3761D0B059B2EF63_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.UInt32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m240FE1E4E64C46D31F395DF32A09420739A5DF14_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m240FE1E4E64C46D31F395DF32A09420739A5DF14_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mFDD511B0AEDF0A385A4930959427E2E07153EB2C_inline((KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4*)UnBox(__thisValue, KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mFDD511B0AEDF0A385A4930959427E2E07153EB2C_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m28B3DEFC8C5A8DFCBB3F8C8C3761D0B059B2EF63_gshared_inline (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mFDD511B0AEDF0A385A4930959427E2E07153EB2C_gshared_inline (KeyValuePair_2_tEE8C58367BC77CCC649F893DF7CB813C6B5C1AB4 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_value_1();
		return (uint32_t)L_0;
	}
}
