#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Display
struct Display_t1552862910;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Object
struct Object_t631007953;
// Terminal
struct Terminal_t3308158300;
// System.String
struct String_t;
// DisplayBuffer
struct DisplayBuffer_t2078325987;
// InputBuffer
struct InputBuffer_t4157325929;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// InputBuffer/OnCommandSentHandler
struct OnCommandSentHandler_t613111342;
// Hacker
struct Hacker_t984153406;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Keyboard
struct Keyboard_t350858261;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Random
struct Random_t108471755;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern const uint32_t Display_Start_m3623905221_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1025898506;
extern const uint32_t Display_WarnIfTerminalNotConneced_m329195094_MetadataUsageId;
extern const uint32_t Display_Update_m1727068450_MetadataUsageId;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* OnCommandSentHandler_t613111342_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* DisplayBuffer_OnCommand_m444302511_RuntimeMethod_var;
extern const uint32_t DisplayBuffer__ctor_m4252111399_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const uint32_t DisplayBuffer_WriteLine_m417052776_MetadataUsageId;
extern const uint32_t DisplayBuffer_Clear_m392595281_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1955908099_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m236733038_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4158182743_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern const uint32_t DisplayBuffer_GetAllDisplayLines_m956916978_MetadataUsageId;
extern const uint32_t DisplayBuffer_Wrap_m3623490953_MetadataUsageId;
extern const uint32_t DisplayBuffer_CutViewport_m865857048_MetadataUsageId;
extern const uint32_t DisplayBuffer_OnCommand_m444302511_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3509995977;
extern String_t* _stringLiteral3480195548;
extern String_t* _stringLiteral1768118593;
extern String_t* _stringLiteral416744901;
extern String_t* _stringLiteral3154519994;
extern String_t* _stringLiteral3707806012;
extern String_t* _stringLiteral1453491939;
extern String_t* _stringLiteral3967651127;
extern String_t* _stringLiteral3630704785;
extern String_t* _stringLiteral731647014;
extern String_t* _stringLiteral562231187;
extern String_t* _stringLiteral1101143508;
extern String_t* _stringLiteral2446495263;
extern String_t* _stringLiteral1273294858;
extern const uint32_t Hacker__ctor_m518604791_MetadataUsageId;
extern String_t* _stringLiteral4217779621;
extern String_t* _stringLiteral1926392276;
extern String_t* _stringLiteral830293017;
extern String_t* _stringLiteral2222774593;
extern String_t* _stringLiteral3490502678;
extern const uint32_t Hacker_ShowMainMenu_m3431144187_MetadataUsageId;
extern String_t* _stringLiteral1555075351;
extern String_t* _stringLiteral2055268426;
extern const uint32_t Hacker_OnUserInput_m1095014035_MetadataUsageId;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3452614541;
extern String_t* _stringLiteral701990759;
extern String_t* _stringLiteral3896734880;
extern String_t* _stringLiteral2684355270;
extern const uint32_t Hacker_RunMainMenu_m2300459132_MetadataUsageId;
extern String_t* _stringLiteral1430551257;
extern String_t* _stringLiteral1047606818;
extern const uint32_t Hacker_AskForPassword_m855854504_MetadataUsageId;
extern const uint32_t Hacker_CheckPassword_m2690825813_MetadataUsageId;
extern const uint32_t Hacker_DisplayWinScreen_m1911261289_MetadataUsageId;
extern String_t* _stringLiteral1410819595;
extern String_t* _stringLiteral2139077427;
extern String_t* _stringLiteral1614594486;
extern String_t* _stringLiteral4179441537;
extern String_t* _stringLiteral767756861;
extern String_t* _stringLiteral3487407575;
extern String_t* _stringLiteral2255521759;
extern const uint32_t Hacker_ShowLevelReward_m2416197238_MetadataUsageId;
extern const uint32_t InputBuffer_add_onCommandSent_m2926830140_MetadataUsageId;
extern const uint32_t InputBuffer_remove_onCommandSent_m3139499669_MetadataUsageId;
extern const uint32_t InputBuffer_UpdateCurrentInputLine_m2113149539_MetadataUsageId;
extern const uint32_t InputBuffer_SendCommand_m893447660_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t Keyboard_Start_m2937345787_MetadataUsageId;
extern String_t* _stringLiteral3449838847;
extern const uint32_t Keyboard_WarnIfTerminalNotConneced_m1063217717_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t Keyboard_Update_m1833030783_MetadataUsageId;
extern const uint32_t StringExtension_Anagram_m968226828_MetadataUsageId;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern const uint32_t StringExtension_Shuffle_m3847968583_MetadataUsageId;
extern RuntimeClass* Terminal_t3308158300_il2cpp_TypeInfo_var;
extern RuntimeClass* InputBuffer_t4157325929_il2cpp_TypeInfo_var;
extern RuntimeClass* DisplayBuffer_t2078325987_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Terminal_NotifyCommandHandlers_m909296863_RuntimeMethod_var;
extern const uint32_t Terminal_Awake_m1928415506_MetadataUsageId;
extern const uint32_t Terminal_ClearScreen_m3661511590_MetadataUsageId;
extern const uint32_t Terminal_WriteLine_m2905812159_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisMonoBehaviour_t3962482529_m2311569761_RuntimeMethod_var;
extern String_t* _stringLiteral378173023;
extern const uint32_t Terminal_NotifyCommandHandlers_m909296863_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct AudioClipU5BU5D_t143221404;
struct CharU5BU5D_t3528271667;
struct MonoBehaviourU5BU5D_t2007329276;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef DISPLAYBUFFER_T2078325987_H
#define DISPLAYBUFFER_T2078325987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisplayBuffer
struct  DisplayBuffer_t2078325987  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> DisplayBuffer::logLines
	List_1_t3319525431 * ___logLines_0;
	// InputBuffer DisplayBuffer::inputBuffer
	InputBuffer_t4157325929 * ___inputBuffer_1;

