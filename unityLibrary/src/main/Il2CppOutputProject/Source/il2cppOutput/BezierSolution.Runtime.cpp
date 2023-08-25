#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.List`1<ClothDynamics.BezierPoint>
struct List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// ClothDynamics.BezierPoint[]
struct BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// ClothDynamics.InsideCheck/Point[]
struct PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ClothDynamics.BezierPoint
struct BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376;
// ClothDynamics.BezierSpline
struct BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF;
// ClothDynamics.BezierWalker
struct BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9;
// ClothDynamics.BezierWalkerLocomotion
struct BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9;
// ClothDynamics.BezierWalkerWithSpeed
struct BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF;
// ClothDynamics.BezierWalkerWithTime
struct BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// ClothDynamics.ParticlesFollowBezier
struct ParticlesFollowBezier_tDF003DFB056C76AA43A45CE9ED94BE75990BB402;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ClothDynamics.BezierSpline/ExtraDataLerpFunction
struct ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D;

IL2CPP_EXTERN_C RuntimeClass* BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01A005D90CC25924B8CADAC9F3444467D0D281DE;
IL2CPP_EXTERN_C String_t* _stringLiteral061DF8789A74746E61BB95FA1D16F4F1FEBE0E2E;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB5E3421205759C5713B4BD9B763045F3D76EF8;
IL2CPP_EXTERN_C String_t* _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC;
IL2CPP_EXTERN_C String_t* _stringLiteral70F08C1D778A2AD17359C5B95AFB194D59F34600;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209;
IL2CPP_EXTERN_C String_t* _stringLiteral87A52E00847B952188550A1F30F38BAC8E2727B5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBA264A5A0DEE9DDEF2088E4DDE0204CFA3E3BF00;
IL2CPP_EXTERN_C String_t* _stringLiteralD33D88AC837D2B321D7D36DD8FC96F26C32C8FF1;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC326ACF94749F550FE0DF855B22FC51DBDF902;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF2311B8F8F47C5E15D1B7FFF62F59F2DCA2C5541;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mD6CA3BF3BEA5FD7D9869931A247717244409E6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierWalker_InterpolateExtraDataAsQuaternion_m94B4455127AB7C6EEEED7BF56C93895A963ED7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m423975FA68216DD98F8F9F20331D3CBED96E65AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtraData_LerpUnclamped_mD8A100364740E70CD374FB5BE45CFFAC30F9F903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m86078741CFF393923DE7D7979D602247F5147C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mB26FB97BA083DF2E647E03A45E61672026685ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m091DA63665575BDB7DFF8F77E75F1D6140C51060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mAB414D49B19A78E869B7A151D717102871979833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mC1AB5BCBBAB1A0C67BC0AE0E51977EBF5C76EB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m634A2FE57AE45BC9715B604F4D69EBD6042AA3F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7715B92F96E60AB1CD797770C8718D2B763CB1F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7;
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA6472CBF9EE0FA3DDD716F0338A62A5C422DB65F 
{
};

// System.Collections.Generic.List`1<ClothDynamics.BezierPoint>
struct List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ClothDynamics.InsideCheck
struct InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// ClothDynamics.BezierPoint/ExtraData
struct ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 
{
	// System.Single ClothDynamics.BezierPoint/ExtraData::c1
	float ___c1_0;
	// System.Single ClothDynamics.BezierPoint/ExtraData::c2
	float ___c2_1;
	// System.Single ClothDynamics.BezierPoint/ExtraData::c3
	float ___c3_2;
	// System.Single ClothDynamics.BezierPoint/ExtraData::c4
	float ___c4_3;
};

// ClothDynamics.BezierSpline/PointIndexTuple
struct PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5 
{
	// System.Int32 ClothDynamics.BezierSpline/PointIndexTuple::index1
	int32_t ___index1_0;
	// System.Int32 ClothDynamics.BezierSpline/PointIndexTuple::index2
	int32_t ___index2_1;
	// System.Single ClothDynamics.BezierSpline/PointIndexTuple::t
	float ___t_2;
};

// ClothDynamics.InsideCheck/Point
struct Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 
{
	// System.Single ClothDynamics.InsideCheck/Point::x
	float ___x_0;
	// System.Single ClothDynamics.InsideCheck/Point::y
	float ___y_1;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ClothDynamics.BezierSpline/ExtraDataLerpFunction
struct ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ClothDynamics.BezierPoint
struct BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 ClothDynamics.BezierPoint::m_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position_4;
	// UnityEngine.Vector3 ClothDynamics.BezierPoint::m_precedingControlPointLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_precedingControlPointLocalPosition_5;
	// UnityEngine.Vector3 ClothDynamics.BezierPoint::m_precedingControlPointPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_precedingControlPointPosition_6;
	// UnityEngine.Vector3 ClothDynamics.BezierPoint::m_followingControlPointLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_followingControlPointLocalPosition_7;
	// UnityEngine.Vector3 ClothDynamics.BezierPoint::m_followingControlPointPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_followingControlPointPosition_8;
	// ClothDynamics.BezierPoint/HandleMode ClothDynamics.BezierPoint::m_handleMode
	int32_t ___m_handleMode_9;
	// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint::extraData
	ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___extraData_10;
	// ClothDynamics.BezierSpline ClothDynamics.BezierPoint::Internal_Spline
	BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* ___Internal_Spline_11;
	// System.Int32 ClothDynamics.BezierPoint::Internal_Index
	int32_t ___Internal_Index_12;
};

// ClothDynamics.BezierSpline
struct BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<ClothDynamics.BezierPoint> ClothDynamics.BezierSpline::endPoints
	List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* ___endPoints_6;
	// System.Boolean ClothDynamics.BezierSpline::loop
	bool ___loop_7;
	// System.Boolean ClothDynamics.BezierSpline::drawGizmos
	bool ___drawGizmos_8;
	// UnityEngine.Color ClothDynamics.BezierSpline::gizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___gizmoColor_9;
	// System.Single ClothDynamics.BezierSpline::gizmoStep
	float ___gizmoStep_10;
	// System.Int32 ClothDynamics.BezierSpline::m_gizmoSmoothness
	int32_t ___m_gizmoSmoothness_11;
};

// ClothDynamics.BezierWalker
struct BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ClothDynamics.ParticlesFollowBezier
struct ParticlesFollowBezier_tDF003DFB056C76AA43A45CE9ED94BE75990BB402  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothDynamics.BezierSpline ClothDynamics.ParticlesFollowBezier::spline
	BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* ___spline_5;
	// ClothDynamics.ParticlesFollowBezier/FollowMode ClothDynamics.ParticlesFollowBezier::followMode
	int32_t ___followMode_6;
	// UnityEngine.Transform ClothDynamics.ParticlesFollowBezier::cachedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cachedTransform_7;
	// UnityEngine.ParticleSystem ClothDynamics.ParticlesFollowBezier::cachedPS
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___cachedPS_8;
	// UnityEngine.ParticleSystem/MainModule ClothDynamics.ParticlesFollowBezier::cachedMainModule
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ___cachedMainModule_9;
	// UnityEngine.ParticleSystem/Particle[] ClothDynamics.ParticlesFollowBezier::particles
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> ClothDynamics.ParticlesFollowBezier::particleData
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___particleData_11;
};

// ClothDynamics.BezierWalkerLocomotion
struct BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9  : public BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9
{
	// ClothDynamics.BezierWalker ClothDynamics.BezierWalkerLocomotion::walker
	BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* ___walker_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ClothDynamics.BezierWalkerLocomotion::tailObjects
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___tailObjects_6;
	// System.Collections.Generic.List`1<System.Single> ClothDynamics.BezierWalkerLocomotion::tailObjectDistances
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___tailObjectDistances_7;
	// System.Single ClothDynamics.BezierWalkerLocomotion::movementLerpModifier
	float ___movementLerpModifier_8;
	// System.Single ClothDynamics.BezierWalkerLocomotion::rotationLerpModifier
	float ___rotationLerpModifier_9;
	// System.Boolean ClothDynamics.BezierWalkerLocomotion::lookForward
	bool ___lookForward_10;
	// ClothDynamics.LookAtMode ClothDynamics.BezierWalkerLocomotion::lookAt
	int32_t ___lookAt_11;
};

// ClothDynamics.BezierWalkerWithSpeed
struct BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF  : public BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9
{
	// ClothDynamics.BezierSpline ClothDynamics.BezierWalkerWithSpeed::spline
	BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* ___spline_5;
	// ClothDynamics.TravelMode ClothDynamics.BezierWalkerWithSpeed::travelMode
	int32_t ___travelMode_6;
	// System.Single ClothDynamics.BezierWalkerWithSpeed::speed
	float ___speed_7;
	// System.Single ClothDynamics.BezierWalkerWithSpeed::m_normalizedT
	float ___m_normalizedT_8;
	// System.Single ClothDynamics.BezierWalkerWithSpeed::rotationLerpModifier
	float ___rotationLerpModifier_9;
	// System.Boolean ClothDynamics.BezierWalkerWithSpeed::lookForward
	bool ___lookForward_10;
	// ClothDynamics.LookAtMode ClothDynamics.BezierWalkerWithSpeed::lookAt
	int32_t ___lookAt_11;
	// System.Boolean ClothDynamics.BezierWalkerWithSpeed::isGoingForward
	bool ___isGoingForward_12;
	// UnityEngine.Events.UnityEvent ClothDynamics.BezierWalkerWithSpeed::onPathCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPathCompleted_13;
	// System.Boolean ClothDynamics.BezierWalkerWithSpeed::onPathCompletedCalledAt1
	bool ___onPathCompletedCalledAt1_14;
	// System.Boolean ClothDynamics.BezierWalkerWithSpeed::onPathCompletedCalledAt0
	bool ___onPathCompletedCalledAt0_15;
};

// ClothDynamics.BezierWalkerWithTime
struct BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C  : public BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9
{
	// ClothDynamics.BezierSpline ClothDynamics.BezierWalkerWithTime::spline
	BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* ___spline_5;
	// ClothDynamics.TravelMode ClothDynamics.BezierWalkerWithTime::travelMode
	int32_t ___travelMode_6;
	// System.Single ClothDynamics.BezierWalkerWithTime::travelTime
	float ___travelTime_7;
	// System.Single ClothDynamics.BezierWalkerWithTime::m_normalizedT
	float ___m_normalizedT_8;
	// System.Single ClothDynamics.BezierWalkerWithTime::movementLerpModifier
	float ___movementLerpModifier_9;
	// System.Single ClothDynamics.BezierWalkerWithTime::rotationLerpModifier
	float ___rotationLerpModifier_10;
	// System.Boolean ClothDynamics.BezierWalkerWithTime::lookForward
	bool ___lookForward_11;
	// ClothDynamics.LookAtMode ClothDynamics.BezierWalkerWithTime::lookAt
	int32_t ___lookAt_12;
	// System.Boolean ClothDynamics.BezierWalkerWithTime::isGoingForward
	bool ___isGoingForward_13;
	// UnityEngine.Events.UnityEvent ClothDynamics.BezierWalkerWithTime::onPathCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPathCompleted_14;
	// System.Boolean ClothDynamics.BezierWalkerWithTime::onPathCompletedCalledAt1
	bool ___onPathCompletedCalledAt1_15;
	// System.Boolean ClothDynamics.BezierWalkerWithTime::onPathCompletedCalledAt0
	bool ___onPathCompletedCalledAt0_16;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<ClothDynamics.BezierPoint>
struct List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ClothDynamics.BezierPoint>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>

// ClothDynamics.InsideCheck
struct InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_StaticFields
{
	// System.Int32 ClothDynamics.InsideCheck::INF
	int32_t ___INF_0;
};

// ClothDynamics.InsideCheck

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.RectInt

// UnityEngine.RectInt

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector3Int

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// ClothDynamics.BezierPoint/ExtraData

// ClothDynamics.BezierPoint/ExtraData

// ClothDynamics.BezierSpline/PointIndexTuple

// ClothDynamics.BezierSpline/PointIndexTuple

// ClothDynamics.InsideCheck/Point

// ClothDynamics.InsideCheck/Point

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.ParticleSystem/Particle

// UnityEngine.ParticleSystem/Particle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// System.AsyncCallback

// System.AsyncCallback

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Transform

// UnityEngine.Transform

// ClothDynamics.BezierSpline/ExtraDataLerpFunction

// ClothDynamics.BezierSpline/ExtraDataLerpFunction

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ClothDynamics.BezierPoint

// ClothDynamics.BezierPoint

// ClothDynamics.BezierSpline
struct BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields
{
	// ClothDynamics.BezierSpline/ExtraDataLerpFunction ClothDynamics.BezierSpline::defaultExtraDataLerpFunction
	ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* ___defaultExtraDataLerpFunction_4;
	// UnityEngine.Material ClothDynamics.BezierSpline::gizmoMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___gizmoMaterial_5;
};

// ClothDynamics.BezierSpline

// ClothDynamics.BezierWalker
struct BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_StaticFields
{
	// ClothDynamics.BezierSpline/ExtraDataLerpFunction ClothDynamics.BezierWalker::extraDataLerpAsQuaternionFunction
	ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* ___extraDataLerpAsQuaternionFunction_4;
};

// ClothDynamics.BezierWalker

// ClothDynamics.ParticlesFollowBezier

// ClothDynamics.ParticlesFollowBezier

// ClothDynamics.BezierWalkerLocomotion

// ClothDynamics.BezierWalkerLocomotion

// ClothDynamics.BezierWalkerWithSpeed

// ClothDynamics.BezierWalkerWithSpeed

// ClothDynamics.BezierWalkerWithTime

// ClothDynamics.BezierWalkerWithTime
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ClothDynamics.InsideCheck/Point[]
struct PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7  : public RuntimeArray
{
	ALIGN_FIELD (8) Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 m_Items[1];

	inline Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_tACD2CD0993F627FE37A57F06660566CB5250CB18* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_tACD2CD0993F627FE37A57F06660566CB5250CB18* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 value)
	{
		m_Items[index] = value;
	}
};
// ClothDynamics.BezierPoint[]
struct BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815  : public RuntimeArray
{
	ALIGN_FIELD (8) BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* m_Items[1];

	inline BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7  : public RuntimeArray
{
	ALIGN_FIELD (8) Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D m_Items[1];

	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_results, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1AB5BCBBAB1A0C67BC0AE0E51977EBF5C76EB13_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, float ___1_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.ParticleSystem/Particle>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mD6CA3BF3BEA5FD7D9869931A247717244409E6D2_gshared (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::Revalidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_Revalidate_mA2D1AA9201B85A59A9017644FB5515CD2CFF75FA (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_precedingControlPointLocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_precedingControlPointLocalPosition_m9D505A0A61D34FD32E7C696A9E483163BA882A3D (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_localPosition_m61ED00949AA17CA7601EA5BFC4852F70B1D3DE8C (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_localRotation_m418F254E844CD9D56B1F9FB8F4753313938B6EFE (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_localScale_mF63B8F2E6CE49B458FF3BDD2704252103264AA85 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_followingControlPointLocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_followingControlPointLocalPosition_m34CEB9534354E3518DD7286DA1BA48E77539A4E4 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint/ExtraData::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, float ___0_c1, float ___1_c2, float ___2_c3, float ___3_c4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
// System.Boolean ClothDynamics.BezierPoint/ExtraData::op_Equality(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtraData_op_Equality_m3ED71005B2841A47B40F94C1D96D2BFDB329DFFF (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_d1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_d2, const RuntimeMethod* method) ;
// System.Boolean ClothDynamics.BezierPoint/ExtraData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtraData_Equals_mAA450B9FECF3114C026C0ADA476F4F1B5BF24DAA (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 ClothDynamics.BezierPoint/ExtraData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtraData_GetHashCode_m7E7F843AD58F241B5E11DFA53D811EA09F405D62 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ExtraData_op_Implicit_mC75C21E48BF2191FE80ED194AB628B0351BB633F (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mFA0DDF34C1E394F75EF65E06764A1BE750E7F388 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.String ClothDynamics.BezierPoint/ExtraData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExtraData_ToString_m88B85A12FEF696A7EC84A859E356838BC5F6BC01 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::get_Count()
inline int32_t List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Single ClothDynamics.BezierSpline::GetLengthApproximately(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierSpline_GetLengthApproximately_m44D32E5D6B8E292E1302022443091AC653063178 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_startNormalizedT, float ___1_endNormalizedT, float ___2_accuracy, const RuntimeMethod* method) ;
// System.Int32 ClothDynamics.BezierSpline::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierSpline_get_Count_m0F4C5A88833DDB1DE4244C50A8BED141A70E7CED (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::get_Item(System.Int32)
inline BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573 (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierSpline::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_Refresh_mFA85A6A0ED570E6DA309F33238074DF7E2007D97 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::Clear()
inline void List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_inline (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// ClothDynamics.BezierPoint ClothDynamics.BezierSpline::InsertNewPointAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* BezierSpline_InsertNewPointAt_m42BAEB88D45323D9A08CB8ABC05573C76D424BDB (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<ClothDynamics.BezierPoint>(System.Collections.Generic.List`1<T>)
inline void Component_GetComponentsInChildren_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m423975FA68216DD98F8F9F20331D3CBED96E65AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B_gshared)(__this, ___0_results, method);
}
// System.Int32 ClothDynamics.BezierSpline::get_gizmoSmoothness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BezierSpline_get_gizmoSmoothness_m81789FAD8C21E1A2927F5D92A5FC42AC9793A809_inline (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierSpline::set_gizmoSmoothness(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_set_gizmoSmoothness_m064F49FAE80D381821D8FA087CAEBBBE52FF438F (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<ClothDynamics.BezierPoint>()
inline BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* GameObject_AddComponent_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m86078741CFF393923DE7D7979D602247F5147C65 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::Insert(System.Int32,T)
inline void List_1_Insert_m091DA63665575BDB7DFF8F77E75F1D6140C51060 (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, int32_t ___0_index, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, int32_t, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Void ClothDynamics.BezierPoint::CopyTo(ClothDynamics.BezierPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_CopyTo_m920CDC3BE472749743BEC542DADDDFA699B396FD (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* ___0_other, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m634A2FE57AE45BC9715B604F4D69EBD6042AA3F7 (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::set_Item(System.Int32,T)
inline void List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69 (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, int32_t ___0_index, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, int32_t, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierSpline::Internal_MovePoint(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_Internal_MovePoint_m54C2C0420451234CB5EFE9D14EB17E2C50865073 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_previousIndex, int32_t ___1_newIndex, String_t* ___2_undo, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::IndexOf(T)
inline int32_t List_1_IndexOf_mB26FB97BA083DF2E647E03A45E61672026685ACF (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_followingControlPointPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_precedingControlPointPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_precedingControlPointPosition_mA412B4EC115F57CFE4DED81C4CB2271D35F4D206 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) ;
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierSpline::GetExtraData(System.Single,ClothDynamics.BezierSpline/ExtraDataLerpFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 BezierSpline_GetExtraData_m45D19828A743E8799E7545F7BCE8B88E6318AF13 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* ___1_lerpFunction, const RuntimeMethod* method) ;
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierSpline/ExtraDataLerpFunction::Invoke(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_inline (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method) ;
// System.Single ClothDynamics.BezierSpline::AccuracyToStepSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierSpline_AccuracyToStepSize_mCD49E950069E4022CFDD4DAF4EA75A64336F7739 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_accuracy, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ClothDynamics.BezierSpline::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierSpline/PointIndexTuple::.ctor(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointIndexTuple__ctor_m53598F49AA57531D83594282579250F6AE8CACB7 (PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5* __this, int32_t ___0_index1, int32_t ___1_index2, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ClothDynamics.BezierSpline::FindNearestPointTo(UnityEngine.Vector3,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_FindNearestPointTo_m8F6269B4D5195EBC64CC62E8FB38AA8498E4EA64 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPos, float* ___1_normalizedT, float ___2_accuracy, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ClothDynamics.BezierSpline::GetTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_handleMode(ClothDynamics.BezierPoint/HandleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_handleMode_m72E50703D9E88B7DDF3F97A742C78751E5E775DD (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_followingControlPointPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_followingControlPointPosition_m51EFCC260D5249E5FF520A4A6940ABEBEC42F008 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierPoint::set_precedingControlPointPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] ClothDynamics.BezierSpline::GetFirstControlPoints(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* BezierSpline_GetFirstControlPoints_m6DF7599A1BFC82A68F2FCF4F6AFCEF16108237D1 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_precedingControlPointLocalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_precedingControlPointLocalPosition_m4B84193C0BAD1AC0321EF1E4CDEDBF178737EB12_inline (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7 (int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978 (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClothDynamics.BezierPoint>::.ctor()
inline void List_1__ctor_m7715B92F96E60AB1CD797770C8718D2B763CB1F8 (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void ClothDynamics.BezierSpline/ExtraDataLerpFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraDataLerpFunction__ctor_mD5738E9BE80062558320E4D5D1DA4A3E23946578 (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single ClothDynamics.InsideCheck::orientation(ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InsideCheck_orientation_mBE7CCCB17181B9A17B94241CC38E0E3CB80AA256 (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___0_p, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___1_q, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_r, const RuntimeMethod* method) ;
// System.Boolean ClothDynamics.InsideCheck::onSegment(ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_onSegment_mD0E75EB98F74FEC98600C643573A3233E0757826 (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___0_p, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___1_q, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_r, const RuntimeMethod* method) ;
// System.Void ClothDynamics.InsideCheck/Point::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882 (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Boolean ClothDynamics.InsideCheck::doIntersect(ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_doIntersect_m70D66D62DD0923624D7B9F23D9D87CD13690CCDA (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___0_p1, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___1_q1, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_p2, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___3_q2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean ClothDynamics.InsideCheck::isInside(ClothDynamics.InsideCheck/Point[],System.Int32,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_isInside_mCEA365D94289C6940A87AD3343208FF6BFBD01CD (PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* ___0_polygon, int32_t ___1_n, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_p, const RuntimeMethod* method) ;
// UnityEngine.Quaternion ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LerpUnclamped_mEACDD86D679680584F09BE2E380B8EA277FA3971 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_m13442199AF2F6AAEFBAD325294C636886B580AAB (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector3 ClothDynamics.BezierSpline::MoveAlongSpline(System.Single&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_MoveAlongSpline_m14466F2E19BDF2B552E33D7F79EE40A95D94771F (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float* ___0_normalizedT, float ___1_deltaMovement, int32_t ___2_accuracy, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Insert(System.Int32,T)
inline void List_1_Insert_mAB414D49B19A78E869B7A151D717102871979833 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
inline void List_1_Insert_mC1AB5BCBBAB1A0C67BC0AE0E51977EBF5C76EB13 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, float ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, float, const RuntimeMethod*))List_1_Insert_mC1AB5BCBBAB1A0C67BC0AE0E51977EBF5C76EB13_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared)(__this, ___0_index, method);
}
// System.Void ClothDynamics.BezierWalker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalker__ctor_m192DEE8ADB85FD66F93EB349DF0566CDB8FD88B1 (BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
inline void List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_gshared)(__this, ___0_capacity, method);
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.ParticleSystem/Particle>(T[]&,System.Int32)
inline void Array_Resize_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mD6CA3BF3BEA5FD7D9869931A247717244409E6D2 (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7**, int32_t, const RuntimeMethod*))Array_Resize_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mD6CA3BF3BEA5FD7D9869931A247717244409E6D2_gshared)(___0_array, ___1_newSize, method);
}
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___0_particles, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetCustomParticleData(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.ParticleSystemCustomData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetCustomParticleData_m5A4E0CCEEF03F77F239D856DB80FA61F479C7670 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_customData, int32_t ___1_streamIndex, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_gshared)(__this, ___0_index, method);
}
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
inline void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void UnityEngine.ParticleSystem::SetCustomParticleData(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.ParticleSystemCustomData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetCustomParticleData_m00DE2BB34BFE3221AD472040E6554E05FA29F258 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_customData, int32_t ___1_streamIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___0_particles, int32_t ___1_size, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_localPosition_mB3B5AB99B0A67702A87105AD68BDFB57F7A052D3 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// get { return transform.localPosition; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		return L_1;
	}
}
// System.Void ClothDynamics.BezierPoint::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_localPosition_m61ED00949AA17CA7601EA5BFC4852F70B1D3DE8C (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// if( transform.hasChanged )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Revalidate();
		BezierPoint_Revalidate_mA2D1AA9201B85A59A9017644FB5515CD2CFF75FA(__this, NULL);
	}

IL_0013:
	{
		// return m_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_position_4;
		return L_2;
	}
}
// System.Void ClothDynamics.BezierPoint::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_position_m3C62A53CD767B2C7E71C4AF920F9D1A2C99FBE22 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.position = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion ClothDynamics.BezierPoint::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BezierPoint_get_localRotation_mA702E47A2ECFD0FE19668E43A4CE5CEA96989C03 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// get { return transform.localRotation; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		return L_1;
	}
}
// System.Void ClothDynamics.BezierPoint::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_localRotation_m418F254E844CD9D56B1F9FB8F4753313938B6EFE (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.localRotation = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion ClothDynamics.BezierPoint::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BezierPoint_get_rotation_m38E8860F2FD4B671B35C376E2C429A1A5F55C71F (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// get { return transform.rotation; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		return L_1;
	}
}
// System.Void ClothDynamics.BezierPoint::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_rotation_m9F51D5C8D82383E02ADFF39CAABB2683B65A2BDE (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.rotation = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_localEulerAngles_mD174276013966EE62065327B4F238D54225A7182 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// get { return transform.localEulerAngles; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_0, NULL);
		return L_1;
	}
}
// System.Void ClothDynamics.BezierPoint::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_localEulerAngles_m1ECC525FBD36E3762A61ADB901E2E8ACB21E9D99 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.localEulerAngles = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_eulerAngles_m68E013DE440723974AF2A26809884B9C55BF55F3 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// get { return transform.eulerAngles; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		return L_1;
	}
}
// System.Void ClothDynamics.BezierPoint::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_eulerAngles_m67EDBBBD3946A01972867A1D1A570B8419A063FA (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.eulerAngles = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_localScale_m97F8D501200C76A493435EC77379C7B2A0D50469 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// get { return transform.localScale; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		return L_1;
	}
}
// System.Void ClothDynamics.BezierPoint::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_localScale_mF63B8F2E6CE49B458FF3BDD2704252103264AA85 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.localScale = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_precedingControlPointLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_precedingControlPointLocalPosition_m4B84193C0BAD1AC0321EF1E4CDEDBF178737EB12 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// return m_precedingControlPointLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_precedingControlPointLocalPosition_5;
		return L_0;
	}
}
// System.Void ClothDynamics.BezierPoint::set_precedingControlPointLocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_precedingControlPointLocalPosition_m9D505A0A61D34FD32E7C696A9E483163BA882A3D (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// m_precedingControlPointLocalPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_precedingControlPointLocalPosition_5 = L_0;
		// m_precedingControlPointPosition = transform.TransformPoint( value );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		__this->___m_precedingControlPointPosition_6 = L_3;
		// if( m_handleMode == HandleMode.Aligned )
		int32_t L_4 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		// m_followingControlPointLocalPosition = -m_precedingControlPointLocalPosition.normalized * m_followingControlPointLocalPosition.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_precedingControlPointLocalPosition_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_followingControlPointLocalPosition_7);
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_9, NULL);
		__this->___m_followingControlPointLocalPosition_7 = L_10;
		// m_followingControlPointPosition = transform.TransformPoint( m_followingControlPointLocalPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___m_followingControlPointLocalPosition_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_11, L_12, NULL);
		__this->___m_followingControlPointPosition_8 = L_13;
		return;
	}

