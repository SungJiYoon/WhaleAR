#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<NRKernal.CameraTextureFrame>
struct Action_1_t1D991DEB9E8CEF8378D029645520DDD125AC05F4;
// System.Action`1<NRKernal.NRRGBCamTextureYUV/YUVTextureFrame>
struct Action_1_t8C12DC602B0FA129DE3E0237F9533C992EF997CA;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>
struct Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8;
// System.Collections.Generic.Dictionary`2<System.Int64,NRKernal.NRAnchor>
struct Dictionary_2_t44FAAE903350DF539CF9C5AF793EDF22D96613E7;
// System.Func`2<UnityEngine.Resolution,System.Int32>
struct Func_2_t75F55BAEE45D26952892ACA2F6A5A623F6DEDF17;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>
struct KeyCollection_tC934DBF365286E2BFBE67F8F43D2D04D03BC145B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<NRKernal.NRTrackableImage>
struct List_1_t63E39F2087C52764E822A352B7A724C70929D09D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>
struct ValueCollection_t7C650307184B4C1CD8CC464E55970326A8295B1A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>[]
struct EntryU5BU5D_t66CE4B9AF2AAF2464D035CFEC0DCFC5A74A28F6F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// NRKernal.NRTrackableImage[]
struct NRTrackableImageU5BU5D_tFD04995810F6692F9E32D0AE8AF4ECA70BEA589D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// NRKernal.NRExamples.CameraCaptureController
struct CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B;
// NRKernal.CameraModelView
struct CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB;
// NRKernal.NRExamples.CameraYUVCaptureController
struct CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// NRKernal.Record.FrameCaptureContext
struct FrameCaptureContext_tD63FAD052591CBB9A952AB387FE92429D4A4C009;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// NRKernal.GlassesDisconnectEvent
struct GlassesDisconnectEvent_t86F4A575495A67C1879E92E00F07C436144CDBEB;
// NRKernal.GlassesEvent
struct GlassesEvent_tFDB5E6D4A932A25FFEEEB03864C857E7B12D0B80;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// NRKernal.HMDPoseTrackerEvent
struct HMDPoseTrackerEvent_tD2C6C5F97C6BD8A140F24D5499D35E84C8F5C5B2;
// NRKernal.HMDPoseTrackerModeChangeEvent
struct HMDPoseTrackerModeChangeEvent_tC082178D31E673E51D8EA100748C0457436877C5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// NRKernal.NRExamples.MarkerDetecter
struct MarkerDetecter_tF656842A7633D4C26FBA530D4EB4CC331AF4BFD1;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// NRKernal.NRExamples.MockGalleryDataProvider
struct MockGalleryDataProvider_t4C43A3B7FC0610DD642CD9A7674D175A05429CD0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NRKernal.NRExamples.MoveWithCamera
struct MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5;
// NRKernal.NRAnchor
struct NRAnchor_t24121EBF6BF8513439EA7C404ADE5D7369C04051;
// NRKernal.NRGlassesInitErrorTip
struct NRGlassesInitErrorTip_tFC420D43588A89D8DC2ED85E12439EB14CBB845E;
// NRKernal.NRHMDPoseTracker
struct NRHMDPoseTracker_t7114F092C3AF807DE07B932721E8AF86C58F4B87;
// NRKernal.NRExamples.NRHomeMenu
struct NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774;
// NRKernal.NRNotificationListener
struct NRNotificationListener_t35D46BD529D859DBA1CEDD83D582F19CFB0ADBF2;
// NRKernal.Record.NRPreviewer
struct NRPreviewer_t7555A9D1B48033A41678279E0C05042F38C636A5;
// NRKernal.NRProjectConfig
struct NRProjectConfig_t23283F61A4BDFE7FE77A65FBE9313FD1A326B694;
// NRKernal.NRRGBCamTexture
struct NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408;
// NRKernal.NRRGBCamTextureYUV
struct NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8;
// NRKernal.NRRenderer
struct NRRenderer_tFFE244E2AF870595B8B7005CC9345D7717F77759;
// NRKernal.NRSessionBehaviour
struct NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772;
// NRKernal.NRSessionConfig
struct NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835;
// NRKernal.NRSessionManager
struct NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502;
// NRKernal.NRTrackable
struct NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470;
// NRKernal.NRTrackableImage
struct NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683;
// NRKernal.NRTrackableManager
struct NRTrackableManager_t09A0A996375CD3DC059AE60B443CA2A25B0EFBB0;
// NRKernal.NRTrackableSubsystem
struct NRTrackableSubsystem_tDE98F9A79D0FBE7E4B749211CEF86CA5A0D58DB8;
// NRKernal.NRTrackingImageDatabase
struct NRTrackingImageDatabase_t9408768E571554D2B38F6549B20583DE9157900C;
// NRKernal.NRTrackingModeChangedListener
struct NRTrackingModeChangedListener_tA610F28437719E1348A775E58BA50671C61D9AA1;
// NRKernal.NRTrackingModeChangedTip
struct NRTrackingModeChangedTip_t5AA4668A8EA3E0034642D5BD57AB06AC9D0F9C87;
// NRKernal.NRTrackingSubsystem
struct NRTrackingSubsystem_t28EF6774BBF96F0811522A940AA1B5BB528D0301;
// NRKernal.Record.NRVideoCapture
struct NRVideoCapture_t8E809E91726E02D068A218AD65235D78D1B98D26;
// NRKernal.NRVirtualDisplayer
struct NRVirtualDisplayer_tC0A14252E2E40447FC73908B9A53D82C9D1F99A5;
// NRKernal.NativeCameraProxy
struct NativeCameraProxy_tECD73152ABC9B61F263CB0A064551F32896DEB7A;
// NRKernal.NRExamples.NativeGalleryDataProvider
struct NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0;
// NRKernal.NativeInterface
struct NativeInterface_t7DBEE46D1AD1883DC58A847D83171BBB10B5DA03;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// NRKernal.NRExamples.TrackableImageBehaviour
struct TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A;
// NRKernal.NRExamples.TrackingImageExampleController
struct TrackingImageExampleController_t0D673AC674BFB832B01F16D720243ABBD9355ECB;
// NRKernal.NRExamples.TrackingImageVisualizer
struct TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// NRKernal.NRExamples.VideoCapture2LocalExample
struct VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416;
// NRKernal.NRExamples.VideoRecordConfigPanel
struct VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NRKernal.NRSessionManager/SessionError
struct SessionError_t3AE72B8DDA5E1A0A72CF79F59E07AC03C6152870;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// NRKernal.NRExamples.VideoCapture2LocalExample/<>c
struct U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0;
// NRKernal.NRExamples.VideoCapture2LocalExample/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tF125483AA16E2E4296289585DFAADF9D9292A2A3;
// NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30
struct U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t63E39F2087C52764E822A352B7A724C70929D09D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NRInput_t5E9EBC69D5F1D84582A25C7BC58C705FD33CFD99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral137E26C0F28C5F356BE064A5F76AC7D36AC6BED1;
IL2CPP_EXTERN_C String_t* _stringLiteral18CC235DC7862849FEAB435049FB497F9DA2A81E;
IL2CPP_EXTERN_C String_t* _stringLiteral3656DC55AE66EB12AF8F8BA74AD0C920144DEBD8;
IL2CPP_EXTERN_C String_t* _stringLiteral3D049C6C6D58FCE17799FC973198B6A177AB6B56;
IL2CPP_EXTERN_C String_t* _stringLiteral45B9A324C04132C97DF68C67477DB8F073F3FB68;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB761ACD47688CF54641A91A4671C4FA985E114;
IL2CPP_EXTERN_C String_t* _stringLiteral729C6485974988E37C39B69802DC08701A88D89D;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral9672B2524E75F91CF2C0A85020D63C5BC199748A;
IL2CPP_EXTERN_C String_t* _stringLiteralB05FE1CA7E7B1A7BFC7A406BA3922962AC09B888;
IL2CPP_EXTERN_C String_t* _stringLiteralCEDCD9A95C011C797BEE21B61FDFC2308A7B47D7;
IL2CPP_EXTERN_C String_t* _stringLiteralCFC89553EFBC34DB903A51C997078EF04F9B70A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF8994A885EEC9DAB34043C1C7ACD217A719746E5;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBB50768196AD142FBCB6569762696B01211A3E;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9366DE786283DEBA2706AF3608C812DE56090417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC14C0D1D810AB8F637D843041D5C9CD597E6DCA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m04A1EEBFFBBCED050080EA431198D845C9774F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m43BA34C7C3B22C7F1889BD27936A3EB11CD75A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisAudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_m2713481D2E15BBBD79EC6C077616BF67EDCD1E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisBlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_m21150C985E887C2E248E311D09BA005B4903F9E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_m9015238E3C11B8F4769174938C23030C2B4E3A63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BFF6B39EED763109E82880613B39066CFFC0DB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m731A7028F96949CAB76BEEA5B45DFE3B4E60BFD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m506DDFFC34E65F3B9E842EEBEA509751DDFDD6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_mCB07E9603C336B0E9E49F7999E2BFF20B32C6380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A_mB33173E3333304F2620FC080D2E8E63011876521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1D11034314DB5FB5713E86039FFD5970904DBC4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m037187F9B7D3E1027B3CB565F4F44095724E7643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NRHomeMenu_OnCancelButtonClick_mAB6F880E184CC13BEDDE4D786647ACDE90B4300A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NRHomeMenu_OnComfirmButtonClick_m51F7FDE12EFD0D86E369F38046995D54F1D2DD26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01_m5404980C85E6E4E3F93ED3F751DAD13BF7A1DFA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayInsertVideoToGalleryU3Ed__30_System_Collections_IEnumerator_Reset_mF520032C66C275809719E9EF4D60D0C7C6B818F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_0_m8B9BE6DB5530517BB649FA00B04D6F3D9578A385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_1_m8775C717264B3148F4BA9AECDBFA6603C78A9409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_2_m88B653CE0F8EAAE1763B30053D18201016198C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_3_m6E7942F2C3BDA534B0AB8E69FCB1138EAD583512_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>
struct Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t66CE4B9AF2AAF2464D035CFEC0DCFC5A74A28F6F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC934DBF365286E2BFBE67F8F43D2D04D03BC145B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7C650307184B4C1CD8CC464E55970326A8295B1A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<NRKernal.NRTrackableImage>
struct List_1_t63E39F2087C52764E822A352B7A724C70929D09D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NRTrackableImageU5BU5D_tFD04995810F6692F9E32D0AE8AF4ECA70BEA589D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t63E39F2087C52764E822A352B7A724C70929D09D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NRTrackableImageU5BU5D_tFD04995810F6692F9E32D0AE8AF4ECA70BEA589D* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};

// NRKernal.SingleTon`1<NRKernal.NRSessionManager>
struct SingleTon_1_t37F70E0B055C0FB2099F6943BD5CBE7E1A83FF3E  : public RuntimeObject
{
};