public:
	inline static int32_t get_offset_of_logLines_0() { return static_cast<int32_t>(offsetof(DisplayBuffer_t2078325987, ___logLines_0)); }
	inline List_1_t3319525431 * get_logLines_0() const { return ___logLines_0; }
	inline List_1_t3319525431 ** get_address_of_logLines_0() { return &___logLines_0; }
	inline void set_logLines_0(List_1_t3319525431 * value)
	{
		___logLines_0 = value;
		Il2CppCodeGenWriteBarrier((&___logLines_0), value);
	}

	inline static int32_t get_offset_of_inputBuffer_1() { return static_cast<int32_t>(offsetof(DisplayBuffer_t2078325987, ___inputBuffer_1)); }
	inline InputBuffer_t4157325929 * get_inputBuffer_1() const { return ___inputBuffer_1; }
	inline InputBuffer_t4157325929 ** get_address_of_inputBuffer_1() { return &___inputBuffer_1; }
	inline void set_inputBuffer_1(InputBuffer_t4157325929 * value)
	{
		___inputBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___inputBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYBUFFER_T2078325987_H
#ifndef INPUTBUFFER_T4157325929_H
#define INPUTBUFFER_T4157325929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputBuffer
struct  InputBuffer_t4157325929  : public RuntimeObject
{
public:
	// System.String InputBuffer::currentInputLine
	String_t* ___currentInputLine_0;
	// InputBuffer/OnCommandSentHandler InputBuffer::onCommandSent
	OnCommandSentHandler_t613111342 * ___onCommandSent_1;

public:
	inline static int32_t get_offset_of_currentInputLine_0() { return static_cast<int32_t>(offsetof(InputBuffer_t4157325929, ___currentInputLine_0)); }
	inline String_t* get_currentInputLine_0() const { return ___currentInputLine_0; }
	inline String_t** get_address_of_currentInputLine_0() { return &___currentInputLine_0; }
	inline void set_currentInputLine_0(String_t* value)
	{
		___currentInputLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentInputLine_0), value);
	}

	inline static int32_t get_offset_of_onCommandSent_1() { return static_cast<int32_t>(offsetof(InputBuffer_t4157325929, ___onCommandSent_1)); }
	inline OnCommandSentHandler_t613111342 * get_onCommandSent_1() const { return ___onCommandSent_1; }
	inline OnCommandSentHandler_t613111342 ** get_address_of_onCommandSent_1() { return &___onCommandSent_1; }
	inline void set_onCommandSent_1(OnCommandSentHandler_t613111342 * value)
	{
		___onCommandSent_1 = value;
		Il2CppCodeGenWriteBarrier((&___onCommandSent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUFFER_T4157325929_H
#ifndef STRINGEXTENSION_T3516511875_H
#define STRINGEXTENSION_T3516511875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StringExtension
struct  StringExtension_t3516511875  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGEXTENSION_T3516511875_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_2)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SCREEN_T3009292326_H
#define SCREEN_T3009292326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hacker/Screen
struct  Screen_t3009292326 
{
public:
	// System.Int32 Hacker/Screen::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Screen_t3009292326, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T3009292326_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ONCOMMANDSENTHANDLER_T613111342_H
#define ONCOMMANDSENTHANDLER_T613111342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputBuffer/OnCommandSentHandler
struct  OnCommandSentHandler_t613111342  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCOMMANDSENTHANDLER_T613111342_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef DISPLAY_T1552862910_H
#define DISPLAY_T1552862910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Display
struct  Display_t1552862910  : public MonoBehaviour_t3962482529
{
public:
	// Terminal Display::connectedToTerminal
	Terminal_t3308158300 * ___connectedToTerminal_2;
	// System.Int32 Display::charactersWide
	int32_t ___charactersWide_3;
	// System.Int32 Display::charactersHigh
	int32_t ___charactersHigh_4;
	// UnityEngine.UI.Text Display::screenText
	Text_t1901882714 * ___screenText_5;

public:
	inline static int32_t get_offset_of_connectedToTerminal_2() { return static_cast<int32_t>(offsetof(Display_t1552862910, ___connectedToTerminal_2)); }
	inline Terminal_t3308158300 * get_connectedToTerminal_2() const { return ___connectedToTerminal_2; }
	inline Terminal_t3308158300 ** get_address_of_connectedToTerminal_2() { return &___connectedToTerminal_2; }
	inline void set_connectedToTerminal_2(Terminal_t3308158300 * value)
	{
		___connectedToTerminal_2 = value;
		Il2CppCodeGenWriteBarrier((&___connectedToTerminal_2), value);
	}

	inline static int32_t get_offset_of_charactersWide_3() { return static_cast<int32_t>(offsetof(Display_t1552862910, ___charactersWide_3)); }
	inline int32_t get_charactersWide_3() const { return ___charactersWide_3; }
	inline int32_t* get_address_of_charactersWide_3() { return &___charactersWide_3; }
	inline void set_charactersWide_3(int32_t value)
	{
		___charactersWide_3 = value;
	}

	inline static int32_t get_offset_of_charactersHigh_4() { return static_cast<int32_t>(offsetof(Display_t1552862910, ___charactersHigh_4)); }
	inline int32_t get_charactersHigh_4() const { return ___charactersHigh_4; }
	inline int32_t* get_address_of_charactersHigh_4() { return &___charactersHigh_4; }
	inline void set_charactersHigh_4(int32_t value)
	{
		___charactersHigh_4 = value;
	}

	inline static int32_t get_offset_of_screenText_5() { return static_cast<int32_t>(offsetof(Display_t1552862910, ___screenText_5)); }
	inline Text_t1901882714 * get_screenText_5() const { return ___screenText_5; }
	inline Text_t1901882714 ** get_address_of_screenText_5() { return &___screenText_5; }
	inline void set_screenText_5(Text_t1901882714 * value)
	{
		___screenText_5 = value;
		Il2CppCodeGenWriteBarrier((&___screenText_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1552862910_H
#ifndef HACKER_T984153406_H
#define HACKER_T984153406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hacker
struct  Hacker_t984153406  : public MonoBehaviour_t3962482529
{
public:
	// System.String[] Hacker::LevelOnePasswords
	StringU5BU5D_t1281789340* ___LevelOnePasswords_3;
	// System.String[] Hacker::LevelTwoPasswords
	StringU5BU5D_t1281789340* ___LevelTwoPasswords_4;
	// System.String[] Hacker::LevelThreePasswords
	StringU5BU5D_t1281789340* ___LevelThreePasswords_5;
	// System.Int32 Hacker::level
	int32_t ___level_6;
	// System.String Hacker::password
	String_t* ___password_7;
	// Hacker/Screen Hacker::currentScreen
	int32_t ___currentScreen_8;

public:
	inline static int32_t get_offset_of_LevelOnePasswords_3() { return static_cast<int32_t>(offsetof(Hacker_t984153406, ___LevelOnePasswords_3)); }
	inline StringU5BU5D_t1281789340* get_LevelOnePasswords_3() const { return ___LevelOnePasswords_3; }
	inline StringU5BU5D_t1281789340** get_address_of_LevelOnePasswords_3() { return &___LevelOnePasswords_3; }
	inline void set_LevelOnePasswords_3(StringU5BU5D_t1281789340* value)
	{
		___LevelOnePasswords_3 = value;
		Il2CppCodeGenWriteBarrier((&___LevelOnePasswords_3), value);
	}

	inline static int32_t get_offset_of_LevelTwoPasswords_4() { return static_cast<int32_t>(offsetof(Hacker_t984153406, ___LevelTwoPasswords_4)); }
	inline StringU5BU5D_t1281789340* get_LevelTwoPasswords_4() const { return ___LevelTwoPasswords_4; }
	inline StringU5BU5D_t1281789340** get_address_of_LevelTwoPasswords_4() { return &___LevelTwoPasswords_4; }
	inline void set_LevelTwoPasswords_4(StringU5BU5D_t1281789340* value)
	{
		___LevelTwoPasswords_4 = value;
		Il2CppCodeGenWriteBarrier((&___LevelTwoPasswords_4), value);
	}

	inline static int32_t get_offset_of_LevelThreePasswords_5() { return static_cast<int32_t>(offsetof(Hacker_t984153406, ___LevelThreePasswords_5)); }
	inline StringU5BU5D_t1281789340* get_LevelThreePasswords_5() const { return ___LevelThreePasswords_5; }
	inline StringU5BU5D_t1281789340** get_address_of_LevelThreePasswords_5() { return &___LevelThreePasswords_5; }
	inline void set_LevelThreePasswords_5(StringU5BU5D_t1281789340* value)
	{
		___LevelThreePasswords_5 = value;
		Il2CppCodeGenWriteBarrier((&___LevelThreePasswords_5), value);
	}

	inline static int32_t get_offset_of_level_6() { return static_cast<int32_t>(offsetof(Hacker_t984153406, ___level_6)); }
	inline int32_t get_level_6() const { return ___level_6; }
	inline int32_t* get_address_of_level_6() { return &___level_6; }
	inline void set_level_6(int32_t value)
	{
		___level_6 = value;
	}

	inline static int32_t get_offset_of_password_7() { return static_cast<int32_t>(offsetof(Hacker_t984153406, ___password_7)); }
	inline String_t* get_password_7() const { return ___password_7; }
	inline String_t** get_address_of_password_7() { return &___password_7; }
	inline void set_password_7(String_t* value)
	{
		___password_7 = value;
		Il2CppCodeGenWriteBarrier((&___password_7), value);
	}

	inline static int32_t get_offset_of_currentScreen_8() { return static_cast<int32_t>(offsetof(Hacker_t984153406, ___currentScreen_8)); }
	inline int32_t get_currentScreen_8() const { return ___currentScreen_8; }
	inline int32_t* get_address_of_currentScreen_8() { return &___currentScreen_8; }
	inline void set_currentScreen_8(int32_t value)
	{
		___currentScreen_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HACKER_T984153406_H
#ifndef KEYBOARD_T350858261_H
#define KEYBOARD_T350858261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Keyboard
struct  Keyboard_t350858261  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip[] Keyboard::keyStrokeSounds
	AudioClipU5BU5D_t143221404* ___keyStrokeSounds_2;
	// Terminal Keyboard::connectedToTerminal
	Terminal_t3308158300 * ___connectedToTerminal_3;
	// UnityEngine.AudioSource Keyboard::audioSource
	AudioSource_t3935305588 * ___audioSource_4;

public:
	inline static int32_t get_offset_of_keyStrokeSounds_2() { return static_cast<int32_t>(offsetof(Keyboard_t350858261, ___keyStrokeSounds_2)); }
	inline AudioClipU5BU5D_t143221404* get_keyStrokeSounds_2() const { return ___keyStrokeSounds_2; }
	inline AudioClipU5BU5D_t143221404** get_address_of_keyStrokeSounds_2() { return &___keyStrokeSounds_2; }
	inline void set_keyStrokeSounds_2(AudioClipU5BU5D_t143221404* value)
	{
		___keyStrokeSounds_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyStrokeSounds_2), value);
	}

	inline static int32_t get_offset_of_connectedToTerminal_3() { return static_cast<int32_t>(offsetof(Keyboard_t350858261, ___connectedToTerminal_3)); }
	inline Terminal_t3308158300 * get_connectedToTerminal_3() const { return ___connectedToTerminal_3; }
	inline Terminal_t3308158300 ** get_address_of_connectedToTerminal_3() { return &___connectedToTerminal_3; }
	inline void set_connectedToTerminal_3(Terminal_t3308158300 * value)
	{
		___connectedToTerminal_3 = value;
		Il2CppCodeGenWriteBarrier((&___connectedToTerminal_3), value);
	}

	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(Keyboard_t350858261, ___audioSource_4)); }
	inline AudioSource_t3935305588 * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_t3935305588 * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARD_T350858261_H
#ifndef TERMINAL_T3308158300_H
#define TERMINAL_T3308158300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Terminal
struct  Terminal_t3308158300  : public MonoBehaviour_t3962482529
{
public:
	// DisplayBuffer Terminal::displayBuffer
	DisplayBuffer_t2078325987 * ___displayBuffer_2;
	// InputBuffer Terminal::inputBuffer
	InputBuffer_t4157325929 * ___inputBuffer_3;

public:
	inline static int32_t get_offset_of_displayBuffer_2() { return static_cast<int32_t>(offsetof(Terminal_t3308158300, ___displayBuffer_2)); }
	inline DisplayBuffer_t2078325987 * get_displayBuffer_2() const { return ___displayBuffer_2; }
	inline DisplayBuffer_t2078325987 ** get_address_of_displayBuffer_2() { return &___displayBuffer_2; }
	inline void set_displayBuffer_2(DisplayBuffer_t2078325987 * value)
	{
		___displayBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___displayBuffer_2), value);
	}

	inline static int32_t get_offset_of_inputBuffer_3() { return static_cast<int32_t>(offsetof(Terminal_t3308158300, ___inputBuffer_3)); }
	inline InputBuffer_t4157325929 * get_inputBuffer_3() const { return ___inputBuffer_3; }
	inline InputBuffer_t4157325929 ** get_address_of_inputBuffer_3() { return &___inputBuffer_3; }
	inline void set_inputBuffer_3(InputBuffer_t4157325929 * value)
	{
		___inputBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputBuffer_3), value);
	}
};

struct Terminal_t3308158300_StaticFields
{
public:
	// Terminal Terminal::primaryTerminal
	Terminal_t3308158300 * ___primaryTerminal_4;

public:
	inline static int32_t get_offset_of_primaryTerminal_4() { return static_cast<int32_t>(offsetof(Terminal_t3308158300_StaticFields, ___primaryTerminal_4)); }
	inline Terminal_t3308158300 * get_primaryTerminal_4() const { return ___primaryTerminal_4; }
	inline Terminal_t3308158300 ** get_address_of_primaryTerminal_4() { return &___primaryTerminal_4; }
	inline void set_primaryTerminal_4(Terminal_t3308158300 * value)
	{
		___primaryTerminal_4 = value;
		Il2CppCodeGenWriteBarrier((&___primaryTerminal_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERMINAL_T3308158300_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t3680889665 * m_Items[1];

public:
	inline AudioClip_t3680889665 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioClip_t3680889665 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t3962482529 * m_Items[1];

public:
	inline MonoBehaviour_t3962482529 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t3962482529 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t3962482529 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MonoBehaviour_t3962482529 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t3962482529 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t3962482529 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void Display::WarnIfTerminalNotConneced()
extern "C"  void Display_WarnIfTerminalNotConneced_m329195094 (Display_t1552862910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Terminal::GetDisplayBuffer(System.Int32,System.Int32)
extern "C"  String_t* Terminal_GetDisplayBuffer_m2724861506 (Terminal_t3308158300 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer/OnCommandSentHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCommandSentHandler__ctor_m2335124972 (OnCommandSentHandler_t613111342 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer::add_onCommandSent(InputBuffer/OnCommandSentHandler)
extern "C"  void InputBuffer_add_onCommandSent_m2926830140 (InputBuffer_t4157325929 * __this, OnCommandSentHandler_t613111342 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.String DisplayBuffer::GetAllDisplayLines(System.Single)
extern "C"  String_t* DisplayBuffer_GetAllDisplayLines_m956916978 (DisplayBuffer_t2078325987 * __this, float ___time0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DisplayBuffer::Wrap(System.Int32,System.String)
extern "C"  String_t* DisplayBuffer_Wrap_m3623490953 (DisplayBuffer_t2078325987 * __this, int32_t ___width0, String_t* ___str1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DisplayBuffer::CutViewport(System.Int32,System.String)
extern "C"  String_t* DisplayBuffer_CutViewport_m865857048 (DisplayBuffer_t2078325987 * __this, int32_t ___height0, String_t* ___lines1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m1955908099(__this, method) ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
#define Enumerator_get_Current_m236733038(__this, method) ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
#define Enumerator_MoveNext_m4158182743(__this, method) ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
#define Enumerator_Dispose_m2026665411(__this, method) ((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.String InputBuffer::GetCurrentInputLine()
extern "C"  String_t* InputBuffer_GetCurrentInputLine_m3377313537 (InputBuffer_t4157325929 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char DisplayBuffer::GetFlashingCursor(System.Single)
extern "C"  Il2CppChar DisplayBuffer_GetFlashingCursor_m3585738703 (DisplayBuffer_t2078325987 * __this, float ___time0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hacker::ShowMainMenu()
extern "C"  void Hacker_ShowMainMenu_m3431144187 (Hacker_t984153406 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Terminal::ClearScreen()
extern "C"  void Terminal_ClearScreen_m3661511590 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Terminal::WriteLine(System.String)
extern "C"  void Terminal_WriteLine_m2905812159 (RuntimeObject * __this /* static, unused */, String_t* ___line0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hacker::RunMainMenu(System.String)
extern "C"  void Hacker_RunMainMenu_m2300459132 (Hacker_t984153406 * __this, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hacker::CheckPassword(System.String)
extern "C"  void Hacker_CheckPassword_m2690825813 (Hacker_t984153406 * __this, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hacker::AskForPassword()
extern "C"  void Hacker_AskForPassword_m855854504 (Hacker_t984153406 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hacker::SetRandomPassword()
extern "C"  void Hacker_SetRandomPassword_m3740433486 (Hacker_t984153406 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String StringExtension::Anagram(System.String)
extern "C"  String_t* StringExtension_Anagram_m968226828 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hacker::DisplayWinScreen()
extern "C"  void Hacker_DisplayWinScreen_m1911261289 (Hacker_t984153406 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hacker::ShowLevelReward()
extern "C"  void Hacker_ShowLevelReward_m2416197238 (Hacker_t984153406 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer::UpdateCurrentInputLine(System.Char)
extern "C"  void InputBuffer_UpdateCurrentInputLine_m2113149539 (InputBuffer_t4157325929 * __this, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer::DeleteCharacters()
extern "C"  void InputBuffer_DeleteCharacters_m244939457 (InputBuffer_t4157325929 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer::SendCommand(System.String)
extern "C"  void InputBuffer_SendCommand_m893447660 (InputBuffer_t4157325929 * __this, String_t* ___command0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32)
extern "C"  String_t* String_Remove_m1524948975 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer/OnCommandSentHandler::Invoke(System.String)
extern "C"  void OnCommandSentHandler_Invoke_m1686002223 (OnCommandSentHandler_t613111342 * __this, String_t* ___command0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
extern "C"  void QualitySettings_set_vSyncCount_m3131636076 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Keyboard::WarnIfTerminalNotConneced()
extern "C"  void Keyboard_WarnIfTerminalNotConneced_m1063217717 (Keyboard_t350858261 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_inputString()
extern "C"  String_t* Input_get_inputString_m1307069105 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Keyboard::PlayRandomSound()
extern "C"  void Keyboard_PlayRandomSound_m629210842 (Keyboard_t350858261 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Terminal::ReceiveFrameInput(System.String)
extern "C"  void Terminal_ReceiveFrameInput_m2803186155 (Terminal_t3308158300 * __this, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String StringExtension::Shuffle(System.String)
extern "C"  String_t* StringExtension_Shuffle_m3847968583 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer::.ctor()
extern "C"  void InputBuffer__ctor_m1229572877 (InputBuffer_t4157325929 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayBuffer::.ctor(InputBuffer)
extern "C"  void DisplayBuffer__ctor_m4252111399 (DisplayBuffer_t2078325987 * __this, InputBuffer_t4157325929 * ___inputBuffer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DisplayBuffer::GetDisplayBuffer(System.Single,System.Int32,System.Int32)
extern "C"  String_t* DisplayBuffer_GetDisplayBuffer_m1666386443 (DisplayBuffer_t2078325987 * __this, float ___time0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InputBuffer::ReceiveFrameInput(System.String)
extern "C"  void InputBuffer_ReceiveFrameInput_m2255314811 (InputBuffer_t4157325929 * __this, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayBuffer::Clear()
extern "C"  void DisplayBuffer_Clear_m392595281 (DisplayBuffer_t2078325987 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayBuffer::WriteLine(System.String)
extern "C"  void DisplayBuffer_WriteLine_m417052776 (DisplayBuffer_t2078325987 * __this, String_t* ___line0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.MonoBehaviour>()
#define Object_FindObjectsOfType_TisMonoBehaviour_t3962482529_m2311569761(__this /* static, unused */, method) ((  MonoBehaviourU5BU5D_t2007329276* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C"  MethodInfo_t * Type_GetMethod_m1197120913 (Type_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Display::.ctor()
extern "C"  void Display__ctor_m43632039 (Display_t1552862910 * __this, const RuntimeMethod* method)
{
	{
		__this->set_charactersWide_3(((int32_t)40));
		__this->set_charactersHigh_4(((int32_t)14));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Display::Start()
extern "C"  void Display_Start_m3623905221 (Display_t1552862910 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Display_Start_m3623905221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		__this->set_screenText_5(L_0);
		Display_WarnIfTerminalNotConneced_m329195094(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Display::WarnIfTerminalNotConneced()
extern "C"  void Display_WarnIfTerminalNotConneced_m329195094 (Display_t1552862910 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Display_WarnIfTerminalNotConneced_m329195094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Terminal_t3308158300 * L_0 = __this->get_connectedToTerminal_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1025898506, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Display::Update()
extern "C"  void Display_Update_m1727068450 (Display_t1552862910 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Display_Update_m1727068450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Terminal_t3308158300 * L_0 = __this->get_connectedToTerminal_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Text_t1901882714 * L_2 = __this->get_screenText_5();
		Terminal_t3308158300 * L_3 = __this->get_connectedToTerminal_2();
		int32_t L_4 = __this->get_charactersWide_3();
		int32_t L_5 = __this->get_charactersHigh_4();
		String_t* L_6 = Terminal_GetDisplayBuffer_m2724861506(L_3, L_4, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
	}

IL_0032:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DisplayBuffer::.ctor(InputBuffer)
extern "C"  void DisplayBuffer__ctor_m4252111399 (DisplayBuffer_t2078325987 * __this, InputBuffer_t4157325929 * ___inputBuffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayBuffer__ctor_m4252111399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_0, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_logLines_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		InputBuffer_t4157325929 * L_1 = ___inputBuffer0;
		__this->set_inputBuffer_1(L_1);
		InputBuffer_t4157325929 * L_2 = ___inputBuffer0;
		intptr_t L_3 = (intptr_t)DisplayBuffer_OnCommand_m444302511_RuntimeMethod_var;
		OnCommandSentHandler_t613111342 * L_4 = (OnCommandSentHandler_t613111342 *)il2cpp_codegen_object_new(OnCommandSentHandler_t613111342_il2cpp_TypeInfo_var);
		OnCommandSentHandler__ctor_m2335124972(L_4, __this, L_3, /*hidden argument*/NULL);
		InputBuffer_add_onCommandSent_m2926830140(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DisplayBuffer::WriteLine(System.String)
extern "C"  void DisplayBuffer_WriteLine_m417052776 (DisplayBuffer_t2078325987 * __this, String_t* ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayBuffer_WriteLine_m417052776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = __this->get_logLines_0();
		String_t* L_1 = ___line0;
		List_1_Add_m1685793073(L_0, L_1, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		return;
	}
}
// System.Void DisplayBuffer::Clear()
extern "C"  void DisplayBuffer_Clear_m392595281 (DisplayBuffer_t2078325987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayBuffer_Clear_m392595281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_0, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_logLines_0(L_0);
		return;
	}
}
// System.String DisplayBuffer::GetDisplayBuffer(System.Single,System.Int32,System.Int32)
extern "C"  String_t* DisplayBuffer_GetDisplayBuffer_m1666386443 (DisplayBuffer_t2078325987 * __this, float ___time0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		float L_0 = ___time0;
		String_t* L_1 = DisplayBuffer_GetAllDisplayLines_m956916978(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___width1;
		String_t* L_3 = V_0;
		String_t* L_4 = DisplayBuffer_Wrap_m3623490953(__this, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = ___height2;
		String_t* L_6 = V_1;
		String_t* L_7 = DisplayBuffer_CutViewport_m865857048(__this, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.String DisplayBuffer::GetAllDisplayLines(System.Single)
extern "C"  String_t* DisplayBuffer_GetAllDisplayLines_m956916978 (DisplayBuffer_t2078325987 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayBuffer_GetAllDisplayLines_m956916978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_t913802012  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		List_1_t3319525431 * L_1 = __this->get_logLines_0();
		Enumerator_t913802012  L_2 = List_1_GetEnumerator_m1955908099(L_1, /*hidden argument*/List_1_GetEnumerator_m1955908099_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0017:
		{
			String_t* L_3 = Enumerator_get_Current_m236733038((&V_2), /*hidden argument*/Enumerator_get_Current_m236733038_RuntimeMethod_var);
			V_1 = L_3;
			String_t* L_4 = V_0;
			String_t* L_5 = V_1;
			Il2CppChar L_6 = ((Il2CppChar)((int32_t)10));
			RuntimeObject * L_7 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_6);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m1715369213(NULL /*static, unused*/, L_4, L_5, L_7, /*hidden argument*/NULL);
			V_0 = L_8;
		}

IL_002e:
		{
			bool L_9 = Enumerator_MoveNext_m4158182743((&V_2), /*hidden argument*/Enumerator_MoveNext_m4158182743_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0017;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((&V_2), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		String_t* L_10 = V_0;
		InputBuffer_t4157325929 * L_11 = __this->get_inputBuffer_1();
		String_t* L_12 = InputBuffer_GetCurrentInputLine_m3377313537(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		float L_15 = ___time0;
		Il2CppChar L_16 = DisplayBuffer_GetFlashingCursor_m3585738703(__this, L_15, /*hidden argument*/NULL);
		Il2CppChar L_17 = L_16;
		RuntimeObject * L_18 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = String_Concat_m904156431(NULL /*static, unused*/, L_14, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = V_0;
		return L_20;
	}
}
// System.String DisplayBuffer::Wrap(System.Int32,System.String)
extern "C"  String_t* DisplayBuffer_Wrap_m3623490953 (DisplayBuffer_t2078325987 * __this, int32_t ___width0, String_t* ___str1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayBuffer_Wrap_m3623490953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		V_1 = 1;
		String_t* L_1 = ___str1;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0078;
	}

IL_0012:
	{
		String_t* L_2 = V_3;
		int32_t L_3 = V_4;
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ___width0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_7 = V_0;
		Il2CppChar L_8 = ((Il2CppChar)((int32_t)10));
		RuntimeObject * L_9 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = V_0;
		Il2CppChar L_12 = V_2;
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m904156431(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		V_1 = 1;
		goto IL_0072;
	}

IL_0044:
	{
		Il2CppChar L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_17 = V_0;
		Il2CppChar L_18 = ((Il2CppChar)((int32_t)10));
		RuntimeObject * L_19 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m904156431(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		V_1 = 1;
		goto IL_0072;
	}

IL_0061:
	{
		String_t* L_21 = V_0;
		Il2CppChar L_22 = V_2;
		Il2CppChar L_23 = L_22;
		RuntimeObject * L_24 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m904156431(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_28 = V_4;
		String_t* L_29 = V_3;
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_31 = V_0;
		return L_31;
	}
}
// System.String DisplayBuffer::CutViewport(System.Int32,System.String)
extern "C"  String_t* DisplayBuffer_CutViewport_m865857048 (DisplayBuffer_t2078325987 * __this, int32_t ___height0, String_t* ___lines1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayBuffer_CutViewport_m865857048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		V_1 = 1;
		String_t* L_1 = ___lines1;
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		goto IL_0048;
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = ___height0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_5 = V_0;
		return L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___lines1;
		int32_t L_7 = V_2;
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		String_t* L_10 = ___lines1;
		int32_t L_11 = V_2;
		Il2CppChar L_12 = String_get_Chars_m2986988803(L_10, L_11, /*hidden argument*/NULL);
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m904156431(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_19 = V_0;
		return L_19;
	}
}
// System.Char DisplayBuffer::GetFlashingCursor(System.Single)
extern "C"  Il2CppChar DisplayBuffer_GetFlashingCursor_m3585738703 (DisplayBuffer_t2078325987 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		float L_0 = ___time0;
		if ((!(((float)(fmodf(L_0, (1.0f)))) <= ((float)(0.5f)))))
		{
			goto IL_0014;
		}
	}
	{
		return ((int32_t)95);
	}

IL_0014:
	{
		return ((int32_t)32);
	}
}
// System.Void DisplayBuffer::OnCommand(System.String)
extern "C"  void DisplayBuffer_OnCommand_m444302511 (DisplayBuffer_t2078325987 * __this, String_t* ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayBuffer_OnCommand_m444302511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = __this->get_logLines_0();
		String_t* L_1 = ___command0;
		List_1_Add_m1685793073(L_0, L_1, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hacker::.ctor()
extern "C"  void Hacker__ctor_m518604791 (Hacker_t984153406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker__ctor_m518604791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_0, _stringLiteral3509995977);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3509995977);
		StringU5BU5D_t1281789340* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral3480195548);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3480195548);
		StringU5BU5D_t1281789340* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral1768118593);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1768118593);
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral416744901);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral416744901);
		__this->set_LevelOnePasswords_3(L_3);
		StringU5BU5D_t1281789340* L_4 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_4, _stringLiteral3154519994);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3154519994);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3707806012);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3707806012);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral1453491939);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1453491939);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3967651127);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3967651127);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral3630704785);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3630704785);
		__this->set_LevelTwoPasswords_4(L_8);
		StringU5BU5D_t1281789340* L_9 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_9, _stringLiteral731647014);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral731647014);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral562231187);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral562231187);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral1101143508);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1101143508);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral2446495263);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2446495263);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral1273294858);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1273294858);
		__this->set_LevelThreePasswords_5(L_13);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hacker::Start()
extern "C"  void Hacker_Start_m1545865369 (Hacker_t984153406 * __this, const RuntimeMethod* method)
{
	{
		Hacker_ShowMainMenu_m3431144187(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hacker::ShowMainMenu()
extern "C"  void Hacker_ShowMainMenu_m3431144187 (Hacker_t984153406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker_ShowMainMenu_m3431144187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_currentScreen_8(0);
		Terminal_ClearScreen_m3661511590(NULL /*static, unused*/, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral4217779621, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral1926392276, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral830293017, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral2222774593, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral3490502678, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hacker::OnUserInput(System.String)
extern "C"  void Hacker_OnUserInput_m1095014035 (Hacker_t984153406 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker_OnUserInput_m1095014035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, _stringLiteral1555075351, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Hacker_ShowMainMenu_m3431144187(__this, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_001b:
	{
		int32_t L_2 = __this->get_currentScreen_8();
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = ___input0;
		Hacker_RunMainMenu_m2300459132(__this, L_3, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_0032:
	{
		int32_t L_4 = __this->get_currentScreen_8();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_5 = ___input0;
		Hacker_CheckPassword_m2690825813(__this, L_5, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_004a:
	{
		int32_t L_6 = __this->get_currentScreen_8();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0060;
		}
	}
	{
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral2055268426, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void Hacker::RunMainMenu(System.String)
extern "C"  void Hacker_RunMainMenu_m2300459132 (Hacker_t984153406 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker_RunMainMenu_m2300459132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, _stringLiteral3452614543, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_2 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral3452614542, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral3452614541, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 1;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_7 = ___input0;
		int32_t L_8 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->set_level_6(L_8);
		Hacker_AskForPassword_m855854504(__this, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_004c:
	{
		String_t* L_9 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral701990759, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral3896734880, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_006b:
	{
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral2684355270, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void Hacker::AskForPassword()
extern "C"  void Hacker_AskForPassword_m855854504 (Hacker_t984153406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker_AskForPassword_m855854504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_currentScreen_8(1);
		Terminal_ClearScreen_m3661511590(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hacker_SetRandomPassword_m3740433486(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_password_7();
		String_t* L_1 = StringExtension_Anagram_m968226828(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1430551257, L_1, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral1047606818, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hacker::SetRandomPassword()
extern "C"  void Hacker_SetRandomPassword_m3740433486 (Hacker_t984153406 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_level_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0081;
	}

IL_0021:
	{
		StringU5BU5D_t1281789340* L_4 = __this->get_LevelOnePasswords_3();
		StringU5BU5D_t1281789340* L_5 = __this->get_LevelOnePasswords_3();
		int32_t L_6 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_password_7(L_8);
		goto IL_0081;
	}

IL_0041:
	{
		StringU5BU5D_t1281789340* L_9 = __this->get_LevelTwoPasswords_4();
		StringU5BU5D_t1281789340* L_10 = __this->get_LevelTwoPasswords_4();
		int32_t L_11 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		__this->set_password_7(L_13);
		goto IL_0081;
	}

IL_0061:
	{
		StringU5BU5D_t1281789340* L_14 = __this->get_LevelThreePasswords_5();
		StringU5BU5D_t1281789340* L_15 = __this->get_LevelThreePasswords_5();
		int32_t L_16 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		__this->set_password_7(L_18);
		goto IL_0081;
	}

IL_0081:
	{
		return;
	}
}
// System.Void Hacker::CheckPassword(System.String)
extern "C"  void Hacker_CheckPassword_m2690825813 (Hacker_t984153406 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker_CheckPassword_m2690825813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		String_t* L_1 = __this->get_password_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Hacker_DisplayWinScreen_m1911261289(__this, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_001c:
	{
		Hacker_AskForPassword_m855854504(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Hacker::DisplayWinScreen()
extern "C"  void Hacker_DisplayWinScreen_m1911261289 (Hacker_t984153406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker_DisplayWinScreen_m1911261289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_currentScreen_8(2);
		Terminal_ClearScreen_m3661511590(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hacker_ShowLevelReward_m2416197238(__this, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral1047606818, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hacker::ShowLevelReward()
extern "C"  void Hacker_ShowLevelReward_m2416197238 (Hacker_t984153406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hacker_ShowLevelReward_m2416197238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_level_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0076;
	}

IL_0021:
	{
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral1410819595, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral2139077427, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral1614594486, /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0044:
	{
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral4179441537, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral767756861, /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_005d:
	{
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral3487407575, /*hidden argument*/NULL);
		Terminal_WriteLine_m2905812159(NULL /*static, unused*/, _stringLiteral2255521759, /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0076:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void InputBuffer::.ctor()
extern "C"  void InputBuffer__ctor_m1229572877 (InputBuffer_t4157325929 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InputBuffer::add_onCommandSent(InputBuffer/OnCommandSentHandler)
extern "C"  void InputBuffer_add_onCommandSent_m2926830140 (InputBuffer_t4157325929 * __this, OnCommandSentHandler_t613111342 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_add_onCommandSent_m2926830140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnCommandSentHandler_t613111342 * V_0 = NULL;
	OnCommandSentHandler_t613111342 * V_1 = NULL;
	{
		OnCommandSentHandler_t613111342 * L_0 = __this->get_onCommandSent_1();
		V_0 = L_0;
	}

IL_0007:
	{
		OnCommandSentHandler_t613111342 * L_1 = V_0;
		V_1 = L_1;
		OnCommandSentHandler_t613111342 ** L_2 = __this->get_address_of_onCommandSent_1();
		OnCommandSentHandler_t613111342 * L_3 = V_1;
		OnCommandSentHandler_t613111342 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		OnCommandSentHandler_t613111342 * L_6 = V_0;
		OnCommandSentHandler_t613111342 * L_7 = InterlockedCompareExchangeImpl<OnCommandSentHandler_t613111342 *>(L_2, ((OnCommandSentHandler_t613111342 *)CastclassSealed((RuntimeObject*)L_5, OnCommandSentHandler_t613111342_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		OnCommandSentHandler_t613111342 * L_8 = V_0;
		OnCommandSentHandler_t613111342 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnCommandSentHandler_t613111342 *)L_8) == ((RuntimeObject*)(OnCommandSentHandler_t613111342 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputBuffer::remove_onCommandSent(InputBuffer/OnCommandSentHandler)
extern "C"  void InputBuffer_remove_onCommandSent_m3139499669 (InputBuffer_t4157325929 * __this, OnCommandSentHandler_t613111342 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_remove_onCommandSent_m3139499669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnCommandSentHandler_t613111342 * V_0 = NULL;
	OnCommandSentHandler_t613111342 * V_1 = NULL;
	{
		OnCommandSentHandler_t613111342 * L_0 = __this->get_onCommandSent_1();
		V_0 = L_0;
	}

IL_0007:
	{
		OnCommandSentHandler_t613111342 * L_1 = V_0;
		V_1 = L_1;
		OnCommandSentHandler_t613111342 ** L_2 = __this->get_address_of_onCommandSent_1();
		OnCommandSentHandler_t613111342 * L_3 = V_1;
		OnCommandSentHandler_t613111342 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		OnCommandSentHandler_t613111342 * L_6 = V_0;
		OnCommandSentHandler_t613111342 * L_7 = InterlockedCompareExchangeImpl<OnCommandSentHandler_t613111342 *>(L_2, ((OnCommandSentHandler_t613111342 *)CastclassSealed((RuntimeObject*)L_5, OnCommandSentHandler_t613111342_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		OnCommandSentHandler_t613111342 * L_8 = V_0;
		OnCommandSentHandler_t613111342 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnCommandSentHandler_t613111342 *)L_8) == ((RuntimeObject*)(OnCommandSentHandler_t613111342 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputBuffer::ReceiveFrameInput(System.String)
extern "C"  void InputBuffer_ReceiveFrameInput_m2255314811 (InputBuffer_t4157325929 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___input0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001c;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		InputBuffer_UpdateCurrentInputLine_m2113149539(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_6 = V_2;
		String_t* L_7 = V_1;
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
// System.String InputBuffer::GetCurrentInputLine()
extern "C"  String_t* InputBuffer_GetCurrentInputLine_m3377313537 (InputBuffer_t4157325929 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_currentInputLine_0();
		return L_0;
	}
}
// System.Void InputBuffer::UpdateCurrentInputLine(System.Char)
extern "C"  void InputBuffer_UpdateCurrentInputLine_m2113149539 (InputBuffer_t4157325929 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_UpdateCurrentInputLine_m2113149539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0012;
		}
	}
	{
		InputBuffer_DeleteCharacters_m244939457(__this, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0012:
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)10))))
		{
			goto IL_0022;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0033;
		}
	}

IL_0022:
	{
		String_t* L_3 = __this->get_currentInputLine_0();
		InputBuffer_SendCommand_m893447660(__this, L_3, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0033:
	{
		String_t* L_4 = __this->get_currentInputLine_0();
		Il2CppChar L_5 = ___c0;
		Il2CppChar L_6 = L_5;
		RuntimeObject * L_7 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		__this->set_currentInputLine_0(L_8);
	}

IL_004a:
	{
		return;
	}
}
// System.Void InputBuffer::DeleteCharacters()
extern "C"  void InputBuffer_DeleteCharacters_m244939457 (InputBuffer_t4157325929 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_currentInputLine_0();
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_2 = __this->get_currentInputLine_0();
		String_t* L_3 = __this->get_currentInputLine_0();
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Remove_m1524948975(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_currentInputLine_0(L_5);
		goto IL_0034;
	}

IL_0034:
	{
		return;
	}
}
// System.Void InputBuffer::SendCommand(System.String)
extern "C"  void InputBuffer_SendCommand_m893447660 (InputBuffer_t4157325929 * __this, String_t* ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_SendCommand_m893447660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCommandSentHandler_t613111342 * L_0 = __this->get_onCommandSent_1();
		String_t* L_1 = ___command0;
		OnCommandSentHandler_Invoke_m1686002223(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_currentInputLine_0(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnCommandSentHandler_t613111342 (OnCommandSentHandler_t613111342 * __this, String_t* ___command0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___command0' to native representation
	char* ____command0_marshaled = NULL;
	____command0_marshaled = il2cpp_codegen_marshal_string(___command0);

	// Native function invocation
	il2cppPInvokeFunc(____command0_marshaled);

	// Marshaling cleanup of parameter '___command0' native representation
	il2cpp_codegen_marshal_free(____command0_marshaled);
	____command0_marshaled = NULL;

}
// System.Void InputBuffer/OnCommandSentHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCommandSentHandler__ctor_m2335124972 (OnCommandSentHandler_t613111342 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void InputBuffer/OnCommandSentHandler::Invoke(System.String)
extern "C"  void OnCommandSentHandler_Invoke_m1686002223 (OnCommandSentHandler_t613111342 * __this, String_t* ___command0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnCommandSentHandler_Invoke_m1686002223((OnCommandSentHandler_t613111342 *)__this->get_prev_9(), ___command0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___command0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___command0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___command0, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___command0, targetMethod);
		}
	}
}
// System.IAsyncResult InputBuffer/OnCommandSentHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnCommandSentHandler_BeginInvoke_m1459085396 (OnCommandSentHandler_t613111342 * __this, String_t* ___command0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___command0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void InputBuffer/OnCommandSentHandler::EndInvoke(System.IAsyncResult)
extern "C"  void OnCommandSentHandler_EndInvoke_m3703246017 (OnCommandSentHandler_t613111342 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Keyboard::.ctor()
extern "C"  void Keyboard__ctor_m29819971 (Keyboard_t350858261 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Keyboard::Start()
extern "C"  void Keyboard_Start_m2937345787 (Keyboard_t350858261 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Keyboard_Start_m2937345787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_audioSource_4(L_0);
		QualitySettings_set_vSyncCount_m3131636076(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, ((int32_t)1000), /*hidden argument*/NULL);
		Keyboard_WarnIfTerminalNotConneced_m1063217717(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Keyboard::WarnIfTerminalNotConneced()
extern "C"  void Keyboard_WarnIfTerminalNotConneced_m1063217717 (Keyboard_t350858261 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Keyboard_WarnIfTerminalNotConneced_m1063217717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Terminal_t3308158300 * L_0 = __this->get_connectedToTerminal_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral3449838847, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Keyboard::Update()
extern "C"  void Keyboard_Update_m1833030783 (Keyboard_t350858261 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Keyboard_Update_m1833030783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		String_t* L_0 = Input_get_inputString_m1307069105(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Keyboard_PlayRandomSound_m629210842(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		Terminal_t3308158300 * L_3 = __this->get_connectedToTerminal_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		Terminal_t3308158300 * L_5 = __this->get_connectedToTerminal_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		String_t* L_6 = Input_get_inputString_m1307069105(NULL /*static, unused*/, /*hidden argument*/NULL);
		Terminal_ReceiveFrameInput_m2803186155(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void Keyboard::PlayRandomSound()
extern "C"  void Keyboard_PlayRandomSound_m629210842 (Keyboard_t350858261 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		AudioClipU5BU5D_t143221404* L_0 = __this->get_keyStrokeSounds_2();
		int32_t L_1 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		AudioSource_t3935305588 * L_2 = __this->get_audioSource_4();
		AudioClipU5BU5D_t143221404* L_3 = __this->get_keyStrokeSounds_2();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		AudioClip_t3680889665 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		AudioSource_set_clip_m31653938(L_2, L_6, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_7 = __this->get_audioSource_4();
		AudioSource_Play_m48294159(L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String StringExtension::Anagram(System.String)
extern "C"  String_t* StringExtension_Anagram_m968226828 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringExtension_Anagram_m968226828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___str0;
		String_t* L_1 = StringExtension_Shuffle_m3847968583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___str0;
		String_t* L_3 = StringExtension_Shuffle_m3847968583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0013:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.String StringExtension::Shuffle(System.String)
extern "C"  String_t* StringExtension_Shuffle_m3847968583 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringExtension_Shuffle_m3847968583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	Random_t108471755 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		String_t* L_0 = ___str0;
		CharU5BU5D_t3528271667* L_1 = String_ToCharArray_m1492846834(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Random_t108471755 * L_2 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CharU5BU5D_t3528271667* L_3 = V_0;
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))));
		goto IL_0034;
	}

IL_0016:
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		Random_t108471755 * L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		V_3 = L_7;
		CharU5BU5D_t3528271667* L_8 = V_0;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		uint16_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		CharU5BU5D_t3528271667* L_12 = V_0;
		int32_t L_13 = V_3;
		CharU5BU5D_t3528271667* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		uint16_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_17);
		CharU5BU5D_t3528271667* L_18 = V_0;
		int32_t L_19 = V_2;
		Il2CppChar L_20 = V_4;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (Il2CppChar)L_20);
	}

IL_0034:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) > ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		CharU5BU5D_t3528271667* L_22 = V_0;
		String_t* L_23 = String_CreateString_m2818852475(NULL, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Terminal::.ctor()
extern "C"  void Terminal__ctor_m4190294813 (Terminal_t3308158300 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Terminal::Awake()
extern "C"  void Terminal_Awake_m1928415506 (Terminal_t3308158300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Terminal_Awake_m1928415506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Terminal_t3308158300 * L_0 = ((Terminal_t3308158300_StaticFields*)il2cpp_codegen_static_fields_for(Terminal_t3308158300_il2cpp_TypeInfo_var))->get_primaryTerminal_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		((Terminal_t3308158300_StaticFields*)il2cpp_codegen_static_fields_for(Terminal_t3308158300_il2cpp_TypeInfo_var))->set_primaryTerminal_4(__this);
	}

IL_0016:
	{
		InputBuffer_t4157325929 * L_2 = (InputBuffer_t4157325929 *)il2cpp_codegen_object_new(InputBuffer_t4157325929_il2cpp_TypeInfo_var);
		InputBuffer__ctor_m1229572877(L_2, /*hidden argument*/NULL);
		__this->set_inputBuffer_3(L_2);
		InputBuffer_t4157325929 * L_3 = __this->get_inputBuffer_3();
		DisplayBuffer_t2078325987 * L_4 = (DisplayBuffer_t2078325987 *)il2cpp_codegen_object_new(DisplayBuffer_t2078325987_il2cpp_TypeInfo_var);
		DisplayBuffer__ctor_m4252111399(L_4, L_3, /*hidden argument*/NULL);
		__this->set_displayBuffer_2(L_4);
		InputBuffer_t4157325929 * L_5 = __this->get_inputBuffer_3();
		intptr_t L_6 = (intptr_t)Terminal_NotifyCommandHandlers_m909296863_RuntimeMethod_var;
		OnCommandSentHandler_t613111342 * L_7 = (OnCommandSentHandler_t613111342 *)il2cpp_codegen_object_new(OnCommandSentHandler_t613111342_il2cpp_TypeInfo_var);
		OnCommandSentHandler__ctor_m2335124972(L_7, __this, L_6, /*hidden argument*/NULL);
		InputBuffer_add_onCommandSent_m2926830140(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.String Terminal::GetDisplayBuffer(System.Int32,System.Int32)
extern "C"  String_t* Terminal_GetDisplayBuffer_m2724861506 (Terminal_t3308158300 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		DisplayBuffer_t2078325987 * L_0 = __this->get_displayBuffer_2();
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___width0;
		int32_t L_3 = ___height1;
		String_t* L_4 = DisplayBuffer_GetDisplayBuffer_m1666386443(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Terminal::ReceiveFrameInput(System.String)
extern "C"  void Terminal_ReceiveFrameInput_m2803186155 (Terminal_t3308158300 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	{
		InputBuffer_t4157325929 * L_0 = __this->get_inputBuffer_3();
		String_t* L_1 = ___input0;
		InputBuffer_ReceiveFrameInput_m2255314811(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Terminal::ClearScreen()
extern "C"  void Terminal_ClearScreen_m3661511590 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Terminal_ClearScreen_m3661511590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Terminal_t3308158300 * L_0 = ((Terminal_t3308158300_StaticFields*)il2cpp_codegen_static_fields_for(Terminal_t3308158300_il2cpp_TypeInfo_var))->get_primaryTerminal_4();
		DisplayBuffer_t2078325987 * L_1 = L_0->get_displayBuffer_2();
		DisplayBuffer_Clear_m392595281(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Terminal::WriteLine(System.String)
extern "C"  void Terminal_WriteLine_m2905812159 (RuntimeObject * __this /* static, unused */, String_t* ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Terminal_WriteLine_m2905812159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Terminal_t3308158300 * L_0 = ((Terminal_t3308158300_StaticFields*)il2cpp_codegen_static_fields_for(Terminal_t3308158300_il2cpp_TypeInfo_var))->get_primaryTerminal_4();
		DisplayBuffer_t2078325987 * L_1 = L_0->get_displayBuffer_2();
		String_t* L_2 = ___line0;
		DisplayBuffer_WriteLine_m417052776(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Terminal::NotifyCommandHandlers(System.String)
extern "C"  void Terminal_NotifyCommandHandlers_m909296863 (Terminal_t3308158300 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Terminal_NotifyCommandHandlers_m909296863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviourU5BU5D_t2007329276* V_0 = NULL;
	MonoBehaviour_t3962482529 * V_1 = NULL;
	MonoBehaviourU5BU5D_t2007329276* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	MethodInfo_t * V_5 = NULL;
	ObjectU5BU5D_t2843939325* V_6 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MonoBehaviourU5BU5D_t2007329276* L_0 = Object_FindObjectsOfType_TisMonoBehaviour_t3962482529_m2311569761(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisMonoBehaviour_t3962482529_m2311569761_RuntimeMethod_var);
		V_0 = L_0;
		MonoBehaviourU5BU5D_t2007329276* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_004e;
	}

IL_000f:
	{
		MonoBehaviourU5BU5D_t2007329276* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		MonoBehaviour_t3962482529 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = ((int32_t)36);
		MonoBehaviour_t3962482529 * L_6 = V_1;
		Type_t * L_7 = Object_GetType_m88164663(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_4;
		MethodInfo_t * L_9 = Type_GetMethod_m1197120913(L_7, _stringLiteral378173023, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		MethodInfo_t * L_10 = V_5;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		V_6 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		ObjectU5BU5D_t2843939325* L_11 = V_6;
		String_t* L_12 = ___input0;
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		MethodInfo_t * L_13 = V_5;
		MonoBehaviour_t3962482529 * L_14 = V_1;
		ObjectU5BU5D_t2843939325* L_15 = V_6;
		MethodBase_Invoke_m1776411915(L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_004a:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_17 = V_3;
		MonoBehaviourU5BU5D_t2007329276* L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