IL_0060:
	{
		// else if( m_handleMode == HandleMode.Mirrored )
		int32_t L_14 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0091;
		}
	}
	{
		// m_followingControlPointLocalPosition = -m_precedingControlPointLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___m_precedingControlPointLocalPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_15, NULL);
		__this->___m_followingControlPointLocalPosition_7 = L_16;
		// m_followingControlPointPosition = transform.TransformPoint( m_followingControlPointLocalPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___m_followingControlPointLocalPosition_7;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_17, L_18, NULL);
		__this->___m_followingControlPointPosition_8 = L_19;
	}

IL_0091:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_precedingControlPointPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_precedingControlPointPosition_mA412B4EC115F57CFE4DED81C4CB2271D35F4D206 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// if( transform.hasChanged )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Revalidate();
		BezierPoint_Revalidate_mA2D1AA9201B85A59A9017644FB5515CD2CFF75FA(__this, NULL);
	}

IL_0013:
	{
		// return m_precedingControlPointPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_precedingControlPointPosition_6;
		return L_2;
	}
}
// System.Void ClothDynamics.BezierPoint::set_precedingControlPointPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_precedingControlPointPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_precedingControlPointPosition_6 = L_0;
		// m_precedingControlPointLocalPosition = transform.InverseTransformPoint( value );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_2, NULL);
		__this->___m_precedingControlPointLocalPosition_5 = L_3;
		// if( transform.hasChanged )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// m_position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___m_position_4 = L_7;
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_8, (bool)0, NULL);
	}

IL_0043:
	{
		// if( m_handleMode == HandleMode.Aligned )
		int32_t L_9 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00ac;
		}
	}
	{
		// m_followingControlPointPosition = m_position - ( m_precedingControlPointPosition - m_position ).normalized *
		//                                                ( m_followingControlPointPosition - m_position ).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___m_precedingControlPointPosition_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_12, NULL);
		V_0 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___m_followingControlPointPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		V_0 = L_17;
		float L_18;
		L_18 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_19, NULL);
		__this->___m_followingControlPointPosition_8 = L_20;
		// m_followingControlPointLocalPosition = transform.InverseTransformPoint( m_followingControlPointPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___m_followingControlPointPosition_8;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_21, L_22, NULL);
		__this->___m_followingControlPointLocalPosition_7 = L_23;
		return;
	}

IL_00ac:
	{
		// else if( m_handleMode == HandleMode.Mirrored )
		int32_t L_24 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_00ed;
		}
	}
	{
		// m_followingControlPointPosition = 2f * m_position - m_precedingControlPointPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___m_precedingControlPointPosition_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_27, NULL);
		__this->___m_followingControlPointPosition_8 = L_28;
		// m_followingControlPointLocalPosition = transform.InverseTransformPoint( m_followingControlPointPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___m_followingControlPointPosition_8;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_29, L_30, NULL);
		__this->___m_followingControlPointLocalPosition_7 = L_31;
	}

IL_00ed:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_followingControlPointLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_followingControlPointLocalPosition_mB1217A439D4E669AB52F01E012B0D6C055954B55 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// return m_followingControlPointLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_followingControlPointLocalPosition_7;
		return L_0;
	}
}
// System.Void ClothDynamics.BezierPoint::set_followingControlPointLocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_followingControlPointLocalPosition_m34CEB9534354E3518DD7286DA1BA48E77539A4E4 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// m_followingControlPointLocalPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_followingControlPointLocalPosition_7 = L_0;
		// m_followingControlPointPosition = transform.TransformPoint( value );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		__this->___m_followingControlPointPosition_8 = L_3;
		// if( m_handleMode == HandleMode.Aligned )
		int32_t L_4 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		// m_precedingControlPointLocalPosition = -m_followingControlPointLocalPosition.normalized * m_precedingControlPointLocalPosition.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_followingControlPointLocalPosition_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_precedingControlPointLocalPosition_5);
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_9, NULL);
		__this->___m_precedingControlPointLocalPosition_5 = L_10;
		// m_precedingControlPointPosition = transform.TransformPoint( m_precedingControlPointLocalPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___m_precedingControlPointLocalPosition_5;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_11, L_12, NULL);
		__this->___m_precedingControlPointPosition_6 = L_13;
		return;
	}

IL_0060:
	{
		// else if( m_handleMode == HandleMode.Mirrored )
		int32_t L_14 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0091;
		}
	}
	{
		// m_precedingControlPointLocalPosition = -m_followingControlPointLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___m_followingControlPointLocalPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_15, NULL);
		__this->___m_precedingControlPointLocalPosition_5 = L_16;
		// m_precedingControlPointPosition = transform.TransformPoint( m_precedingControlPointLocalPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___m_precedingControlPointLocalPosition_5;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_17, L_18, NULL);
		__this->___m_precedingControlPointPosition_6 = L_19;
	}

IL_0091:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint::get_followingControlPointPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// if( transform.hasChanged )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Revalidate();
		BezierPoint_Revalidate_mA2D1AA9201B85A59A9017644FB5515CD2CFF75FA(__this, NULL);
	}

IL_0013:
	{
		// return m_followingControlPointPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_followingControlPointPosition_8;
		return L_2;
	}
}
// System.Void ClothDynamics.BezierPoint::set_followingControlPointPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_followingControlPointPosition_m51EFCC260D5249E5FF520A4A6940ABEBEC42F008 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_followingControlPointPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_followingControlPointPosition_8 = L_0;
		// m_followingControlPointLocalPosition = transform.InverseTransformPoint( value );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_2, NULL);
		__this->___m_followingControlPointLocalPosition_7 = L_3;
		// if( transform.hasChanged )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// m_position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___m_position_4 = L_7;
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_8, (bool)0, NULL);
	}

IL_0043:
	{
		// if( m_handleMode == HandleMode.Aligned )
		int32_t L_9 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00ac;
		}
	}
	{
		// m_precedingControlPointPosition = m_position - ( m_followingControlPointPosition - m_position ).normalized *
		//                                                 ( m_precedingControlPointPosition - m_position ).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___m_followingControlPointPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_12, NULL);
		V_0 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___m_precedingControlPointPosition_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		V_0 = L_17;
		float L_18;
		L_18 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_19, NULL);
		__this->___m_precedingControlPointPosition_6 = L_20;
		// m_precedingControlPointLocalPosition = transform.InverseTransformPoint( m_precedingControlPointPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___m_precedingControlPointPosition_6;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_21, L_22, NULL);
		__this->___m_precedingControlPointLocalPosition_5 = L_23;
		return;
	}

IL_00ac:
	{
		// else if( m_handleMode == HandleMode.Mirrored )
		int32_t L_24 = __this->___m_handleMode_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_00ed;
		}
	}
	{
		// m_precedingControlPointPosition = 2f * m_position - m_followingControlPointPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___m_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___m_followingControlPointPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_27, NULL);
		__this->___m_precedingControlPointPosition_6 = L_28;
		// m_precedingControlPointLocalPosition = transform.InverseTransformPoint( m_precedingControlPointPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___m_precedingControlPointPosition_6;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_29, L_30, NULL);
		__this->___m_precedingControlPointLocalPosition_5 = L_31;
	}

IL_00ed:
	{
		// }
		return;
	}
}
// ClothDynamics.BezierPoint/HandleMode ClothDynamics.BezierPoint::get_handleMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierPoint_get_handleMode_mDB1366C4E933196C125431D3BB1891B9BA9865AC (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// return m_handleMode;
		int32_t L_0 = __this->___m_handleMode_9;
		return L_0;
	}
}
// System.Void ClothDynamics.BezierPoint::set_handleMode(ClothDynamics.BezierPoint/HandleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_set_handleMode_m72E50703D9E88B7DDF3F97A742C78751E5E775DD (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// m_handleMode = value;
		int32_t L_0 = ___0_value;
		__this->___m_handleMode_9 = L_0;
		// if( value == HandleMode.Aligned || value == HandleMode.Mirrored )
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001b;
		}
	}