struct SingleTon_1_t37F70E0B055C0FB2099F6943BD5CBE7E1A83FF3E_StaticFields
{
	// T NRKernal.SingleTon`1::instane
	NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* ___instane_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// NRKernal.CameraModelView
struct CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB  : public RuntimeObject
{
	// NRKernal.CameraModelView/State NRKernal.CameraModelView::m_State
	int32_t ___m_State_0;
	// System.Int32 NRKernal.CameraModelView::<FrameCount>k__BackingField
	int32_t ___U3CFrameCountU3Ek__BackingField_1;
	// NRKernal.NativeCameraProxy NRKernal.CameraModelView::m_NativeCameraProxy
	NativeCameraProxy_tECD73152ABC9B61F263CB0A064551F32896DEB7A* ___m_NativeCameraProxy_2;
	// NRKernal.CameraImageFormat NRKernal.CameraModelView::<ImageFormat>k__BackingField
	int32_t ___U3CImageFormatU3Ek__BackingField_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NRKernal.NRExamples.MockGalleryDataProvider
struct MockGalleryDataProvider_t4C43A3B7FC0610DD642CD9A7674D175A05429CD0  : public RuntimeObject
{
};

// NRKernal.NRTrackable
struct NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470  : public RuntimeObject
{
	// System.UInt64 NRKernal.NRTrackable::TrackableNativeHandle
	uint64_t ___TrackableNativeHandle_0;
	// NRKernal.NRTrackableSubsystem NRKernal.NRTrackable::m_TrackableSubsystem
	NRTrackableSubsystem_tDE98F9A79D0FBE7E4B749211CEF86CA5A0D58DB8* ___m_TrackableSubsystem_1;
	// NRKernal.TrackableType NRKernal.NRTrackable::trackableType
	int32_t ___trackableType_2;
};

// NRKernal.Record.NRVideoCapture
struct NRVideoCapture_t8E809E91726E02D068A218AD65235D78D1B98D26  : public RuntimeObject
{
	// System.Boolean NRKernal.Record.NRVideoCapture::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_0;
	// NRKernal.Record.FrameCaptureContext NRKernal.Record.NRVideoCapture::m_CaptureContext
	FrameCaptureContext_tD63FAD052591CBB9A952AB387FE92429D4A4C009* ___m_CaptureContext_1;
};

// NRKernal.NRExamples.NativeGalleryDataProvider
struct NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject NRKernal.NRExamples.NativeGalleryDataProvider::m_NativeObject
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_NativeObject_3;
};

struct NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields
{
	// UnityEngine.AndroidJavaClass NRKernal.NRExamples.NativeGalleryDataProvider::m_NativeClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_NativeClass_0;
	// UnityEngine.AndroidJavaObject NRKernal.NRExamples.NativeGalleryDataProvider::m_CurrentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_CurrentActivity_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// NRKernal.NRExamples.VideoCapture2LocalExample/<>c
struct U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0  : public RuntimeObject
{
};

struct U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_StaticFields
{
	// NRKernal.NRExamples.VideoCapture2LocalExample/<>c NRKernal.NRExamples.VideoCapture2LocalExample/<>c::<>9
	U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Resolution,System.Int32> NRKernal.NRExamples.VideoCapture2LocalExample/<>c::<>9__23_0
	Func_2_t75F55BAEE45D26952892ACA2F6A5A623F6DEDF17* ___U3CU3E9__23_0_1;
};

// NRKernal.NRExamples.VideoCapture2LocalExample/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tF125483AA16E2E4296289585DFAADF9D9292A2A3  : public RuntimeObject
{
	// NRKernal.NRExamples.VideoCapture2LocalExample NRKernal.NRExamples.VideoCapture2LocalExample/<>c__DisplayClass19_0::<>4__this
	VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* ___U3CU3E4__this_0;
	// System.Action NRKernal.NRExamples.VideoCapture2LocalExample/<>c__DisplayClass19_0::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_1;
};

// NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30
struct U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774  : public RuntimeObject
{
	// System.Int32 NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NRKernal.NRExamples.VideoCapture2LocalExample NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::<>4__this
	VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* ___U3CU3E4__this_2;
	// System.String NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::originFilePath
	String_t* ___originFilePath_3;
	// System.String NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::displayName
	String_t* ___displayName_4;
	// System.String NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::folderName
	String_t* ___folderName_5;
};

// System.Collections.Generic.List`1/Enumerator<NRKernal.NRTrackableImage>
struct Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t63E39F2087C52764E822A352B7A724C70929D09D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// NRKernal.CameraTextureFrame
struct CameraTextureFrame_t0069B5C6A7FFD0D938FE2CADCCAA6DFB035684A5 
{
	// System.UInt64 NRKernal.CameraTextureFrame::timeStamp
	uint64_t ___timeStamp_0;
	// System.UInt32 NRKernal.CameraTextureFrame::gain
	uint32_t ___gain_1;
	// System.UInt32 NRKernal.CameraTextureFrame::exposureTime
	uint32_t ___exposureTime_2;
	// UnityEngine.Texture NRKernal.CameraTextureFrame::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_3;
};
// Native definition for P/Invoke marshalling of NRKernal.CameraTextureFrame
struct CameraTextureFrame_t0069B5C6A7FFD0D938FE2CADCCAA6DFB035684A5_marshaled_pinvoke
{
	uint64_t ___timeStamp_0;
	uint32_t ___gain_1;
	uint32_t ___exposureTime_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_3;
};
// Native definition for COM marshalling of NRKernal.CameraTextureFrame
struct CameraTextureFrame_t0069B5C6A7FFD0D938FE2CADCCAA6DFB035684A5_marshaled_com
{
	uint64_t ___timeStamp_0;
	uint32_t ___gain_1;
	uint32_t ___exposureTime_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// NRKernal.NRSessionManager
struct NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502  : public SingleTon_1_t37F70E0B055C0FB2099F6943BD5CBE7E1A83FF3E
{
	// NRKernal.LostTrackingReason NRKernal.NRSessionManager::m_LostTrackingReason
	int32_t ___m_LostTrackingReason_1;
	// NRKernal.SessionState NRKernal.NRSessionManager::m_SessionState
	int32_t ___m_SessionState_2;
	// NRKernal.NRSessionBehaviour NRKernal.NRSessionManager::<NRSessionBehaviour>k__BackingField
	NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* ___U3CNRSessionBehaviourU3Ek__BackingField_3;
	// NRKernal.NRHMDPoseTracker NRKernal.NRSessionManager::<NRHMDPoseTracker>k__BackingField
	NRHMDPoseTracker_t7114F092C3AF807DE07B932721E8AF86C58F4B87* ___U3CNRHMDPoseTrackerU3Ek__BackingField_4;
	// NRKernal.NativeInterface NRKernal.NRSessionManager::<NativeAPI>k__BackingField
	NativeInterface_t7DBEE46D1AD1883DC58A847D83171BBB10B5DA03* ___U3CNativeAPIU3Ek__BackingField_5;
	// NRKernal.NRRenderer NRKernal.NRSessionManager::<NRRenderer>k__BackingField
	NRRenderer_tFFE244E2AF870595B8B7005CC9345D7717F77759* ___U3CNRRendererU3Ek__BackingField_6;
	// NRKernal.NRVirtualDisplayer NRKernal.NRSessionManager::<VirtualDisplayer>k__BackingField
	NRVirtualDisplayer_tC0A14252E2E40447FC73908B9A53D82C9D1F99A5* ___U3CVirtualDisplayerU3Ek__BackingField_7;
	// NRKernal.NRTrackingModeChangedListener NRKernal.NRSessionManager::<TrackingLostListener>k__BackingField
	NRTrackingModeChangedListener_tA610F28437719E1348A775E58BA50671C61D9AA1* ___U3CTrackingLostListenerU3Ek__BackingField_8;
	// NRKernal.NRTrackableManager NRKernal.NRSessionManager::<TrackableFactory>k__BackingField
	NRTrackableManager_t09A0A996375CD3DC059AE60B443CA2A25B0EFBB0* ___U3CTrackableFactoryU3Ek__BackingField_9;
	// NRKernal.NRTrackingSubsystem NRKernal.NRSessionManager::m_TrackingSystem
	NRTrackingSubsystem_t28EF6774BBF96F0811522A940AA1B5BB528D0301* ___m_TrackingSystem_16;
	// NRKernal.NRNotificationListener NRKernal.NRSessionManager::<NotificationListener>k__BackingField
	NRNotificationListener_t35D46BD529D859DBA1CEDD83D582F19CFB0ADBF2* ___U3CNotificationListenerU3Ek__BackingField_17;
	// System.Boolean NRKernal.NRSessionManager::m_IsSessionError
	bool ___m_IsSessionError_18;
};

struct NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502_StaticFields
{
	// NRKernal.HMDPoseTrackerEvent NRKernal.NRSessionManager::OnHMDPoseReady
	HMDPoseTrackerEvent_tD2C6C5F97C6BD8A140F24D5499D35E84C8F5C5B2* ___OnHMDPoseReady_10;
	// NRKernal.HMDPoseTrackerEvent NRKernal.NRSessionManager::OnHMDLostTracking
	HMDPoseTrackerEvent_tD2C6C5F97C6BD8A140F24D5499D35E84C8F5C5B2* ___OnHMDLostTracking_11;
	// NRKernal.HMDPoseTrackerModeChangeEvent NRKernal.NRSessionManager::OnChangeTrackingMode
	HMDPoseTrackerModeChangeEvent_tC082178D31E673E51D8EA100748C0457436877C5* ___OnChangeTrackingMode_12;
	// NRKernal.GlassesEvent NRKernal.NRSessionManager::OnGlassesStateChanged
	GlassesEvent_tFDB5E6D4A932A25FFEEEB03864C857E7B12D0B80* ___OnGlassesStateChanged_13;
	// NRKernal.GlassesDisconnectEvent NRKernal.NRSessionManager::OnGlassesDisconnect
	GlassesDisconnectEvent_t86F4A575495A67C1879E92E00F07C436144CDBEB* ___OnGlassesDisconnect_14;
	// NRKernal.NRSessionManager/SessionError NRKernal.NRSessionManager::OnKernalError
	SessionError_t3AE72B8DDA5E1A0A72CF79F59E07AC03C6152870* ___OnKernalError_15;
};

// NRKernal.NRTrackableImage
struct NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683  : public NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_t715C2139580C8BB808262AE7000548F010B12812 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t715C2139580C8BB808262AE7000548F010B12812__padding[112];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t85B339192136BDC32054803CF2364217461C7D5C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t85B339192136BDC32054803CF2364217461C7D5C__padding[24];
	};
};

// NRKernal.NRRGBCamTextureYUV/YUVTextureFrame
struct YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 
{
	// System.UInt64 NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::timeStamp
	uint64_t ___timeStamp_0;
	// System.UInt32 NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::gain
	uint32_t ___gain_1;
	// System.UInt32 NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::exposureTime
	uint32_t ___exposureTime_2;
	// UnityEngine.Texture2D NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::textureY
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureY_3;
	// UnityEngine.Texture2D NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::textureU
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureU_4;
	// UnityEngine.Texture2D NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::textureV
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureV_5;
	// System.Byte[] NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::YBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___YBuf_6;
	// System.Byte[] NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::UBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___UBuf_7;
	// System.Byte[] NRKernal.NRRGBCamTextureYUV/YUVTextureFrame::VBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___VBuf_8;
};
// Native definition for P/Invoke marshalling of NRKernal.NRRGBCamTextureYUV/YUVTextureFrame
struct YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451_marshaled_pinvoke
{
	uint64_t ___timeStamp_0;
	uint32_t ___gain_1;
	uint32_t ___exposureTime_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureY_3;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureU_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureV_5;
	Il2CppSafeArray/*NONE*/* ___YBuf_6;
	Il2CppSafeArray/*NONE*/* ___UBuf_7;
	Il2CppSafeArray/*NONE*/* ___VBuf_8;
};
// Native definition for COM marshalling of NRKernal.NRRGBCamTextureYUV/YUVTextureFrame
struct YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451_marshaled_com
{
	uint64_t ___timeStamp_0;
	uint32_t ___gain_1;
	uint32_t ___exposureTime_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureY_3;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureU_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureV_5;
	Il2CppSafeArray/*NONE*/* ___YBuf_6;
	Il2CppSafeArray/*NONE*/* ___UBuf_7;
	Il2CppSafeArray/*NONE*/* ___VBuf_8;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tC8FF4441043A68AA206EAEEFB52F4112B2A4E2BD  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tC8FF4441043A68AA206EAEEFB52F4112B2A4E2BD_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A
	__StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD
	__StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0
	__StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF
	__StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B6599D21CE74F24FA42D57991D6B0D0C5770322C90AF734EEB36A37F74090137
	__StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 ___B6599D21CE74F24FA42D57991D6B0D0C5770322C90AF734EEB36A37F74090137_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85
	__StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_t715C2139580C8BB808262AE7000548F010B12812 ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206
	__StaticArrayInitTypeSizeU3D12_tD1EDF6CEABEFF5A48A5A4448544BCAFCAD1F5F55 ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
	__StaticArrayInitTypeSizeU3D24_t85B339192136BDC32054803CF2364217461C7D5C ___FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// NRKernal.NRRGBCamTexture
struct NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408  : public CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB
{
	// System.Action`1<NRKernal.CameraTextureFrame> NRKernal.NRRGBCamTexture::OnUpdate
	Action_1_t1D991DEB9E8CEF8378D029645520DDD125AC05F4* ___OnUpdate_4;
	// NRKernal.CameraTextureFrame NRKernal.NRRGBCamTexture::CurrentFrame
	CameraTextureFrame_t0069B5C6A7FFD0D938FE2CADCCAA6DFB035684A5 ___CurrentFrame_5;
	// UnityEngine.Texture2D NRKernal.NRRGBCamTexture::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_6;
	// System.Byte[] NRKernal.NRRGBCamTexture::m_RawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_RawData_7;
};

// NRKernal.NRRGBCamTextureYUV
struct NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8  : public CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB
{
	// System.Action`1<NRKernal.NRRGBCamTextureYUV/YUVTextureFrame> NRKernal.NRRGBCamTextureYUV::OnUpdate
	Action_1_t8C12DC602B0FA129DE3E0237F9533C992EF997CA* ___OnUpdate_4;
	// NRKernal.NRRGBCamTextureYUV/YUVTextureFrame NRKernal.NRRGBCamTextureYUV::m_FrameData
	YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 ___m_FrameData_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// NRKernal.NRSessionConfig
struct NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// NRKernal.TrackablePlaneFindingMode NRKernal.NRSessionConfig::PlaneFindingMode
	int32_t ___PlaneFindingMode_4;
	// NRKernal.TrackableImageFindingMode NRKernal.NRSessionConfig::ImageTrackingMode
	int32_t ___ImageTrackingMode_5;
	// NRKernal.NRTrackingImageDatabase NRKernal.NRSessionConfig::TrackingImageDatabase
	NRTrackingImageDatabase_t9408768E571554D2B38F6549B20583DE9157900C* ___TrackingImageDatabase_6;
	// System.Boolean NRKernal.NRSessionConfig::EnableNotification
	bool ___EnableNotification_7;
	// System.Boolean NRKernal.NRSessionConfig::ForceKillWhileGlassSwitchMode
	bool ___ForceKillWhileGlassSwitchMode_8;
	// NRKernal.NRGlassesInitErrorTip NRKernal.NRSessionConfig::GlassesErrorTipPrefab
	NRGlassesInitErrorTip_tFC420D43588A89D8DC2ED85E12439EB14CBB845E* ___GlassesErrorTipPrefab_9;
	// NRKernal.NRTrackingModeChangedTip NRKernal.NRSessionConfig::TrackingModeChangeTipPrefab
	NRTrackingModeChangedTip_t5AA4668A8EA3E0034642D5BD57AB06AC9D0F9C87* ___TrackingModeChangeTipPrefab_10;
	// System.Boolean NRKernal.NRSessionConfig::<UseMultiThread>k__BackingField
	bool ___U3CUseMultiThreadU3Ek__BackingField_11;
	// NRKernal.NRProjectConfig NRKernal.NRSessionConfig::ProjectConfig
	NRProjectConfig_t23283F61A4BDFE7FE77A65FBE9313FD1A326B694* ___ProjectConfig_12;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NRKernal.SingletonBehaviour`1<NRKernal.NRSessionBehaviour>
struct SingletonBehaviour_1_t1E9464A164F8CF5DB29DF38B01606CF20EED41AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean NRKernal.SingletonBehaviour`1::isDirty
	bool ___isDirty_6;
};

struct SingletonBehaviour_1_t1E9464A164F8CF5DB29DF38B01606CF20EED41AB_StaticFields
{
	// T NRKernal.SingletonBehaviour`1::instance
	NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* ___instance_4;
	// System.Boolean NRKernal.SingletonBehaviour`1::searchForInstance
	bool ___searchForInstance_5;
};

// NRKernal.NRExamples.CameraCaptureController
struct CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage NRKernal.NRExamples.CameraCaptureController::CaptureImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___CaptureImage_4;
	// UnityEngine.UI.Text NRKernal.NRExamples.CameraCaptureController::FrameCount
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___FrameCount_5;
	// NRKernal.NRRGBCamTexture NRKernal.NRExamples.CameraCaptureController::<RGBCamTexture>k__BackingField
	NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* ___U3CRGBCamTextureU3Ek__BackingField_6;
};

// NRKernal.NRExamples.CameraYUVCaptureController
struct CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage NRKernal.NRExamples.CameraYUVCaptureController::CaptureImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___CaptureImage_4;
	// UnityEngine.UI.Text NRKernal.NRExamples.CameraYUVCaptureController::FrameCount
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___FrameCount_5;
	// NRKernal.NRRGBCamTextureYUV NRKernal.NRExamples.CameraYUVCaptureController::<YuvCamTexture>k__BackingField
	NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* ___U3CYuvCamTextureU3Ek__BackingField_6;
};

// NRKernal.NRExamples.MarkerDetecter
struct MarkerDetecter_tF656842A7633D4C26FBA530D4EB4CC331AF4BFD1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject NRKernal.NRExamples.MarkerDetecter::DetectedMarkerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DetectedMarkerPrefab_4;
	// System.Collections.Generic.List`1<NRKernal.NRTrackableImage> NRKernal.NRExamples.MarkerDetecter::m_NewMarkers
	List_1_t63E39F2087C52764E822A352B7A724C70929D09D* ___m_NewMarkers_5;
};

// NRKernal.NRExamples.MoveWithCamera
struct MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single NRKernal.NRExamples.MoveWithCamera::originDistance
	float ___originDistance_4;
	// System.Boolean NRKernal.NRExamples.MoveWithCamera::useRelative
	bool ___useRelative_5;
	// UnityEngine.Transform NRKernal.NRExamples.MoveWithCamera::m_CenterCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CenterCamera_6;
};

// NRKernal.NRAnchor
struct NRAnchor_t24121EBF6BF8513439EA7C404ADE5D7369C04051  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NRKernal.NRTrackable NRKernal.NRAnchor::Trackable
	NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470* ___Trackable_5;
	// System.Boolean NRKernal.NRAnchor::m_IsSessionDestroyed
	bool ___m_IsSessionDestroyed_6;
};

struct NRAnchor_t24121EBF6BF8513439EA7C404ADE5D7369C04051_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int64,NRKernal.NRAnchor> NRKernal.NRAnchor::m_AnchorDict
	Dictionary_2_t44FAAE903350DF539CF9C5AF793EDF22D96613E7* ___m_AnchorDict_4;
};

// NRKernal.NRExamples.NRHomeMenu
struct NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button NRKernal.NRExamples.NRHomeMenu::confirmBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___confirmBtn_4;
	// UnityEngine.UI.Button NRKernal.NRExamples.NRHomeMenu::cancelBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___cancelBtn_5;
};

struct NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields
{
	// NRKernal.NRExamples.NRHomeMenu NRKernal.NRExamples.NRHomeMenu::m_Instance
	NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* ___m_Instance_6;
	// System.String NRKernal.NRExamples.NRHomeMenu::m_MenuPrefabPath
	String_t* ___m_MenuPrefabPath_7;
	// System.Boolean NRKernal.NRExamples.NRHomeMenu::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_8;
	// System.Action NRKernal.NRExamples.NRHomeMenu::OnHomeMenuShow
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnHomeMenuShow_9;
	// System.Action NRKernal.NRExamples.NRHomeMenu::OnHomeMenuHide
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnHomeMenuHide_10;
};