IL_000f:
	{
		// precedingControlPointLocalPosition = m_precedingControlPointLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_precedingControlPointLocalPosition_5;
		BezierPoint_set_precedingControlPointLocalPosition_m9D505A0A61D34FD32E7C696A9E483163BA882A3D(__this, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierPoint::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_Awake_m9F71BF77A2B54C1D920D1C762FA797A975134542 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// transform.hasChanged = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierPoint::CopyTo(ClothDynamics.BezierPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_CopyTo_m920CDC3BE472749743BEC542DADDDFA699B396FD (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* ___0_other, const RuntimeMethod* method) 
{
	{
		// other.transform.localPosition = transform.localPosition;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_0 = ___0_other;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_3, NULL);
		// other.transform.localRotation = transform.localRotation;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_4 = ___0_other;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		NullCheck(L_5);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_5, L_7, NULL);
		// other.transform.localScale = transform.localScale;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_8 = ___0_other;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_11, NULL);
		// other.m_handleMode = m_handleMode;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_12 = ___0_other;
		int32_t L_13 = __this->___m_handleMode_9;
		NullCheck(L_12);
		L_12->___m_handleMode_9 = L_13;
		// other.m_precedingControlPointLocalPosition = m_precedingControlPointLocalPosition;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_14 = ___0_other;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___m_precedingControlPointLocalPosition_5;
		NullCheck(L_14);
		L_14->___m_precedingControlPointLocalPosition_5 = L_15;
		// other.m_followingControlPointLocalPosition = m_followingControlPointLocalPosition;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_16 = ___0_other;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___m_followingControlPointLocalPosition_7;
		NullCheck(L_16);
		L_16->___m_followingControlPointLocalPosition_7 = L_17;
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierPoint::Revalidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_Revalidate_mA2D1AA9201B85A59A9017644FB5515CD2CFF75FA (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// m_position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___m_position_4 = L_1;
		// m_precedingControlPointPosition = transform.TransformPoint( m_precedingControlPointLocalPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_precedingControlPointLocalPosition_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_3, NULL);
		__this->___m_precedingControlPointPosition_6 = L_4;
		// m_followingControlPointPosition = transform.TransformPoint( m_followingControlPointLocalPosition );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___m_followingControlPointLocalPosition_7;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_6, NULL);
		__this->___m_followingControlPointPosition_8 = L_7;
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierPoint::SetSplineDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_SetSplineDirty_mDCE6BC8322D12B9D09544185C86587C6271CB27B (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierPoint::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint_Reset_m050DCB1B57CF94EBCAC10D06CDFC4E00E85E1AD2 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// localPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		BezierPoint_set_localPosition_m61ED00949AA17CA7601EA5BFC4852F70B1D3DE8C(__this, L_0, NULL);
		// localRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		BezierPoint_set_localRotation_m418F254E844CD9D56B1F9FB8F4753313938B6EFE(__this, L_1, NULL);
		// localScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		BezierPoint_set_localScale_mF63B8F2E6CE49B458FF3BDD2704252103264AA85(__this, L_2, NULL);
		// precedingControlPointLocalPosition = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		BezierPoint_set_precedingControlPointLocalPosition_m9D505A0A61D34FD32E7C696A9E483163BA882A3D(__this, L_3, NULL);
		// followingControlPointLocalPosition = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		BezierPoint_set_followingControlPointLocalPosition_m34CEB9534354E3518DD7286DA1BA48E77539A4E4(__this, L_4, NULL);
		// transform.hasChanged = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint__ctor_mE3A79C01A29558A4225FB84DB661FE1747C00960 (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 m_precedingControlPointLocalPosition = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		__this->___m_precedingControlPointLocalPosition_5 = L_0;
		// private Vector3 m_followingControlPointLocalPosition = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___m_followingControlPointLocalPosition_7 = L_1;
		// private HandleMode m_handleMode = HandleMode.Mirrored;
		__this->___m_handleMode_9 = 2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ClothDynamics.BezierPoint/ExtraData::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, float ___0_c1, float ___1_c2, float ___2_c3, float ___3_c4, const RuntimeMethod* method) 
{
	{
		// this.c1 = c1;
		float L_0 = ___0_c1;
		__this->___c1_0 = L_0;
		// this.c2 = c2;
		float L_1 = ___1_c2;
		__this->___c2_1 = L_1;
		// this.c3 = c3;
		float L_2 = ___2_c3;
		__this->___c3_2 = L_2;
		// this.c4 = c4;
		float L_3 = ___3_c4;
		__this->___c4_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4_AdjustorThunk (RuntimeObject* __this, float ___0_c1, float ___1_c2, float ___2_c3, float ___3_c4, const RuntimeMethod* method)
{
	ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*>(__this + _offset);
	ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4(_thisAdjusted, ___0_c1, ___1_c2, ___2_c3, ___3_c4, method);
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::Lerp(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_Lerp_mD738E273723567BDC9509099F5500C8F86264404 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_a, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	{
		// t = Mathf.Clamp01( t );
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		// return new ExtraData(
		//     a.c1 + ( b.c1 - a.c1 ) * t,
		//     a.c2 + ( b.c2 - a.c2 ) * t,
		//     a.c3 + ( b.c3 - a.c3 ) * t,
		//     a.c4 + ( b.c4 - a.c4 ) * t );
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___0_a;
		float L_3 = L_2.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___1_b;
		float L_5 = L_4.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___0_a;
		float L_7 = L_6.___c1_0;
		float L_8 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_9 = ___0_a;
		float L_10 = L_9.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_11 = ___1_b;
		float L_12 = L_11.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_13 = ___0_a;
		float L_14 = L_13.___c2_1;
		float L_15 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_16 = ___0_a;
		float L_17 = L_16.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_18 = ___1_b;
		float L_19 = L_18.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_20 = ___0_a;
		float L_21 = L_20.___c3_2;
		float L_22 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_23 = ___0_a;
		float L_24 = L_23.___c4_3;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_25 = ___1_b;
		float L_26 = L_25.___c4_3;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_27 = ___0_a;
		float L_28 = L_27.___c4_3;
		float L_29 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_30;
		memset((&L_30), 0, sizeof(L_30));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		return L_30;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::LerpUnclamped(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_LerpUnclamped_mD8A100364740E70CD374FB5BE45CFFAC30F9F903 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_a, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	{
		// return new ExtraData(
		//     a.c1 + ( b.c1 - a.c1 ) * t,
		//     a.c2 + ( b.c2 - a.c2 ) * t,
		//     a.c3 + ( b.c3 - a.c3 ) * t,
		//     a.c4 + ( b.c4 - a.c4 ) * t );
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_a;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___1_b;
		float L_3 = L_2.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___0_a;
		float L_5 = L_4.___c1_0;
		float L_6 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_7 = ___0_a;
		float L_8 = L_7.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_9 = ___1_b;
		float L_10 = L_9.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_11 = ___0_a;
		float L_12 = L_11.___c2_1;
		float L_13 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_14 = ___0_a;
		float L_15 = L_14.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_16 = ___1_b;
		float L_17 = L_16.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_18 = ___0_a;
		float L_19 = L_18.___c3_2;
		float L_20 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_21 = ___0_a;
		float L_22 = L_21.___c4_3;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_23 = ___1_b;
		float L_24 = L_23.___c4_3;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_25 = ___0_a;
		float L_26 = L_25.___c4_3;
		float L_27 = ___2_t;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_28;
		memset((&L_28), 0, sizeof(L_28));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_28), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_26)), L_27)))), /*hidden argument*/NULL);
		return L_28;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_m70C7618F6E1D5096FEDFC5F5E52DD00D8470CC7C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( Vector2 v ) { return new ExtraData( v.x, v.y ); }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_4;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_mB9AB1EAF61F366C7278AFC38389EB69B949BB347 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( Vector3 v ) { return new ExtraData( v.x, v.y, v.z ); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		return L_6;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_m51571A48F0112692A5F7E26543722A03196E299E (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( Vector4 v ) { return new ExtraData( v.x, v.y, v.z, v.w ); }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_v;
		float L_7 = L_6.___w_4;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_m13442199AF2F6AAEFBAD325294C636886B580AAB (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( Quaternion q ) { return new ExtraData( q.x, q.y, q.z, q.w ); }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_q;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___0_q;
		float L_3 = L_2.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_q;
		float L_5 = L_4.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___0_q;
		float L_7 = L_6.___w_3;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_mDB88EC4667572B5107430FD46B893D038B7A406E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_r, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( Rect r ) { return new ExtraData( r.xMin, r.yMin, r.width, r.height ); }
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_r), NULL);
		float L_1;
		L_1 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_r), NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_r), NULL);
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_r), NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_m4154A291B5A9F3182ABF833B07FEEDA1697AA2C1 (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( Vector2Int v ) { return new ExtraData( v.x, v.y ); }
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_v), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_v), NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_2), ((float)L_0), ((float)L_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_mC9FA137FB63E076B2912F94F3A09F9C8789997F2 (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( Vector3Int v ) { return new ExtraData( v.x, v.y, v.z ); }
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_v), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_v), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_v), NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), (0.0f), /*hidden argument*/NULL);
		return L_3;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierPoint/ExtraData::op_Implicit(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraData_op_Implicit_mB5EC9253ADEC3B1C287AFEBEB2E3D624965CE4EE (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_r, const RuntimeMethod* method) 
{
	{
		// public static implicit operator ExtraData( RectInt r ) { return new ExtraData( r.xMin, r.yMin, r.width, r.height ); }
		int32_t L_0;
		L_0 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B((&___0_r), NULL);
		int32_t L_1;
		L_1 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B((&___0_r), NULL);
		int32_t L_2;
		L_2 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___0_r), NULL);
		int32_t L_3;
		L_3 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___0_r), NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ExtraData__ctor_m8CF107E62FCB3D090603F2A46EFE703FE0915DC4((&L_4), ((float)L_0), ((float)L_1), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ExtraData_op_Implicit_mC8035C4B9D8D878D7DA29B118EE563C290868A5B (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector2( ExtraData v ) { return new Vector2( v.c1, v.c2 ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___0_v;
		float L_3 = L_2.___c2_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ExtraData_op_Implicit_m4E90CED199AC19049615AAB48577E980766075AB (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector3( ExtraData v ) { return new Vector3( v.c1, v.c2, v.c3 ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___0_v;
		float L_3 = L_2.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___0_v;
		float L_5 = L_4.___c3_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector4 ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ExtraData_op_Implicit_mC75C21E48BF2191FE80ED194AB628B0351BB633F (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector4( ExtraData v ) { return new Vector4( v.c1, v.c2, v.c3, v.c4 ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___0_v;
		float L_3 = L_2.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___0_v;
		float L_5 = L_4.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___0_v;
		float L_7 = L_6.___c4_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Quaternion ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Quaternion( ExtraData v ) { return new Quaternion( v.c1, v.c2, v.c3, v.c4 ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___0_v;
		float L_3 = L_2.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___0_v;
		float L_5 = L_4.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___0_v;
		float L_7 = L_6.___c4_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ExtraData_op_Implicit_m6451F530ABC57EBD88568C6682BEDCCBCE1AECC8 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Rect( ExtraData v ) { return new Rect( v.c1, v.c2, v.c3, v.c4 ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___0_v;
		float L_3 = L_2.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___0_v;
		float L_5 = L_4.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___0_v;
		float L_7 = L_6.___c4_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2Int ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ExtraData_op_Implicit_m8DCBBA5971750EB9810CB5DCEFA01550AFE75A96 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector2Int( ExtraData v ) { return new Vector2Int( Mathf.RoundToInt( v.c1 ), Mathf.RoundToInt( v.c2 ) ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_3 = ___0_v;
		float L_4 = L_3.___c2_1;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3Int ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ExtraData_op_Implicit_mABD7BFAAFAF3840E11E0BAD2AAB5D2235CFA9159 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector3Int( ExtraData v ) { return new Vector3Int( Mathf.RoundToInt( v.c1 ), Mathf.RoundToInt( v.c2 ), Mathf.RoundToInt( v.c3 ) ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_3 = ___0_v;
		float L_4 = L_3.___c2_1;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___0_v;
		float L_7 = L_6.___c3_2;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_7, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.RectInt ClothDynamics.BezierPoint/ExtraData::op_Implicit(ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ExtraData_op_Implicit_m417A428D3EDFBAB3DCBA10313EE55BDCE5DC3909 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator RectInt( ExtraData v ) { return new RectInt( Mathf.RoundToInt( v.c1 ), Mathf.RoundToInt( v.c2 ), Mathf.RoundToInt( v.c3 ), Mathf.RoundToInt( v.c4 ) ); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_v;
		float L_1 = L_0.___c1_0;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_3 = ___0_v;
		float L_4 = L_3.___c2_1;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___0_v;
		float L_7 = L_6.___c3_2;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_7, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_9 = ___0_v;
		float L_10 = L_9.___c4_3;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_10, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_12;
		memset((&L_12), 0, sizeof(L_12));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean ClothDynamics.BezierPoint/ExtraData::op_Equality(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtraData_op_Equality_m3ED71005B2841A47B40F94C1D96D2BFDB329DFFF (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_d1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_d2, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==( ExtraData d1, ExtraData d2 ) { return d1.c1 == d2.c1 && d1.c2 == d2.c2 && d1.c3 == d2.c3 && d1.c4 == d2.c4; }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_d1;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___1_d2;
		float L_3 = L_2.___c1_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___0_d1;
		float L_5 = L_4.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___1_d2;
		float L_7 = L_6.___c2_1;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_8 = ___0_d1;
		float L_9 = L_8.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_10 = ___1_d2;
		float L_11 = L_10.___c3_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_12 = ___0_d1;
		float L_13 = L_12.___c4_3;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_14 = ___1_d2;
		float L_15 = L_14.___c4_3;
		return (bool)((((float)L_13) == ((float)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean ClothDynamics.BezierPoint/ExtraData::op_Inequality(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtraData_op_Inequality_mC978D6D6EA70D2318B29814146169AC8BFFB8D08 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_d1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_d2, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=( ExtraData d1, ExtraData d2 ) { return d1.c1 != d2.c1 || d1.c2 != d2.c2 || d1.c3 != d2.c3 || d1.c4 != d2.c4; }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_d1;
		float L_1 = L_0.___c1_0;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___1_d2;
		float L_3 = L_2.___c1_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_003c;
		}
	}
	{
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = ___0_d1;
		float L_5 = L_4.___c2_1;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6 = ___1_d2;
		float L_7 = L_6.___c2_1;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_003c;
		}
	}
	{
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_8 = ___0_d1;
		float L_9 = L_8.___c3_2;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_10 = ___1_d2;
		float L_11 = L_10.___c3_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_12 = ___0_d1;
		float L_13 = L_12.___c4_3;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_14 = ___1_d2;
		float L_15 = L_14.___c4_3;
		return (bool)((((int32_t)((((float)L_13) == ((float)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		return (bool)1;
	}
}
// System.Boolean ClothDynamics.BezierPoint/ExtraData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtraData_Equals_mAA450B9FECF3114C026C0ADA476F4F1B5BF24DAA (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals( object obj ) { return obj is ExtraData && this == (ExtraData) obj; }
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_1 = (*(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*)__this);
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = ExtraData_op_Equality_m3ED71005B2841A47B40F94C1D96D2BFDB329DFFF(L_1, ((*(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*)((ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*)(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*)UnBox(L_2, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ExtraData_Equals_mAA450B9FECF3114C026C0ADA476F4F1B5BF24DAA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*>(__this + _offset);
	bool _returnValue;
	_returnValue = ExtraData_Equals_mAA450B9FECF3114C026C0ADA476F4F1B5BF24DAA(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 ClothDynamics.BezierPoint/ExtraData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtraData_GetHashCode_m7E7F843AD58F241B5E11DFA53D811EA09F405D62 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() { return unchecked((int) ( ( ( ( 17 * 23 + c1 ) * 23 + c2 ) * 23 + c3 ) * 23 + c4 )); }
		float L_0 = __this->___c1_0;
		float L_1 = __this->___c2_1;
		float L_2 = __this->___c3_2;
		float L_3 = __this->___c4_3;
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add((391.0f), L_0)), (23.0f))), L_1)), (23.0f))), L_2)), (23.0f))), L_3)));
	}
}
IL2CPP_EXTERN_C  int32_t ExtraData_GetHashCode_m7E7F843AD58F241B5E11DFA53D811EA09F405D62_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ExtraData_GetHashCode_m7E7F843AD58F241B5E11DFA53D811EA09F405D62(_thisAdjusted, method);
	return _returnValue;
}
// System.String ClothDynamics.BezierPoint/ExtraData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExtraData_ToString_m88B85A12FEF696A7EC84A859E356838BC5F6BC01 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override string ToString() { return ( (Vector4) this ).ToString(); }
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = (*(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = ExtraData_op_Implicit_mC75C21E48BF2191FE80ED194AB628B0351BB633F(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Vector4_ToString_mFA0DDF34C1E394F75EF65E06764A1BE750E7F388((&V_0), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* ExtraData_ToString_m88B85A12FEF696A7EC84A859E356838BC5F6BC01_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ExtraData_ToString_m88B85A12FEF696A7EC84A859E356838BC5F6BC01(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ClothDynamics.BezierSpline::get_gizmoSmoothness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierSpline_get_gizmoSmoothness_m81789FAD8C21E1A2927F5D92A5FC42AC9793A809 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_gizmoSmoothness; }
		int32_t L_0 = __this->___m_gizmoSmoothness_11;
		return L_0;
	}
}
// System.Void ClothDynamics.BezierSpline::set_gizmoSmoothness(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_set_gizmoSmoothness_m064F49FAE80D381821D8FA087CAEBBBE52FF438F (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_gizmoSmoothness = value;
		int32_t L_0 = ___0_value;
		__this->___m_gizmoSmoothness_11 = L_0;
		// gizmoStep = 1f / (endPoints.Count * Mathf.Clamp(m_gizmoSmoothness, 1, 30));
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_1 = __this->___endPoints_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_1, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		int32_t L_3 = __this->___m_gizmoSmoothness_11;
		int32_t L_4;
		L_4 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 1, ((int32_t)30), NULL);
		__this->___gizmoStep_10 = ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_multiply(L_2, L_4)))));
		// }
		return;
	}
}
// System.Collections.Generic.List`1<ClothDynamics.BezierPoint> ClothDynamics.BezierSpline::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* BezierSpline_get_points_m5E6071CF60086400C57793E6588884934E92199B (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	{
		// public List<BezierPoint> points { get { return endPoints; } }
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = __this->___endPoints_6;
		return L_0;
	}
}
// System.Int32 ClothDynamics.BezierSpline::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierSpline_get_Count_m0F4C5A88833DDB1DE4244C50A8BED141A70E7CED (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Count { get { return endPoints.Count; } }
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = __this->___endPoints_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_0, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Single ClothDynamics.BezierSpline::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierSpline_get_Length_m2BCA597CFA5BE626E0029F4D381FE6C42AA3E8D4 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	{
		// public float Length { get { return GetLengthApproximately(0f, 1f); } }
		float L_0;
		L_0 = BezierSpline_GetLengthApproximately_m44D32E5D6B8E292E1302022443091AC653063178(__this, (0.0f), (1.0f), (50.0f), NULL);
		return L_0;
	}
}
// ClothDynamics.BezierPoint ClothDynamics.BezierSpline::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* BezierSpline_get_Item_m8D1CB2ECE15C4123E4E690CE51A8F0230E69C31B (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral061DF8789A74746E61BB95FA1D16F4F1FEBE0E2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA264A5A0DEE9DDEF2088E4DDE0204CFA3E3BF00);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (index < Count)
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = BezierSpline_get_Count_m0F4C5A88833DDB1DE4244C50A8BED141A70E7CED(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// return endPoints[index];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_4;
		L_4 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_2, L_3, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		return L_4;
	}

IL_0016:
	{
		// Debug.LogError("Bezier index " + index + " is out of range: " + Count);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_index), NULL);
		int32_t L_6;
		L_6 = BezierSpline_get_Count_m0F4C5A88833DDB1DE4244C50A8BED141A70E7CED(__this, NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral061DF8789A74746E61BB95FA1D16F4F1FEBE0E2E, L_5, _stringLiteralBA264A5A0DEE9DDEF2088E4DDE0204CFA3E3BF00, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		// return null;
		return (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376*)NULL;
	}
}
// System.Void ClothDynamics.BezierSpline::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_Awake_mFB9BEA6848C0A42CF16D6048C2983E46AE135C87 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	{
		// Refresh();
		BezierSpline_Refresh_mFA85A6A0ED570E6DA309F33238074DF7E2007D97(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_Initialize_mB80CEF5A0A0CF9964DF3B3060D4037050413E4E3 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_endPointsCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33D88AC837D2B321D7D36DD8FC96F26C32C8FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2311B8F8F47C5E15D1B7FFF62F59F2DCA2C5541);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (endPointsCount < 2)
		int32_t L_0 = ___0_endPointsCount;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("Can't initialize spline with " + endPointsCount + " point(s). At least 2 points are needed");
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_endPointsCount), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF2311B8F8F47C5E15D1B7FFF62F59F2DCA2C5541, L_1, _stringLiteralD33D88AC837D2B321D7D36DD8FC96F26C32C8FF1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		// return;
		return;
	}

IL_0020:
	{
		// Refresh();
		BezierSpline_Refresh_mFA85A6A0ED570E6DA309F33238074DF7E2007D97(__this, NULL);
		// for (int i = endPoints.Count - 1; i >= 0; i--)
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_3 = __this->___endPoints_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_3, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0050;
	}

IL_0036:
	{
		// DestroyImmediate(endPoints[i].gameObject);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_5 = __this->___endPoints_6;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_7;
		L_7 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_5, L_6, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
		// for (int i = endPoints.Count - 1; i >= 0; i--)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0050:
	{
		// for (int i = endPoints.Count - 1; i >= 0; i--)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// endPoints.Clear();
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_11 = __this->___endPoints_6;
		NullCheck(L_11);
		List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_inline(L_11, List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_RuntimeMethod_var);
		// for (int i = 0; i < endPointsCount; i++)
		V_1 = 0;
		goto IL_006f;
	}

IL_0063:
	{
		// InsertNewPointAt(i);
		int32_t L_12 = V_1;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_13;
		L_13 = BezierSpline_InsertNewPointAt_m42BAEB88D45323D9A08CB8ABC05573C76D424BDB(__this, L_12, NULL);
		// for (int i = 0; i < endPointsCount; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_006f:
	{
		// for (int i = 0; i < endPointsCount; i++)
		int32_t L_15 = V_1;
		int32_t L_16 = ___0_endPointsCount;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0063;
		}
	}
	{
		// Refresh();
		BezierSpline_Refresh_mFA85A6A0ED570E6DA309F33238074DF7E2007D97(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_Refresh_mFA85A6A0ED570E6DA309F33238074DF7E2007D97 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m423975FA68216DD98F8F9F20331D3CBED96E65AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// endPoints.Clear();
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = __this->___endPoints_6;
		NullCheck(L_0);
		List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_inline(L_0, List_1_Clear_m6EEC91438DFD38C90334A5DD37C469FDB2E81DAA_RuntimeMethod_var);
		// GetComponentsInChildren(endPoints);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_1 = __this->___endPoints_6;
		Component_GetComponentsInChildren_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m423975FA68216DD98F8F9F20331D3CBED96E65AA(__this, L_1, Component_GetComponentsInChildren_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m423975FA68216DD98F8F9F20331D3CBED96E65AA_RuntimeMethod_var);
		// gizmoSmoothness = gizmoSmoothness; // Recalculate gizmoStep
		int32_t L_2;
		L_2 = BezierSpline_get_gizmoSmoothness_m81789FAD8C21E1A2927F5D92A5FC42AC9793A809_inline(__this, NULL);
		BezierSpline_set_gizmoSmoothness_m064F49FAE80D381821D8FA087CAEBBBE52FF438F(__this, L_2, NULL);
		// }
		return;
	}
}
// ClothDynamics.BezierPoint ClothDynamics.BezierSpline::InsertNewPointAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* BezierSpline_InsertNewPointAt_m42BAEB88D45323D9A08CB8ABC05573C76D424BDB (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m86078741CFF393923DE7D7979D602247F5147C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m091DA63665575BDB7DFF8F77E75F1D6140C51060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B8_0 = NULL;
	int32_t G_B11_0 = 0;
	{
		// if (index < 0 || index > endPoints.Count)
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_index;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_2, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_005d;
		}
	}

IL_0012:
	{
		// Debug.LogError("Index " + index + " is out of range: [0," + endPoints.Count + "]");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_index), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_10 = __this->___endPoints_6;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_10, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_4 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
		// return null;
		return (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376*)NULL;
	}

IL_005d:
	{
		// int prevCount = endPoints.Count;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_15 = __this->___endPoints_6;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_15, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_0 = L_16;
		// BezierPoint point = new GameObject("Point").AddComponent<BezierPoint>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_17, _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412, NULL);
		NullCheck(L_17);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_18;
		L_18 = GameObject_AddComponent_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m86078741CFF393923DE7D7979D602247F5147C65(L_17, GameObject_AddComponent_TisBezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376_m86078741CFF393923DE7D7979D602247F5147C65_RuntimeMethod_var);
		V_1 = L_18;
		// Transform parent = endPoints.Count == 0 ? transform : (index == 0 ? endPoints[0].transform.parent : endPoints[index - 1].transform.parent);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_19 = __this->___endPoints_6;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_19, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_21 = ___0_index;
		if (!L_21)
		{
			goto IL_00a3;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_22 = __this->___endPoints_6;
		int32_t L_23 = ___0_index;
		NullCheck(L_22);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_24;
		L_24 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_22, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_25, NULL);
		G_B8_0 = L_26;
		goto IL_00c1;
	}

IL_00a3:
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_27 = __this->___endPoints_6;
		NullCheck(L_27);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_28;
		L_28 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_27, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_29, NULL);
		G_B8_0 = L_30;
		goto IL_00c1;
	}

IL_00bb:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B8_0 = L_31;
	}

IL_00c1:
	{
		V_2 = G_B8_0;
		// int siblingIndex = index == 0 ? 0 : endPoints[index - 1].transform.GetSiblingIndex() + 1;
		int32_t L_32 = ___0_index;
		if (!L_32)
		{
			goto IL_00e1;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_33 = __this->___endPoints_6;
		int32_t L_34 = ___0_index;
		NullCheck(L_33);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_35;
		L_35 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_33, ((int32_t)il2cpp_codegen_subtract(L_34, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_36, NULL);
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B11_0 = 0;
	}

IL_00e2:
	{
		V_3 = G_B11_0;
		// point.transform.SetParent(parent, false);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_38 = V_1;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = V_2;
		NullCheck(L_39);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_39, L_40, (bool)0, NULL);
		// point.transform.SetSiblingIndex(siblingIndex);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_41 = V_1;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		int32_t L_43 = V_3;
		NullCheck(L_42);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_42, L_43, NULL);
		// if (endPoints.Count == prevCount) // If spline is not automatically Refresh()'ed
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_44 = __this->___endPoints_6;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_44, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		int32_t L_46 = V_0;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_0117;
		}
	}
	{
		// endPoints.Insert(index, point);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_47 = __this->___endPoints_6;
		int32_t L_48 = ___0_index;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_49 = V_1;
		NullCheck(L_47);
		List_1_Insert_m091DA63665575BDB7DFF8F77E75F1D6140C51060(L_47, L_48, L_49, List_1_Insert_m091DA63665575BDB7DFF8F77E75F1D6140C51060_RuntimeMethod_var);
	}

IL_0117:
	{
		// return point;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_50 = V_1;
		return L_50;
	}
}
// ClothDynamics.BezierPoint ClothDynamics.BezierSpline::DuplicatePointAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* BezierSpline_DuplicatePointAt_m57B11AB97F341473EB682FD9DF56AFAA4B4F16F1 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (index < 0 || index >= endPoints.Count)
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_index;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_2, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_005e;
		}
	}

IL_0012:
	{
		// Debug.LogError("Index " + index + " is out of range: [0," + (endPoints.Count - 1) + "]");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_index), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_10 = __this->___endPoints_6;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_10, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
		// return null;
		return (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376*)NULL;
	}

IL_005e:
	{
		// BezierPoint newPoint = InsertNewPointAt(index + 1);
		int32_t L_15 = ___0_index;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_16;
		L_16 = BezierSpline_InsertNewPointAt_m42BAEB88D45323D9A08CB8ABC05573C76D424BDB(__this, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		V_0 = L_16;
		// endPoints[index].CopyTo(newPoint);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		int32_t L_18 = ___0_index;
		NullCheck(L_17);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_19;
		L_19 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_17, L_18, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_20 = V_0;
		NullCheck(L_19);
		BezierPoint_CopyTo_m920CDC3BE472749743BEC542DADDDFA699B396FD(L_19, L_20, NULL);
		// return newPoint;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_21 = V_0;
		return L_21;
	}
}
// System.Void ClothDynamics.BezierSpline::RemovePointAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_RemovePointAt_mB2FDC5C68C12B55DDAC016B41E12AF488499FE2D (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m634A2FE57AE45BC9715B604F4D69EBD6042AA3F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01A005D90CC25924B8CADAC9F3444467D0D281DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (endPoints.Count <= 2)
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = __this->___endPoints_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_0, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("Can't remove point: spline must consist of at least two points!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral01A005D90CC25924B8CADAC9F3444467D0D281DE, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (index < 0 || index >= endPoints.Count)
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = ___0_index;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_4 = __this->___endPoints_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_4, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0074;
		}
	}

IL_002b:
	{
		// Debug.LogError("Index " + index + " is out of range: [0," + endPoints.Count + ")");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7B015277BDB3B0A02873C30A8F041233BF4E7209);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_index), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4FA61FABC8247585CADA4BD9A25C504D09FAF8CC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_12 = __this->___endPoints_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_12, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
		// return;
		return;
	}

IL_0074:
	{
		// BezierPoint point = endPoints[index];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		int32_t L_18 = ___0_index;
		NullCheck(L_17);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_19;
		L_19 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_17, L_18, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		// endPoints.RemoveAt(index);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_20 = __this->___endPoints_6;
		int32_t L_21 = ___0_index;
		NullCheck(L_20);
		List_1_RemoveAt_m634A2FE57AE45BC9715B604F4D69EBD6042AA3F7(L_20, L_21, List_1_RemoveAt_m634A2FE57AE45BC9715B604F4D69EBD6042AA3F7_RuntimeMethod_var);
		// DestroyImmediate(point.gameObject);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_22, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::SwapPointsAt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_SwapPointsAt_m1C3F1BA3677664925DB5160B3375D3DD98979003 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_index1, int32_t ___1_index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A52E00847B952188550A1F30F38BAC8E2727B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_0 = NULL;
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// if (index1 == index2)
		int32_t L_0 = ___0_index1;
		int32_t L_1 = ___1_index2;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// if (index1 < 0 || index1 >= endPoints.Count || index2 < 0 || index2 >= endPoints.Count)
		int32_t L_2 = ___0_index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_index1;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_4 = __this->___endPoints_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_4, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = ___1_index2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = ___1_index2;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_8 = __this->___endPoints_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_8, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0054;
		}
	}

IL_0029:
	{
		// Debug.LogError("Indices must be in range [0," + (endPoints.Count - 1) + "]");
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_10 = __this->___endPoints_6;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_10, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral87A52E00847B952188550A1F30F38BAC8E2727B5, L_12, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
		// return;
		return;
	}

IL_0054:
	{
		// BezierPoint point1 = endPoints[index1];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_14 = __this->___endPoints_6;
		int32_t L_15 = ___0_index1;
		NullCheck(L_14);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_16;
		L_16 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_14, L_15, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_0 = L_16;
		// BezierPoint point2 = endPoints[index2];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		int32_t L_18 = ___1_index2;
		NullCheck(L_17);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_19;
		L_19 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_17, L_18, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_1 = L_19;
		// int point1SiblingIndex = point1.transform.GetSiblingIndex();
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_20 = V_0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_21, NULL);
		V_2 = L_22;
		// int point2SiblingIndex = point2.transform.GetSiblingIndex();
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_24, NULL);
		V_3 = L_25;
		// Transform point1Parent = point1.transform.parent;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_26 = V_0;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_27, NULL);
		V_4 = L_28;
		// Transform point2Parent = point2.transform.parent;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_29 = V_1;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_30, NULL);
		V_5 = L_31;
		// endPoints[index1] = point2;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_32 = __this->___endPoints_6;
		int32_t L_33 = ___0_index1;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_34 = V_1;
		NullCheck(L_32);
		List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69(L_32, L_33, L_34, List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var);
		// endPoints[index2] = point1;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_35 = __this->___endPoints_6;
		int32_t L_36 = ___1_index2;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_37 = V_0;
		NullCheck(L_35);
		List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69(L_35, L_36, L_37, List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var);
		// if (point1Parent != point2Parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_00e1;
		}
	}
	{
		// point1.transform.SetParent(point2Parent, true);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_41 = V_0;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = V_5;
		NullCheck(L_42);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_42, L_43, (bool)1, NULL);
		// point2.transform.SetParent(point1Parent, true);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_44 = V_1;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_4;
		NullCheck(L_45);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_45, L_46, (bool)1, NULL);
	}

IL_00e1:
	{
		// point1.transform.SetSiblingIndex(point2SiblingIndex);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_47 = V_0;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		int32_t L_49 = V_3;
		NullCheck(L_48);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_48, L_49, NULL);
		// point2.transform.SetSiblingIndex(point1SiblingIndex);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_50 = V_1;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_51, L_52, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::MovePoint(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_MovePoint_m49F9D89D235DD38359ACE0036EDFBD990147954F (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_previousIndex, int32_t ___1_newIndex, const RuntimeMethod* method) 
{
	{
		// Internal_MovePoint(previousIndex, newIndex, null);
		int32_t L_0 = ___0_previousIndex;
		int32_t L_1 = ___1_newIndex;
		BezierSpline_Internal_MovePoint_m54C2C0420451234CB5EFE9D14EB17E2C50865073(__this, L_0, L_1, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::Internal_MovePoint(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_Internal_MovePoint_m54C2C0420451234CB5EFE9D14EB17E2C50865073 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, int32_t ___0_previousIndex, int32_t ___1_newIndex, String_t* ___2_undo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A52E00847B952188550A1F30F38BAC8E2727B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_0 = NULL;
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (previousIndex == newIndex)
		int32_t L_0 = ___0_previousIndex;
		int32_t L_1 = ___1_newIndex;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// if (previousIndex < 0 || previousIndex >= endPoints.Count || newIndex < 0 || newIndex >= endPoints.Count)
		int32_t L_2 = ___0_previousIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_previousIndex;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_4 = __this->___endPoints_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_4, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = ___1_newIndex;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = ___1_newIndex;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_8 = __this->___endPoints_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_8, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0053;
		}
	}

IL_0029:
	{
		// Debug.LogError("Indices must be in range [0," + (endPoints.Count - 1) + "]");
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_10 = __this->___endPoints_6;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_10, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral87A52E00847B952188550A1F30F38BAC8E2727B5, L_12, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
		// return;
		return;
	}

IL_0053:
	{
		// BezierPoint point1 = endPoints[previousIndex];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_14 = __this->___endPoints_6;
		int32_t L_15 = ___0_previousIndex;
		NullCheck(L_14);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_16;
		L_16 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_14, L_15, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_0 = L_16;
		// BezierPoint point2 = endPoints[newIndex];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		int32_t L_18 = ___1_newIndex;
		NullCheck(L_17);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_19;
		L_19 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_17, L_18, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_1 = L_19;
		// if (previousIndex < newIndex)
		int32_t L_20 = ___0_previousIndex;
		int32_t L_21 = ___1_newIndex;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_009f;
		}
	}
	{
		// for (int i = previousIndex; i < newIndex; i++)
		int32_t L_22 = ___0_previousIndex;
		V_4 = L_22;
		goto IL_0098;
	}

IL_0076:
	{
		// endPoints[i] = endPoints[i + 1];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_23 = __this->___endPoints_6;
		int32_t L_24 = V_4;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_25 = __this->___endPoints_6;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_27;
		L_27 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_23);
		List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69(L_23, L_24, L_27, List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var);
		// for (int i = previousIndex; i < newIndex; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0098:
	{
		// for (int i = previousIndex; i < newIndex; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = ___1_newIndex;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00cb;
	}

IL_009f:
	{
		// for (int i = previousIndex; i > newIndex; i--)
		int32_t L_31 = ___0_previousIndex;
		V_5 = L_31;
		goto IL_00c6;
	}

IL_00a4:
	{
		// endPoints[i] = endPoints[i - 1];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_32 = __this->___endPoints_6;
		int32_t L_33 = V_5;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_34 = __this->___endPoints_6;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_36;
		L_36 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_34, ((int32_t)il2cpp_codegen_subtract(L_35, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_32);
		List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69(L_32, L_33, L_36, List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var);
		// for (int i = previousIndex; i > newIndex; i--)
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_00c6:
	{
		// for (int i = previousIndex; i > newIndex; i--)
		int32_t L_38 = V_5;
		int32_t L_39 = ___1_newIndex;
		if ((((int32_t)L_38) > ((int32_t)L_39)))
		{
			goto IL_00a4;
		}
	}

IL_00cb:
	{
		// endPoints[newIndex] = point1;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_40 = __this->___endPoints_6;
		int32_t L_41 = ___1_newIndex;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_42 = V_0;
		NullCheck(L_40);
		List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69(L_40, L_41, L_42, List_1_set_Item_m9C3CD1A7F77EEFCB65A2E1A00C5F4AFE62EB8D69_RuntimeMethod_var);
		// Transform point2Parent = point2.transform.parent;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_43 = V_1;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_44, NULL);
		V_2 = L_45;
		// if (point1.transform.parent != point2Parent)
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_46 = V_0;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_47, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_48, L_49, NULL);
		if (!L_50)
		{
			goto IL_016f;
		}
	}
	{
		// point1.transform.SetParent(point2Parent, true);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_51 = V_0;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = V_2;
		NullCheck(L_52);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_52, L_53, (bool)1, NULL);
		// int point2SiblingIndex = point2.transform.GetSiblingIndex();
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_54 = V_1;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		NullCheck(L_55);
		int32_t L_56;
		L_56 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_55, NULL);
		V_6 = L_56;
		// if (previousIndex < newIndex)
		int32_t L_57 = ___0_previousIndex;
		int32_t L_58 = ___1_newIndex;
		if ((((int32_t)L_57) >= ((int32_t)L_58)))
		{
			goto IL_0142;
		}
	}
	{
		// if (point1.transform.GetSiblingIndex() < point2SiblingIndex)
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_59 = V_0;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_59, NULL);
		NullCheck(L_60);
		int32_t L_61;
		L_61 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_60, NULL);
		int32_t L_62 = V_6;
		if ((((int32_t)L_61) >= ((int32_t)L_62)))
		{
			goto IL_0132;
		}
	}
	{
		// point1.transform.SetSiblingIndex(point2SiblingIndex);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_63 = V_0;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		int32_t L_65 = V_6;
		NullCheck(L_64);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_64, L_65, NULL);
		return;
	}

IL_0132:
	{
		// point1.transform.SetSiblingIndex(point2SiblingIndex + 1);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_66 = V_0;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_66, NULL);
		int32_t L_68 = V_6;
		NullCheck(L_67);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_67, ((int32_t)il2cpp_codegen_add(L_68, 1)), NULL);
		return;
	}

IL_0142:
	{
		// if (point1.transform.GetSiblingIndex() < point2SiblingIndex)
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_69 = V_0;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_69, NULL);
		NullCheck(L_70);
		int32_t L_71;
		L_71 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_70, NULL);
		int32_t L_72 = V_6;
		if ((((int32_t)L_71) >= ((int32_t)L_72)))
		{
			goto IL_0161;
		}
	}
	{
		// point1.transform.SetSiblingIndex(point2SiblingIndex - 1);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_73 = V_0;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		int32_t L_75 = V_6;
		NullCheck(L_74);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_74, ((int32_t)il2cpp_codegen_subtract(L_75, 1)), NULL);
		return;
	}

IL_0161:
	{
		// point1.transform.SetSiblingIndex(point2SiblingIndex);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_76 = V_0;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_76, NULL);
		int32_t L_78 = V_6;
		NullCheck(L_77);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_77, L_78, NULL);
		return;
	}

IL_016f:
	{
		// point1.transform.SetSiblingIndex(point2.transform.GetSiblingIndex());
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_79 = V_0;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_79, NULL);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_81 = V_1;
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_81, NULL);
		NullCheck(L_82);
		int32_t L_83;
		L_83 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_82, NULL);
		NullCheck(L_80);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_80, L_83, NULL);
		// }
		return;
	}
}
// System.Int32 ClothDynamics.BezierSpline::IndexOf(ClothDynamics.BezierPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierSpline_IndexOf_mA11AF519635D70574DE23E487767BE165EA18624 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* ___0_point, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB26FB97BA083DF2E647E03A45E61672026685ACF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return endPoints.IndexOf(point);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = __this->___endPoints_6;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_1 = ___0_point;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_mB26FB97BA083DF2E647E03A45E61672026685ACF(L_0, L_1, List_1_IndexOf_mB26FB97BA083DF2E647E03A45E61672026685ACF_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierSpline::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_0 = NULL;
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B13_0 = 0.0f;
	{
		// if (!loop)
		bool L_0 = __this->___loop_7;
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		// if (normalizedT <= 0f)
		float L_1 = ___0_normalizedT;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// return endPoints[0].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		NullCheck(L_2);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_3;
		L_3 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_2, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_3, NULL);
		return L_4;
	}

IL_0022:
	{
		// else if (normalizedT >= 1f)
		float L_5 = ___0_normalizedT;
		if ((!(((float)L_5) >= ((float)(1.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// return endPoints[endPoints.Count - 1].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_6 = __this->___endPoints_6;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_7 = __this->___endPoints_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_7, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		NullCheck(L_6);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_9;
		L_9 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_9, NULL);
		return L_10;
	}

IL_0048:
	{
		// if (normalizedT < 0f)
		float L_11 = ___0_normalizedT;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// normalizedT += 1f;
		float L_12 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_add(L_12, (1.0f)));
		goto IL_006c;
	}

IL_005b:
	{
		// else if (normalizedT >= 1f)
		float L_13 = ___0_normalizedT;
		if ((!(((float)L_13) >= ((float)(1.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// normalizedT -= 1f;
		float L_14 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_subtract(L_14, (1.0f)));
	}

IL_006c:
	{
		// float t = normalizedT * (loop ? endPoints.Count : (endPoints.Count - 1));
		float L_15 = ___0_normalizedT;
		bool L_16 = __this->___loop_7;
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_17, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		G_B12_1 = G_B10_0;
		goto IL_008f;
	}

IL_0084:
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_19 = __this->___endPoints_6;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_19, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = L_20;
		G_B12_1 = G_B11_0;
	}

IL_008f:
	{
		// int startIndex = (int)t;
		float L_21 = ((float)il2cpp_codegen_multiply(G_B12_1, ((float)G_B12_0)));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_21);
		// int endIndex = startIndex + 1;
		int32_t L_22 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// if (endIndex == endPoints.Count)
		int32_t L_23 = V_3;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_24 = __this->___endPoints_6;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_24, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B13_0 = L_21;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			G_B14_0 = L_21;
			goto IL_00a8;
		}
	}
	{
		// endIndex = 0;
		V_3 = 0;
		G_B14_0 = G_B13_0;
	}

IL_00a8:
	{
		// startPoint = endPoints[startIndex];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_26 = __this->___endPoints_6;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_28;
		L_28 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_26, L_27, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_0 = L_28;
		// endPoint = endPoints[endIndex];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_29 = __this->___endPoints_6;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_31;
		L_31 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_29, L_30, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_1 = L_31;
		// float localT = t - startIndex;
		int32_t L_32 = V_2;
		V_4 = ((float)il2cpp_codegen_subtract(G_B14_0, ((float)L_32)));
		// float oneMinusLocalT = 1f - localT;
		float L_33 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract((1.0f), L_33));
		// return oneMinusLocalT * oneMinusLocalT * oneMinusLocalT * startPoint.position +
		//        3f * oneMinusLocalT * oneMinusLocalT * localT * startPoint.followingControlPointPosition +
		//        3f * oneMinusLocalT * localT * localT * endPoint.precedingControlPointPosition +
		//        localT * localT * localT * endPoint.position;
		float L_34 = V_5;
		float L_35 = V_5;
		float L_36 = V_5;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_37 = V_0;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_34, L_35)), L_36)), L_38, NULL);
		float L_40 = V_5;
		float L_41 = V_5;
		float L_42 = V_4;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_43 = V_0;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_40)), L_41)), L_42)), L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_45, NULL);
		float L_47 = V_5;
		float L_48 = V_4;
		float L_49 = V_4;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_50 = V_1;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = BezierPoint_get_precedingControlPointPosition_mA412B4EC115F57CFE4DED81C4CB2271D35F4D206(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_47)), L_48)), L_49)), L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_46, L_52, NULL);
		float L_54 = V_4;
		float L_55 = V_4;
		float L_56 = V_4;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_57 = V_1;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_54, L_55)), L_56)), L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_59, NULL);
		return L_60;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierSpline::GetTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_0 = NULL;
	BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B13_0 = 0.0f;
	{
		// if (!loop)
		bool L_0 = __this->___loop_7;
		if (L_0)
		{
			goto IL_0090;
		}
	}
	{
		// if (normalizedT <= 0f)
		float L_1 = ___0_normalizedT;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		// return 3f * (endPoints[0].followingControlPointPosition - endPoints[0].position);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		NullCheck(L_2);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_3;
		L_3 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_2, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA(L_3, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_5 = __this->___endPoints_6;
		NullCheck(L_5);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_6;
		L_6 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_5, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_8, NULL);
		return L_9;
	}

IL_0045:
	{
		// else if (normalizedT >= 1f)
		float L_10 = ___0_normalizedT;
		if ((!(((float)L_10) >= ((float)(1.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		// int index = endPoints.Count - 1;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_11 = __this->___endPoints_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_11, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		// return 3f * (endPoints[index].position - endPoints[index].precedingControlPointPosition);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_13 = __this->___endPoints_6;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_15;
		L_15 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_13, L_14, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_15, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_19;
		L_19 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_17, L_18, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = BezierPoint_get_precedingControlPointPosition_mA412B4EC115F57CFE4DED81C4CB2271D35F4D206(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_21, NULL);
		return L_22;
	}

IL_0090:
	{
		// if (normalizedT < 0f)
		float L_23 = ___0_normalizedT;
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		// normalizedT += 1f;
		float L_24 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_add(L_24, (1.0f)));
		goto IL_00b4;
	}

IL_00a3:
	{
		// else if (normalizedT >= 1f)
		float L_25 = ___0_normalizedT;
		if ((!(((float)L_25) >= ((float)(1.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		// normalizedT -= 1f;
		float L_26 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_subtract(L_26, (1.0f)));
	}

IL_00b4:
	{
		// float t = normalizedT * (loop ? endPoints.Count : (endPoints.Count - 1));
		float L_27 = ___0_normalizedT;
		bool L_28 = __this->___loop_7;
		G_B10_0 = L_27;
		if (L_28)
		{
			G_B11_0 = L_27;
			goto IL_00cc;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_29 = __this->___endPoints_6;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_29, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		G_B12_1 = G_B10_0;
		goto IL_00d7;
	}

IL_00cc:
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_31 = __this->___endPoints_6;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_31, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = L_32;
		G_B12_1 = G_B11_0;
	}

IL_00d7:
	{
		// int startIndex = (int)t;
		float L_33 = ((float)il2cpp_codegen_multiply(G_B12_1, ((float)G_B12_0)));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_33);
		// int endIndex = startIndex + 1;
		int32_t L_34 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		// if (endIndex == endPoints.Count)
		int32_t L_35 = V_3;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_36 = __this->___endPoints_6;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_36, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B13_0 = L_33;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_37))))
		{
			G_B14_0 = L_33;
			goto IL_00f0;
		}
	}
	{
		// endIndex = 0;
		V_3 = 0;
		G_B14_0 = G_B13_0;
	}

IL_00f0:
	{
		// startPoint = endPoints[startIndex];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_38 = __this->___endPoints_6;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_40;
		L_40 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_38, L_39, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_0 = L_40;
		// endPoint = endPoints[endIndex];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_41 = __this->___endPoints_6;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_43;
		L_43 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_41, L_42, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		V_1 = L_43;
		// float localT = t - startIndex;
		int32_t L_44 = V_2;
		V_4 = ((float)il2cpp_codegen_subtract(G_B14_0, ((float)L_44)));
		// float oneMinusLocalT = 1f - localT;
		float L_45 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract((1.0f), L_45));
		// return 3f * oneMinusLocalT * oneMinusLocalT * (startPoint.followingControlPointPosition - startPoint.position) +
		//        6f * oneMinusLocalT * localT * (endPoint.precedingControlPointPosition - startPoint.followingControlPointPosition) +
		//        3f * localT * localT * (endPoint.position - endPoint.precedingControlPointPosition);
		float L_46 = V_5;
		float L_47 = V_5;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_48 = V_0;
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA(L_48, NULL);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_50 = V_0;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_49, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_46)), L_47)), L_52, NULL);
		float L_54 = V_5;
		float L_55 = V_4;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_56 = V_1;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = BezierPoint_get_precedingControlPointPosition_mA412B4EC115F57CFE4DED81C4CB2271D35F4D206(L_56, NULL);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_58 = V_0;
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_57, L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.0f), L_54)), L_55)), L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_61, NULL);
		float L_63 = V_4;
		float L_64 = V_4;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_65 = V_1;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_65, NULL);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_67 = V_1;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = BezierPoint_get_precedingControlPointPosition_mA412B4EC115F57CFE4DED81C4CB2271D35F4D206(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_66, L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_63)), L_64)), L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_62, L_70, NULL);
		return L_71;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierSpline::GetExtraData(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 BezierSpline_GetExtraData_m20870266C1C26CA12C50C1824435C84364049530 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetExtraData(normalizedT, defaultExtraDataLerpFunction);
		float L_0 = ___0_normalizedT;
		il2cpp_codegen_runtime_class_init_inline(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_1 = ((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___defaultExtraDataLerpFunction_4;
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2;
		L_2 = BezierSpline_GetExtraData_m45D19828A743E8799E7545F7BCE8B88E6318AF13(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierSpline::GetExtraData(System.Single,ClothDynamics.BezierSpline/ExtraDataLerpFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 BezierSpline_GetExtraData_m45D19828A743E8799E7545F7BCE8B88E6318AF13 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* ___1_lerpFunction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	{
		// if (!loop)
		bool L_0 = __this->___loop_7;
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		// if (normalizedT <= 0f)
		float L_1 = ___0_normalizedT;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// return endPoints[0].extraData;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		NullCheck(L_2);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_3;
		L_3 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_2, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_3);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_4 = L_3->___extraData_10;
		return L_4;
	}

IL_0022:
	{
		// else if (normalizedT >= 1f)
		float L_5 = ___0_normalizedT;
		if ((!(((float)L_5) >= ((float)(1.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// return endPoints[endPoints.Count - 1].extraData;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_6 = __this->___endPoints_6;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_7 = __this->___endPoints_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_7, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		NullCheck(L_6);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_9;
		L_9 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_9);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_10 = L_9->___extraData_10;
		return L_10;
	}

IL_0048:
	{
		// if (normalizedT < 0f)
		float L_11 = ___0_normalizedT;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// normalizedT += 1f;
		float L_12 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_add(L_12, (1.0f)));
		goto IL_006c;
	}

IL_005b:
	{
		// else if (normalizedT >= 1f)
		float L_13 = ___0_normalizedT;
		if ((!(((float)L_13) >= ((float)(1.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// normalizedT -= 1f;
		float L_14 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_subtract(L_14, (1.0f)));
	}

IL_006c:
	{
		// float t = normalizedT * (loop ? endPoints.Count : (endPoints.Count - 1));
		float L_15 = ___0_normalizedT;
		bool L_16 = __this->___loop_7;
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_17, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		G_B12_1 = G_B10_0;
		goto IL_008f;
	}

IL_0084:
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_19 = __this->___endPoints_6;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_19, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = L_20;
		G_B12_1 = G_B11_0;
	}

IL_008f:
	{
		V_0 = ((float)il2cpp_codegen_multiply(G_B12_1, ((float)G_B12_0)));
		// int startIndex = (int)t;
		float L_21 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_21);
		// int endIndex = startIndex + 1;
		int32_t L_22 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// if (endIndex == endPoints.Count)
		int32_t L_23 = V_2;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_24 = __this->___endPoints_6;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_24, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_00a9;
		}
	}
	{
		// endIndex = 0;
		V_2 = 0;
	}

IL_00a9:
	{
		// return lerpFunction(endPoints[startIndex].extraData, endPoints[endIndex].extraData, t - startIndex);
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_26 = ___1_lerpFunction;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_27 = __this->___endPoints_6;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_29;
		L_29 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_27, L_28, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_29);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_30 = L_29->___extraData_10;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_31 = __this->___endPoints_6;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_33;
		L_33 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_31, L_32, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_33);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_34 = L_33->___extraData_10;
		float L_35 = V_0;
		int32_t L_36 = V_1;
		NullCheck(L_26);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_37;
		L_37 = ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_inline(L_26, L_30, L_34, ((float)il2cpp_codegen_subtract(L_35, ((float)L_36))), NULL);
		return L_37;
	}
}
// System.Single ClothDynamics.BezierSpline::GetLengthApproximately(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierSpline_GetLengthApproximately_m44D32E5D6B8E292E1302022443091AC653063178 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_startNormalizedT, float ___1_endNormalizedT, float ___2_accuracy, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (endNormalizedT < startNormalizedT)
		float L_0 = ___1_endNormalizedT;
		float L_1 = ___0_startNormalizedT;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// float temp = startNormalizedT;
		float L_2 = ___0_startNormalizedT;
		// startNormalizedT = endNormalizedT;
		float L_3 = ___1_endNormalizedT;
		___0_startNormalizedT = L_3;
		// endNormalizedT = temp;
		___1_endNormalizedT = L_2;
	}

IL_000a:
	{
		// if (startNormalizedT < 0f)
		float L_4 = ___0_startNormalizedT;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// startNormalizedT = 0f;
		___0_startNormalizedT = (0.0f);
	}

IL_0019:
	{
		// if (endNormalizedT > 1f)
		float L_5 = ___1_endNormalizedT;
		if ((!(((float)L_5) > ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// endNormalizedT = 1f;
		___1_endNormalizedT = (1.0f);
	}

IL_0028:
	{
		// float step = AccuracyToStepSize(accuracy) * (endNormalizedT - startNormalizedT);
		float L_6 = ___2_accuracy;
		float L_7;
		L_7 = BezierSpline_AccuracyToStepSize_mCD49E950069E4022CFDD4DAF4EA75A64336F7739(__this, L_6, NULL);
		float L_8 = ___1_endNormalizedT;
		float L_9 = ___0_startNormalizedT;
		V_0 = ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_8, L_9))));
		// float length = 0f;
		V_1 = (0.0f);
		// Vector3 lastPoint = GetPoint(startNormalizedT);
		float L_10 = ___0_startNormalizedT;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(__this, L_10, NULL);
		V_2 = L_11;
		// for (float i = startNormalizedT + step; i < endNormalizedT; i += step)
		float L_12 = ___0_startNormalizedT;
		float L_13 = V_0;
		V_3 = ((float)il2cpp_codegen_add(L_12, L_13));
		goto IL_0063;
	}

IL_0048:
	{
		// Vector3 thisPoint = GetPoint(i);
		float L_14 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(__this, L_14, NULL);
		V_4 = L_15;
		// length += Vector3.Distance(thisPoint, lastPoint);
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19;
		L_19 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_17, L_18, NULL);
		V_1 = ((float)il2cpp_codegen_add(L_16, L_19));
		// lastPoint = thisPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_4;
		V_2 = L_20;
		// for (float i = startNormalizedT + step; i < endNormalizedT; i += step)
		float L_21 = V_3;
		float L_22 = V_0;
		V_3 = ((float)il2cpp_codegen_add(L_21, L_22));
	}

IL_0063:
	{
		// for (float i = startNormalizedT + step; i < endNormalizedT; i += step)
		float L_23 = V_3;
		float L_24 = ___1_endNormalizedT;
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_0048;
		}
	}
	{
		// length += Vector3.Distance(lastPoint, GetPoint(endNormalizedT));
		float L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		float L_27 = ___1_endNormalizedT;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(__this, L_27, NULL);
		float L_29;
		L_29 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_26, L_28, NULL);
		V_1 = ((float)il2cpp_codegen_add(L_25, L_29));
		// return length;
		float L_30 = V_1;
		return L_30;
	}
}
// ClothDynamics.BezierSpline/PointIndexTuple ClothDynamics.BezierSpline::GetNearestPointIndicesTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5 BezierSpline_GetNearestPointIndicesTo_m163AF9ABA65EA6BFB722E140B3F31D10D0A62A9F (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_normalizedT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	{
		// if (!loop)
		bool L_0 = __this->___loop_7;
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		// if (normalizedT <= 0f)
		float L_1 = ___0_normalizedT;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		// return new PointIndexTuple(0, 1, 0f);
		PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5 L_2;
		memset((&L_2), 0, sizeof(L_2));
		PointIndexTuple__ctor_m53598F49AA57531D83594282579250F6AE8CACB7((&L_2), 0, 1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		// else if (normalizedT >= 1f)
		float L_3 = ___0_normalizedT;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// return new PointIndexTuple(endPoints.Count - 1, endPoints.Count - 1, 1f);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_4 = __this->___endPoints_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_4, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_6 = __this->___endPoints_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_6, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5 L_8;
		memset((&L_8), 0, sizeof(L_8));
		PointIndexTuple__ctor_m53598F49AA57531D83594282579250F6AE8CACB7((&L_8), ((int32_t)il2cpp_codegen_subtract(L_5, 1)), ((int32_t)il2cpp_codegen_subtract(L_7, 1)), (1.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_004a:
	{
		// if (normalizedT < 0f)
		float L_9 = ___0_normalizedT;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// normalizedT += 1f;
		float L_10 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_add(L_10, (1.0f)));
		goto IL_006e;
	}

IL_005d:
	{
		// else if (normalizedT >= 1f)
		float L_11 = ___0_normalizedT;
		if ((!(((float)L_11) >= ((float)(1.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// normalizedT -= 1f;
		float L_12 = ___0_normalizedT;
		___0_normalizedT = ((float)il2cpp_codegen_subtract(L_12, (1.0f)));
	}

IL_006e:
	{
		// float t = normalizedT * (loop ? endPoints.Count : (endPoints.Count - 1));
		float L_13 = ___0_normalizedT;
		bool L_14 = __this->___loop_7;
		G_B10_0 = L_13;
		if (L_14)
		{
			G_B11_0 = L_13;
			goto IL_0086;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_15 = __this->___endPoints_6;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_15, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		G_B12_1 = G_B10_0;
		goto IL_0091;
	}

IL_0086:
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_17, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B12_0 = L_18;
		G_B12_1 = G_B11_0;
	}

IL_0091:
	{
		V_0 = ((float)il2cpp_codegen_multiply(G_B12_1, ((float)G_B12_0)));
		// int startIndex = (int)t;
		float L_19 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_19);
		// int endIndex = startIndex + 1;
		int32_t L_20 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// if (endIndex == endPoints.Count)
		int32_t L_21 = V_2;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_22 = __this->___endPoints_6;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_22, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00ab;
		}
	}
	{
		// endIndex = 0;
		V_2 = 0;
	}

IL_00ab:
	{
		// return new PointIndexTuple(startIndex, endIndex, t - startIndex);
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		float L_26 = V_0;
		int32_t L_27 = V_1;
		PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5 L_28;
		memset((&L_28), 0, sizeof(L_28));
		PointIndexTuple__ctor_m53598F49AA57531D83594282579250F6AE8CACB7((&L_28), L_24, L_25, ((float)il2cpp_codegen_subtract(L_26, ((float)L_27))), /*hidden argument*/NULL);
		return L_28;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierSpline::FindNearestPointTo(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_FindNearestPointTo_mA8EAC58F1D71757B9BC26080FED51E20DC9F5DA9 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPos, float ___1_accuracy, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return FindNearestPointTo(worldPos, out normalizedT, accuracy);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_worldPos;
		float L_1 = ___1_accuracy;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = BezierSpline_FindNearestPointTo_m8F6269B4D5195EBC64CC62E8FB38AA8498E4EA64(__this, L_0, (&V_0), L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierSpline::FindNearestPointTo(UnityEngine.Vector3,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_FindNearestPointTo_m8F6269B4D5195EBC64CC62E8FB38AA8498E4EA64 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPos, float* ___1_normalizedT, float ___2_accuracy, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 result = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// normalizedT = -1f;
		float* L_1 = ___1_normalizedT;
		*((float*)L_1) = (float)(-1.0f);
		// float step = AccuracyToStepSize(accuracy);
		float L_2 = ___2_accuracy;
		float L_3;
		L_3 = BezierSpline_AccuracyToStepSize_mCD49E950069E4022CFDD4DAF4EA75A64336F7739(__this, L_2, NULL);
		V_1 = L_3;
		// float minDistance = Mathf.Infinity;
		V_2 = (std::numeric_limits<float>::infinity());
		// for (float i = 0f; i < 1f; i += step)
		V_3 = (0.0f);
		goto IL_0051;
	}

IL_0023:
	{
		// Vector3 thisPoint = GetPoint(i);
		float L_4 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(__this, L_4, NULL);
		V_4 = L_5;
		// float thisDistance = (worldPos - thisPoint).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_worldPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		V_6 = L_8;
		float L_9;
		L_9 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_6), NULL);
		V_5 = L_9;
		// if (thisDistance < minDistance)
		float L_10 = V_5;
		float L_11 = V_2;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004d;
		}
	}
	{
		// minDistance = thisDistance;
		float L_12 = V_5;
		V_2 = L_12;
		// result = thisPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_4;
		V_0 = L_13;
		// normalizedT = i;
		float* L_14 = ___1_normalizedT;
		float L_15 = V_3;
		*((float*)L_14) = (float)L_15;
	}

IL_004d:
	{
		// for (float i = 0f; i < 1f; i += step)
		float L_16 = V_3;
		float L_17 = V_1;
		V_3 = ((float)il2cpp_codegen_add(L_16, L_17));
	}

IL_0051:
	{
		// for (float i = 0f; i < 1f; i += step)
		float L_18 = V_3;
		if ((((float)L_18) < ((float)(1.0f))))
		{
			goto IL_0023;
		}
	}
	{
		// return result;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		return L_19;
	}
}
// UnityEngine.Vector3 ClothDynamics.BezierSpline::MoveAlongSpline(System.Single&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierSpline_MoveAlongSpline_m14466F2E19BDF2B552E33D7F79EE40A95D94771F (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float* ___0_normalizedT, float ___1_deltaMovement, int32_t ___2_accuracy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	{
		// float constant = deltaMovement / ((loop ? endPoints.Count : endPoints.Count - 1) * accuracy);
		float L_0 = ___1_deltaMovement;
		bool L_1 = __this->___loop_7;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0018;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_2, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_0018:
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_4 = __this->___endPoints_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_4, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		int32_t L_6 = ___2_accuracy;
		V_0 = ((float)(G_B3_1/((float)((int32_t)il2cpp_codegen_multiply(G_B3_0, L_6)))));
		// for (int i = 0; i < accuracy; i++)
		V_1 = 0;
		goto IL_0047;
	}

IL_002c:
	{
		// normalizedT += constant / GetTangent(normalizedT).magnitude;
		float* L_7 = ___0_normalizedT;
		float* L_8 = ___0_normalizedT;
		float L_9 = *((float*)L_8);
		float L_10 = V_0;
		float* L_11 = ___0_normalizedT;
		float L_12 = *((float*)L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA(__this, L_12, NULL);
		V_2 = L_13;
		float L_14;
		L_14 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_9, ((float)(L_10/L_14))));
		// for (int i = 0; i < accuracy; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < accuracy; i++)
		int32_t L_16 = V_1;
		int32_t L_17 = ___2_accuracy;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_002c;
		}
	}
	{
		// return GetPoint(normalizedT);
		float* L_18 = ___0_normalizedT;
		float L_19 = *((float*)L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(__this, L_19, NULL);
		return L_20;
	}
}
// System.Void ClothDynamics.BezierSpline::ConstructLinearPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_ConstructLinearPath_m1037AD54C87D6520A934698451E4B27407737140 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < endPoints.Count; i++)
		V_0 = 0;
		goto IL_00df;
	}