// NRKernal.NRExamples.TrackableImageBehaviour
struct TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NRKernal.NRTrackableImage NRKernal.NRExamples.TrackableImageBehaviour::m_DetectedMarker
	NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* ___m_DetectedMarker_4;
};

// NRKernal.NRExamples.TrackingImageExampleController
struct TrackingImageExampleController_t0D673AC674BFB832B01F16D720243ABBD9355ECB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NRKernal.NRExamples.TrackingImageVisualizer NRKernal.NRExamples.TrackingImageExampleController::TrackingImageVisualizerPrefab
	TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* ___TrackingImageVisualizerPrefab_4;
	// UnityEngine.GameObject NRKernal.NRExamples.TrackingImageExampleController::FitToScanOverlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FitToScanOverlay_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer> NRKernal.NRExamples.TrackingImageExampleController::m_Visualizers
	Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* ___m_Visualizers_6;
	// System.Collections.Generic.List`1<NRKernal.NRTrackableImage> NRKernal.NRExamples.TrackingImageExampleController::m_TempTrackingImages
	List_1_t63E39F2087C52764E822A352B7A724C70929D09D* ___m_TempTrackingImages_7;
};

// NRKernal.NRExamples.TrackingImageVisualizer
struct TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NRKernal.NRTrackableImage NRKernal.NRExamples.TrackingImageVisualizer::Image
	NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* ___Image_4;
	// UnityEngine.GameObject NRKernal.NRExamples.TrackingImageVisualizer::FrameLowerLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FrameLowerLeft_5;
	// UnityEngine.GameObject NRKernal.NRExamples.TrackingImageVisualizer::FrameLowerRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FrameLowerRight_6;
	// UnityEngine.GameObject NRKernal.NRExamples.TrackingImageVisualizer::FrameUpperLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FrameUpperLeft_7;
	// UnityEngine.GameObject NRKernal.NRExamples.TrackingImageVisualizer::FrameUpperRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FrameUpperRight_8;
	// UnityEngine.GameObject NRKernal.NRExamples.TrackingImageVisualizer::Axis
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Axis_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NRKernal.NRExamples.VideoCapture2LocalExample
struct VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button NRKernal.NRExamples.VideoCapture2LocalExample::m_PlayButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_PlayButton_4;
	// NRKernal.Record.NRPreviewer NRKernal.NRExamples.VideoCapture2LocalExample::m_Previewer
	NRPreviewer_t7555A9D1B48033A41678279E0C05042F38C636A5* ___m_Previewer_5;
	// UnityEngine.UI.Slider NRKernal.NRExamples.VideoCapture2LocalExample::m_SliderMic
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___m_SliderMic_6;
	// UnityEngine.UI.Text NRKernal.NRExamples.VideoCapture2LocalExample::m_TextMic
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextMic_7;
	// UnityEngine.UI.Slider NRKernal.NRExamples.VideoCapture2LocalExample::m_SliderApp
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___m_SliderApp_8;
	// UnityEngine.UI.Text NRKernal.NRExamples.VideoCapture2LocalExample::m_TextApp
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextApp_9;
	// NRKernal.Record.BlendMode NRKernal.NRExamples.VideoCapture2LocalExample::blendMode
	int32_t ___blendMode_10;
	// NRKernal.NRExamples.VideoCapture2LocalExample/ResolutionLevel NRKernal.NRExamples.VideoCapture2LocalExample::resolutionLevel
	int32_t ___resolutionLevel_11;
	// UnityEngine.LayerMask NRKernal.NRExamples.VideoCapture2LocalExample::cullingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___cullingMask_12;
	// NRKernal.Record.NRVideoCapture/AudioState NRKernal.NRExamples.VideoCapture2LocalExample::audioState
	int32_t ___audioState_13;
	// System.Boolean NRKernal.NRExamples.VideoCapture2LocalExample::useGreenBackGround
	bool ___useGreenBackGround_14;
	// NRKernal.NRExamples.NativeGalleryDataProvider NRKernal.NRExamples.VideoCapture2LocalExample::galleryDataTool
	NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0* ___galleryDataTool_15;
	// NRKernal.Record.NRVideoCapture NRKernal.NRExamples.VideoCapture2LocalExample::m_VideoCapture
	NRVideoCapture_t8E809E91726E02D068A218AD65235D78D1B98D26* ___m_VideoCapture_16;
};