IL_0007:
	{
		// endPoints[i].handleMode = BezierPoint.HandleMode.Free;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = __this->___endPoints_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_2;
		L_2 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_0, L_1, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_2);
		BezierPoint_set_handleMode_m72E50703D9E88B7DDF3F97A742C78751E5E775DD(L_2, 0, NULL);
		// if (i < endPoints.Count - 1)
		int32_t L_3 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_4 = __this->___endPoints_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_4, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1)))))
		{
			goto IL_0085;
		}
	}
	{
		// Vector3 midPoint = (endPoints[i].position + endPoints[i + 1].position) * 0.5f;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_6 = __this->___endPoints_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_8;
		L_8 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_6, L_7, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_8, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_10 = __this->___endPoints_6;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_12;
		L_12 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, (0.5f), NULL);
		V_1 = L_15;
		// endPoints[i].followingControlPointPosition = midPoint;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_16 = __this->___endPoints_6;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_18;
		L_18 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_16, L_17, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		NullCheck(L_18);
		BezierPoint_set_followingControlPointPosition_m51EFCC260D5249E5FF520A4A6940ABEBEC42F008(L_18, L_19, NULL);
		// endPoints[i + 1].precedingControlPointPosition = midPoint;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_20 = __this->___endPoints_6;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_22;
		L_22 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		NullCheck(L_22);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_22, L_23, NULL);
		goto IL_00db;
	}

IL_0085:
	{
		// Vector3 midPoint = (endPoints[i].position + endPoints[0].position) * 0.5f;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_24 = __this->___endPoints_6;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_26;
		L_26 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_24, L_25, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_26, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_28 = __this->___endPoints_6;
		NullCheck(L_28);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_29;
		L_29 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_28, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, (0.5f), NULL);
		V_2 = L_32;
		// endPoints[i].followingControlPointPosition = midPoint;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_33 = __this->___endPoints_6;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_35;
		L_35 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_33, L_34, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_2;
		NullCheck(L_35);
		BezierPoint_set_followingControlPointPosition_m51EFCC260D5249E5FF520A4A6940ABEBEC42F008(L_35, L_36, NULL);
		// endPoints[0].precedingControlPointPosition = midPoint;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_37 = __this->___endPoints_6;
		NullCheck(L_37);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_38;
		L_38 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_37, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		NullCheck(L_38);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_38, L_39, NULL);
	}

IL_00db:
	{
		// for (int i = 0; i < endPoints.Count; i++)
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00df:
	{
		// for (int i = 0; i < endPoints.Count; i++)
		int32_t L_41 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_42 = __this->___endPoints_6;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_42, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::AutoConstructSpline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_AutoConstructSpline_mC064AF3B8A839B61D73C92B4C32B401C7EC3D792 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// for (int i = 0; i < endPoints.Count; i++)
		V_3 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// endPoints[i].handleMode = BezierPoint.HandleMode.Mirrored;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = __this->___endPoints_6;
		int32_t L_1 = V_3;
		NullCheck(L_0);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_2;
		L_2 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_0, L_1, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_2);
		BezierPoint_set_handleMode_m72E50703D9E88B7DDF3F97A742C78751E5E775DD(L_2, 2, NULL);
		// for (int i = 0; i < endPoints.Count; i++)
		int32_t L_3 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < endPoints.Count; i++)
		int32_t L_4 = V_3;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_5 = __this->___endPoints_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_5, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// int n = endPoints.Count - 1;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_7 = __this->___endPoints_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_7, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// if (n == 1)
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00cc;
		}
	}
	{
		// endPoints[0].followingControlPointPosition = (2 * endPoints[0].position + endPoints[1].position) / 3f;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_10 = __this->___endPoints_6;
		NullCheck(L_10);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_11;
		L_11 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_10, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_12 = __this->___endPoints_6;
		NullCheck(L_12);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_13;
		L_13 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_12, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_14, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_16 = __this->___endPoints_6;
		NullCheck(L_16);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_17;
		L_17 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_16, 1, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_19, (3.0f), NULL);
		NullCheck(L_11);
		BezierPoint_set_followingControlPointPosition_m51EFCC260D5249E5FF520A4A6940ABEBEC42F008(L_11, L_20, NULL);
		// endPoints[1].precedingControlPointPosition = 2 * endPoints[0].followingControlPointPosition - endPoints[0].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_21 = __this->___endPoints_6;
		NullCheck(L_21);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_22;
		L_22 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_21, 1, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_23 = __this->___endPoints_6;
		NullCheck(L_23);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_24;
		L_24 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_23, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_25, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_27 = __this->___endPoints_6;
		NullCheck(L_27);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_28;
		L_28 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_27, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_29, NULL);
		NullCheck(L_22);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_22, L_30, NULL);
		// return;
		return;
	}

IL_00cc:
	{
		// if (loop)
		bool L_31 = __this->___loop_7;
		if (!L_31)
		{
			goto IL_00df;
		}
	}
	{
		// rhs = new Vector3[n + 1];
		int32_t L_32 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_32, 1)));
		V_1 = L_33;
		goto IL_00e6;
	}

IL_00df:
	{
		// rhs = new Vector3[n];
		int32_t L_34 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_1 = L_35;
	}

IL_00e6:
	{
		// for (int i = 1; i < n - 1; i++)
		V_4 = 1;
		goto IL_0138;
	}

IL_00eb:
	{
		// rhs[i] = 4 * endPoints[i].position + 2 * endPoints[i + 1].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = V_1;
		int32_t L_37 = V_4;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_38 = __this->___endPoints_6;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_40;
		L_40 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_38, L_39, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_41, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_43 = __this->___endPoints_6;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_45;
		L_45 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_43, ((int32_t)il2cpp_codegen_add(L_44, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_47, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_48);
		// for (int i = 1; i < n - 1; i++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0138:
	{
		// for (int i = 1; i < n - 1; i++)
		int32_t L_50 = V_4;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_51, 1)))))
		{
			goto IL_00eb;
		}
	}
	{
		// rhs[0] = endPoints[0].position + 2 * endPoints[1].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = V_1;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_53 = __this->___endPoints_6;
		NullCheck(L_53);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_54;
		L_54 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_53, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_54, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_56 = __this->___endPoints_6;
		NullCheck(L_56);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_57;
		L_57 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_56, 1, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_55, L_59, NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_60);
		// if (!loop)
		bool L_61 = __this->___loop_7;
		if (L_61)
		{
			goto IL_01ca;
		}
	}
	{
		// rhs[n - 1] = (8 * endPoints[n - 1].position + endPoints[n].position) * 0.5f;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = V_1;
		int32_t L_63 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_64 = __this->___endPoints_6;
		int32_t L_65 = V_0;
		NullCheck(L_64);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_66;
		L_66 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_64, ((int32_t)il2cpp_codegen_subtract(L_65, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((8.0f), L_67, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_69 = __this->___endPoints_6;
		int32_t L_70 = V_0;
		NullCheck(L_69);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_71;
		L_71 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_69, L_70, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_68, L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, (0.5f), NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_63, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_74);
		goto IL_0252;
	}

IL_01ca:
	{
		// rhs[n - 1] = 4 * endPoints[n - 1].position + 2 * endPoints[n].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_75 = V_1;
		int32_t L_76 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_77 = __this->___endPoints_6;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_79;
		L_79 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_77, ((int32_t)il2cpp_codegen_subtract(L_78, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_80, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_82 = __this->___endPoints_6;
		int32_t L_83 = V_0;
		NullCheck(L_82);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_84;
		L_84 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_82, L_83, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_81, L_86, NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_76, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_87);
		// rhs[n] = (8 * endPoints[n].position + endPoints[0].position) * 0.5f;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_88 = V_1;
		int32_t L_89 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_90 = __this->___endPoints_6;
		int32_t L_91 = V_0;
		NullCheck(L_90);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_92;
		L_92 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_90, L_91, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((8.0f), L_93, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_95 = __this->___endPoints_6;
		NullCheck(L_95);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_96;
		L_96 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_95, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_96, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_94, L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_98, (0.5f), NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_99);
	}

IL_0252:
	{
		// Vector3[] controlPoints = GetFirstControlPoints(rhs);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_100 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_101;
		L_101 = BezierSpline_GetFirstControlPoints_m6DF7599A1BFC82A68F2FCF4F6AFCEF16108237D1(L_100, NULL);
		V_2 = L_101;
		// for (int i = 0; i < n; i++)
		V_5 = 0;
		goto IL_0356;
	}

IL_0261:
	{
		// endPoints[i].followingControlPointPosition = controlPoints[i];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_102 = __this->___endPoints_6;
		int32_t L_103 = V_5;
		NullCheck(L_102);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_104;
		L_104 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_102, L_103, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_105 = V_2;
		int32_t L_106 = V_5;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		NullCheck(L_104);
		BezierPoint_set_followingControlPointPosition_m51EFCC260D5249E5FF520A4A6940ABEBEC42F008(L_104, L_108, NULL);
		// if (loop)
		bool L_109 = __this->___loop_7;
		if (!L_109)
		{
			goto IL_02c9;
		}
	}
	{
		// endPoints[i + 1].precedingControlPointPosition = 2 * endPoints[i + 1].position - controlPoints[i + 1];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_110 = __this->___endPoints_6;
		int32_t L_111 = V_5;
		NullCheck(L_110);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_112;
		L_112 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_110, ((int32_t)il2cpp_codegen_add(L_111, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_113 = __this->___endPoints_6;
		int32_t L_114 = V_5;
		NullCheck(L_113);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_115;
		L_115 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_113, ((int32_t)il2cpp_codegen_add(L_114, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_115);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_115, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_116, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_118 = V_2;
		int32_t L_119 = V_5;
		NullCheck(L_118);
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_117, L_121, NULL);
		NullCheck(L_112);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_112, L_122, NULL);
		goto IL_0350;
	}

IL_02c9:
	{
		// if (i < n - 1)
		int32_t L_123 = V_5;
		int32_t L_124 = V_0;
		if ((((int32_t)L_123) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_124, 1)))))
		{
			goto IL_0313;
		}
	}
	{
		// endPoints[i + 1].precedingControlPointPosition = 2 * endPoints[i + 1].position - controlPoints[i + 1];
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_125 = __this->___endPoints_6;
		int32_t L_126 = V_5;
		NullCheck(L_125);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_127;
		L_127 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_125, ((int32_t)il2cpp_codegen_add(L_126, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_128 = __this->___endPoints_6;
		int32_t L_129 = V_5;
		NullCheck(L_128);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_130;
		L_130 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_128, ((int32_t)il2cpp_codegen_add(L_129, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_130);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_130, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_131, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_133 = V_2;
		int32_t L_134 = V_5;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_132, L_136, NULL);
		NullCheck(L_127);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_127, L_137, NULL);
		goto IL_0350;
	}

IL_0313:
	{
		// endPoints[i + 1].precedingControlPointPosition = (endPoints[n].position + controlPoints[n - 1]) * 0.5f;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_138 = __this->___endPoints_6;
		int32_t L_139 = V_5;
		NullCheck(L_138);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_140;
		L_140 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_138, ((int32_t)il2cpp_codegen_add(L_139, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_141 = __this->___endPoints_6;
		int32_t L_142 = V_0;
		NullCheck(L_141);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_143;
		L_143 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_141, L_142, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_143, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_145 = V_2;
		int32_t L_146 = V_0;
		NullCheck(L_145);
		int32_t L_147 = ((int32_t)il2cpp_codegen_subtract(L_146, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_144, L_148, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_149, (0.5f), NULL);
		NullCheck(L_140);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_140, L_150, NULL);
	}

IL_0350:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_151 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_0356:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_152 = V_5;
		int32_t L_153 = V_0;
		if ((((int32_t)L_152) < ((int32_t)L_153)))
		{
			goto IL_0261;
		}
	}
	{
		// if (loop)
		bool L_154 = __this->___loop_7;
		if (!L_154)
		{
			goto IL_0417;
		}
	}
	{
		// float controlPointDistance = Vector3.Distance(endPoints[0].followingControlPointPosition, endPoints[0].position);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_155 = __this->___endPoints_6;
		NullCheck(L_155);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_156;
		L_156 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_155, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_156);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = BezierPoint_get_followingControlPointPosition_m8AA0B3703082C2F2567C6F855CB95601D9E978AA(L_156, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_158 = __this->___endPoints_6;
		NullCheck(L_158);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_159;
		L_159 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_158, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_159);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_159, NULL);
		float L_161;
		L_161 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_157, L_160, NULL);
		V_6 = L_161;
		// Vector3 direction = Vector3.Normalize(endPoints[n].position - endPoints[1].position);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_162 = __this->___endPoints_6;
		int32_t L_163 = V_0;
		NullCheck(L_162);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_164;
		L_164 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_162, L_163, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_164);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		L_165 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_164, NULL);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_166 = __this->___endPoints_6;
		NullCheck(L_166);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_167;
		L_167 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_166, 1, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_167);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_167, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_165, L_168, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170;
		L_170 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_169, NULL);
		V_7 = L_170;
		// endPoints[0].precedingControlPointPosition = endPoints[0].position + direction * controlPointDistance;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_171 = __this->___endPoints_6;
		NullCheck(L_171);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_172;
		L_172 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_171, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_173 = __this->___endPoints_6;
		NullCheck(L_173);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_174;
		L_174 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_173, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_174);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
		L_175 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_174, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176 = V_7;
		float L_177 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178;
		L_178 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_176, L_177, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179;
		L_179 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_175, L_178, NULL);
		NullCheck(L_172);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_172, L_179, NULL);
		// endPoints[0].followingControlPointLocalPosition = -endPoints[0].precedingControlPointLocalPosition;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_180 = __this->___endPoints_6;
		NullCheck(L_180);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_181;
		L_181 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_180, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_182 = __this->___endPoints_6;
		NullCheck(L_182);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_183;
		L_183 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_182, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_183);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		L_184 = BezierPoint_get_precedingControlPointLocalPosition_m4B84193C0BAD1AC0321EF1E4CDEDBF178737EB12_inline(L_183, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185;
		L_185 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_184, NULL);
		NullCheck(L_181);
		BezierPoint_set_followingControlPointLocalPosition_m34CEB9534354E3518DD7286DA1BA48E77539A4E4(L_181, L_185, NULL);
	}

IL_0417:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3[] ClothDynamics.BezierSpline::GetFirstControlPoints(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* BezierSpline_GetFirstControlPoints_m6DF7599A1BFC82A68F2FCF4F6AFCEF16108237D1 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	float G_B4_0 = 0.0f;
	{
		// int n = rhs.Length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_rhs;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// Vector3[] x = new Vector3[n]; // Solution vector.
		int32_t L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// float[] tmp = new float[n]; // Temp workspace.
		int32_t L_3 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		// float b = 2f;
		V_3 = (2.0f);
		// x[0] = rhs[0] / b;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_rhs;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_8, L_9, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// for (int i = 1; i < n; i++) // Decomposition and forward substitution.
		V_4 = 1;
		goto IL_0082;
	}

IL_0031:
	{
		// float val = 1f / b;
		float L_11 = V_3;
		V_5 = ((float)((1.0f)/L_11));
		// tmp[i] = val;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_2;
		int32_t L_13 = V_4;
		float L_14 = V_5;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (float)L_14);
		// b = (i < n - 1 ? 4f : 3.5f) - val;
		int32_t L_15 = V_4;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_004e;
		}
	}
	{
		G_B4_0 = (3.5f);
		goto IL_0053;
	}

IL_004e:
	{
		G_B4_0 = (4.0f);
	}

IL_0053:
	{
		float L_17 = V_5;
		V_3 = ((float)il2cpp_codegen_subtract(G_B4_0, L_17));
		// x[i] = (rhs[i] - x[i - 1]) / b;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_1;
		int32_t L_19 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = ___0_rhs;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_1;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_27, NULL);
		float L_29 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_28, L_29, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		// for (int i = 1; i < n; i++) // Decomposition and forward substitution.
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0082:
	{
		// for (int i = 1; i < n; i++) // Decomposition and forward substitution.
		int32_t L_32 = V_4;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0031;
		}
	}
	{
		// for (int i = 1; i < n; i++)
		V_6 = 1;
		goto IL_00c3;
	}

IL_008c:
	{
		// x[n - i - 1] -= tmp[n - i] * x[n - i]; // Backsubstitution.
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_6;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_35, L_36)), 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_37);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = V_2;
		int32_t L_40 = V_0;
		int32_t L_41 = V_6;
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(L_40, L_41));
		float L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = V_1;
		int32_t L_45 = V_0;
		int32_t L_46 = V_6;
		NullCheck(L_44);
		int32_t L_47 = ((int32_t)il2cpp_codegen_subtract(L_45, L_46));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_43, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_49, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_37 = L_50;
		// for (int i = 1; i < n; i++)
		int32_t L_51 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00c3:
	{
		// for (int i = 1; i < n; i++)
		int32_t L_52 = V_6;
		int32_t L_53 = V_0;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_008c;
		}
	}
	{
		// return x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = V_1;
		return L_54;
	}
}
// System.Void ClothDynamics.BezierSpline::AutoConstructSpline2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_AutoConstructSpline2_m104C77D3C9A846B951849D37B3A2DBB49A7CF246 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < endPoints.Count; i++)
		V_0 = 0;
		goto IL_0219;
	}

IL_0007:
	{
		// if (i == 0)
		int32_t L_0 = V_0;
		if (L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (loop)
		bool L_1 = __this->___loop_7;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// pMinus1 = endPoints[endPoints.Count - 1].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_2 = __this->___endPoints_6;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_3 = __this->___endPoints_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_3, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		NullCheck(L_2);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_5;
		L_5 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_5, NULL);
		V_1 = L_6;
		goto IL_005a;
	}

IL_0032:
	{
		// pMinus1 = endPoints[0].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_7 = __this->___endPoints_6;
		NullCheck(L_7);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_8;
		L_8 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_7, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_8, NULL);
		V_1 = L_9;
		goto IL_005a;
	}

IL_0046:
	{
		// pMinus1 = endPoints[i - 1].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_10 = __this->___endPoints_6;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_12;
		L_12 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_12, NULL);
		V_1 = L_13;
	}

IL_005a:
	{
		// if (loop)
		bool L_14 = __this->___loop_7;
		if (!L_14)
		{
			goto IL_00a7;
		}
	}
	{
		// p1 = endPoints[(i + 1) % endPoints.Count].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_15 = __this->___endPoints_6;
		int32_t L_16 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_17 = __this->___endPoints_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_17, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		NullCheck(L_15);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_19;
		L_19 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_15, ((int32_t)(((int32_t)il2cpp_codegen_add(L_16, 1))%L_18)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_19, NULL);
		V_2 = L_20;
		// p2 = endPoints[(i + 2) % endPoints.Count].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_21 = __this->___endPoints_6;
		int32_t L_22 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_23 = __this->___endPoints_6;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_23, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		NullCheck(L_21);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_25;
		L_25 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_21, ((int32_t)(((int32_t)il2cpp_codegen_add(L_22, 2))%L_24)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_25, NULL);
		V_3 = L_26;
		goto IL_013f;
	}

IL_00a7:
	{
		// if (i < endPoints.Count - 2)
		int32_t L_27 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_28 = __this->___endPoints_6;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_28, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_27) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_29, 2)))))
		{
			goto IL_00e1;
		}
	}
	{
		// p1 = endPoints[i + 1].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_30 = __this->___endPoints_6;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_32;
		L_32 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_30, ((int32_t)il2cpp_codegen_add(L_31, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_32, NULL);
		V_2 = L_33;
		// p2 = endPoints[i + 2].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_34 = __this->___endPoints_6;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_36;
		L_36 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_34, ((int32_t)il2cpp_codegen_add(L_35, 2)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_36, NULL);
		V_3 = L_37;
		goto IL_013f;
	}

IL_00e1:
	{
		// else if (i == endPoints.Count - 2)
		int32_t L_38 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_39 = __this->___endPoints_6;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_39, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_40, 2))))))
		{
			goto IL_011b;
		}
	}
	{
		// p1 = endPoints[i + 1].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_41 = __this->___endPoints_6;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_43;
		L_43 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_41, ((int32_t)il2cpp_codegen_add(L_42, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_43, NULL);
		V_2 = L_44;
		// p2 = endPoints[i + 1].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_45 = __this->___endPoints_6;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_47;
		L_47 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_47, NULL);
		V_3 = L_48;
		goto IL_013f;
	}