// NRKernal.NRExamples.VideoRecordConfigPanel
struct VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NRKernal.NRExamples.VideoCapture2LocalExample NRKernal.NRExamples.VideoRecordConfigPanel::m_VideoCapture2LocalExample
	VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* ___m_VideoCapture2LocalExample_4;
	// UnityEngine.UI.Dropdown NRKernal.NRExamples.VideoRecordConfigPanel::m_QualityDropDown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___m_QualityDropDown_5;
	// UnityEngine.UI.Dropdown NRKernal.NRExamples.VideoRecordConfigPanel::m_RenderModeDropDown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___m_RenderModeDropDown_6;
	// UnityEngine.UI.Dropdown NRKernal.NRExamples.VideoRecordConfigPanel::m_AudioStateDropDown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___m_AudioStateDropDown_7;
	// UnityEngine.UI.Toggle NRKernal.NRExamples.VideoRecordConfigPanel::m_UseGreenBGToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___m_UseGreenBGToggle_8;
	// System.Collections.Generic.List`1<System.String> NRKernal.NRExamples.VideoRecordConfigPanel::_ResolutionOptions
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____ResolutionOptions_9;
	// System.Collections.Generic.List`1<System.String> NRKernal.NRExamples.VideoRecordConfigPanel::_RendermodeOptions
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____RendermodeOptions_10;
	// System.Collections.Generic.List`1<System.String> NRKernal.NRExamples.VideoRecordConfigPanel::_AudioStateOptions
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____AudioStateOptions_11;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// NRKernal.NRSessionBehaviour
struct NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772  : public SingletonBehaviour_1_t1E9464A164F8CF5DB29DF38B01606CF20EED41AB
{
	// NRKernal.LogLevel NRKernal.NRSessionBehaviour::LogLevel
	int32_t ___LogLevel_7;
	// NRKernal.NRSessionConfig NRKernal.NRSessionBehaviour::SessionConfig
	NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* ___SessionConfig_8;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,TEnum&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCDE088AE8ED4EA53AF329E4CB920F6C6BF4A0E22_gshared (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void NRKernal.NRFrame::GetTrackables<System.Object>(System.Collections.Generic.List`1<T>,NRKernal.NRTrackableQueryFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRFrame_GetTrackables_TisRuntimeObject_mE376F859A17A4C4BD0DBBB6AA83DA9AC883B7081_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___trackables0, int32_t ___filter1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T NRKernal.SingleTon`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleTon_1_get_Instance_m524ACC28485889A4ABB0CDBE2BBE87F1B61FF115_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRDebugger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRDebugger_Info_mDA6D0CD5EF2E684E60C11540779E5EEE4608E9F4 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRDebugger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRDebugger_Error_m506DF1652A674BF67BD126A3CBEB05E6274B3A86 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FBDB5DE8A17F8A30229583F5CD3E276CE3BA141 (U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24 (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample::InsertVideoToGallery(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture2LocalExample_InsertVideoToGallery_m90695885F8FB8DB55B2C956D44EA3839EC25D479 (VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* __this, String_t* ___originFilePath0, String_t* ___displayName1, String_t* ___folderName2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::InitConfigPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel_InitConfigPanel_mECF8FCABCD4E32C0A05AAD90FDC6776E721543F4 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___options0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean System.Enum::TryParse<NRKernal.NRExamples.VideoCapture2LocalExample/ResolutionLevel>(System.String,TEnum&)
inline bool Enum_TryParse_TisResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_m9015238E3C11B8F4769174938C23030C2B4E3A63 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCDE088AE8ED4EA53AF329E4CB920F6C6BF4A0E22_gshared)(___value0, ___result1, method);
}
// System.Boolean System.Enum::TryParse<NRKernal.Record.BlendMode>(System.String,TEnum&)
inline bool Enum_TryParse_TisBlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_m21150C985E887C2E248E311D09BA005B4903F9E6 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCDE088AE8ED4EA53AF329E4CB920F6C6BF4A0E22_gshared)(___value0, ___result1, method);
}
// System.Boolean System.Enum::TryParse<NRKernal.Record.NRVideoCapture/AudioState>(System.String,TEnum&)
inline bool Enum_TryParse_TisAudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_m2713481D2E15BBBD79EC6C077616BF67EDCD1E43 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCDE088AE8ED4EA53AF329E4CB920F6C6BF4A0E22_gshared)(___value0, ___result1, method);
}
// System.Void NRKernal.NRRGBCamTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRRGBCamTexture__ctor_mC344B654132DE3AADC3B0406EBCBD4D95A85A905 (NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.CameraCaptureController::set_RGBCamTexture(NRKernal.NRRGBCamTexture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraCaptureController_set_RGBCamTexture_m7E2AF4F7AC193E792EF128C104B38B3FE9979B26_inline (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* ___value0, const RuntimeMethod* method) ;
// NRKernal.NRRGBCamTexture NRKernal.NRExamples.CameraCaptureController::get_RGBCamTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NRKernal.NRRGBCamTexture::GetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NRRGBCamTexture_GetTexture_m71EB6EE557CDD263A1791650A9AE87105841C8E9 (NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void NRKernal.CameraModelView::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModelView_Play_m632631E656BEA93A27A461FC4E89A667EF3E32FE (CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB* __this, const RuntimeMethod* method) ;
// System.Int32 NRKernal.CameraModelView::get_FrameCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraModelView_get_FrameCount_mD415804FD2365FA8A29ED346DDD55BF83370831B_inline (CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.CameraModelView::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModelView_Pause_m698F1C7E1EAD87F1BDCD531FCD8B98D2FBF545E0 (CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.CameraModelView::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModelView_Stop_mAA72D79E403EB1529D93069CF2B62DEC6E7EAB19 (CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRRGBCamTextureYUV::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRRGBCamTextureYUV__ctor_mC88E9443280CDF01E9E826BF9F823113E11FB0BE (NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::set_YuvCamTexture(NRKernal.NRRGBCamTextureYUV)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraYUVCaptureController_set_YuvCamTexture_m13394A6A364DDFFE7A684F7A22CE768468AA7237_inline (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* ___value0, const RuntimeMethod* method) ;
// NRKernal.NRRGBCamTextureYUV NRKernal.NRExamples.CameraYUVCaptureController::get_YuvCamTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) ;
// NRKernal.NRRGBCamTextureYUV/YUVTextureFrame NRKernal.NRRGBCamTextureYUV::GetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 NRRGBCamTextureYUV_GetTexture_m003812C63E13C7081521E5A3D0E53AC9A6A96773 (NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::BindYuvTexture(NRKernal.NRRGBCamTextureYUV/YUVTextureFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_BindYuvTexture_m98C3230ED5B6562C1F62EC8C3EC320831B00CD27 (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 ___frame0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// UnityEngine.AndroidJavaObject NRKernal.NRExamples.NativeGalleryDataProvider::get_CurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGalleryDataProvider_get_CurrentActivity_m50672702D49D795A5EA396781EC5551E8F10F822 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject NRKernal.NRExamples.NativeGalleryDataProvider::InsertImageData(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGalleryDataProvider_InsertImageData_m17932C3422655A46A3DFA64C89EDB3111B7FBEFA (NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___displayName1, String_t* ___folderName2, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void NRKernal.NRFrame::GetTrackables<NRKernal.NRTrackableImage>(System.Collections.Generic.List`1<T>,NRKernal.NRTrackableQueryFilter)
inline void NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959 (List_1_t63E39F2087C52764E822A352B7A724C70929D09D* ___trackables0, int32_t ___filter1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63E39F2087C52764E822A352B7A724C70929D09D*, int32_t, const RuntimeMethod*))NRFrame_GetTrackables_TisRuntimeObject_mE376F859A17A4C4BD0DBBB6AA83DA9AC883B7081_gshared)(___trackables0, ___filter1, method);
}
// T System.Collections.Generic.List`1<NRKernal.NRTrackableImage>::get_Item(System.Int32)
inline NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6 (List_1_t63E39F2087C52764E822A352B7A724C70929D09D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* (*) (List_1_t63E39F2087C52764E822A352B7A724C70929D09D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F (uint64_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// NRKernal.NRAnchor NRKernal.NRTrackable::CreateAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NRAnchor_t24121EBF6BF8513439EA7C404ADE5D7369C04051* NRTrackable_CreateAnchor_m4AB98C6F515AA117A53F0F9E713A9A3523E3262B (NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<NRKernal.NRExamples.TrackableImageBehaviour>()
inline TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* GameObject_GetComponent_TisTrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A_mB33173E3333304F2620FC080D2E8E63011876521 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void NRKernal.NRExamples.TrackableImageBehaviour::Initialize(NRKernal.NRTrackableImage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableImageBehaviour_Initialize_m312E86EEB7C203764A76EBFBFFAFD91214440F1D_inline (TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* __this, NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* ___marker0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<NRKernal.NRTrackableImage>::get_Count()
inline int32_t List_1_get_Count_m037187F9B7D3E1027B3CB565F4F44095724E7643_inline (List_1_t63E39F2087C52764E822A352B7A724C70929D09D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63E39F2087C52764E822A352B7A724C70929D09D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T NRKernal.SingleTon`1<NRKernal.NRSessionManager>::get_Instance()
inline NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1 (const RuntimeMethod* method)
{
	return ((  NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* (*) (const RuntimeMethod*))SingleTon_1_get_Instance_m524ACC28485889A4ABB0CDBE2BBE87F1B61FF115_gshared)(method);
}
// NRKernal.NRSessionBehaviour NRKernal.NRSessionManager::get_NRSessionBehaviour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* NRSessionManager_get_NRSessionBehaviour_mB908AC2A7C4CAF8989F2FD1EEDF566438FEBA0D8_inline (NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRSessionManager::SetConfiguration(NRKernal.NRSessionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRSessionManager_SetConfiguration_mCA8B85695D4C8789804E2C9833006E246120CC1D (NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* __this, NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* ___config0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NRKernal.NRTrackableImage>::.ctor()
inline void List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED (List_1_t63E39F2087C52764E822A352B7A724C70929D09D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63E39F2087C52764E822A352B7A724C70929D09D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform NRKernal.NRSessionManager::get_CenterCameraAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* NRSessionManager_get_CenterCameraAnchor_m84D60226021341E9AF4B63532D2E44CE938FC99D (NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform NRKernal.NRExamples.MoveWithCamera::get_CenterCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF (MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// NRKernal.TrackingState NRKernal.NRTrackable::GetTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NRTrackable_GetTrackingState_m86896F81EEA518C5825CBB6F42A986F0C02781A9 (NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 NRKernal.NRTrackableImage::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NRTrackableImage_get_Size_m5119E7478C9FDAD013F0A73B7EE52A7E81C8B7CE (NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// NRKernal.SessionState NRKernal.NRFrame::get_SessionStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NRFrame_get_SessionStatus_m7140AB9C5D6735C0822E060D3E882F9EB9FED7F2 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<NRKernal.NRTrackableImage>::GetEnumerator()
inline Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D List_1_GetEnumerator_m1D11034314DB5FB5713E86039FFD5970904DBC4D (List_1_t63E39F2087C52764E822A352B7A724C70929D09D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D (*) (List_1_t63E39F2087C52764E822A352B7A724C70929D09D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<NRKernal.NRTrackableImage>::Dispose()
inline void Enumerator_Dispose_m9BFF6B39EED763109E82880613B39066CFFC0DB3 (Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<NRKernal.NRTrackableImage>::get_Current()
inline NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* Enumerator_get_Current_m506DDFFC34E65F3B9E842EEBEA509751DDFDD6D7_inline (Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D* __this, const RuntimeMethod* method)
{
	return ((  NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* (*) (Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 NRKernal.NRTrackable::GetDataBaseIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NRTrackable_GetDataBaseIndex_m6AC384E24FB19E3075A207BCC61189F4E5C589D1 (NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m04A1EEBFFBBCED050080EA431198D845C9774F69 (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* __this, int32_t ___key0, TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8*, int32_t, TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.Object::Instantiate<NRKernal.NRExamples.TrackingImageVisualizer>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* Object_Instantiate_TisTrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01_m5404980C85E6E4E3F93ED3F751DAD13BF7A1DFA3 (TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* (*) (TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>::Add(TKey,TValue)
inline void Dictionary_2_Add_m9366DE786283DEBA2706AF3608C812DE56090417 (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* __this, int32_t ___key0, TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8*, int32_t, TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>::Remove(TKey)
inline bool Dictionary_2_Remove_mC14C0D1D810AB8F637D843041D5C9CD597E6DCA8 (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<NRKernal.NRTrackableImage>::MoveNext()
inline bool Enumerator_MoveNext_m731A7028F96949CAB76BEEA5B45DFE3B4E60BFD6 (Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NRKernal.NRExamples.TrackingImageVisualizer>::.ctor()
inline void Dictionary_2__ctor_m43BA34C7C3B22C7F1889BD27936A3EB11CD75A90 (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Single NRKernal.NRTrackableImage::get_ExtentX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NRTrackableImage_get_ExtentX_mE93248E261BD7CDCEF1DCE8EA3BFE9015A8D6CFE (NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* __this, const RuntimeMethod* method) ;
// System.Single NRKernal.NRTrackableImage::get_ExtentZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NRTrackableImage_get_ExtentZ_mA4C727B0D6D986E52D8F6CB77400525480A8EACC (NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform NRKernal.NRInput::get_CameraCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* NRInput_get_CameraCenter_m77047248E1ACC3DA9BB32659D915B22E15525AE1 (const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Boolean NRKernal.NRExamples.NRHomeMenu::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NRHomeMenu_get_IsShowing_mEC9B254CA4341B9331E8B4CCE1D2E687229AB475_inline (const RuntimeMethod* method) ;
// NRKernal.RaycastModeEnum NRKernal.NRInput::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NRInput_get_RaycastMode_m7F669890D59747E8E9856B47B88C7141D18B7646 (const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.NRHomeMenu::FollowCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_FollowCamera_m035AAF8747DD827C22C64DE53BB66AF45E5A0154 (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.NRHomeMenu::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_Hide_mB0BA86090F0B7F24B180FA5A4D361D54DFBA5B86 (const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.AppManager::QuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppManager_QuitApplication_m8491A1121298D06842A8F0525E4167821280D5D7 (bool ___backToMRSpace0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform NRKernal.NRExamples.NRHomeMenu::get_CameraCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* NRHomeMenu_get_CameraCenter_m7E9504C4D1ADCAAD8A46787189154847470E1710 (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<NRKernal.NRExamples.NRHomeMenu>()
inline NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* GameObject_GetComponent_TisNRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_mCB07E9603C336B0E9E49F7999E2BFF20B32C6380 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.NRHomeMenu::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_Show_m5FDFEE9948E7F72083931B6769B3D501AB48B2BD (const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.NRHomeMenu::CreateMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_CreateMenu_m0391A3EC07470A343C2B6A460A0945E3C8897CEE (const RuntimeMethod* method) ;
// System.Void NRKernal.NRExamples.NRHomeMenu::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NRHomeMenu_set_IsShowing_m00FBDD232F5AED6CCEF3DBFA789B29E1898668EB_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m1B40DEA412F9A3D49A0927A227EEB59552325CDA (U3CU3Ec__DisplayClass19_0_tF125483AA16E2E4296289585DFAADF9D9292A2A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<>c__DisplayClass19_0::<CreateVideoCapture>b__0(NRKernal.Record.NRVideoCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CCreateVideoCaptureU3Eb__0_m6BF1D9791460F6F4072442DC9266DADBBBC09358 (U3CU3Ec__DisplayClass19_0_tF125483AA16E2E4296289585DFAADF9D9292A2A3* __this, NRVideoCapture_t8E809E91726E02D068A218AD65235D78D1B98D26* ___videoCapture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45B9A324C04132C97DF68C67477DB8F073F3FB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEDCD9A95C011C797BEE21B61FDFC2308A7B47D7);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		// NRDebugger.Info("Created VideoCapture Instance!");
		il2cpp_codegen_runtime_class_init_inline(NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		NRDebugger_Info_mDA6D0CD5EF2E684E60C11540779E5EEE4608E9F4(_stringLiteral45B9A324C04132C97DF68C67477DB8F073F3FB68, NULL);
		// if (videoCapture != null)
		NRVideoCapture_t8E809E91726E02D068A218AD65235D78D1B98D26* L_0 = ___videoCapture0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// m_VideoCapture = videoCapture;
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_1 = __this->___U3CU3E4__this_0;
		NRVideoCapture_t8E809E91726E02D068A218AD65235D78D1B98D26* L_2 = ___videoCapture0;
		NullCheck(L_1);
		L_1->___m_VideoCapture_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___m_VideoCapture_16), (void*)L_2);
		// callback?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___callback_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
		return;
	}

IL_002a:
	{
		// NRDebugger.Error("Failed to create VideoCapture Instance!");
		il2cpp_codegen_runtime_class_init_inline(NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		NRDebugger_Error_m506DF1652A674BF67BD126A3CBEB05E6274B3A86(_stringLiteralCEDCD9A95C011C797BEE21B61FDFC2308A7B47D7, NULL);
		// });
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
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE340115A08FFDCF1C86E0EC7AEBDD6887175AD70 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0* L_0 = (U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0*)il2cpp_codegen_object_new(U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8FBDB5DE8A17F8A30229583F5CD3E276CE3BA141(L_0, NULL);
		((U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FBDB5DE8A17F8A30229583F5CD3E276CE3BA141 (U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 NRKernal.NRExamples.VideoCapture2LocalExample/<>c::<GetResolutionByLevel>b__23_0(UnityEngine.Resolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetResolutionByLevelU3Eb__23_0_mEFD28F209F5A50F1805F96621D03DE2A785BA2DE (U3CU3Ec_t2334D3AEDB91F8DE4F4D21781C9E6B6DFCCEFCF0* __this, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 ___res0, const RuntimeMethod* method) 
{
	{
		// var resolutions = NRVideoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height);
		int32_t L_0;
		L_0 = Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24((&___res0), NULL);
		int32_t L_1;
		L_1 = Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B((&___res0), NULL);
		return ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
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
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayInsertVideoToGalleryU3Ed__30__ctor_m684E8A094EB25469BFEEFE1C87FAC18FE7508D6C (U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayInsertVideoToGalleryU3Ed__30_System_IDisposable_Dispose_m93030B5048CB7D34D3B439C3745B97BFD9FA64A8 (U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayInsertVideoToGalleryU3Ed__30_MoveNext_m7EEEFC38871C5654DDDD0C676B376E4FA8E83724 (U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// InsertVideoToGallery(originFilePath, displayName, folderName);
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_5 = V_1;
		String_t* L_6 = __this->___originFilePath_3;
		String_t* L_7 = __this->___displayName_4;
		String_t* L_8 = __this->___folderName_5;
		NullCheck(L_5);
		VideoCapture2LocalExample_InsertVideoToGallery_m90695885F8FB8DB55B2C956D44EA3839EC25D479(L_5, L_6, L_7, L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayInsertVideoToGalleryU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE00B84AC2DA4BBC31CB6AEE18F65C75DF3D66521 (U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayInsertVideoToGalleryU3Ed__30_System_Collections_IEnumerator_Reset_mF520032C66C275809719E9EF4D60D0C7C6B818F5 (U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayInsertVideoToGalleryU3Ed__30_System_Collections_IEnumerator_Reset_mF520032C66C275809719E9EF4D60D0C7C6B818F5_RuntimeMethod_var)));
	}
}
// System.Object NRKernal.NRExamples.VideoCapture2LocalExample/<DelayInsertVideoToGallery>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayInsertVideoToGalleryU3Ed__30_System_Collections_IEnumerator_get_Current_m990BFD8772FB767F4C86E7976F30A93DB2DEDA4E (U3CDelayInsertVideoToGalleryU3Ed__30_t8CD38DA467163C7625BD00DE2E39DBB6B6AD3774* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel_Start_m7F9C7528CC1A154B8DF77251724541308C66AAD1 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, const RuntimeMethod* method) 
{
	{
		// InitConfigPanel();
		VideoRecordConfigPanel_InitConfigPanel_mECF8FCABCD4E32C0A05AAD90FDC6776E721543F4(__this, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::InitConfigPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel_InitConfigPanel_mECF8FCABCD4E32C0A05AAD90FDC6776E721543F4 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_0_m8B9BE6DB5530517BB649FA00B04D6F3D9578A385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_1_m8775C717264B3148F4BA9AECDBFA6603C78A9409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_2_m88B653CE0F8EAAE1763B30053D18201016198C22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_3_m6E7942F2C3BDA534B0AB8E69FCB1138EAD583512_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// m_QualityDropDown.options.Clear();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___m_QualityDropDown_5;
		NullCheck(L_0);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_1;
		L_1 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_0, NULL);
		NullCheck(L_1);
		List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline(L_1, List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		// m_QualityDropDown.AddOptions(_ResolutionOptions);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___m_QualityDropDown_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->____ResolutionOptions_9;
		NullCheck(L_2);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_2, L_3, NULL);
		// int default_quality_index = 0;
		V_0 = 0;
		// for (int i = 0; i < _ResolutionOptions.Count; i++)
		V_3 = 0;
		goto IL_0056;
	}

IL_0027:
	{
		// if (_ResolutionOptions[i].Equals(m_VideoCapture2LocalExample.resolutionLevel.ToString()))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->____ResolutionOptions_9;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_7 = __this->___m_VideoCapture2LocalExample_4;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___resolutionLevel_11);
		Il2CppFakeBox<int32_t> L_9(ResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_il2cpp_TypeInfo_var, L_8);
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		NullCheck(L_6);
		bool L_11;
		L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, L_10, NULL);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		// default_quality_index = i;
		int32_t L_12 = V_3;
		V_0 = L_12;
	}

IL_0052:
	{
		// for (int i = 0; i < _ResolutionOptions.Count; i++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0056:
	{
		// for (int i = 0; i < _ResolutionOptions.Count; i++)
		int32_t L_14 = V_3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->____ResolutionOptions_9;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_15, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0027;
		}
	}
	{
		// m_QualityDropDown.value = default_quality_index;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_17 = __this->___m_QualityDropDown_5;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_17, L_18, NULL);
		// m_QualityDropDown.onValueChanged.AddListener((index) =>
		// {
		//     Enum.TryParse<VideoCapture2LocalExample.ResolutionLevel>(_ResolutionOptions[index],
		//         out m_VideoCapture2LocalExample.resolutionLevel);
		// });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_19 = __this->___m_QualityDropDown_5;
		NullCheck(L_19);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_20;
		L_20 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline(L_19, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_21 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_21, __this, (intptr_t)((void*)VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_0_m8B9BE6DB5530517BB649FA00B04D6F3D9578A385_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_20, L_21, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// m_RenderModeDropDown.options.Clear();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_22 = __this->___m_RenderModeDropDown_6;
		NullCheck(L_22);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_23;
		L_23 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_22, NULL);
		NullCheck(L_23);
		List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline(L_23, List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		// m_RenderModeDropDown.AddOptions(_RendermodeOptions);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_24 = __this->___m_RenderModeDropDown_6;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = __this->____RendermodeOptions_10;
		NullCheck(L_24);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_24, L_25, NULL);
		// int default_blendmode_index = 0;
		V_1 = 0;
		// for (int i = 0; i < _RendermodeOptions.Count; i++)
		V_4 = 0;
		goto IL_00e7;
	}

IL_00b4:
	{
		// if (_RendermodeOptions[i].Equals(m_VideoCapture2LocalExample.blendMode.ToString()))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = __this->____RendermodeOptions_10;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_26, L_27, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_29 = __this->___m_VideoCapture2LocalExample_4;
		NullCheck(L_29);
		int32_t* L_30 = (&L_29->___blendMode_10);
		Il2CppFakeBox<int32_t> L_31(BlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_il2cpp_TypeInfo_var, L_30);
		String_t* L_32;
		L_32 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_31), NULL);
		NullCheck(L_28);
		bool L_33;
		L_33 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_28, L_32, NULL);
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		// default_blendmode_index = i;
		int32_t L_34 = V_4;
		V_1 = L_34;
	}

IL_00e1:
	{
		// for (int i = 0; i < _RendermodeOptions.Count; i++)
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00e7:
	{
		// for (int i = 0; i < _RendermodeOptions.Count; i++)
		int32_t L_36 = V_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = __this->____RendermodeOptions_10;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_37, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_00b4;
		}
	}
	{
		// m_RenderModeDropDown.value = default_blendmode_index;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_39 = __this->___m_RenderModeDropDown_6;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_39, L_40, NULL);
		// m_RenderModeDropDown.onValueChanged.AddListener((index) =>
		// {
		//     Enum.TryParse<BlendMode>(_RendermodeOptions[index],
		//         out m_VideoCapture2LocalExample.blendMode);
		// });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_41 = __this->___m_RenderModeDropDown_6;
		NullCheck(L_41);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_42;
		L_42 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline(L_41, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_43 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_43, __this, (intptr_t)((void*)VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_1_m8775C717264B3148F4BA9AECDBFA6603C78A9409_RuntimeMethod_var), NULL);
		NullCheck(L_42);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_42, L_43, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// m_AudioStateDropDown.options.Clear();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_44 = __this->___m_AudioStateDropDown_7;
		NullCheck(L_44);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_45;
		L_45 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_44, NULL);
		NullCheck(L_45);
		List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline(L_45, List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		// m_AudioStateDropDown.AddOptions(_AudioStateOptions);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_46 = __this->___m_AudioStateDropDown_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_47 = __this->____AudioStateOptions_11;
		NullCheck(L_46);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_46, L_47, NULL);
		// int default_audiostate_index = 0;
		V_2 = 0;
		// for (int i = 0; i < _AudioStateOptions.Count; i++)
		V_5 = 0;
		goto IL_0179;
	}

IL_0146:
	{
		// if (_AudioStateOptions[i].Equals(m_VideoCapture2LocalExample.audioState.ToString()))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = __this->____AudioStateOptions_11;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		String_t* L_50;
		L_50 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_48, L_49, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_51 = __this->___m_VideoCapture2LocalExample_4;
		NullCheck(L_51);
		int32_t* L_52 = (&L_51->___audioState_13);
		Il2CppFakeBox<int32_t> L_53(AudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_il2cpp_TypeInfo_var, L_52);
		String_t* L_54;
		L_54 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_53), NULL);
		NullCheck(L_50);
		bool L_55;
		L_55 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_50, L_54, NULL);
		if (!L_55)
		{
			goto IL_0173;
		}
	}
	{
		// default_audiostate_index = i;
		int32_t L_56 = V_5;
		V_2 = L_56;
	}

IL_0173:
	{
		// for (int i = 0; i < _AudioStateOptions.Count; i++)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0179:
	{
		// for (int i = 0; i < _AudioStateOptions.Count; i++)
		int32_t L_58 = V_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_59 = __this->____AudioStateOptions_11;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_59, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_0146;
		}
	}
	{
		// m_AudioStateDropDown.value = default_audiostate_index;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_61 = __this->___m_AudioStateDropDown_7;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_61, L_62, NULL);
		// m_AudioStateDropDown.onValueChanged.AddListener((index) =>
		// {
		//     Enum.TryParse<NRVideoCapture.AudioState>(_AudioStateOptions[index],
		//         out m_VideoCapture2LocalExample.audioState);
		// });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_63 = __this->___m_AudioStateDropDown_7;
		NullCheck(L_63);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_64;
		L_64 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline(L_63, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_65 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_65, __this, (intptr_t)((void*)VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_2_m88B653CE0F8EAAE1763B30053D18201016198C22_RuntimeMethod_var), NULL);
		NullCheck(L_64);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_64, L_65, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// m_UseGreenBGToggle.isOn = m_VideoCapture2LocalExample.useGreenBackGround;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_66 = __this->___m_UseGreenBGToggle_8;
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_67 = __this->___m_VideoCapture2LocalExample_4;
		NullCheck(L_67);
		bool L_68 = L_67->___useGreenBackGround_14;
		NullCheck(L_66);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_66, L_68, NULL);
		// m_UseGreenBGToggle.onValueChanged.AddListener((val) =>
		// {
		//     m_VideoCapture2LocalExample.useGreenBackGround = val;
		// });
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_69 = __this->___m_UseGreenBGToggle_8;
		NullCheck(L_69);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_70 = L_69->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_71 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_71, __this, (intptr_t)((void*)VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_3_m6E7942F2C3BDA534B0AB8E69FCB1138EAD583512_RuntimeMethod_var), NULL);
		NullCheck(L_70);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_70, L_71, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel__ctor_m107A31B5BFFEF184678F0944CCC4EAD515F01395 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// List<string> _ResolutionOptions = new List<string>() {
		//     VideoCapture2LocalExample.ResolutionLevel.High.ToString(),
		//     VideoCapture2LocalExample.ResolutionLevel.Middle.ToString(),
		//     VideoCapture2LocalExample.ResolutionLevel.Low.ToString()
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_2(ResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_1;
		V_0 = 1;
		Il2CppFakeBox<int32_t> L_5(ResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_4;
		V_0 = 2;
		Il2CppFakeBox<int32_t> L_8(ResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->____ResolutionOptions_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ResolutionOptions_9), (void*)L_7);
		// List<string> _RendermodeOptions = new List<string>() {
		//     BlendMode.Blend.ToString(),
		//     BlendMode.RGBOnly.ToString(),
		//     BlendMode.VirtualOnly.ToString()
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_10, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = L_10;
		V_1 = 0;
		Il2CppFakeBox<int32_t> L_12(BlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_13;
		L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_11;
		V_1 = 1;
		Il2CppFakeBox<int32_t> L_15(BlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_16;
		L_16 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_15), NULL);
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_14;
		V_1 = 2;
		Il2CppFakeBox<int32_t> L_18(BlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_19;
		L_19 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_18), NULL);
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, L_19, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->____RendermodeOptions_10 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____RendermodeOptions_10), (void*)L_17);
		// List<string> _AudioStateOptions = new List<string>() {
		//     NRVideoCapture.AudioState.MicAudio.ToString(),
		//     NRVideoCapture.AudioState.ApplicationAudio.ToString(),
		//     NRVideoCapture.AudioState.ApplicationAndMicAudio.ToString()
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_20, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = L_20;
		V_2 = 0;
		Il2CppFakeBox<int32_t> L_22(AudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_23;
		L_23 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_22), NULL);
		NullCheck(L_21);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_21, L_23, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = L_21;
		V_2 = 1;
		Il2CppFakeBox<int32_t> L_25(AudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		NullCheck(L_24);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_24, L_26, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = L_24;
		V_2 = 2;
		Il2CppFakeBox<int32_t> L_28(AudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_29;
		L_29 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_28), NULL);
		NullCheck(L_27);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_27, L_29, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->____AudioStateOptions_11 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____AudioStateOptions_11), (void*)L_27);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::<InitConfigPanel>b__9_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_0_m8B9BE6DB5530517BB649FA00B04D6F3D9578A385 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_m9015238E3C11B8F4769174938C23030C2B4E3A63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enum.TryParse<VideoCapture2LocalExample.ResolutionLevel>(_ResolutionOptions[index],
		//     out m_VideoCapture2LocalExample.resolutionLevel);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____ResolutionOptions_9;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_0, L_1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_3 = __this->___m_VideoCapture2LocalExample_4;
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___resolutionLevel_11);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_TryParse_TisResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_m9015238E3C11B8F4769174938C23030C2B4E3A63(L_2, L_4, Enum_TryParse_TisResolutionLevel_t073E1A0D6779C9ECE954EE44584E254F5013F22B_m9015238E3C11B8F4769174938C23030C2B4E3A63_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::<InitConfigPanel>b__9_1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_1_m8775C717264B3148F4BA9AECDBFA6603C78A9409 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisBlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_m21150C985E887C2E248E311D09BA005B4903F9E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enum.TryParse<BlendMode>(_RendermodeOptions[index],
		//     out m_VideoCapture2LocalExample.blendMode);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____RendermodeOptions_10;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_0, L_1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_3 = __this->___m_VideoCapture2LocalExample_4;
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___blendMode_10);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_TryParse_TisBlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_m21150C985E887C2E248E311D09BA005B4903F9E6(L_2, L_4, Enum_TryParse_TisBlendMode_tC8EDA86B5DC4D2C25094968CD9FCB920B247E410_m21150C985E887C2E248E311D09BA005B4903F9E6_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::<InitConfigPanel>b__9_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_2_m88B653CE0F8EAAE1763B30053D18201016198C22 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisAudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_m2713481D2E15BBBD79EC6C077616BF67EDCD1E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enum.TryParse<NRVideoCapture.AudioState>(_AudioStateOptions[index],
		//     out m_VideoCapture2LocalExample.audioState);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____AudioStateOptions_11;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_0, L_1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_3 = __this->___m_VideoCapture2LocalExample_4;
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___audioState_13);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_TryParse_TisAudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_m2713481D2E15BBBD79EC6C077616BF67EDCD1E43(L_2, L_4, Enum_TryParse_TisAudioState_t042DF157A6A91CBB21F5CE34095F7B8E8D82C1E5_m2713481D2E15BBBD79EC6C077616BF67EDCD1E43_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void NRKernal.NRExamples.VideoRecordConfigPanel::<InitConfigPanel>b__9_3(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRecordConfigPanel_U3CInitConfigPanelU3Eb__9_3_m6E7942F2C3BDA534B0AB8E69FCB1138EAD583512 (VideoRecordConfigPanel_t42C281193E9324190670DB83248BD31EA789B3BC* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// m_VideoCapture2LocalExample.useGreenBackGround = val;
		VideoCapture2LocalExample_t18876C57103465FF698980CA1E14529C06548416* L_0 = __this->___m_VideoCapture2LocalExample_4;
		bool L_1 = ___val0;
		NullCheck(L_0);
		L_0->___useGreenBackGround_14 = L_1;
		// });
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
// NRKernal.NRRGBCamTexture NRKernal.NRExamples.CameraCaptureController::get_RGBCamTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTexture RGBCamTexture { get; set; }
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0 = __this->___U3CRGBCamTextureU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::set_RGBCamTexture(NRKernal.NRRGBCamTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController_set_RGBCamTexture_m7E2AF4F7AC193E792EF128C104B38B3FE9979B26 (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* ___value0, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTexture RGBCamTexture { get; set; }
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0 = ___value0;
		__this->___U3CRGBCamTextureU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRGBCamTextureU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController_Start_m7A4A768567171E7293163AA28C9471B0534E4AF1 (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RGBCamTexture = new NRRGBCamTexture();
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0 = (NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408*)il2cpp_codegen_object_new(NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NRRGBCamTexture__ctor_mC344B654132DE3AADC3B0406EBCBD4D95A85A905(L_0, NULL);
		CameraCaptureController_set_RGBCamTexture_m7E2AF4F7AC193E792EF128C104B38B3FE9979B26_inline(__this, L_0, NULL);
		// CaptureImage.texture = RGBCamTexture.GetTexture();
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_1 = __this->___CaptureImage_4;
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_2;
		L_2 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NullCheck(L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = NRRGBCamTexture_GetTexture_m71EB6EE557CDD263A1791650A9AE87105841C8E9(L_2, NULL);
		NullCheck(L_1);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_1, L_3, NULL);
		// RGBCamTexture.Play();
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_4;
		L_4 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NullCheck(L_4);
		CameraModelView_Play_m632631E656BEA93A27A461FC4E89A667EF3E32FE(L_4, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController_Update_m720CA8AED85444A9CF6DF64E46A2CEFC8902A101 (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (RGBCamTexture == null)
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0;
		L_0 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// FrameCount.text = RGBCamTexture.FrameCount.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___FrameCount_5;
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_2;
		L_2 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CameraModelView_get_FrameCount_mD415804FD2365FA8A29ED346DDD55BF83370831B_inline(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController_Play_mB89E4662E00A071B27A128318CED01E603E4FDD8 (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RGBCamTexture == null)
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0;
		L_0 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// RGBCamTexture = new NRRGBCamTexture();
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_1 = (NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408*)il2cpp_codegen_object_new(NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NRRGBCamTexture__ctor_mC344B654132DE3AADC3B0406EBCBD4D95A85A905(L_1, NULL);
		CameraCaptureController_set_RGBCamTexture_m7E2AF4F7AC193E792EF128C104B38B3FE9979B26_inline(__this, L_1, NULL);
		// CaptureImage.texture = RGBCamTexture.GetTexture();
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_2 = __this->___CaptureImage_4;
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_3;
		L_3 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NullCheck(L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = NRRGBCamTexture_GetTexture_m71EB6EE557CDD263A1791650A9AE87105841C8E9(L_3, NULL);
		NullCheck(L_2);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_2, L_4, NULL);
	}

IL_0029:
	{
		// RGBCamTexture.Play();
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_5;
		L_5 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NullCheck(L_5);
		CameraModelView_Play_m632631E656BEA93A27A461FC4E89A667EF3E32FE(L_5, NULL);
		// CaptureImage.texture = RGBCamTexture.GetTexture();
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_6 = __this->___CaptureImage_4;
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_7;
		L_7 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NullCheck(L_7);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8;
		L_8 = NRRGBCamTexture_GetTexture_m71EB6EE557CDD263A1791650A9AE87105841C8E9(L_7, NULL);
		NullCheck(L_6);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController_Pause_m3576985B161BD95E7DE1C17B13D61BF4D0FCED20 (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* G_B2_0 = NULL;
	NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* G_B1_0 = NULL;
	{
		// RGBCamTexture?.Pause();
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0;
		L_0 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		CameraModelView_Pause_m698F1C7E1EAD87F1BDCD531FCD8B98D2FBF545E0(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController_Stop_mF2AB6752FB6BD3C41CC438B456AEA90468FCD015 (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* G_B2_0 = NULL;
	NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* G_B1_0 = NULL;
	{
		// RGBCamTexture?.Stop();
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0;
		L_0 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		CameraModelView_Stop_mAA72D79E403EB1529D93069CF2B62DEC6E7EAB19(G_B2_0, NULL);
	}

IL_0011:
	{
		// RGBCamTexture = null;
		CameraCaptureController_set_RGBCamTexture_m7E2AF4F7AC193E792EF128C104B38B3FE9979B26_inline(__this, (NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408*)NULL, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController_OnDestroy_m4571A34B8BB8DCDED0FA040808CBCA6813095B61 (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* G_B2_0 = NULL;
	NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* G_B1_0 = NULL;
	{
		// RGBCamTexture?.Stop();
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0;
		L_0 = CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline(__this, NULL);
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		CameraModelView_Stop_mAA72D79E403EB1529D93069CF2B62DEC6E7EAB19(G_B2_0, NULL);
	}

IL_0011:
	{
		// RGBCamTexture = null;
		CameraCaptureController_set_RGBCamTexture_m7E2AF4F7AC193E792EF128C104B38B3FE9979B26_inline(__this, (NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408*)NULL, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraCaptureController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCaptureController__ctor_m231E3DA950F5F165AE71591BF1B86DFCE150857E (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	{
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
// NRKernal.NRRGBCamTextureYUV NRKernal.NRExamples.CameraYUVCaptureController::get_YuvCamTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTextureYUV YuvCamTexture { get; set; }
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0 = __this->___U3CYuvCamTextureU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::set_YuvCamTexture(NRKernal.NRRGBCamTextureYUV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_set_YuvCamTexture_m13394A6A364DDFFE7A684F7A22CE768468AA7237 (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* ___value0, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTextureYUV YuvCamTexture { get; set; }
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0 = ___value0;
		__this->___U3CYuvCamTextureU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CYuvCamTextureU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_Start_mF1ADB0AF0529F30649511E3B1B2E17E22326FDAF (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YuvCamTexture = new NRRGBCamTextureYUV();
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0 = (NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8*)il2cpp_codegen_object_new(NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NRRGBCamTextureYUV__ctor_mC88E9443280CDF01E9E826BF9F823113E11FB0BE(L_0, NULL);
		CameraYUVCaptureController_set_YuvCamTexture_m13394A6A364DDFFE7A684F7A22CE768468AA7237_inline(__this, L_0, NULL);
		// BindYuvTexture(YuvCamTexture.GetTexture());
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_1;
		L_1 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NullCheck(L_1);
		YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 L_2;
		L_2 = NRRGBCamTextureYUV_GetTexture_m003812C63E13C7081521E5A3D0E53AC9A6A96773(L_1, NULL);
		CameraYUVCaptureController_BindYuvTexture_m98C3230ED5B6562C1F62EC8C3EC320831B00CD27(__this, L_2, NULL);
		// YuvCamTexture.Play();
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_3;
		L_3 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NullCheck(L_3);
		CameraModelView_Play_m632631E656BEA93A27A461FC4E89A667EF3E32FE(L_3, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_Update_mDE9F9A71E438D1E9E483D6C4325036722C4B482E (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (YuvCamTexture == null)
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0;
		L_0 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// FrameCount.text = YuvCamTexture.FrameCount.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___FrameCount_5;
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_2;
		L_2 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CameraModelView_get_FrameCount_mD415804FD2365FA8A29ED346DDD55BF83370831B_inline(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_Play_mF492534CA74D8293586B03CC9BEF5DC5997B7C51 (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (YuvCamTexture == null)
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0;
		L_0 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// YuvCamTexture = new NRRGBCamTextureYUV();
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_1 = (NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8*)il2cpp_codegen_object_new(NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NRRGBCamTextureYUV__ctor_mC88E9443280CDF01E9E826BF9F823113E11FB0BE(L_1, NULL);
		CameraYUVCaptureController_set_YuvCamTexture_m13394A6A364DDFFE7A684F7A22CE768468AA7237_inline(__this, L_1, NULL);
	}

IL_0013:
	{
		// YuvCamTexture.Play();
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_2;
		L_2 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NullCheck(L_2);
		CameraModelView_Play_m632631E656BEA93A27A461FC4E89A667EF3E32FE(L_2, NULL);
		// BindYuvTexture(YuvCamTexture.GetTexture());
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_3;
		L_3 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NullCheck(L_3);
		YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 L_4;
		L_4 = NRRGBCamTextureYUV_GetTexture_m003812C63E13C7081521E5A3D0E53AC9A6A96773(L_3, NULL);
		CameraYUVCaptureController_BindYuvTexture_m98C3230ED5B6562C1F62EC8C3EC320831B00CD27(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::BindYuvTexture(NRKernal.NRRGBCamTextureYUV/YUVTextureFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_BindYuvTexture_m98C3230ED5B6562C1F62EC8C3EC320831B00CD27 (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 ___frame0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18CC235DC7862849FEAB435049FB497F9DA2A81E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral729C6485974988E37C39B69802DC08701A88D89D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CaptureImage.enabled = true;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___CaptureImage_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// CaptureImage.material.SetTexture("_MainTex", frame.textureY);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_1 = __this->___CaptureImage_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_1);
		YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 L_3 = ___frame0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = L_3.___textureY_3;
		NullCheck(L_2);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_2, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_4, NULL);
		// CaptureImage.material.SetTexture("_UTex", frame.textureU);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___CaptureImage_4;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_5);
		YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 L_7 = ___frame0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = L_7.___textureU_4;
		NullCheck(L_6);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_6, _stringLiteral18CC235DC7862849FEAB435049FB497F9DA2A81E, L_8, NULL);
		// CaptureImage.material.SetTexture("_VTex", frame.textureV);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_9 = __this->___CaptureImage_4;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_9);
		YUVTextureFrame_tDB1BEEE29579963CCB394F0DD9ADAE0D021C0451 L_11 = ___frame0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = L_11.___textureV_5;
		NullCheck(L_10);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_10, _stringLiteral729C6485974988E37C39B69802DC08701A88D89D, L_12, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_Pause_m4CD497A0794D3B320779788F1ABF9239BBD3609A (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* G_B2_0 = NULL;
	NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* G_B1_0 = NULL;
	{
		// YuvCamTexture?.Pause();
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0;
		L_0 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		CameraModelView_Pause_m698F1C7E1EAD87F1BDCD531FCD8B98D2FBF545E0(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_Stop_mB90C53E1DF2973E7CB196B1D3C009133D7397469 (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* G_B2_0 = NULL;
	NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* G_B1_0 = NULL;
	{
		// YuvCamTexture?.Stop();
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0;
		L_0 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		CameraModelView_Stop_mAA72D79E403EB1529D93069CF2B62DEC6E7EAB19(G_B2_0, NULL);
	}

IL_0011:
	{
		// YuvCamTexture = null;
		CameraYUVCaptureController_set_YuvCamTexture_m13394A6A364DDFFE7A684F7A22CE768468AA7237_inline(__this, (NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8*)NULL, NULL);
		// CaptureImage.enabled = false;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_2 = __this->___CaptureImage_4;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController_OnDestroy_mC1461F2D9BDFF83129E2AEB5947D134364944355 (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* G_B2_0 = NULL;
	NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* G_B1_0 = NULL;
	{
		// YuvCamTexture?.Stop();
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0;
		L_0 = CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline(__this, NULL);
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		CameraModelView_Stop_mAA72D79E403EB1529D93069CF2B62DEC6E7EAB19(G_B2_0, NULL);
	}

IL_0011:
	{
		// YuvCamTexture = null;
		CameraYUVCaptureController_set_YuvCamTexture_m13394A6A364DDFFE7A684F7A22CE768468AA7237_inline(__this, (NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8*)NULL, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.CameraYUVCaptureController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraYUVCaptureController__ctor_m0DC410472432979DA5E5915512A296BC91B74B64 (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void NRKernal.NRExamples.MockGalleryDataProvider::InsertImage(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockGalleryDataProvider_InsertImage_m281250512F3DA1CFB6D182FC0C2D894BDB56E506 (MockGalleryDataProvider_t4C43A3B7FC0610DD642CD9A7674D175A05429CD0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___displayName1, String_t* ___folderName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3656DC55AE66EB12AF8F8BA74AD0C920144DEBD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string path = string.Format("{0}/NrealShots/{1}", Application.persistentDataPath, folderName);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_1 = ___folderName2;
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral3656DC55AE66EB12AF8F8BA74AD0C920144DEBD8, L_0, L_1, NULL);
		V_0 = L_2;
		// if (!Directory.Exists(path))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_3, NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// Directory.CreateDirectory(path);
		String_t* L_5 = V_0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_6;
		L_6 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_5, NULL);
	}

IL_0020:
	{
		// File.WriteAllBytes(string.Format("{0}/{1}", path, displayName), data);
		String_t* L_7 = V_0;
		String_t* L_8 = ___displayName1;
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_7, L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___data0;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_9, L_10, NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject NRKernal.NRExamples.MockGalleryDataProvider::InsertVideo(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* MockGalleryDataProvider_InsertVideo_mD59568D1EC9BD648C5717F6988D0EA64896A68BE (MockGalleryDataProvider_t4C43A3B7FC0610DD642CD9A7674D175A05429CD0* __this, String_t* ___originFilePath0, String_t* ___displayName1, String_t* ___folderName2, const RuntimeMethod* method) 
{
	{
		// return null;
		return (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
	}
}
// System.Void NRKernal.NRExamples.MockGalleryDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockGalleryDataProvider__ctor_m47B74BD4C19FFF56AF2A5F538181688C28286381 (MockGalleryDataProvider_t4C43A3B7FC0610DD642CD9A7674D175A05429CD0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.AndroidJavaClass NRKernal.NRExamples.NativeGalleryDataProvider::get_NativeClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeGalleryDataProvider_get_NativeClass_m62C37CF27C0B7A423FDCE431761E0554131E5CC6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05FE1CA7E7B1A7BFC7A406BA3922962AC09B888);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_NativeClass == null)
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_NativeClass_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_NativeClass = new AndroidJavaClass("ai.nreal.android.nebulaspaceproxy.gallery.GalleryDataProvider");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteralB05FE1CA7E7B1A7BFC7A406BA3922962AC09B888, NULL);
		((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_NativeClass_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_NativeClass_0), (void*)L_1);
	}

IL_0016:
	{
		// return m_NativeClass;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_NativeClass_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NRKernal.NRExamples.NativeGalleryDataProvider::get_CurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGalleryDataProvider_get_CurrentActivity_m50672702D49D795A5EA396781EC5551E8F10F822 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
		// if (m_CurrentActivity == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_CurrentActivity_2;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using (AndroidJavaClass jc = new AndroidJavaClass(MAIN_ACTIVITY_CLASS))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_CurrentActivity = jc.GetStatic<AndroidJavaObject>("currentActivity");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_CurrentActivity_2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_CurrentActivity_2), (void*)L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// return m_CurrentActivity;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0_il2cpp_TypeInfo_var))->___m_CurrentActivity_2;
		return L_6;
	}
}
// System.Void NRKernal.NRExamples.NativeGalleryDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryDataProvider__ctor_m428DCD32B1A00FBD271A76421AE8CF65B4070057 (NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05FE1CA7E7B1A7BFC7A406BA3922962AC09B888);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NativeGalleryDataProvider()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_NativeObject = new AndroidJavaObject("ai.nreal.android.nebulaspaceproxy.gallery.GalleryDataProvider",
		//                                        CurrentActivity);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = NativeGalleryDataProvider_get_CurrentActivity_m50672702D49D795A5EA396781EC5551E8F10F822(NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteralB05FE1CA7E7B1A7BFC7A406BA3922962AC09B888, L_1, NULL);
		__this->___m_NativeObject_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NativeObject_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NativeGalleryDataProvider::InsertImage(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryDataProvider_InsertImage_m8D7A32CDC9463093066F7BCDBDA5F67EB968BC3C (NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___displayName1, String_t* ___folderName2, const RuntimeMethod* method) 
{
	{
		// InsertImageData(data, displayName, folderName);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		String_t* L_1 = ___displayName1;
		String_t* L_2 = ___folderName2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGalleryDataProvider_InsertImageData_m17932C3422655A46A3DFA64C89EDB3111B7FBEFA(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject NRKernal.NRExamples.NativeGalleryDataProvider::InsertImageData(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGalleryDataProvider_InsertImageData_m17932C3422655A46A3DFA64C89EDB3111B7FBEFA (NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___displayName1, String_t* ___folderName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D049C6C6D58FCE17799FC973198B6A177AB6B56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBBB50768196AD142FBCB6569762696B01211A3E);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject inputStream = new AndroidJavaObject("java.io.ByteArrayInputStream", data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteralFBBB50768196AD142FBCB6569762696B01211A3E, L_1, NULL);
		V_0 = L_3;
		// return m_NativeObject.Call<AndroidJavaObject>("insertImage", inputStream, displayName, folderName, "image/png");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = __this->___m_NativeObject_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___displayName1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___folderName2;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_4, _stringLiteral3D049C6C6D58FCE17799FC973198B6A177AB6B56, L_12, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		return L_13;
	}
}
// UnityEngine.AndroidJavaObject NRKernal.NRExamples.NativeGalleryDataProvider::InsertVideo(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGalleryDataProvider_InsertVideo_m8827021D540653BDA3D6579D11AA2824F64097B3 (NativeGalleryDataProvider_t190E640923EC2781D9617F2B9C30B067156EAFE0* __this, String_t* ___originFilePath0, String_t* ___displayName1, String_t* ___folderName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFC89553EFBC34DB903A51C997078EF04F9B70A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_NativeObject.Call<AndroidJavaObject>("insertVideo", originFilePath, displayName, folderName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___m_NativeObject_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___originFilePath0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___displayName1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___folderName2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralCFC89553EFBC34DB903A51C997078EF04F9B70A2, L_6, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		return L_8;
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
// System.Void NRKernal.NRExamples.MarkerDetecter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerDetecter_Update_m77B27302BF047F350F1EC8DE06D844399F92E9D6 (MarkerDetecter_tF656842A7633D4C26FBA530D4EB4CC331AF4BFD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A_mB33173E3333304F2620FC080D2E8E63011876521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m037187F9B7D3E1027B3CB565F4F44095724E7643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137E26C0F28C5F356BE064A5F76AC7D36AC6BED1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NRAnchor_t24121EBF6BF8513439EA7C404ADE5D7369C04051* V_1 = NULL;
	{
		// NRFrame.GetTrackables<NRTrackableImage>(m_NewMarkers, NRTrackableQueryFilter.New);
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_0 = __this->___m_NewMarkers_5;
		NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959(L_0, 1, NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959_RuntimeMethod_var);
		// for (int i = 0; i < m_NewMarkers.Count; i++)
		V_0 = 0;
		goto IL_007c;
	}

IL_0010:
	{
		// NRDebugger.Info("[MarkerDetecter] Get New TrackableImages!! " + m_NewMarkers[i].TrackableNativeHandle);
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_1 = __this->___m_NewMarkers_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_3;
		L_3 = List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6(L_1, L_2, List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6_RuntimeMethod_var);
		NullCheck(L_3);
		uint64_t* L_4 = (&((NRTrackable_t1E6275E11ECC373616E12EED1DAE7B51F27BD470*)L_3)->___TrackableNativeHandle_0);
		String_t* L_5;
		L_5 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral137E26C0F28C5F356BE064A5F76AC7D36AC6BED1, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		NRDebugger_Info_mDA6D0CD5EF2E684E60C11540779E5EEE4608E9F4(L_6, NULL);
		// NRAnchor anchor = m_NewMarkers[i].CreateAnchor();
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_7 = __this->___m_NewMarkers_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_9;
		L_9 = List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6(L_7, L_8, List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6_RuntimeMethod_var);
		NullCheck(L_9);
		NRAnchor_t24121EBF6BF8513439EA7C404ADE5D7369C04051* L_10;
		L_10 = NRTrackable_CreateAnchor_m4AB98C6F515AA117A53F0F9E713A9A3523E3262B(L_9, NULL);
		V_1 = L_10;
		// GameObject markerObject = Instantiate(DetectedMarkerPrefab, Vector3.zero, Quaternion.identity, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___DetectedMarkerPrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NRAnchor_t24121EBF6BF8513439EA7C404ADE5D7369C04051* L_14 = V_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_11, L_12, L_13, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		// markerObject.GetComponent<TrackableImageBehaviour>().Initialize(m_NewMarkers[i]);
		NullCheck(L_16);
		TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* L_17;
		L_17 = GameObject_GetComponent_TisTrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A_mB33173E3333304F2620FC080D2E8E63011876521(L_16, GameObject_GetComponent_TisTrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A_mB33173E3333304F2620FC080D2E8E63011876521_RuntimeMethod_var);
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_18 = __this->___m_NewMarkers_5;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_20;
		L_20 = List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6(L_18, L_19, List_1_get_Item_m535BA7A61B7FDA4091509F3D73A45E4BB7163EF6_RuntimeMethod_var);
		NullCheck(L_17);
		TrackableImageBehaviour_Initialize_m312E86EEB7C203764A76EBFBFFAFD91214440F1D_inline(L_17, L_20, NULL);
		// for (int i = 0; i < m_NewMarkers.Count; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < m_NewMarkers.Count; i++)
		int32_t L_22 = V_0;
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_23 = __this->___m_NewMarkers_5;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m037187F9B7D3E1027B3CB565F4F44095724E7643_inline(L_23, List_1_get_Count_m037187F9B7D3E1027B3CB565F4F44095724E7643_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.MarkerDetecter::SwitchImageTrackingMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerDetecter_SwitchImageTrackingMode_mBABCBFCDA0531D5F0CCCD760D0CF039CD7127112 (MarkerDetecter_tF656842A7633D4C26FBA530D4EB4CC331AF4BFD1* __this, bool ___on0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* V_0 = NULL;
	NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* G_B2_0 = NULL;
	NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* G_B3_1 = NULL;
	{
		// var config = NRSessionManager.Instance.NRSessionBehaviour.SessionConfig;
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_0;
		L_0 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NullCheck(L_0);
		NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* L_1;
		L_1 = NRSessionManager_get_NRSessionBehaviour_mB908AC2A7C4CAF8989F2FD1EEDF566438FEBA0D8_inline(L_0, NULL);
		NullCheck(L_1);
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_2 = L_1->___SessionConfig_8;
		V_0 = L_2;
		// config.ImageTrackingMode = on ? TrackableImageFindingMode.ENABLE : TrackableImageFindingMode.DISABLE;
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_3 = V_0;
		bool L_4 = ___on0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ImageTrackingMode_5 = G_B3_0;
		// NRSessionManager.Instance.SetConfiguration(config);
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_5;
		L_5 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_6 = V_0;
		NullCheck(L_5);
		NRSessionManager_SetConfiguration_mCA8B85695D4C8789804E2C9833006E246120CC1D(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.MarkerDetecter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerDetecter__ctor_m51FDAA173EC756A6DDD7D99EFC5B2815A884888E (MarkerDetecter_tF656842A7633D4C26FBA530D4EB4CC331AF4BFD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t63E39F2087C52764E822A352B7A724C70929D09D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<NRTrackableImage> m_NewMarkers = new List<NRTrackableImage>();
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_0 = (List_1_t63E39F2087C52764E822A352B7A724C70929D09D*)il2cpp_codegen_object_new(List_1_t63E39F2087C52764E822A352B7A724C70929D09D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED(L_0, List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED_RuntimeMethod_var);
		__this->___m_NewMarkers_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NewMarkers_5), (void*)L_0);
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
// UnityEngine.Transform NRKernal.NRExamples.MoveWithCamera::get_CenterCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF (MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CenterCamera == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_CenterCamera_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// if (NRSessionManager.Instance.CenterCameraAnchor != null)
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_2;
		L_2 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = NRSessionManager_get_CenterCameraAnchor_m84D60226021341E9AF4B63532D2E44CE938FC99D(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// m_CenterCamera = NRSessionManager.Instance.CenterCameraAnchor;
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_5;
		L_5 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = NRSessionManager_get_CenterCameraAnchor_m84D60226021341E9AF4B63532D2E44CE938FC99D(L_5, NULL);
		__this->___m_CenterCamera_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CenterCamera_6), (void*)L_6);
		goto IL_004f;
	}

IL_0032:
	{
		// else if (Camera.main != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// m_CenterCamera = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		__this->___m_CenterCamera_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CenterCamera_6), (void*)L_10);
	}

IL_004f:
	{
		// return m_CenterCamera;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___m_CenterCamera_6;
		return L_11;
	}
}
// System.Void NRKernal.NRExamples.MoveWithCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithCamera_Start_mC68AF7431DC928071B1FE91E6FECFF8DC57E24DC (MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* G_B2_0 = NULL;
	MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* G_B1_0 = NULL;
	float G_B6_0 = 0.0f;
	MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* G_B4_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* G_B5_2 = NULL;
	{
		// originDistance = useRelative ? Vector3.Distance(transform.position, CenterCamera == null ? Vector3.zero : CenterCamera.position) : 0;
		bool L_0 = __this->___useRelative_5;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0010;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B1_0;
		goto IL_0040;
	}

IL_0010:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
		if (L_4)
		{
			G_B4_0 = L_2;
			G_B4_1 = G_B2_0;
			goto IL_0036;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003b:
	{
		float L_8;
		L_8 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(G_B5_1, G_B5_0, NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_2;
	}

IL_0040:
	{
		NullCheck(G_B6_1);
		G_B6_1->___originDistance_4 = G_B6_0;
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.MoveWithCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithCamera_LateUpdate_m3798D4FE05A1EB50C62EF999D5D31877A999947C (MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CenterCamera != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		// transform.position = CenterCamera.transform.position + CenterCamera.transform.forward * originDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		float L_9 = __this->___originDistance_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_10, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_11, NULL);
		// transform.rotation = CenterCamera.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = MoveWithCamera_get_CenterCamera_m040EDCD39284DD825A0C8D787AA79C4A3055BFFF(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_15, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.MoveWithCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithCamera__ctor_mF90F6168B0F51123474B2EF997F25FAFEB879597 (MoveWithCamera_t5B5F45106928C1582F4CAD4D3F7F9AD0841B54F5* __this, const RuntimeMethod* method) 
{
	{
		// private bool useRelative = true;
		__this->___useRelative_5 = (bool)1;
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
// System.Void NRKernal.NRExamples.TrackableImageBehaviour::Initialize(NRKernal.NRTrackableImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableImageBehaviour_Initialize_m312E86EEB7C203764A76EBFBFFAFD91214440F1D (TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* __this, NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* ___marker0, const RuntimeMethod* method) 
{
	{
		// m_DetectedMarker = marker;
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_0 = ___marker0;
		__this->___m_DetectedMarker_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DetectedMarker_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.TrackableImageBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableImageBehaviour_Update_m658B1E2E3B5008980B43CD08C97EF003A2FDFA0D (TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_DetectedMarker != null && m_DetectedMarker.GetTrackingState() == TrackingState.Tracking)
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_0 = __this->___m_DetectedMarker_4;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_1 = __this->___m_DetectedMarker_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NRTrackable_GetTrackingState_m86896F81EEA518C5825CBB6F42A986F0C02781A9(L_1, NULL);
		if (L_2)
		{
			goto IL_004d;
		}
	}
	{
		// Vector2 size = m_DetectedMarker.Size;
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_3 = __this->___m_DetectedMarker_4;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = NRTrackableImage_get_Size_m5119E7478C9FDAD013F0A73B7EE52A7E81C8B7CE(L_3, NULL);
		V_0 = L_4;
		// transform.localScale = new Vector3(size.x, transform.localScale.y, size.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = L_11.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_7, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_13, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.TrackableImageBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableImageBehaviour__ctor_m5A787FF377312187E7664A26D010B3F91F62415D (TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void NRKernal.NRExamples.TrackingImageExampleController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingImageExampleController_Update_m29C93FD9B5DDA76F193DD3EA2D46943239169BF3 (TrackingImageExampleController_t0D673AC674BFB832B01F16D720243ABBD9355ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9366DE786283DEBA2706AF3608C812DE56090417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC14C0D1D810AB8F637D843041D5C9CD597E6DCA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m04A1EEBFFBBCED050080EA431198D845C9774F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BFF6B39EED763109E82880613B39066CFFC0DB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m731A7028F96949CAB76BEEA5B45DFE3B4E60BFD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m506DDFFC34E65F3B9E842EEBEA509751DDFDD6D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1D11034314DB5FB5713E86039FFD5970904DBC4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01_m5404980C85E6E4E3F93ED3F751DAD13BF7A1DFA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EB761ACD47688CF54641A91A4671C4FA985E114);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* V_1 = NULL;
	TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* V_2 = NULL;
	{
		// if (NRFrame.SessionStatus != SessionState.Running)
		int32_t L_0;
		L_0 = NRFrame_get_SessionStatus_m7140AB9C5D6735C0822E060D3E882F9EB9FED7F2(NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// NRFrame.GetTrackables<NRTrackableImage>(m_TempTrackingImages, NRTrackableQueryFilter.New);
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_1 = __this->___m_TempTrackingImages_7;
		NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959(L_1, 1, NRFrame_GetTrackables_TisNRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683_m629AC6D49E6A5B22EE65F20E0C1666EB5C83B959_RuntimeMethod_var);
		// foreach (var image in m_TempTrackingImages)
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_2 = __this->___m_TempTrackingImages_7;
		NullCheck(L_2);
		Enumerator_t8623DB776AA10C34BC49A3C43EE331BB7E2CBC1D L_3;
		L_3 = List_1_GetEnumerator_m1D11034314DB5FB5713E86039FFD5970904DBC4D(L_2, List_1_GetEnumerator_m1D11034314DB5FB5713E86039FFD5970904DBC4D_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BFF6B39EED763109E82880613B39066CFFC0DB3((&V_0), Enumerator_Dispose_m9BFF6B39EED763109E82880613B39066CFFC0DB3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e9_1;
			}

IL_0026_1:
			{
				// foreach (var image in m_TempTrackingImages)
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_4;
				L_4 = Enumerator_get_Current_m506DDFFC34E65F3B9E842EEBEA509751DDFDD6D7_inline((&V_0), Enumerator_get_Current_m506DDFFC34E65F3B9E842EEBEA509751DDFDD6D7_RuntimeMethod_var);
				V_1 = L_4;
				// TrackingImageVisualizer visualizer = null;
				V_2 = (TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01*)NULL;
				// m_Visualizers.TryGetValue(image.GetDataBaseIndex(), out visualizer);
				Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* L_5 = __this->___m_Visualizers_6;
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_6 = V_1;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = NRTrackable_GetDataBaseIndex_m6AC384E24FB19E3075A207BCC61189F4E5C589D1(L_6, NULL);
				NullCheck(L_5);
				bool L_8;
				L_8 = Dictionary_2_TryGetValue_m04A1EEBFFBBCED050080EA431198D845C9774F69(L_5, L_7, (&V_2), Dictionary_2_TryGetValue_m04A1EEBFFBBCED050080EA431198D845C9774F69_RuntimeMethod_var);
				// if (image.GetTrackingState() != TrackingState.Stopped && visualizer == null)
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_9 = V_1;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = NRTrackable_GetTrackingState_m86896F81EEA518C5825CBB6F42A986F0C02781A9(L_9, NULL);
				if ((((int32_t)L_10) == ((int32_t)2)))
				{
					goto IL_00ae_1;
				}
			}
			{
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_11 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_12)
				{
					goto IL_00ae_1;
				}
			}
			{
				// NRDebugger.Info("Create new TrackingImageVisualizer!");
				il2cpp_codegen_runtime_class_init_inline(NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
				NRDebugger_Info_mDA6D0CD5EF2E684E60C11540779E5EEE4608E9F4(_stringLiteral4EB761ACD47688CF54641A91A4671C4FA985E114, NULL);
				// visualizer = (TrackingImageVisualizer)Instantiate(TrackingImageVisualizerPrefab, image.GetCenterPose().position, image.GetCenterPose().rotation);
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_13 = __this->___TrackingImageVisualizerPrefab_4;
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_14 = V_1;
				NullCheck(L_14);
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
				L_15 = VirtualFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(4 /* UnityEngine.Pose NRKernal.NRTrackable::GetCenterPose() */, L_14);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_17 = V_1;
				NullCheck(L_17);
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18;
				L_18 = VirtualFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(4 /* UnityEngine.Pose NRKernal.NRTrackable::GetCenterPose() */, L_17);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = L_18.___rotation_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_20;
				L_20 = Object_Instantiate_TisTrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01_m5404980C85E6E4E3F93ED3F751DAD13BF7A1DFA3(L_13, L_16, L_19, Object_Instantiate_TisTrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01_m5404980C85E6E4E3F93ED3F751DAD13BF7A1DFA3_RuntimeMethod_var);
				V_2 = L_20;
				// visualizer.Image = image;
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_21 = V_2;
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_22 = V_1;
				NullCheck(L_21);
				L_21->___Image_4 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&L_21->___Image_4), (void*)L_22);
				// visualizer.transform.parent = transform;
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_23 = V_2;
				NullCheck(L_23);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
				L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_24);
				Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_24, L_25, NULL);
				// m_Visualizers.Add(image.GetDataBaseIndex(), visualizer);
				Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* L_26 = __this->___m_Visualizers_6;
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_27 = V_1;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = NRTrackable_GetDataBaseIndex_m6AC384E24FB19E3075A207BCC61189F4E5C589D1(L_27, NULL);
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_29 = V_2;
				NullCheck(L_26);
				Dictionary_2_Add_m9366DE786283DEBA2706AF3608C812DE56090417(L_26, L_28, L_29, Dictionary_2_Add_m9366DE786283DEBA2706AF3608C812DE56090417_RuntimeMethod_var);
				goto IL_00dd_1;
			}

IL_00ae_1:
			{
				// else if (image.GetTrackingState() == TrackingState.Stopped && visualizer != null)
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_30 = V_1;
				NullCheck(L_30);
				int32_t L_31;
				L_31 = NRTrackable_GetTrackingState_m86896F81EEA518C5825CBB6F42A986F0C02781A9(L_30, NULL);
				if ((!(((uint32_t)L_31) == ((uint32_t)2))))
				{
					goto IL_00dd_1;
				}
			}
			{
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_32 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_33;
				L_33 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_33)
				{
					goto IL_00dd_1;
				}
			}
			{
				// m_Visualizers.Remove(image.GetDataBaseIndex());
				Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* L_34 = __this->___m_Visualizers_6;
				NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_35 = V_1;
				NullCheck(L_35);
				int32_t L_36;
				L_36 = NRTrackable_GetDataBaseIndex_m6AC384E24FB19E3075A207BCC61189F4E5C589D1(L_35, NULL);
				NullCheck(L_34);
				bool L_37;
				L_37 = Dictionary_2_Remove_mC14C0D1D810AB8F637D843041D5C9CD597E6DCA8(L_34, L_36, Dictionary_2_Remove_mC14C0D1D810AB8F637D843041D5C9CD597E6DCA8_RuntimeMethod_var);
				// Destroy(visualizer.gameObject);
				TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* L_38 = V_2;
				NullCheck(L_38);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
				L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_39, NULL);
			}

IL_00dd_1:
			{
				// FitToScanOverlay.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___FitToScanOverlay_5;
				NullCheck(L_40);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
			}

IL_00e9_1:
			{
				// foreach (var image in m_TempTrackingImages)
				bool L_41;
				L_41 = Enumerator_MoveNext_m731A7028F96949CAB76BEEA5B45DFE3B4E60BFD6((&V_0), Enumerator_MoveNext_m731A7028F96949CAB76BEEA5B45DFE3B4E60BFD6_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.TrackingImageExampleController::EnableImageTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingImageExampleController_EnableImageTracking_m35ABC3D81230CFC972F619ED8F35B7DAAD0E2DD9 (TrackingImageExampleController_t0D673AC674BFB832B01F16D720243ABBD9355ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* V_0 = NULL;
	{
		// var config = NRSessionManager.Instance.NRSessionBehaviour.SessionConfig;
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_0;
		L_0 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NullCheck(L_0);
		NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* L_1;
		L_1 = NRSessionManager_get_NRSessionBehaviour_mB908AC2A7C4CAF8989F2FD1EEDF566438FEBA0D8_inline(L_0, NULL);
		NullCheck(L_1);
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_2 = L_1->___SessionConfig_8;
		V_0 = L_2;
		// config.ImageTrackingMode = TrackableImageFindingMode.ENABLE;
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_3 = V_0;
		NullCheck(L_3);
		L_3->___ImageTrackingMode_5 = 1;
		// NRSessionManager.Instance.SetConfiguration(config);
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_4;
		L_4 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_5 = V_0;
		NullCheck(L_4);
		NRSessionManager_SetConfiguration_mCA8B85695D4C8789804E2C9833006E246120CC1D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.TrackingImageExampleController::DisableImageTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingImageExampleController_DisableImageTracking_m35818EF919E12FF882DE88FC787F286028141499 (TrackingImageExampleController_t0D673AC674BFB832B01F16D720243ABBD9355ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* V_0 = NULL;
	{
		// var config = NRSessionManager.Instance.NRSessionBehaviour.SessionConfig;
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_0;
		L_0 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NullCheck(L_0);
		NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* L_1;
		L_1 = NRSessionManager_get_NRSessionBehaviour_mB908AC2A7C4CAF8989F2FD1EEDF566438FEBA0D8_inline(L_0, NULL);
		NullCheck(L_1);
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_2 = L_1->___SessionConfig_8;
		V_0 = L_2;
		// config.ImageTrackingMode = TrackableImageFindingMode.DISABLE;
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_3 = V_0;
		NullCheck(L_3);
		L_3->___ImageTrackingMode_5 = 0;
		// NRSessionManager.Instance.SetConfiguration(config);
		NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* L_4;
		L_4 = SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1(SingleTon_1_get_Instance_m8A99577C36128669EE2D0D7848CB8735863392F1_RuntimeMethod_var);
		NRSessionConfig_t98EFE64628E7A2BA9D4082B1023740FF2E8F1835* L_5 = V_0;
		NullCheck(L_4);
		NRSessionManager_SetConfiguration_mCA8B85695D4C8789804E2C9833006E246120CC1D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.TrackingImageExampleController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingImageExampleController__ctor_m83BBFD302C83F7ADF176F9B227E199F318CC184B (TrackingImageExampleController_t0D673AC674BFB832B01F16D720243ABBD9355ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m43BA34C7C3B22C7F1889BD27936A3EB11CD75A90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t63E39F2087C52764E822A352B7A724C70929D09D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, TrackingImageVisualizer> m_Visualizers
		//     = new Dictionary<int, TrackingImageVisualizer>();
		Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8* L_0 = (Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8*)il2cpp_codegen_object_new(Dictionary_2_t312A038361A3763FCEE1055EFE64A0ACEE2D32F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m43BA34C7C3B22C7F1889BD27936A3EB11CD75A90(L_0, Dictionary_2__ctor_m43BA34C7C3B22C7F1889BD27936A3EB11CD75A90_RuntimeMethod_var);
		__this->___m_Visualizers_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Visualizers_6), (void*)L_0);
		// private List<NRTrackableImage> m_TempTrackingImages = new List<NRTrackableImage>();
		List_1_t63E39F2087C52764E822A352B7A724C70929D09D* L_1 = (List_1_t63E39F2087C52764E822A352B7A724C70929D09D*)il2cpp_codegen_object_new(List_1_t63E39F2087C52764E822A352B7A724C70929D09D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED(L_1, List_1__ctor_m2D7CE20D2F6283D78043376B3A7062015743CFED_RuntimeMethod_var);
		__this->___m_TempTrackingImages_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TempTrackingImages_7), (void*)L_1);
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
// System.Void NRKernal.NRExamples.TrackingImageVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingImageVisualizer_Update_m2A83400341F8CB499B20E456C6616A9A066662F0 (TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Image == null || Image.GetTrackingState() != TrackingState.Tracking)
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_0 = __this->___Image_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_1 = __this->___Image_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NRTrackable_GetTrackingState_m86896F81EEA518C5825CBB6F42A986F0C02781A9(L_1, NULL);
		if (!L_2)
		{
			goto IL_0052;
		}
	}

IL_0015:
	{
		// FrameLowerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___FrameLowerLeft_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// FrameLowerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___FrameLowerRight_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// FrameUpperLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___FrameUpperLeft_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// FrameUpperRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___FrameUpperRight_8;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// Axis.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Axis_9;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// return;
		return;
	}

IL_0052:
	{
		// float halfWidth = Image.ExtentX / 2;
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_8 = __this->___Image_4;
		NullCheck(L_8);
		float L_9;
		L_9 = NRTrackableImage_get_ExtentX_mE93248E261BD7CDCEF1DCE8EA3BFE9015A8D6CFE(L_8, NULL);
		V_0 = ((float)(L_9/(2.0f)));
		// float halfHeight = Image.ExtentZ / 2;
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_10 = __this->___Image_4;
		NullCheck(L_10);
		float L_11;
		L_11 = NRTrackableImage_get_ExtentZ_mA4C727B0D6D986E52D8F6CB77400525480A8EACC(L_10, NULL);
		V_1 = ((float)(L_11/(2.0f)));
		// FrameLowerLeft.transform.localPosition = (halfWidth * Vector3.left) + (halfHeight * Vector3.back);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___FrameLowerLeft_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_14, L_15, NULL);
		float L_17 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_19, NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_20, NULL);
		// FrameLowerRight.transform.localPosition = (halfWidth * Vector3.right) + (halfHeight * Vector3.back);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___FrameLowerRight_6;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		float L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_23, L_24, NULL);
		float L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_25, L_28, NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_29, NULL);
		// FrameUpperLeft.transform.localPosition = (halfWidth * Vector3.left) + (halfHeight * Vector3.forward);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___FrameUpperLeft_7;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		float L_32 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_32, L_33, NULL);
		float L_35 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_34, L_37, NULL);
		NullCheck(L_31);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_31, L_38, NULL);
		// FrameUpperRight.transform.localPosition = (halfWidth * Vector3.right) + (halfHeight * Vector3.forward);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___FrameUpperRight_8;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		float L_41 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_41, L_42, NULL);
		float L_44 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_43, L_46, NULL);
		NullCheck(L_40);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_40, L_47, NULL);
		// var center = Image.GetCenterPose();
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_48 = __this->___Image_4;
		NullCheck(L_48);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_49;
		L_49 = VirtualFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(4 /* UnityEngine.Pose NRKernal.NRTrackable::GetCenterPose() */, L_48);
		V_2 = L_49;
		// transform.position = center.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_51 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = L_51.___position_0;
		NullCheck(L_50);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_50, L_52, NULL);
		// transform.rotation = center.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_54 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = L_54.___rotation_1;
		NullCheck(L_53);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_53, L_55, NULL);
		// FrameLowerLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___FrameLowerLeft_5;
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)1, NULL);
		// FrameLowerRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___FrameLowerRight_6;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)1, NULL);
		// FrameUpperLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___FrameUpperLeft_7;
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		// FrameUpperRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___FrameUpperRight_8;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
		// Axis.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___Axis_9;
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.TrackingImageVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingImageVisualizer__ctor_m55776940D1AECC21107280368E464839223EF20B (TrackingImageVisualizer_t9F15FD22319C03BB76276B9E72BB51BA0EA96D01* __this, const RuntimeMethod* method) 
{
	{
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
// UnityEngine.Transform NRKernal.NRExamples.NRHomeMenu::get_CameraCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* NRHomeMenu_get_CameraCenter_m7E9504C4D1ADCAAD8A46787189154847470E1710 (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRInput_t5E9EBC69D5F1D84582A25C7BC58C705FD33CFD99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Transform CameraCenter { get { return NRInput.CameraCenter; } }
		il2cpp_codegen_runtime_class_init_inline(NRInput_t5E9EBC69D5F1D84582A25C7BC58C705FD33CFD99_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = NRInput_get_CameraCenter_m77047248E1ACC3DA9BB32659D915B22E15525AE1(NULL);
		return L_0;
	}
}
// System.Boolean NRKernal.NRExamples.NRHomeMenu::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NRHomeMenu_get_IsShowing_mEC9B254CA4341B9331E8B4CCE1D2E687229AB475 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsShowing { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		bool L_0 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___U3CIsShowingU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::set_IsShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_set_IsShowing_m00FBDD232F5AED6CCEF3DBFA789B29E1898668EB (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___U3CIsShowingU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_Start_m0D6608E32FA7A16E24FD0B3AFA0D572184F74D30 (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_OnCancelButtonClick_mAB6F880E184CC13BEDDE4D786647ACDE90B4300A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_OnComfirmButtonClick_m51F7FDE12EFD0D86E369F38046995D54F1D2DD26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// confirmBtn.onClick.AddListener(OnComfirmButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___confirmBtn_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)NRHomeMenu_OnComfirmButtonClick_m51F7FDE12EFD0D86E369F38046995D54F1D2DD26_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// cancelBtn.onClick.AddListener(OnCancelButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___cancelBtn_5;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)NRHomeMenu_OnCancelButtonClick_mAB6F880E184CC13BEDDE4D786647ACDE90B4300A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_Update_m12146F41AEE66930DA5E1559A581B9E94FF7977E (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRInput_t5E9EBC69D5F1D84582A25C7BC58C705FD33CFD99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsShowing && NRInput.RaycastMode == RaycastModeEnum.Laser)
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NRHomeMenu_get_IsShowing_mEC9B254CA4341B9331E8B4CCE1D2E687229AB475_inline(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NRInput_t5E9EBC69D5F1D84582A25C7BC58C705FD33CFD99_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = NRInput_get_RaycastMode_m7F669890D59747E8E9856B47B88C7141D18B7646(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// FollowCamera();
		NRHomeMenu_FollowCamera_m035AAF8747DD827C22C64DE53BB66AF45E5A0154(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::OnComfirmButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_OnComfirmButtonClick_m51F7FDE12EFD0D86E369F38046995D54F1D2DD26 (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hide();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_Hide_mB0BA86090F0B7F24B180FA5A4D361D54DFBA5B86(NULL);
		// AppManager.QuitApplication();
		AppManager_QuitApplication_m8491A1121298D06842A8F0525E4167821280D5D7((bool)0, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::OnCancelButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_OnCancelButtonClick_mAB6F880E184CC13BEDDE4D786647ACDE90B4300A (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hide();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_Hide_mB0BA86090F0B7F24B180FA5A4D361D54DFBA5B86(NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::FollowCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_FollowCamera_m035AAF8747DD827C22C64DE53BB66AF45E5A0154 (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Instance && CameraCenter)
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_0 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = NRHomeMenu_get_CameraCenter_m7E9504C4D1ADCAAD8A46787189154847470E1710(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// m_Instance.transform.position = CameraCenter.position;
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_4 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = NRHomeMenu_get_CameraCenter_m7E9504C4D1ADCAAD8A46787189154847470E1710(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// m_Instance.transform.rotation = CameraCenter.rotation;
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_8 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = NRHomeMenu_get_CameraCenter_m7E9504C4D1ADCAAD8A46787189154847470E1710(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::CreateMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_CreateMenu_m0391A3EC07470A343C2B6A460A0945E3C8897CEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_mCB07E9603C336B0E9E49F7999E2BFF20B32C6380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8994A885EEC9DAB34043C1C7ACD217A719746E5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// GameObject menuPrefab = Resources.Load<GameObject>(m_MenuPrefabPath);
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_MenuPrefabPath_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(L_0, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_0 = L_1;
		// if (menuPrefab == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// NRDebugger.Error("Can not find prefab: " + m_MenuPrefabPath);
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		String_t* L_4 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_MenuPrefabPath_7;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF8994A885EEC9DAB34043C1C7ACD217A719746E5, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(NRDebugger_tA952919E945AB3F2FE6715F1E9A6D774B3E4E1B9_il2cpp_TypeInfo_var);
		NRDebugger_Error_m506DF1652A674BF67BD126A3CBEB05E6274B3A86(L_5, NULL);
		// return;
		return;
	}

IL_0029:
	{
		// GameObject menuGo = Instantiate(menuPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_1 = L_7;
		// m_Instance = menuGo.GetComponent<NRHomeMenu>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_9;
		L_9 = GameObject_GetComponent_TisNRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_mCB07E9603C336B0E9E49F7999E2BFF20B32C6380(L_8, GameObject_GetComponent_TisNRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_mCB07E9603C336B0E9E49F7999E2BFF20B32C6380_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6), (void*)L_9);
		// if (m_Instance)
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_10 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// DontDestroyOnLoad(menuGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_12, NULL);
		return;
	}

IL_004e:
	{
		// Destroy(menuGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_Toggle_mBF60238C7CE967099830B972D30158C7BBD7846D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsShowing)
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NRHomeMenu_get_IsShowing_mEC9B254CA4341B9331E8B4CCE1D2E687229AB475_inline(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Hide();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_Hide_mB0BA86090F0B7F24B180FA5A4D361D54DFBA5B86(NULL);
		return;
	}

IL_000d:
	{
		// Show();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_Show_m5FDFEE9948E7F72083931B6769B3D501AB48B2BD(NULL);
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_Show_m5FDFEE9948E7F72083931B6769B3D501AB48B2BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRInput_t5E9EBC69D5F1D84582A25C7BC58C705FD33CFD99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Instance == null)
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_0 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// CreateMenu();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_CreateMenu_m0391A3EC07470A343C2B6A460A0945E3C8897CEE(NULL);
	}

IL_0012:
	{
		// if (m_Instance)
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_2 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// m_Instance.gameObject.SetActive(true);
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_4 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// IsShowing = true;
		NRHomeMenu_set_IsShowing_m00FBDD232F5AED6CCEF3DBFA789B29E1898668EB_inline((bool)1, NULL);
		// if (NRInput.RaycastMode == RaycastModeEnum.Gaze)
		il2cpp_codegen_runtime_class_init_inline(NRInput_t5E9EBC69D5F1D84582A25C7BC58C705FD33CFD99_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = NRInput_get_RaycastMode_m7F669890D59747E8E9856B47B88C7141D18B7646(NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// m_Instance.FollowCamera();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_7 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		NullCheck(L_7);
		NRHomeMenu_FollowCamera_m035AAF8747DD827C22C64DE53BB66AF45E5A0154(L_7, NULL);
	}

IL_0045:
	{
		// if (OnHomeMenuShow != null)
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___OnHomeMenuShow_9;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// OnHomeMenuShow();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___OnHomeMenuShow_9;
		NullCheck(L_9);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_9, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu_Hide_mB0BA86090F0B7F24B180FA5A4D361D54DFBA5B86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Instance)
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_0 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// m_Instance.gameObject.SetActive(false);
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* L_2 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_Instance_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// IsShowing = false;
		NRHomeMenu_set_IsShowing_m00FBDD232F5AED6CCEF3DBFA789B29E1898668EB_inline((bool)0, NULL);
		// if (OnHomeMenuHide != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___OnHomeMenuHide_10;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// OnHomeMenuHide();
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___OnHomeMenuHide_10;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu__ctor_m3CD7D97196F764DE6815BAD645E4852ABBB41363 (NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NRKernal.NRExamples.NRHomeMenu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NRHomeMenu__cctor_mBEB717D7DEC732A2CFCBD0769495D8555261B989 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9672B2524E75F91CF2C0A85020D63C5BC199748A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string m_MenuPrefabPath = "NRUI/NRHomeMenu";
		((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_MenuPrefabPath_7 = _stringLiteral9672B2524E75F91CF2C0A85020D63C5BC199748A;
		Il2CppCodeGenWriteBarrier((void**)(&((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___m_MenuPrefabPath_7), (void*)_stringLiteral9672B2524E75F91CF2C0A85020D63C5BC199748A);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraCaptureController_set_RGBCamTexture_m7E2AF4F7AC193E792EF128C104B38B3FE9979B26_inline (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* ___value0, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTexture RGBCamTexture { get; set; }
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0 = ___value0;
		__this->___U3CRGBCamTextureU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRGBCamTextureU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* CameraCaptureController_get_RGBCamTexture_mAEE2688A31593B33990FB1EF4662CAD5226C707D_inline (CameraCaptureController_t55663D48E1212F270DB542A945DD9D0E89AA9D1B* __this, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTexture RGBCamTexture { get; set; }
		NRRGBCamTexture_t0F71370A10A745BCD8DCDAC8B3D097955DEB1408* L_0 = __this->___U3CRGBCamTextureU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraModelView_get_FrameCount_mD415804FD2365FA8A29ED346DDD55BF83370831B_inline (CameraModelView_t4959D23E28E48F4EF4D6372748189A05678F4FDB* __this, const RuntimeMethod* method) 
{
	{
		// public int FrameCount { get; protected set; }
		int32_t L_0 = __this->___U3CFrameCountU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraYUVCaptureController_set_YuvCamTexture_m13394A6A364DDFFE7A684F7A22CE768468AA7237_inline (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* ___value0, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTextureYUV YuvCamTexture { get; set; }
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0 = ___value0;
		__this->___U3CYuvCamTextureU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CYuvCamTextureU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* CameraYUVCaptureController_get_YuvCamTexture_mB95239CB862785AA457F6BA6F482046B63CFB65B_inline (CameraYUVCaptureController_t5E31C35855322D98D6B2C8EFE177BB878EFC4F5D* __this, const RuntimeMethod* method) 
{
	{
		// private NRRGBCamTextureYUV YuvCamTexture { get; set; }
		NRRGBCamTextureYUV_t17F620D05AA172692DAAFD08A84AAAFFF903F1C8* L_0 = __this->___U3CYuvCamTextureU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableImageBehaviour_Initialize_m312E86EEB7C203764A76EBFBFFAFD91214440F1D_inline (TrackableImageBehaviour_t9C6CE003F2B2BD9951EA3402BF8231E7BD32141A* __this, NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* ___marker0, const RuntimeMethod* method) 
{
	{
		// m_DetectedMarker = marker;
		NRTrackableImage_t8686D086BAA5A00B36E51D4BF1CE95102B4A1683* L_0 = ___marker0;
		__this->___m_DetectedMarker_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DetectedMarker_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* NRSessionManager_get_NRSessionBehaviour_mB908AC2A7C4CAF8989F2FD1EEDF566438FEBA0D8_inline (NRSessionManager_t04D393F562CBE6F3EBE2AB8A3FCD9A1A81A04502* __this, const RuntimeMethod* method) 
{
	{
		// public NRSessionBehaviour NRSessionBehaviour { get; private set; }
		NRSessionBehaviour_t5FB351108F215B69E3F2117B422365441A6A9772* L_0 = __this->___U3CNRSessionBehaviourU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NRHomeMenu_get_IsShowing_mEC9B254CA4341B9331E8B4CCE1D2E687229AB475_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsShowing { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		bool L_0 = ((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___U3CIsShowingU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NRHomeMenu_set_IsShowing_m00FBDD232F5AED6CCEF3DBFA789B29E1898668EB_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var);
		((NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_StaticFields*)il2cpp_codegen_static_fields_for(NRHomeMenu_t8CE6FE2FCFCBE4E76516140C83F6758FDAE3E774_il2cpp_TypeInfo_var))->___U3CIsShowingU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