IL_011b:
	{
		// p1 = endPoints[i].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_49 = __this->___endPoints_6;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_51;
		L_51 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_49, L_50, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_51, NULL);
		V_2 = L_52;
		// p2 = endPoints[i].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_53 = __this->___endPoints_6;
		int32_t L_54 = V_0;
		NullCheck(L_53);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_55;
		L_55 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_53, L_54, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_55, NULL);
		V_3 = L_56;
	}

IL_013f:
	{
		// endPoints[i].followingControlPointPosition = endPoints[i].position + (p1 - pMinus1) / 6f;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_57 = __this->___endPoints_6;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_59;
		L_59 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_57, L_58, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_60 = __this->___endPoints_6;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_62;
		L_62 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_60, L_61, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_64, L_65, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_66, (6.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_63, L_67, NULL);
		NullCheck(L_59);
		BezierPoint_set_followingControlPointPosition_m51EFCC260D5249E5FF520A4A6940ABEBEC42F008(L_59, L_68, NULL);
		// endPoints[i].handleMode = BezierPoint.HandleMode.Mirrored;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_69 = __this->___endPoints_6;
		int32_t L_70 = V_0;
		NullCheck(L_69);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_71;
		L_71 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_69, L_70, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_71);
		BezierPoint_set_handleMode_m72E50703D9E88B7DDF3F97A742C78751E5E775DD(L_71, 2, NULL);
		// if (i < endPoints.Count - 1)
		int32_t L_72 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_73 = __this->___endPoints_6;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_73, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_72) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_74, 1)))))
		{
			goto IL_01d5;
		}
	}
	{
		// endPoints[i + 1].precedingControlPointPosition = p1 - (p2 - endPoints[i].position) / 6f;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_75 = __this->___endPoints_6;
		int32_t L_76 = V_0;
		NullCheck(L_75);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_77;
		L_77 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_75, ((int32_t)il2cpp_codegen_add(L_76, 1)), List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_3;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_80 = __this->___endPoints_6;
		int32_t L_81 = V_0;
		NullCheck(L_80);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_82;
		L_82 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_80, L_81, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_79, L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_84, (6.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_78, L_85, NULL);
		NullCheck(L_77);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_77, L_86, NULL);
		goto IL_0215;
	}

IL_01d5:
	{
		// else if (loop)
		bool L_87 = __this->___loop_7;
		if (!L_87)
		{
			goto IL_0215;
		}
	}
	{
		// endPoints[0].precedingControlPointPosition = p1 - (p2 - endPoints[i].position) / 6f;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_88 = __this->___endPoints_6;
		NullCheck(L_88);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_89;
		L_89 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_88, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_3;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_92 = __this->___endPoints_6;
		int32_t L_93 = V_0;
		NullCheck(L_92);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_94;
		L_94 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_92, L_93, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_91, L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_96, (6.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_90, L_97, NULL);
		NullCheck(L_89);
		BezierPoint_set_precedingControlPointPosition_m6A9FA2085C9C615E62D23858A9DCCE427968C0E1(L_89, L_98, NULL);
	}

IL_0215:
	{
		// for (int i = 0; i < endPoints.Count; i++)
		int32_t L_99 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0219:
	{
		// for (int i = 0; i < endPoints.Count; i++)
		int32_t L_100 = V_0;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_101 = __this->___endPoints_6;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_101, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_100) < ((int32_t)L_102)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Single ClothDynamics.BezierSpline::AccuracyToStepSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierSpline_AccuracyToStepSize_mCD49E950069E4022CFDD4DAF4EA75A64336F7739 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, float ___0_accuracy, const RuntimeMethod* method) 
{
	{
		// if (accuracy <= 0f)
		float L_0 = ___0_accuracy;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// return 0.2f;
		return (0.200000003f);
	}

IL_000e:
	{
		// return Mathf.Clamp(1f / accuracy, 0.001f, 0.2f);
		float L_1 = ___0_accuracy;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)((1.0f)/L_1)), (0.00100000005f), (0.200000003f), NULL);
		return L_2;
	}
}
// System.Void ClothDynamics.BezierSpline::OnRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline_OnRenderObject_m529020DC25EC80AD2556BE424B05397DDA620631 (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (!drawGizmos || endPoints.Count < 2)
		bool L_0 = __this->___drawGizmos_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_1 = __this->___endPoints_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_inline(L_1, List_1_get_Count_m4A31AEF936A98159276BF47FE8381A1BCFB0B17B_RuntimeMethod_var);
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// return;
		return;
	}

IL_0017:
	{
		// if (!gizmoMaterial)
		il2cpp_codegen_runtime_class_init_inline(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0080;
		}
	}
	{
		// Shader shader = Shader.Find("Hidden/Internal-Colored");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5;
		L_5 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE, NULL);
		// gizmoMaterial = new Material(shader) { hideFlags = HideFlags.HideAndDontSave };
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_6, L_5, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6;
		NullCheck(L_7);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_7, ((int32_t)61), NULL);
		il2cpp_codegen_runtime_class_init_inline(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5), (void*)L_7);
		// gizmoMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5;
		NullCheck(L_8);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_8, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		// gizmoMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5;
		NullCheck(L_9);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_9, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
		// gizmoMaterial.SetInt("_Cull", (int)UnityEngine.Rendering.CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5;
		NullCheck(L_10);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_10, _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22, 0, NULL);
		// gizmoMaterial.SetInt("_ZWrite", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5;
		NullCheck(L_11);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_11, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, NULL);
	}

IL_0080:
	{
		// gizmoMaterial.SetPass(0);
		il2cpp_codegen_runtime_class_init_inline(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___gizmoMaterial_5;
		NullCheck(L_12);
		bool L_13;
		L_13 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_12, 0, NULL);
		// GL.Begin(GL.LINES);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(1, NULL);
		// GL.Color(gizmoColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___gizmoColor_9;
		GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E(L_14, NULL);
		// Vector3 lastPos = endPoints[0].position;
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_15 = __this->___endPoints_6;
		NullCheck(L_15);
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_16;
		L_16 = List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573(L_15, 0, List_1_get_Item_mA9FA3B09A10E927381597CC432F800FFA0AC5573_RuntimeMethod_var);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_16, NULL);
		V_0 = L_17;
		// for (float i = gizmoStep; i < 1f; i += gizmoStep)
		float L_18 = __this->___gizmoStep_10;
		V_1 = L_18;
		goto IL_00f7;
	}

IL_00b8:
	{
		// GL.Vertex3(lastPos.x, lastPos.y, lastPos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___z_4;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_20, L_22, L_24, NULL);
		// lastPos = GetPoint(i);
		float L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(__this, L_25, NULL);
		V_0 = L_26;
		// GL.Vertex3(lastPos.x, lastPos.y, lastPos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		float L_28 = L_27.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = L_29.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = L_31.___z_4;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_28, L_30, L_32, NULL);
		// for (float i = gizmoStep; i < 1f; i += gizmoStep)
		float L_33 = V_1;
		float L_34 = __this->___gizmoStep_10;
		V_1 = ((float)il2cpp_codegen_add(L_33, L_34));
	}

IL_00f7:
	{
		// for (float i = gizmoStep; i < 1f; i += gizmoStep)
		float L_35 = V_1;
		if ((((float)L_35) < ((float)(1.0f))))
		{
			goto IL_00b8;
		}
	}
	{
		// GL.Vertex3(lastPos.x, lastPos.y, lastPos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		float L_37 = L_36.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		float L_39 = L_38.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		float L_41 = L_40.___z_4;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_37, L_39, L_41, NULL);
		// lastPos = GetPoint(1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(__this, (1.0f), NULL);
		V_0 = L_42;
		// GL.Vertex3(lastPos.x, lastPos.y, lastPos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_0;
		float L_44 = L_43.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_0;
		float L_46 = L_45.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_0;
		float L_48 = L_47.___z_4;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_44, L_46, L_48, NULL);
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline__ctor_mAFC41D776F2B43611D441EC1C54712067474B2EC (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7715B92F96E60AB1CD797770C8718D2B763CB1F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<BezierPoint> endPoints = new List<BezierPoint>();
		List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE* L_0 = (List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE*)il2cpp_codegen_object_new(List_1_tA71F32F8876BF5E33C7B08EC69972265E6688DBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7715B92F96E60AB1CD797770C8718D2B763CB1F8(L_0, List_1__ctor_m7715B92F96E60AB1CD797770C8718D2B763CB1F8_RuntimeMethod_var);
		__this->___endPoints_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endPoints_6), (void*)L_0);
		// public bool loop = true;
		__this->___loop_7 = (bool)1;
		// public Color gizmoColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___gizmoColor_9 = L_1;
		// private float gizmoStep = 0.05f;
		__this->___gizmoStep_10 = (0.0500000007f);
		// [SerializeField] private int m_gizmoSmoothness = 4;
		__this->___m_gizmoSmoothness_11 = 4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ClothDynamics.BezierSpline::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSpline__cctor_m9E45B9F27F130AD320256F9F695B7C53182732DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtraData_LerpUnclamped_mD8A100364740E70CD374FB5BE45CFFAC30F9F903_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExtraDataLerpFunction defaultExtraDataLerpFunction = BezierPoint.ExtraData.LerpUnclamped;
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_0 = (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D*)il2cpp_codegen_object_new(ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExtraDataLerpFunction__ctor_mD5738E9BE80062558320E4D5D1DA4A3E23946578(L_0, NULL, (intptr_t)((void*)ExtraData_LerpUnclamped_mD8A100364740E70CD374FB5BE45CFFAC30F9F903_RuntimeMethod_var), NULL);
		((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___defaultExtraDataLerpFunction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_StaticFields*)il2cpp_codegen_static_fields_for(BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF_il2cpp_TypeInfo_var))->___defaultExtraDataLerpFunction_4), (void*)L_0);
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
// System.Void ClothDynamics.BezierSpline/PointIndexTuple::.ctor(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointIndexTuple__ctor_m53598F49AA57531D83594282579250F6AE8CACB7 (PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5* __this, int32_t ___0_index1, int32_t ___1_index2, float ___2_t, const RuntimeMethod* method) 
{
	{
		// this.index1 = index1;
		int32_t L_0 = ___0_index1;
		__this->___index1_0 = L_0;
		// this.index2 = index2;
		int32_t L_1 = ___1_index2;
		__this->___index2_1 = L_1;
		// this.t = t;
		float L_2 = ___2_t;
		__this->___t_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PointIndexTuple__ctor_m53598F49AA57531D83594282579250F6AE8CACB7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index1, int32_t ___1_index2, float ___2_t, const RuntimeMethod* method)
{
	PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PointIndexTuple_t2FFB99EE779565E1F8DD33C5310E34767675ADA5*>(__this + _offset);
	PointIndexTuple__ctor_m53598F49AA57531D83594282579250F6AE8CACB7(_thisAdjusted, ___0_index1, ___1_index2, ___2_t, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_Multicast(ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* currentDelegate = reinterpret_cast<ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D*>(delegatesToInvoke[i]);
		typedef ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 (*FunctionPointerType) (RuntimeObject*, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_data1, ___1_data2, ___2_normalizedT, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_OpenInst(ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method)
{
	typedef ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 (*FunctionPointerType) (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_data1, ___1_data2, ___2_normalizedT, method);
}
ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_OpenStatic(ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method)
{
	typedef ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 (*FunctionPointerType) (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_data1, ___1_data2, ___2_normalizedT, method);
}
ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_OpenStaticInvoker(ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_data1, ___1_data2, ___2_normalizedT);
}
ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_ClosedStaticInvoker(ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, RuntimeObject*, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_data1, ___1_data2, ___2_normalizedT);
}
IL2CPP_EXTERN_C  ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 DelegatePInvokeWrapper_ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method)
{
	typedef ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 (DEFAULT_CALL *PInvokeFunc)(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 returnValue = il2cppPInvokeFunc(___0_data1, ___1_data2, ___2_normalizedT);

	return returnValue;
}
// System.Void ClothDynamics.BezierSpline/ExtraDataLerpFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraDataLerpFunction__ctor_mD5738E9BE80062558320E4D5D1DA4A3E23946578 (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_Multicast;
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierSpline/ExtraDataLerpFunction::Invoke(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9 (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method) 
{
	typedef ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 (*FunctionPointerType) (RuntimeObject*, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data1, ___1_data2, ___2_normalizedT, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ClothDynamics.BezierSpline/ExtraDataLerpFunction::BeginInvoke(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtraDataLerpFunction_BeginInvoke_mEB2E93B6A0BA453BD90BEED48063AC55385CD807 (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4_il2cpp_TypeInfo_var, &___0_data1);
	__d_args[1] = Box(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4_il2cpp_TypeInfo_var, &___1_data2);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_normalizedT);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierSpline/ExtraDataLerpFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_EndInvoke_m859AE0673E1A56BB9335B4398D50EB2208B4353B (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ClothDynamics.InsideCheck::onSegment(ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_onSegment_mD0E75EB98F74FEC98600C643573A3233E0757826 (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___0_p, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___1_q, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_r, const RuntimeMethod* method) 
{
	{
		// if (q.x <= Mathf.Max(p.x, r.x) &&
		//     q.x >= Mathf.Min(p.x, r.x) &&
		//     q.y <= Mathf.Max(p.y, r.y) &&
		//     q.y >= Mathf.Min(p.y, r.y))
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_0 = ___1_q;
		float L_1 = L_0.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_2 = ___0_p;
		float L_3 = L_2.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_4 = ___2_r;
		float L_5 = L_4.___x_0;
		float L_6;
		L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_3, L_5, NULL);
		if ((!(((float)L_1) <= ((float)L_6))))
		{
			goto IL_0066;
		}
	}
	{
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_7 = ___1_q;
		float L_8 = L_7.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_9 = ___0_p;
		float L_10 = L_9.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_11 = ___2_r;
		float L_12 = L_11.___x_0;
		float L_13;
		L_13 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_10, L_12, NULL);
		if ((!(((float)L_8) >= ((float)L_13))))
		{
			goto IL_0066;
		}
	}
	{
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_14 = ___1_q;
		float L_15 = L_14.___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_16 = ___0_p;
		float L_17 = L_16.___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_18 = ___2_r;
		float L_19 = L_18.___y_1;
		float L_20;
		L_20 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_17, L_19, NULL);
		if ((!(((float)L_15) <= ((float)L_20))))
		{
			goto IL_0066;
		}
	}
	{
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_21 = ___1_q;
		float L_22 = L_21.___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_23 = ___0_p;
		float L_24 = L_23.___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_25 = ___2_r;
		float L_26 = L_25.___y_1;
		float L_27;
		L_27 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_24, L_26, NULL);
		if ((!(((float)L_22) >= ((float)L_27))))
		{
			goto IL_0066;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
// System.Single ClothDynamics.InsideCheck::orientation(ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InsideCheck_orientation_mBE7CCCB17181B9A17B94241CC38E0E3CB80AA256 (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___0_p, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___1_q, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_r, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t G_B5_0 = 0;
	{
		// float val = (q.y - p.y) * (r.x - q.x) -
		//         (q.x - p.x) * (r.y - q.y);
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_0 = ___1_q;
		float L_1 = L_0.___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_2 = ___0_p;
		float L_3 = L_2.___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_4 = ___2_r;
		float L_5 = L_4.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_6 = ___1_q;
		float L_7 = L_6.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_8 = ___1_q;
		float L_9 = L_8.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_10 = ___0_p;
		float L_11 = L_10.___x_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_12 = ___2_r;
		float L_13 = L_12.___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_14 = ___1_q;
		float L_15 = L_14.___y_1;
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))));
		// if (val == 0)
		float L_16 = V_0;
		if ((!(((float)L_16) == ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// return 0; // colinear
		return (0.0f);
	}

IL_0046:
	{
		// return (val > 0) ? 1 : 2; // clock or counterclock wise
		float L_17 = V_0;
		if ((((float)L_17) > ((float)(0.0f))))
		{
			goto IL_0051;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 1;
	}

IL_0052:
	{
		return ((float)G_B5_0);
	}
}
// System.Boolean ClothDynamics.InsideCheck::doIntersect(ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_doIntersect_m70D66D62DD0923624D7B9F23D9D87CD13690CCDA (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___0_p1, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___1_q1, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_p2, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___3_q2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float o1 = orientation(p1, q1, p2);
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_0 = ___0_p1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_1 = ___1_q1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_2 = ___2_p2;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = InsideCheck_orientation_mBE7CCCB17181B9A17B94241CC38E0E3CB80AA256(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// float o2 = orientation(p1, q1, q2);
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_4 = ___0_p1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_5 = ___1_q1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_6 = ___3_q2;
		float L_7;
		L_7 = InsideCheck_orientation_mBE7CCCB17181B9A17B94241CC38E0E3CB80AA256(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// float o3 = orientation(p2, q2, p1);
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_8 = ___2_p2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_9 = ___3_q2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_10 = ___0_p1;
		float L_11;
		L_11 = InsideCheck_orientation_mBE7CCCB17181B9A17B94241CC38E0E3CB80AA256(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		// float o4 = orientation(p2, q2, q1);
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_12 = ___2_p2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_13 = ___3_q2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_14 = ___1_q1;
		float L_15;
		L_15 = InsideCheck_orientation_mBE7CCCB17181B9A17B94241CC38E0E3CB80AA256(L_12, L_13, L_14, NULL);
		V_3 = L_15;
		// if (o1 != o2 && o3 != o4)
		float L_16 = V_0;
		float L_17 = V_1;
		if ((((float)L_16) == ((float)L_17)))
		{
			goto IL_002e;
		}
	}
	{
		float L_18 = V_2;
		float L_19 = V_3;
		if ((((float)L_18) == ((float)L_19)))
		{
			goto IL_002e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// if (o1 == 0 && onSegment(p1, p2, q1))
		float L_20 = V_0;
		if ((!(((float)L_20) == ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_21 = ___0_p1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_22 = ___2_p2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_23 = ___1_q1;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = InsideCheck_onSegment_mD0E75EB98F74FEC98600C643573A3233E0757826(L_21, L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0042;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0042:
	{
		// if (o2 == 0 && onSegment(p1, q2, q1))
		float L_25 = V_1;
		if ((!(((float)L_25) == ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_26 = ___0_p1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_27 = ___3_q2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_28 = ___1_q1;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = InsideCheck_onSegment_mD0E75EB98F74FEC98600C643573A3233E0757826(L_26, L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_0056;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0056:
	{
		// if (o3 == 0 && onSegment(p2, p1, q2))
		float L_30 = V_2;
		if ((!(((float)L_30) == ((float)(0.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_31 = ___2_p2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_32 = ___0_p1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_33 = ___3_q2;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = InsideCheck_onSegment_mD0E75EB98F74FEC98600C643573A3233E0757826(L_31, L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_006a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_006a:
	{
		// if (o4 == 0 && onSegment(p2, q1, q2))
		float L_35 = V_3;
		if ((!(((float)L_35) == ((float)(0.0f)))))
		{
			goto IL_007e;
		}
	}
	{
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_36 = ___2_p2;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_37 = ___1_q1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_38 = ___3_q2;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = InsideCheck_onSegment_mD0E75EB98F74FEC98600C643573A3233E0757826(L_36, L_37, L_38, NULL);
		if (!L_39)
		{
			goto IL_007e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_007e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean ClothDynamics.InsideCheck::isInside(ClothDynamics.InsideCheck/Point[],System.Int32,ClothDynamics.InsideCheck/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_isInside_mCEA365D94289C6940A87AD3343208FF6BFBD01CD (PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* ___0_polygon, int32_t ___1_n, Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 ___2_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (n < 3)
		int32_t L_0 = ___1_n;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_0006;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0006:
	{
		// Point extreme = new Point(INF, p.y);
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		int32_t L_1 = ((InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_StaticFields*)il2cpp_codegen_static_fields_for(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var))->___INF_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_2 = ___2_p;
		float L_3 = L_2.___y_1;
		Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882((&V_0), ((float)L_1), L_3, NULL);
		// int count = 0, i = 0;
		V_1 = 0;
		// int count = 0, i = 0;
		V_2 = 0;
	}

IL_001d:
	{
		// int next = (i + 1) % n;
		int32_t L_4 = V_2;
		int32_t L_5 = ___1_n;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%L_5));
		// if (doIntersect(polygon[i],
		//                 polygon[next], p, extreme))
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_6 = ___0_polygon;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_10 = ___0_polygon;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_14 = ___2_p;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = InsideCheck_doIntersect_m70D66D62DD0923624D7B9F23D9D87CD13690CCDA(L_9, L_13, L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		// if (orientation(polygon[i], p, polygon[next]) == 0)
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_17 = ___0_polygon;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_21 = ___2_p;
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_22 = ___0_polygon;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		float L_26;
		L_26 = InsideCheck_orientation_mBE7CCCB17181B9A17B94241CC38E0E3CB80AA256(L_20, L_21, L_25, NULL);
		if ((!(((float)L_26) == ((float)(0.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// return onSegment(polygon[i], p,
		//                 polygon[next]);
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_27 = ___0_polygon;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_31 = ___2_p;
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_32 = ___0_polygon;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = InsideCheck_onSegment_mD0E75EB98F74FEC98600C643573A3233E0757826(L_30, L_31, L_35, NULL);
		return L_36;
	}

IL_006a:
	{
		// count++;
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_006e:
	{
		// i = next;
		int32_t L_38 = V_3;
		V_2 = L_38;
		// } while (i != 0);
		int32_t L_39 = V_2;
		if (L_39)
		{
			goto IL_001d;
		}
	}
	{
		// return (count % 2 == 1); // Same as (count%2 == 1)
		int32_t L_40 = V_1;
		return (bool)((((int32_t)((int32_t)(L_40%2))) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean ClothDynamics.InsideCheck::Run(UnityEngine.Vector3,ClothDynamics.BezierPoint[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_Run_m558C5E7BC65D372BFAB3F07C13F11A85D860BD71 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815* ___1_bezierPolygon, int32_t ___2_axisX, int32_t ___3_axisY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// int n = bezierPolygon.Length;
		BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815* L_0 = ___1_bezierPolygon;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// Point p = new Point(point[axisX], point[axisY]);
		int32_t L_1 = ___2_axisX;
		float L_2;
		L_2 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___0_point), L_1, NULL);
		int32_t L_3 = ___3_axisY;
		float L_4;
		L_4 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___0_point), L_3, NULL);
		Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882((&V_1), L_2, L_4, NULL);
		// Point[] polygon = new Point[n];
		int32_t L_5 = V_0;
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_6 = (PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7*)(PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7*)SZArrayNew(PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// for (int i = 0; i < n; i++)
		V_3 = 0;
		goto IL_005a;
	}

IL_0026:
	{
		// polygon[i] = new Point(bezierPolygon[i].position[axisX], bezierPolygon[i].position[axisY]);
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_7 = V_2;
		int32_t L_8 = V_3;
		BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815* L_9 = ___1_bezierPolygon;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_12, NULL);
		V_4 = L_13;
		int32_t L_14 = ___2_axisX;
		float L_15;
		L_15 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_4), L_14, NULL);
		BezierPointU5BU5D_t12E7F5623B9A01BD7B8453C8C9B83AD7BC676815* L_16 = ___1_bezierPolygon;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = BezierPoint_get_position_mFEB6790CE4907698A4458D179FB0020524B1FB74(L_19, NULL);
		V_4 = L_20;
		int32_t L_21 = ___3_axisY;
		float L_22;
		L_22 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_4), L_21, NULL);
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882((&L_23), L_15, L_22, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18)L_23);
		// for (int i = 0; i < n; i++)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0026;
		}
	}
	{
		// if (isInside(polygon, n, p))
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_27 = V_2;
		int32_t L_28 = V_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = InsideCheck_isInside_mCEA365D94289C6940A87AD3343208FF6BFBD01CD(L_27, L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_006a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_006a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean ClothDynamics.InsideCheck::Run(UnityEngine.Vector3,UnityEngine.Vector2[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InsideCheck_Run_m58E42346FF28E4896489895808B801FE79577F54 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___1_bezierPolygon, int32_t ___2_axisX, int32_t ___3_axisY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int n = bezierPolygon.Length;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___1_bezierPolygon;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// Point p = new Point(point[axisX], point[axisY]);
		int32_t L_1 = ___2_axisX;
		float L_2;
		L_2 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___0_point), L_1, NULL);
		int32_t L_3 = ___3_axisY;
		float L_4;
		L_4 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___0_point), L_3, NULL);
		Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882((&V_1), L_2, L_4, NULL);
		// Point[] polygon = new Point[n];
		int32_t L_5 = V_0;
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_6 = (PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7*)(PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7*)SZArrayNew(PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// for (int i = 0; i < n; i++)
		V_3 = 0;
		goto IL_004e;
	}

IL_0026:
	{
		// polygon[i] = new Point(bezierPolygon[i].x, bezierPolygon[i].y);
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_7 = V_2;
		int32_t L_8 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = ___1_bezierPolygon;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___x_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = ___1_bezierPolygon;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___y_1;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882((&L_15), L_11, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18)L_15);
		// for (int i = 0; i < n; i++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_17 = V_3;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0026;
		}
	}
	{
		// if (isInside(polygon, n, p))
		PointU5BU5D_tEF541580DF7883B1306D0B5C3FDA548EE54E99B7* L_19 = V_2;
		int32_t L_20 = V_0;
		Point_tACD2CD0993F627FE37A57F06660566CB5250CB18 L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = InsideCheck_isInside_mCEA365D94289C6940A87AD3343208FF6BFBD01CD(L_19, L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_005e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ClothDynamics.InsideCheck::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsideCheck__cctor_m4C11C295D463A7E1051B6B01C3C528AE2952BE67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int INF = 10000;
		((InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_StaticFields*)il2cpp_codegen_static_fields_for(InsideCheck_t78EE139453784C6D1C3766CBC1A04098E11EAE0B_il2cpp_TypeInfo_var))->___INF_0 = ((int32_t)10000);
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
// System.Void ClothDynamics.InsideCheck/Point::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882 (Point_tACD2CD0993F627FE37A57F06660566CB5250CB18* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882_AdjustorThunk (RuntimeObject* __this, float ___0_x, float ___1_y, const RuntimeMethod* method)
{
	Point_tACD2CD0993F627FE37A57F06660566CB5250CB18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tACD2CD0993F627FE37A57F06660566CB5250CB18*>(__this + _offset);
	Point__ctor_m2FE7155AEC272743422F02F29622E5227535B882(_thisAdjusted, ___0_x, ___1_y, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ClothDynamics.BezierPoint/ExtraData ClothDynamics.BezierWalker::InterpolateExtraDataAsQuaternion(ClothDynamics.BezierPoint/ExtraData,ClothDynamics.BezierPoint/ExtraData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 BezierWalker_InterpolateExtraDataAsQuaternion_m94B4455127AB7C6EEEED7BF56C93895A963ED7F7 (ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method) 
{
	{
		// return Quaternion.LerpUnclamped( data1, data2, normalizedT );
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_0 = ___0_data1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846(L_0, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_2 = ___1_data2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846(L_2, NULL);
		float L_4 = ___2_normalizedT;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_LerpUnclamped_mEACDD86D679680584F09BE2E380B8EA277FA3971(L_1, L_3, L_4, NULL);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_6;
		L_6 = ExtraData_op_Implicit_m13442199AF2F6AAEFBAD325294C636886B580AAB(L_5, NULL);
		return L_6;
	}
}
// System.Void ClothDynamics.BezierWalker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalker__ctor_m192DEE8ADB85FD66F93EB349DF0566CDB8FD88B1 (BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ClothDynamics.BezierWalker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalker__cctor_m0EA33D1948C62AA7385737C2931AE8CD05B3C5FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_InterpolateExtraDataAsQuaternion_m94B4455127AB7C6EEEED7BF56C93895A963ED7F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly BezierSpline.ExtraDataLerpFunction extraDataLerpAsQuaternionFunction = InterpolateExtraDataAsQuaternion;
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_0 = (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D*)il2cpp_codegen_object_new(ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExtraDataLerpFunction__ctor_mD5738E9BE80062558320E4D5D1DA4A3E23946578(L_0, NULL, (intptr_t)((void*)BezierWalker_InterpolateExtraDataAsQuaternion_m94B4455127AB7C6EEEED7BF56C93895A963ED7F7_RuntimeMethod_var), NULL);
		((BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_StaticFields*)il2cpp_codegen_static_fields_for(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var))->___extraDataLerpAsQuaternionFunction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_StaticFields*)il2cpp_codegen_static_fields_for(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var))->___extraDataLerpAsQuaternionFunction_4), (void*)L_0);
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
// System.Collections.Generic.List`1<UnityEngine.Transform> ClothDynamics.BezierWalkerLocomotion::get_Tail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* BezierWalkerLocomotion_get_Tail_mAB6AE4E8CCFBE4DD44DFF9187C5D8EC7EA209AF8 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	{
		// public List<Transform> Tail { get { return tailObjects; } }
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___tailObjects_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Single> ClothDynamics.BezierWalkerLocomotion::get_TailDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* BezierWalkerLocomotion_get_TailDistances_mB97F237656BA53164BF87FE3D957A6026E33B132 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	{
		// public List<float> TailDistances { get { return tailObjectDistances; } }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___tailObjectDistances_7;
		return L_0;
	}
}
// ClothDynamics.BezierSpline ClothDynamics.BezierWalkerLocomotion::get_Spline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* BezierWalkerLocomotion_get_Spline_m56CB503DA4E34E7BC19C7BAF1FED1749D3E960FD (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	{
		// public override BezierSpline Spline { get { return walker.Spline; } }
		BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* L_0 = __this->___walker_5;
		NullCheck(L_0);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_1;
		L_1 = VirtualFuncInvoker0< BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* >::Invoke(4 /* ClothDynamics.BezierSpline ClothDynamics.BezierWalker::get_Spline() */, L_0);
		return L_1;
	}
}
// System.Boolean ClothDynamics.BezierWalkerLocomotion::get_MovingForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierWalkerLocomotion_get_MovingForward_mCB4B8FA4099F3D1B93BDFAB70E9E0876FDB92367 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	{
		// public override bool MovingForward { get { return walker.MovingForward; } }
		BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* L_0 = __this->___walker_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean ClothDynamics.BezierWalker::get_MovingForward() */, L_0);
		return L_1;
	}
}
// System.Single ClothDynamics.BezierWalkerLocomotion::get_NormalizedT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierWalkerLocomotion_get_NormalizedT_mD616C598202633D446D88452D99DFF37DE5C3D05 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	{
		// get { return walker.NormalizedT; }
		BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* L_0 = __this->___walker_5;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(6 /* System.Single ClothDynamics.BezierWalker::get_NormalizedT() */, L_0);
		return L_1;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::set_NormalizedT(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion_set_NormalizedT_m4EF8DAA2AB3CA5D3923BCBF98BEA2FC9A75988BB (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { walker.NormalizedT = value; }
		BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* L_0 = __this->___walker_5;
		float L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(7 /* System.Void ClothDynamics.BezierWalker::set_NormalizedT(System.Single) */, L_0, L_1);
		// set { walker.NormalizedT = value; }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion_Start_m89716A25EBD01B98568C44144D33B100760A181E (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB5E3421205759C5713B4BD9B763045F3D76EF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC326ACF94749F550FE0DF855B22FC51DBDF902);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( !walker )
		BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9* L_0 = __this->___walker_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogError( "Need to attach BezierWalkerLocomotion to a BezierWalker!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDAC326ACF94749F550FE0DF855B22FC51DBDF902, NULL);
		// Destroy( this );
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_001d:
	{
		// if( tailObjects.Count != tailObjectDistances.Count )
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___tailObjects_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_2, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_4 = __this->___tailObjectDistances_7;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_4, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError( "One distance per tail object is needed!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0CB5E3421205759C5713B4BD9B763045F3D76EF8, NULL);
		// Destroy( this );
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion_LateUpdate_mC7AE40F3D68B7D6081C48EA83C9C4BC0765FC19D (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	{
		// Execute( Time.deltaTime );
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		VirtualActionInvoker1< float >::Invoke(8 /* System.Void ClothDynamics.BezierWalker::Execute(System.Single) */, __this, L_0);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::Execute(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion_Execute_m726B10CF852C146A3C2EE0ADD67E04789E114F00 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	{
		// float t = NormalizedT;
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(6 /* System.Single ClothDynamics.BezierWalker::get_NormalizedT() */, __this);
		V_0 = L_0;
		// BezierSpline spline = Spline;
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_1;
		L_1 = VirtualFuncInvoker0< BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* >::Invoke(4 /* ClothDynamics.BezierSpline ClothDynamics.BezierWalker::get_Spline() */, __this);
		V_1 = L_1;
		// bool forward = MovingForward;
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean ClothDynamics.BezierWalker::get_MovingForward() */, __this);
		V_2 = L_2;
		// for( int i = 0; i < tailObjects.Count; i++ )
		V_3 = 0;
		goto IL_0173;
	}

IL_001c:
	{
		// Transform tailObject = tailObjects[i];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = __this->___tailObjects_6;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_3, L_4, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		V_4 = L_5;
		// if( forward )
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00d3;
		}
	}
	{
		// tailObject.position = Vector3.Lerp( tailObject.position, spline.MoveAlongSpline( ref t, -tailObjectDistances[i] ), movementLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_10 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_11 = __this->___tailObjectDistances_7;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		float L_13;
		L_13 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_11, L_12, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = BezierSpline_MoveAlongSpline_m14466F2E19BDF2B552E33D7F79EE40A95D94771F(L_10, (&V_0), ((-L_13)), 3, NULL);
		float L_15 = __this->___movementLerpModifier_8;
		float L_16 = ___0_deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_14, ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_17, NULL);
		// if( lookAt == LookAtMode.Forward )
		int32_t L_18 = __this->___lookAt_11;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0096;
		}
	}
	{
		// tailObject.rotation = Quaternion.Lerp( tailObject.rotation, Quaternion.LookRotation( spline.GetTangent( t ) ), rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_4;
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_22 = V_1;
		float L_23 = V_0;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA(L_22, L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_24, NULL);
		float L_26 = __this->___rotationLerpModifier_9;
		float L_27 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_21, L_25, ((float)il2cpp_codegen_multiply(L_26, L_27)), NULL);
		NullCheck(L_19);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_28, NULL);
		goto IL_016f;
	}

IL_0096:
	{
		// else if( lookAt == LookAtMode.SplineExtraData )
		int32_t L_29 = __this->___lookAt_11;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_016f;
		}
	}
	{
		// tailObject.rotation = Quaternion.Lerp( tailObject.rotation, spline.GetExtraData( t, extraDataLerpAsQuaternionFunction ), rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_4;
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_31, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_33 = V_1;
		float L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_35 = ((BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_StaticFields*)il2cpp_codegen_static_fields_for(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var))->___extraDataLerpAsQuaternionFunction_4;
		NullCheck(L_33);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_36;
		L_36 = BezierSpline_GetExtraData_m45D19828A743E8799E7545F7BCE8B88E6318AF13(L_33, L_34, L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846(L_36, NULL);
		float L_38 = __this->___rotationLerpModifier_9;
		float L_39 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_32, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		NullCheck(L_30);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_30, L_40, NULL);
		goto IL_016f;
	}

IL_00d3:
	{
		// tailObject.position = Vector3.Lerp( tailObject.position, spline.MoveAlongSpline( ref t, tailObjectDistances[i] ), movementLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = V_4;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_44 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_45 = __this->___tailObjectDistances_7;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		float L_47;
		L_47 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_45, L_46, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = BezierSpline_MoveAlongSpline_m14466F2E19BDF2B552E33D7F79EE40A95D94771F(L_44, (&V_0), L_47, 3, NULL);
		float L_49 = __this->___movementLerpModifier_8;
		float L_50 = ___0_deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_43, L_48, ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		NullCheck(L_41);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_41, L_51, NULL);
		// if( lookAt == LookAtMode.Forward )
		int32_t L_52 = __this->___lookAt_11;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_013a;
		}
	}
	{
		// tailObject.rotation = Quaternion.Lerp( tailObject.rotation, Quaternion.LookRotation( -spline.GetTangent( t ) ), rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = V_4;
		NullCheck(L_54);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_54, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_56 = V_1;
		float L_57 = V_0;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA(L_56, L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_58, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_59, NULL);
		float L_61 = __this->___rotationLerpModifier_9;
		float L_62 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
		L_63 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_55, L_60, ((float)il2cpp_codegen_multiply(L_61, L_62)), NULL);
		NullCheck(L_53);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_53, L_63, NULL);
		goto IL_016f;
	}

IL_013a:
	{
		// else if( lookAt == LookAtMode.SplineExtraData )
		int32_t L_64 = __this->___lookAt_11;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_016f;
		}
	}
	{
		// tailObject.rotation = Quaternion.Lerp( tailObject.rotation, spline.GetExtraData( t, extraDataLerpAsQuaternionFunction ), rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = V_4;
		NullCheck(L_66);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
		L_67 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_66, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_68 = V_1;
		float L_69 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_70 = ((BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_StaticFields*)il2cpp_codegen_static_fields_for(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var))->___extraDataLerpAsQuaternionFunction_4;
		NullCheck(L_68);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_71;
		L_71 = BezierSpline_GetExtraData_m45D19828A743E8799E7545F7BCE8B88E6318AF13(L_68, L_69, L_70, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846(L_71, NULL);
		float L_73 = __this->___rotationLerpModifier_9;
		float L_74 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_67, L_72, ((float)il2cpp_codegen_multiply(L_73, L_74)), NULL);
		NullCheck(L_65);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_65, L_75, NULL);
	}

IL_016f:
	{
		// for( int i = 0; i < tailObjects.Count; i++ )
		int32_t L_76 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0173:
	{
		// for( int i = 0; i < tailObjects.Count; i++ )
		int32_t L_77 = V_3;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_78 = __this->___tailObjects_6;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_78, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_77) < ((int32_t)L_79)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::AddToTail(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion_AddToTail_m93654B18DDEB1673DE067EE0AF0803DE9F08FAA0 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, float ___1_distanceToPreviousObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F08C1D778A2AD17359C5B95AFB194D59F34600);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( transform == null )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Object is null!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral70F08C1D778A2AD17359C5B95AFB194D59F34600, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// tailObjects.Add( transform );
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___tailObjects_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		NullCheck(L_2);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_2, L_3, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// tailObjectDistances.Add( distanceToPreviousObject );
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_4 = __this->___tailObjectDistances_7;
		float L_5 = ___1_distanceToPreviousObject;
		NullCheck(L_4);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_4, L_5, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::InsertIntoTail(System.Int32,UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion_InsertIntoTail_m86D5C828EB079C46126511928D7DAA9938C40BF9 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, int32_t ___0_index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, float ___2_distanceToPreviousObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mAB414D49B19A78E869B7A151D717102871979833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mC1AB5BCBBAB1A0C67BC0AE0E51977EBF5C76EB13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F08C1D778A2AD17359C5B95AFB194D59F34600);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( transform == null )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___1_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Object is null!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral70F08C1D778A2AD17359C5B95AFB194D59F34600, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// tailObjects.Insert( index, transform );
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___tailObjects_6;
		int32_t L_3 = ___0_index;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_transform;
		NullCheck(L_2);
		List_1_Insert_mAB414D49B19A78E869B7A151D717102871979833(L_2, L_3, L_4, List_1_Insert_mAB414D49B19A78E869B7A151D717102871979833_RuntimeMethod_var);
		// tailObjectDistances.Insert( index, distanceToPreviousObject );
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_5 = __this->___tailObjectDistances_7;
		int32_t L_6 = ___0_index;
		float L_7 = ___2_distanceToPreviousObject;
		NullCheck(L_5);
		List_1_Insert_mC1AB5BCBBAB1A0C67BC0AE0E51977EBF5C76EB13(L_5, L_6, L_7, List_1_Insert_mC1AB5BCBBAB1A0C67BC0AE0E51977EBF5C76EB13_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::RemoveFromTail(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion_RemoveFromTail_mC832FF7E23E655377E91C9CB668B6C3452E959A7 (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F08C1D778A2AD17359C5B95AFB194D59F34600);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if( transform == null )
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Object is null!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral70F08C1D778A2AD17359C5B95AFB194D59F34600, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// for( int i = 0; i < tailObjects.Count; i++ )
		V_0 = 0;
		goto IL_0049;
	}

IL_0018:
	{
		// if( tailObjects[i] == transform )
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___tailObjects_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_2, L_3, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// tailObjects.RemoveAt( i );
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7 = __this->___tailObjects_6;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437(L_7, L_8, List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		// tailObjectDistances.RemoveAt( i );
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_9 = __this->___tailObjectDistances_7;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93(L_9, L_10, List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		// return;
		return;
	}

IL_0045:
	{
		// for( int i = 0; i < tailObjects.Count; i++ )
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0049:
	{
		// for( int i = 0; i < tailObjects.Count; i++ )
		int32_t L_12 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_13 = __this->___tailObjects_6;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_13, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerLocomotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerLocomotion__ctor_m35CD93689FB30549482C26AF0C3380536D81C4BE (BezierWalkerLocomotion_t2DBAD5983A823473783F8FC1D83E5138B9A776F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float movementLerpModifier = 10f;
		__this->___movementLerpModifier_8 = (10.0f);
		// public float rotationLerpModifier = 10f;
		__this->___rotationLerpModifier_9 = (10.0f);
		// public bool lookForward = true;
		__this->___lookForward_10 = (bool)1;
		// public LookAtMode lookAt = LookAtMode.Forward;
		__this->___lookAt_11 = 1;
		il2cpp_codegen_runtime_class_init_inline(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		BezierWalker__ctor_m192DEE8ADB85FD66F93EB349DF0566CDB8FD88B1(__this, NULL);
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
// ClothDynamics.BezierSpline ClothDynamics.BezierWalkerWithSpeed::get_Spline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* BezierWalkerWithSpeed_get_Spline_m616A511ED6D14B6DBF57D7224CF7984C1847495E (BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF* __this, const RuntimeMethod* method) 
{
	{
		// public override BezierSpline Spline { get { return spline; } }
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_0 = __this->___spline_5;
		return L_0;
	}
}
// System.Single ClothDynamics.BezierWalkerWithSpeed::get_NormalizedT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierWalkerWithSpeed_get_NormalizedT_m70C1C7B3D920BC63084408FBD6DCB3EDE9E2BFD5 (BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalizedT; }
		float L_0 = __this->___m_normalizedT_8;
		return L_0;
	}
}
// System.Void ClothDynamics.BezierWalkerWithSpeed::set_NormalizedT(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithSpeed_set_NormalizedT_m1F1A545BCC9095DB16037D63AC20875AB6329A4C (BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_normalizedT = value; }
		float L_0 = ___0_value;
		__this->___m_normalizedT_8 = L_0;
		// set { m_normalizedT = value; }
		return;
	}
}
// System.Boolean ClothDynamics.BezierWalkerWithSpeed::get_MovingForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierWalkerWithSpeed_get_MovingForward_m5BC216C591198EC6D1AE86DFF1BB35F5F51AC159 (BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF* __this, const RuntimeMethod* method) 
{
	{
		// public override bool MovingForward { get { return ( speed > 0f ) == isGoingForward; } }
		float L_0 = __this->___speed_7;
		bool L_1 = __this->___isGoingForward_12;
		return (bool)((((int32_t)((((float)L_0) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Void ClothDynamics.BezierWalkerWithSpeed::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithSpeed_Update_m5A066EFBD3331A615FCA8242675B474A85B71211 (BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF* __this, const RuntimeMethod* method) 
{
	{
		// Execute( Time.deltaTime );
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		VirtualActionInvoker1< float >::Invoke(8 /* System.Void ClothDynamics.BezierWalker::Execute(System.Single) */, __this, L_0);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerWithSpeed::Execute(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithSpeed_Execute_mE12CE37ED9F9666EFEECA3A08726141DEAFE7C9D (BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B3_0 = 0.0f;
	{
		// float targetSpeed = ( isGoingForward ) ? speed : -speed;
		bool L_0 = __this->___isGoingForward_12;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = __this->___speed_7;
		G_B3_0 = ((-L_1));
		goto IL_0017;
	}

IL_0011:
	{
		float L_2 = __this->___speed_7;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		// Vector3 targetPos = spline.MoveAlongSpline( ref m_normalizedT, targetSpeed * deltaTime );
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_3 = __this->___spline_5;
		float* L_4 = (float*)(&__this->___m_normalizedT_8);
		float L_5 = V_0;
		float L_6 = ___0_deltaTime;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = BezierSpline_MoveAlongSpline_m14466F2E19BDF2B552E33D7F79EE40A95D94771F(L_3, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), 3, NULL);
		V_1 = L_7;
		// transform.position = targetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// bool movingForward = MovingForward;
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean ClothDynamics.BezierWalker::get_MovingForward() */, __this);
		V_2 = L_10;
		// if( lookAt == LookAtMode.Forward )
		int32_t L_11 = __this->___lookAt_11;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00a8;
		}
	}
	{
		// if( movingForward )
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation( spline.GetTangent( m_normalizedT ) );
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_13 = __this->___spline_5;
		float L_14 = __this->___m_normalizedT_8;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA(L_13, L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_15, NULL);
		V_3 = L_16;
		goto IL_0082;
	}

IL_0066:
	{
		// targetRotation = Quaternion.LookRotation( -spline.GetTangent( m_normalizedT ) );
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_17 = __this->___spline_5;
		float L_18 = __this->___m_normalizedT_8;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_20, NULL);
		V_3 = L_21;
	}

IL_0082:
	{
		// transform.rotation = Quaternion.Lerp( transform.rotation, targetRotation, rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_3;
		float L_26 = __this->___rotationLerpModifier_9;
		float L_27 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_24, L_25, ((float)il2cpp_codegen_multiply(L_26, L_27)), NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_28, NULL);
		goto IL_00ef;
	}

IL_00a8:
	{
		// else if( lookAt == LookAtMode.SplineExtraData )
		int32_t L_29 = __this->___lookAt_11;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_00ef;
		}
	}
	{
		// transform.rotation = Quaternion.Lerp( transform.rotation, spline.GetExtraData( m_normalizedT, extraDataLerpAsQuaternionFunction ), rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_31, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_33 = __this->___spline_5;
		float L_34 = __this->___m_normalizedT_8;
		il2cpp_codegen_runtime_class_init_inline(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_35 = ((BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_StaticFields*)il2cpp_codegen_static_fields_for(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var))->___extraDataLerpAsQuaternionFunction_4;
		NullCheck(L_33);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_36;
		L_36 = BezierSpline_GetExtraData_m45D19828A743E8799E7545F7BCE8B88E6318AF13(L_33, L_34, L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846(L_36, NULL);
		float L_38 = __this->___rotationLerpModifier_9;
		float L_39 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_32, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		NullCheck(L_30);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_30, L_40, NULL);
	}

IL_00ef:
	{
		// if( movingForward )
		bool L_41 = V_2;
		if (!L_41)
		{
			goto IL_017b;
		}
	}
	{
		// if( m_normalizedT >= 1f )
		float L_42 = __this->___m_normalizedT_8;
		if ((!(((float)L_42) >= ((float)(1.0f)))))
		{
			goto IL_0173;
		}
	}
	{
		// if( travelMode == TravelMode.Once )
		int32_t L_43 = __this->___travelMode_6;
		if (L_43)
		{
			goto IL_0117;
		}
	}
	{
		// m_normalizedT = 1f;
		__this->___m_normalizedT_8 = (1.0f);
		goto IL_0155;
	}

IL_0117:
	{
		// else if( travelMode == TravelMode.Loop )
		int32_t L_44 = __this->___travelMode_6;
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_0134;
		}
	}
	{
		// m_normalizedT -= 1f;
		float L_45 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_subtract(L_45, (1.0f)));
		goto IL_0155;
	}

IL_0134:
	{
		// m_normalizedT = 2f - m_normalizedT;
		float L_46 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_subtract((2.0f), L_46));
		// isGoingForward = !isGoingForward;
		bool L_47 = __this->___isGoingForward_12;
		__this->___isGoingForward_12 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
	}

IL_0155:
	{
		// if( !onPathCompletedCalledAt1 )
		bool L_48 = __this->___onPathCompletedCalledAt1_14;
		if (L_48)
		{
			goto IL_01f8;
		}
	}
	{
		// onPathCompletedCalledAt1 = true;
		__this->___onPathCompletedCalledAt1_14 = (bool)1;
		// onPathCompleted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_49 = __this->___onPathCompleted_13;
		NullCheck(L_49);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_49, NULL);
		return;
	}

IL_0173:
	{
		// onPathCompletedCalledAt1 = false;
		__this->___onPathCompletedCalledAt1_14 = (bool)0;
		return;
	}

IL_017b:
	{
		// if( m_normalizedT <= 0f )
		float L_50 = __this->___m_normalizedT_8;
		if ((!(((float)L_50) <= ((float)(0.0f)))))
		{
			goto IL_01f1;
		}
	}
	{
		// if( travelMode == TravelMode.Once )
		int32_t L_51 = __this->___travelMode_6;
		if (L_51)
		{
			goto IL_019d;
		}
	}
	{
		// m_normalizedT = 0f;
		__this->___m_normalizedT_8 = (0.0f);
		goto IL_01d6;
	}

IL_019d:
	{
		// else if( travelMode == TravelMode.Loop )
		int32_t L_52 = __this->___travelMode_6;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_01ba;
		}
	}
	{
		// m_normalizedT += 1f;
		float L_53 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_add(L_53, (1.0f)));
		goto IL_01d6;
	}

IL_01ba:
	{
		// m_normalizedT = -m_normalizedT;
		float L_54 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((-L_54));
		// isGoingForward = !isGoingForward;
		bool L_55 = __this->___isGoingForward_12;
		__this->___isGoingForward_12 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
	}

IL_01d6:
	{
		// if( !onPathCompletedCalledAt0 )
		bool L_56 = __this->___onPathCompletedCalledAt0_15;
		if (L_56)
		{
			goto IL_01f8;
		}
	}
	{
		// onPathCompletedCalledAt0 = true;
		__this->___onPathCompletedCalledAt0_15 = (bool)1;
		// onPathCompleted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_57 = __this->___onPathCompleted_13;
		NullCheck(L_57);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_57, NULL);
		return;
	}

IL_01f1:
	{
		// onPathCompletedCalledAt0 = false;
		__this->___onPathCompletedCalledAt0_15 = (bool)0;
	}

IL_01f8:
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerWithSpeed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithSpeed__ctor_mCE2DEFC3D1B30BBD2E2AC9DC1C34E825C95596E8 (BezierWalkerWithSpeed_t7B7A1D22EA0DE68D5C3D3FE2523182599C163FDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float speed = 5f;
		__this->___speed_7 = (5.0f);
		// public float rotationLerpModifier = 10f;
		__this->___rotationLerpModifier_9 = (10.0f);
		// public bool lookForward = true;
		__this->___lookForward_10 = (bool)1;
		// public LookAtMode lookAt = LookAtMode.Forward;
		__this->___lookAt_11 = 1;
		// private bool isGoingForward = true;
		__this->___isGoingForward_12 = (bool)1;
		// public UnityEvent onPathCompleted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onPathCompleted_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPathCompleted_13), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		BezierWalker__ctor_m192DEE8ADB85FD66F93EB349DF0566CDB8FD88B1(__this, NULL);
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
// ClothDynamics.BezierSpline ClothDynamics.BezierWalkerWithTime::get_Spline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* BezierWalkerWithTime_get_Spline_mA74B5A67D0E559EC1F1BD448EBC64B50B4CD39C7 (BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C* __this, const RuntimeMethod* method) 
{
	{
		// public override BezierSpline Spline { get { return spline; } }
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_0 = __this->___spline_5;
		return L_0;
	}
}
// System.Single ClothDynamics.BezierWalkerWithTime::get_NormalizedT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BezierWalkerWithTime_get_NormalizedT_m6939A1F22BC88C77BC9114CA0BC04D97859CFD70 (BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalizedT; }
		float L_0 = __this->___m_normalizedT_8;
		return L_0;
	}
}
// System.Void ClothDynamics.BezierWalkerWithTime::set_NormalizedT(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithTime_set_NormalizedT_mF3B150011836A9832D766F79C0A5F6017EECE80A (BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_normalizedT = value; }
		float L_0 = ___0_value;
		__this->___m_normalizedT_8 = L_0;
		// set { m_normalizedT = value; }
		return;
	}
}
// System.Boolean ClothDynamics.BezierWalkerWithTime::get_MovingForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierWalkerWithTime_get_MovingForward_m8DC2A36D1924B07C5AF942F1FF56D0F09038A1B1 (BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C* __this, const RuntimeMethod* method) 
{
	{
		// public override bool MovingForward { get { return isGoingForward; } }
		bool L_0 = __this->___isGoingForward_13;
		return L_0;
	}
}
// System.Void ClothDynamics.BezierWalkerWithTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithTime_Update_m0C8E9CF3D9C72A9BE9B893CA21569F3CE21840C8 (BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C* __this, const RuntimeMethod* method) 
{
	{
		// Execute( Time.deltaTime );
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		VirtualActionInvoker1< float >::Invoke(8 /* System.Void ClothDynamics.BezierWalker::Execute(System.Single) */, __this, L_0);
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerWithTime::Execute(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithTime_Execute_mFAB6D9C04473EE4FB88D2A5B185AD18F29A017B3 (BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.position = Vector3.Lerp( transform.position, spline.GetPoint( m_normalizedT ), movementLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_3 = __this->___spline_5;
		float L_4 = __this->___m_normalizedT_8;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(L_3, L_4, NULL);
		float L_6 = __this->___movementLerpModifier_9;
		float L_7 = ___0_deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_2, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_8, NULL);
		// if( lookAt == LookAtMode.Forward )
		int32_t L_9 = __this->___lookAt_12;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00a0;
		}
	}
	{
		// if( isGoingForward )
		bool L_10 = __this->___isGoingForward_13;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation( spline.GetTangent( m_normalizedT ) );
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_11 = __this->___spline_5;
		float L_12 = __this->___m_normalizedT_8;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA(L_11, L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_13, NULL);
		V_0 = L_14;
		goto IL_007a;
	}

IL_005e:
	{
		// targetRotation = Quaternion.LookRotation( -spline.GetTangent( m_normalizedT ) );
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_15 = __this->___spline_5;
		float L_16 = __this->___m_normalizedT_8;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = BezierSpline_GetTangent_m4C0C35F8E67DD9A38391AA52F91927E91964BDFA(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_18, NULL);
		V_0 = L_19;
	}

IL_007a:
	{
		// transform.rotation = Quaternion.Lerp( transform.rotation, targetRotation, rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_0;
		float L_24 = __this->___rotationLerpModifier_10;
		float L_25 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_22, L_23, ((float)il2cpp_codegen_multiply(L_24, L_25)), NULL);
		NullCheck(L_20);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_20, L_26, NULL);
		goto IL_00e7;
	}

IL_00a0:
	{
		// else if( lookAt == LookAtMode.SplineExtraData )
		int32_t L_27 = __this->___lookAt_12;
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_00e7;
		}
	}
	{
		// transform.rotation = Quaternion.Lerp( transform.rotation, spline.GetExtraData( m_normalizedT, extraDataLerpAsQuaternionFunction ), rotationLerpModifier * deltaTime );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_29, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_31 = __this->___spline_5;
		float L_32 = __this->___m_normalizedT_8;
		il2cpp_codegen_runtime_class_init_inline(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* L_33 = ((BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_StaticFields*)il2cpp_codegen_static_fields_for(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var))->___extraDataLerpAsQuaternionFunction_4;
		NullCheck(L_31);
		ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 L_34;
		L_34 = BezierSpline_GetExtraData_m45D19828A743E8799E7545F7BCE8B88E6318AF13(L_31, L_32, L_33, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = ExtraData_op_Implicit_m0370857328B7CB7B15A0FF297678A3761E8A9846(L_34, NULL);
		float L_36 = __this->___rotationLerpModifier_10;
		float L_37 = ___0_deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_30, L_35, ((float)il2cpp_codegen_multiply(L_36, L_37)), NULL);
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_38, NULL);
	}

IL_00e7:
	{
		// if( isGoingForward )
		bool L_39 = __this->___isGoingForward_13;
		if (!L_39)
		{
			goto IL_0185;
		}
	}
	{
		// m_normalizedT += deltaTime / travelTime;
		float L_40 = __this->___m_normalizedT_8;
		float L_41 = ___0_deltaTime;
		float L_42 = __this->___travelTime_7;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_add(L_40, ((float)(L_41/L_42))));
		// if( m_normalizedT > 1f )
		float L_43 = __this->___m_normalizedT_8;
		if ((!(((float)L_43) > ((float)(1.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// if( travelMode == TravelMode.Once )
		int32_t L_44 = __this->___travelMode_6;
		if (L_44)
		{
			goto IL_0129;
		}
	}
	{
		// m_normalizedT = 1f;
		__this->___m_normalizedT_8 = (1.0f);
		goto IL_015f;
	}

IL_0129:
	{
		// else if( travelMode == TravelMode.Loop )
		int32_t L_45 = __this->___travelMode_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)1))))
		{
			goto IL_0146;
		}
	}
	{
		// m_normalizedT -= 1f;
		float L_46 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_subtract(L_46, (1.0f)));
		goto IL_015f;
	}

IL_0146:
	{
		// m_normalizedT = 2f - m_normalizedT;
		float L_47 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_subtract((2.0f), L_47));
		// isGoingForward = false;
		__this->___isGoingForward_13 = (bool)0;
	}

IL_015f:
	{
		// if( !onPathCompletedCalledAt1 )
		bool L_48 = __this->___onPathCompletedCalledAt1_15;
		if (L_48)
		{
			goto IL_020f;
		}
	}
	{
		// onPathCompletedCalledAt1 = true;
		__this->___onPathCompletedCalledAt1_15 = (bool)1;
		// onPathCompleted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_49 = __this->___onPathCompleted_14;
		NullCheck(L_49);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_49, NULL);
		return;
	}

IL_017d:
	{
		// onPathCompletedCalledAt1 = false;
		__this->___onPathCompletedCalledAt1_15 = (bool)0;
		return;
	}

IL_0185:
	{
		// m_normalizedT -= deltaTime / travelTime;
		float L_50 = __this->___m_normalizedT_8;
		float L_51 = ___0_deltaTime;
		float L_52 = __this->___travelTime_7;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_subtract(L_50, ((float)(L_51/L_52))));
		// if( m_normalizedT < 0f )
		float L_53 = __this->___m_normalizedT_8;
		if ((!(((float)L_53) < ((float)(0.0f)))))
		{
			goto IL_0208;
		}
	}
	{
		// if( travelMode == TravelMode.Once )
		int32_t L_54 = __this->___travelMode_6;
		if (L_54)
		{
			goto IL_01bc;
		}
	}
	{
		// m_normalizedT = 0f;
		__this->___m_normalizedT_8 = (0.0f);
		goto IL_01ed;
	}

IL_01bc:
	{
		// else if( travelMode == TravelMode.Loop )
		int32_t L_55 = __this->___travelMode_6;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_01d9;
		}
	}
	{
		// m_normalizedT += 1f;
		float L_56 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((float)il2cpp_codegen_add(L_56, (1.0f)));
		goto IL_01ed;
	}

IL_01d9:
	{
		// m_normalizedT = -m_normalizedT;
		float L_57 = __this->___m_normalizedT_8;
		__this->___m_normalizedT_8 = ((-L_57));
		// isGoingForward = true;
		__this->___isGoingForward_13 = (bool)1;
	}

IL_01ed:
	{
		// if( !onPathCompletedCalledAt0 )
		bool L_58 = __this->___onPathCompletedCalledAt0_16;
		if (L_58)
		{
			goto IL_020f;
		}
	}
	{
		// onPathCompletedCalledAt0 = true;
		__this->___onPathCompletedCalledAt0_16 = (bool)1;
		// onPathCompleted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_59 = __this->___onPathCompleted_14;
		NullCheck(L_59);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_59, NULL);
		return;
	}

IL_0208:
	{
		// onPathCompletedCalledAt0 = false;
		__this->___onPathCompletedCalledAt0_16 = (bool)0;
	}

IL_020f:
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.BezierWalkerWithTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierWalkerWithTime__ctor_m262254CBCA262B78C5669322BAD5159818C649B8 (BezierWalkerWithTime_tAFC93FD7331D2FC2387F8D67563F98ED29607B2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float travelTime = 5f;
		__this->___travelTime_7 = (5.0f);
		// public float movementLerpModifier = 10f;
		__this->___movementLerpModifier_9 = (10.0f);
		// public float rotationLerpModifier = 10f;
		__this->___rotationLerpModifier_10 = (10.0f);
		// public bool lookForward = true;
		__this->___lookForward_11 = (bool)1;
		// public LookAtMode lookAt = LookAtMode.Forward;
		__this->___lookAt_12 = 1;
		// private bool isGoingForward = true;
		__this->___isGoingForward_13 = (bool)1;
		// public UnityEvent onPathCompleted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onPathCompleted_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPathCompleted_14), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(BezierWalker_t57D501BDDAC1B26493D231885F35FC96D5423CB9_il2cpp_TypeInfo_var);
		BezierWalker__ctor_m192DEE8ADB85FD66F93EB349DF0566CDB8FD88B1(__this, NULL);
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
// System.Void ClothDynamics.ParticlesFollowBezier::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticlesFollowBezier_Awake_m27FF47891F3D6C0E863AC9C2D55E4E39ABA0AF75 (ParticlesFollowBezier_tDF003DFB056C76AA43A45CE9ED94BE75990BB402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___cachedTransform_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedTransform_7), (void*)L_0);
		// cachedPS = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1;
		L_1 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___cachedPS_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedPS_8), (void*)L_1);
		// cachedMainModule = cachedPS.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___cachedPS_8;
		NullCheck(L_2);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_3;
		L_3 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_2, NULL);
		__this->___cachedMainModule_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cachedMainModule_9))->___m_ParticleSystem_0), (void*)NULL);
		// particles = new ParticleSystem.Particle[cachedMainModule.maxParticles];
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_4 = (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)(&__this->___cachedMainModule_9);
		int32_t L_5;
		L_5 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198(L_4, NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_6 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)SZArrayNew(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___particles_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_10), (void*)L_6);
		// if( followMode == FollowMode.Relaxed )
		int32_t L_7 = __this->___followMode_6;
		if (L_7)
		{
			goto IL_005a;
		}
	}
	{
		// particleData = new List<Vector4>( particles.Length );
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_8 = __this->___particles_10;
		NullCheck(L_8);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_9 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543(L_9, ((int32_t)(((RuntimeArray*)L_8)->max_length)), List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var);
		__this->___particleData_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particleData_11), (void*)L_9);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void ClothDynamics.ParticlesFollowBezier::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticlesFollowBezier_FixedUpdate_m14ABA847C04F9DBC1D9F35AFC0D2B30F88A82350 (ParticlesFollowBezier_tDF003DFB056C76AA43A45CE9ED94BE75990BB402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mD6CA3BF3BEA5FD7D9869931A247717244409E6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// if( spline == null || cachedPS == null )
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_0 = __this->___spline_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___cachedPS_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// if( particles.Length < cachedMainModule.maxParticles && particles.Length < MAX_PARTICLE_COUNT )
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_4 = __this->___particles_10;
		NullCheck(L_4);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_5 = (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)(&__this->___cachedMainModule_9);
		int32_t L_6;
		L_6 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198(L_5, NULL);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)L_6)))
		{
			goto IL_0061;
		}
	}
	{
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_7 = __this->___particles_10;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)((int32_t)25000))))
		{
			goto IL_0061;
		}
	}
	{
		// System.Array.Resize( ref particles, Mathf.Min( cachedMainModule.maxParticles, MAX_PARTICLE_COUNT ) );
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7** L_8 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7**)(&__this->___particles_10);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_9 = (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)(&__this->___cachedMainModule_9);
		int32_t L_10;
		L_10 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198(L_9, NULL);
		int32_t L_11;
		L_11 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_10, ((int32_t)25000), NULL);
		Array_Resize_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mD6CA3BF3BEA5FD7D9869931A247717244409E6D2(L_8, L_11, Array_Resize_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mD6CA3BF3BEA5FD7D9869931A247717244409E6D2_RuntimeMethod_var);
	}

IL_0061:
	{
		// bool isLocalSpace = cachedMainModule.simulationSpace != ParticleSystemSimulationSpace.World;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_12 = (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)(&__this->___cachedMainModule_9);
		int32_t L_13;
		L_13 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC(L_12, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// int aliveParticles = cachedPS.GetParticles( particles );
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = __this->___cachedPS_8;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_15 = __this->___particles_10;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F(L_14, L_15, NULL);
		V_1 = L_16;
		// if( followMode == FollowMode.Relaxed )
		int32_t L_17 = __this->___followMode_6;
		if (L_17)
		{
			goto IL_0193;
		}
	}
	{
		// if( particleData == null )
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_18 = __this->___particleData_11;
		if (L_18)
		{
			goto IL_00ab;
		}
	}
	{
		// particleData = new List<Vector4>( particles.Length );
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_19 = __this->___particles_10;
		NullCheck(L_19);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_20 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543(L_20, ((int32_t)(((RuntimeArray*)L_19)->max_length)), List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var);
		__this->___particleData_11 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particleData_11), (void*)L_20);
	}

IL_00ab:
	{
		// cachedPS.GetCustomParticleData( particleData, ParticleSystemCustomData.Custom1 );
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_21 = __this->___cachedPS_8;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_22 = __this->___particleData_11;
		NullCheck(L_21);
		int32_t L_23;
		L_23 = ParticleSystem_GetCustomParticleData_m5A4E0CCEEF03F77F239D856DB80FA61F479C7670(L_21, L_22, 0, NULL);
		// for( int i = 0; i < aliveParticles; i++ )
		V_2 = 0;
		goto IL_0175;
	}

IL_00c5:
	{
		// Vector4 particleDat = particleData[i];
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_24 = __this->___particleData_11;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4(L_24, L_25, List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		V_3 = L_26;
		// Vector3 point = spline.GetPoint( 1f - ( particles[i].remainingLifetime / particles[i].startLifetime ) );
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_27 = __this->___spline_5;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_28 = __this->___particles_10;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		float L_30;
		L_30 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_31 = __this->___particles_10;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		float L_33;
		L_33 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664(((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(L_27, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_30/L_33)))), NULL);
		V_4 = L_34;
		// if( isLocalSpace )
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_011a;
		}
	}
	{
		// point = cachedTransform.InverseTransformPoint( point );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___cachedTransform_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_36, L_37, NULL);
		V_4 = L_38;
	}

IL_011a:
	{
		// if( particleDat.w != 0f )
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = V_3;
		float L_40 = L_39.___w_4;
		if ((((float)L_40) == ((float)(0.0f))))
		{
			goto IL_0150;
		}
	}
	{
		// particles[i].position += point - (Vector3) particleDat;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_41 = __this->___particles_10;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_45, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_48, NULL);
		Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E(L_43, L_49, NULL);
	}

IL_0150:
	{
		// particleDat = point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51;
		L_51 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_50, NULL);
		V_3 = L_51;
		// particleDat.w = 1f;
		(&V_3)->___w_4 = (1.0f);
		// particleData[i] = particleDat;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_52 = __this->___particleData_11;
		int32_t L_53 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54 = V_3;
		NullCheck(L_52);
		List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F(L_52, L_53, L_54, List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var);
		// for( int i = 0; i < aliveParticles; i++ )
		int32_t L_55 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0175:
	{
		// for( int i = 0; i < aliveParticles; i++ )
		int32_t L_56 = V_2;
		int32_t L_57 = V_1;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00c5;
		}
	}
	{
		// cachedPS.SetCustomParticleData( particleData, ParticleSystemCustomData.Custom1 );
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_58 = __this->___cachedPS_8;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_59 = __this->___particleData_11;
		NullCheck(L_58);
		ParticleSystem_SetCustomParticleData_m00DE2BB34BFE3221AD472040E6554E05FA29F258(L_58, L_59, 0, NULL);
		goto IL_022a;
	}

IL_0193:
	{
		// Vector3 deltaPosition = cachedTransform.position - spline.GetPoint( 0f );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = __this->___cachedTransform_7;
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_62 = __this->___spline_5;
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(L_62, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_61, L_63, NULL);
		V_5 = L_64;
		// for( int i = 0; i < aliveParticles; i++ )
		V_6 = 0;
		goto IL_0225;
	}

IL_01ba:
	{
		// Vector3 point = spline.GetPoint( 1f - ( particles[i].remainingLifetime / particles[i].startLifetime ) ) + deltaPosition;
		BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* L_65 = __this->___spline_5;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_66 = __this->___particles_10;
		int32_t L_67 = V_6;
		NullCheck(L_66);
		float L_68;
		L_68 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_69 = __this->___particles_10;
		int32_t L_70 = V_6;
		NullCheck(L_69);
		float L_71;
		L_71 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664(((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70))), NULL);
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = BezierSpline_GetPoint_m975C08B633D1CB54F4EC0BD0B336D8A6D2938CB1(L_65, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_68/L_71)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_73, NULL);
		V_7 = L_74;
		// if( isLocalSpace )
		bool L_75 = V_0;
		if (!L_75)
		{
			goto IL_020b;
		}
	}
	{
		// point = cachedTransform.InverseTransformPoint( point );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76 = __this->___cachedTransform_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_7;
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_76, L_77, NULL);
		V_7 = L_78;
	}

IL_020b:
	{
		// particles[i].position = point;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_79 = __this->___particles_10;
		int32_t L_80 = V_6;
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_7;
		Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E(((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))), L_81, NULL);
		// for( int i = 0; i < aliveParticles; i++ )
		int32_t L_82 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_0225:
	{
		// for( int i = 0; i < aliveParticles; i++ )
		int32_t L_83 = V_6;
		int32_t L_84 = V_1;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_01ba;
		}
	}

IL_022a:
	{
		// cachedPS.SetParticles( particles, aliveParticles );
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_85 = __this->___cachedPS_8;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_86 = __this->___particles_10;
		int32_t L_87 = V_1;
		NullCheck(L_85);
		ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592(L_85, L_86, L_87, NULL);
		// }
		return;
	}
}
// System.Void ClothDynamics.ParticlesFollowBezier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticlesFollowBezier__ctor_m603404C208C4715537D10AF57B9DC3D4063D92D5 (ParticlesFollowBezier_tDF003DFB056C76AA43A45CE9ED94BE75990BB402* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		int32_t L_2 = ___2_z;
		__this->___m_Z_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BezierSpline_get_gizmoSmoothness_m81789FAD8C21E1A2927F5D92A5FC42AC9793A809_inline (BezierSpline_t44C5C54AFD614AC131715008D004EDC6473242AF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_gizmoSmoothness; }
		int32_t L_0 = __this->___m_gizmoSmoothness_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ExtraDataLerpFunction_Invoke_mCD61DA6844CB8859E1759EDFC1E64DA126226CD9_inline (ExtraDataLerpFunction_t54A89E46FE0645E2E9B42C046F7B62194C79802D* __this, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___0_data1, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 ___1_data2, float ___2_normalizedT, const RuntimeMethod* method) 
{
	typedef ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4 (*FunctionPointerType) (RuntimeObject*, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, ExtraData_t49E6E307CA7555610F69E4D89B8A62041A4EDEE4, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data1, ___1_data2, ___2_normalizedT, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierPoint_get_precedingControlPointLocalPosition_m4B84193C0BAD1AC0321EF1E4CDEDBF178737EB12_inline (BezierPoint_tA90E296DD62C857B3238F2647E01B092C5B71376* __this, const RuntimeMethod* method) 
{
	{
		// return m_precedingControlPointLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_precedingControlPointLocalPosition_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___0_item;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
