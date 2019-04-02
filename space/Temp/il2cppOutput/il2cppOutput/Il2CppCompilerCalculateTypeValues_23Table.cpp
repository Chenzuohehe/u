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


// Boundary
struct Boundary_t2442033035;
// NetworkAsteroid
struct NetworkAsteroid_t2751897214;
// NetworkGameManager
struct NetworkGameManager_t158594586;
// NetworkSpaceship
struct NetworkSpaceship_t2221554150;
// Prototype.NetworkLobby.LobbyManager
struct LobbyManager_t2983451535;
// Prototype.NetworkLobby.LobbyServerEntry
struct LobbyServerEntry_t446634599;
// Readme/Section[]
struct SectionU5BU5D_t1447152577;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_t100189446;
// System.Collections.Generic.List`1<NetworkSpaceship>
struct List_1_t3693628892;
// System.Collections.Generic.List`1<Prototype.NetworkLobby.LobbyPlayer>
struct List_1_t2025498763;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t3299519057;
// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t3548153263;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t923838031;




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
#ifndef BOUNDARY_T2442033035_H
#define BOUNDARY_T2442033035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boundary
struct  Boundary_t2442033035  : public RuntimeObject
{
public:
	// System.Single Boundary::xMin
	float ___xMin_0;
	// System.Single Boundary::xMax
	float ___xMax_1;
	// System.Single Boundary::zMin
	float ___zMin_2;
	// System.Single Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Boundary_t2442033035, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Boundary_t2442033035, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Boundary_t2442033035, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Boundary_t2442033035, ___zMax_3)); }
	inline float get_zMax_3() const { return ___zMax_3; }
	inline float* get_address_of_zMax_3() { return &___zMax_3; }
	inline void set_zMax_3(float value)
	{
		___zMax_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARY_T2442033035_H
#ifndef U3CRETURNTOLOBYU3EC__ITERATOR0_T292730479_H
#define U3CRETURNTOLOBYU3EC__ITERATOR0_T292730479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkGameManager/<ReturnToLoby>c__Iterator0
struct  U3CReturnToLobyU3Ec__Iterator0_t292730479  : public RuntimeObject
{
public:
	// NetworkGameManager NetworkGameManager/<ReturnToLoby>c__Iterator0::$this
	NetworkGameManager_t158594586 * ___U24this_0;
	// System.Object NetworkGameManager/<ReturnToLoby>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean NetworkGameManager/<ReturnToLoby>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 NetworkGameManager/<ReturnToLoby>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CReturnToLobyU3Ec__Iterator0_t292730479, ___U24this_0)); }
	inline NetworkGameManager_t158594586 * get_U24this_0() const { return ___U24this_0; }
	inline NetworkGameManager_t158594586 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(NetworkGameManager_t158594586 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CReturnToLobyU3Ec__Iterator0_t292730479, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CReturnToLobyU3Ec__Iterator0_t292730479, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CReturnToLobyU3Ec__Iterator0_t292730479, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRETURNTOLOBYU3EC__ITERATOR0_T292730479_H
#ifndef U3CWAITFORRESPAWNU3EC__ITERATOR2_T3331667059_H
#define U3CWAITFORRESPAWNU3EC__ITERATOR2_T3331667059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkGameManager/<WaitForRespawn>c__Iterator2
struct  U3CWaitForRespawnU3Ec__Iterator2_t3331667059  : public RuntimeObject
{
public:
	// NetworkSpaceship NetworkGameManager/<WaitForRespawn>c__Iterator2::ship
	NetworkSpaceship_t2221554150 * ___ship_0;
	// System.Object NetworkGameManager/<WaitForRespawn>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean NetworkGameManager/<WaitForRespawn>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 NetworkGameManager/<WaitForRespawn>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_ship_0() { return static_cast<int32_t>(offsetof(U3CWaitForRespawnU3Ec__Iterator2_t3331667059, ___ship_0)); }
	inline NetworkSpaceship_t2221554150 * get_ship_0() const { return ___ship_0; }
	inline NetworkSpaceship_t2221554150 ** get_address_of_ship_0() { return &___ship_0; }
	inline void set_ship_0(NetworkSpaceship_t2221554150 * value)
	{
		___ship_0 = value;
		Il2CppCodeGenWriteBarrier((&___ship_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CWaitForRespawnU3Ec__Iterator2_t3331667059, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CWaitForRespawnU3Ec__Iterator2_t3331667059, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CWaitForRespawnU3Ec__Iterator2_t3331667059, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORRESPAWNU3EC__ITERATOR2_T3331667059_H
#ifndef U3CDISPLAYISCONNECTINGU3EC__ANONSTOREY1_T3264137609_H
#define U3CDISPLAYISCONNECTINGU3EC__ANONSTOREY1_T3264137609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyManager/<DisplayIsConnecting>c__AnonStorey1
struct  U3CDisplayIsConnectingU3Ec__AnonStorey1_t3264137609  : public RuntimeObject
{
public:
	// Prototype.NetworkLobby.LobbyManager Prototype.NetworkLobby.LobbyManager/<DisplayIsConnecting>c__AnonStorey1::_this
	LobbyManager_t2983451535 * ____this_0;

public:
	inline static int32_t get_offset_of__this_0() { return static_cast<int32_t>(offsetof(U3CDisplayIsConnectingU3Ec__AnonStorey1_t3264137609, ____this_0)); }
	inline LobbyManager_t2983451535 * get__this_0() const { return ____this_0; }
	inline LobbyManager_t2983451535 ** get_address_of__this_0() { return &____this_0; }
	inline void set__this_0(LobbyManager_t2983451535 * value)
	{
		____this_0 = value;
		Il2CppCodeGenWriteBarrier((&____this_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISPLAYISCONNECTINGU3EC__ANONSTOREY1_T3264137609_H
#ifndef U3CSERVERCOUNTDOWNCOROUTINEU3EC__ITERATOR0_T1110776268_H
#define U3CSERVERCOUNTDOWNCOROUTINEU3EC__ITERATOR0_T1110776268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0
struct  U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268  : public RuntimeObject
{
public:
	// System.Single Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0::<remainingTime>__0
	float ___U3CremainingTimeU3E__0_0;
	// System.Int32 Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0::<floorTime>__0
	int32_t ___U3CfloorTimeU3E__0_1;
	// System.Int32 Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0::<newFloorTime>__1
	int32_t ___U3CnewFloorTimeU3E__1_2;
	// Prototype.NetworkLobby.LobbyManager Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0::$this
	LobbyManager_t2983451535 * ___U24this_3;
	// System.Object Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 Prototype.NetworkLobby.LobbyManager/<ServerCountdownCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CremainingTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268, ___U3CremainingTimeU3E__0_0)); }
	inline float get_U3CremainingTimeU3E__0_0() const { return ___U3CremainingTimeU3E__0_0; }
	inline float* get_address_of_U3CremainingTimeU3E__0_0() { return &___U3CremainingTimeU3E__0_0; }
	inline void set_U3CremainingTimeU3E__0_0(float value)
	{
		___U3CremainingTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CfloorTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268, ___U3CfloorTimeU3E__0_1)); }
	inline int32_t get_U3CfloorTimeU3E__0_1() const { return ___U3CfloorTimeU3E__0_1; }
	inline int32_t* get_address_of_U3CfloorTimeU3E__0_1() { return &___U3CfloorTimeU3E__0_1; }
	inline void set_U3CfloorTimeU3E__0_1(int32_t value)
	{
		___U3CfloorTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CnewFloorTimeU3E__1_2() { return static_cast<int32_t>(offsetof(U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268, ___U3CnewFloorTimeU3E__1_2)); }
	inline int32_t get_U3CnewFloorTimeU3E__1_2() const { return ___U3CnewFloorTimeU3E__1_2; }
	inline int32_t* get_address_of_U3CnewFloorTimeU3E__1_2() { return &___U3CnewFloorTimeU3E__1_2; }
	inline void set_U3CnewFloorTimeU3E__1_2(int32_t value)
	{
		___U3CnewFloorTimeU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268, ___U24this_3)); }
	inline LobbyManager_t2983451535 * get_U24this_3() const { return ___U24this_3; }
	inline LobbyManager_t2983451535 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(LobbyManager_t2983451535 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSERVERCOUNTDOWNCOROUTINEU3EC__ITERATOR0_T1110776268_H
#ifndef SECTION_T3705589568_H
#define SECTION_T3705589568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme/Section
struct  Section_t3705589568  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((&___heading_0), value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((&___text_1), value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((&___linkText_2), value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((&___url_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECTION_T3705589568_H
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
#ifndef MESSAGEBASE_T3584795631_H
#define MESSAGEBASE_T3584795631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.MessageBase
struct  MessageBase_t3584795631  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEBASE_T3584795631_H
#ifndef KICKMSG_T2528387864_H
#define KICKMSG_T2528387864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyManager/KickMsg
struct  KickMsg_t2528387864  : public MessageBase_t3584795631
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KICKMSG_T2528387864_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef U3CASTEROIDCOROUTINEU3EC__ITERATOR1_T1071769855_H
#define U3CASTEROIDCOROUTINEU3EC__ITERATOR1_T1071769855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkGameManager/<AsteroidCoroutine>c__Iterator1
struct  U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 NetworkGameManager/<AsteroidCoroutine>c__Iterator1::<dir>__1
	Vector2_t2156229523  ___U3CdirU3E__1_0;
	// UnityEngine.Vector3 NetworkGameManager/<AsteroidCoroutine>c__Iterator1::<position>__1
	Vector3_t3722313464  ___U3CpositionU3E__1_1;
	// UnityEngine.GameObject NetworkGameManager/<AsteroidCoroutine>c__Iterator1::<ast>__1
	GameObject_t1113636619 * ___U3CastU3E__1_2;
	// NetworkAsteroid NetworkGameManager/<AsteroidCoroutine>c__Iterator1::<asteroid>__1
	NetworkAsteroid_t2751897214 * ___U3CasteroidU3E__1_3;
	// NetworkGameManager NetworkGameManager/<AsteroidCoroutine>c__Iterator1::$this
	NetworkGameManager_t158594586 * ___U24this_4;
	// System.Object NetworkGameManager/<AsteroidCoroutine>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean NetworkGameManager/<AsteroidCoroutine>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 NetworkGameManager/<AsteroidCoroutine>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CdirU3E__1_0() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U3CdirU3E__1_0)); }
	inline Vector2_t2156229523  get_U3CdirU3E__1_0() const { return ___U3CdirU3E__1_0; }
	inline Vector2_t2156229523 * get_address_of_U3CdirU3E__1_0() { return &___U3CdirU3E__1_0; }
	inline void set_U3CdirU3E__1_0(Vector2_t2156229523  value)
	{
		___U3CdirU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U3CpositionU3E__1_1)); }
	inline Vector3_t3722313464  get_U3CpositionU3E__1_1() const { return ___U3CpositionU3E__1_1; }
	inline Vector3_t3722313464 * get_address_of_U3CpositionU3E__1_1() { return &___U3CpositionU3E__1_1; }
	inline void set_U3CpositionU3E__1_1(Vector3_t3722313464  value)
	{
		___U3CpositionU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CastU3E__1_2() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U3CastU3E__1_2)); }
	inline GameObject_t1113636619 * get_U3CastU3E__1_2() const { return ___U3CastU3E__1_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CastU3E__1_2() { return &___U3CastU3E__1_2; }
	inline void set_U3CastU3E__1_2(GameObject_t1113636619 * value)
	{
		___U3CastU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CastU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U3CasteroidU3E__1_3() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U3CasteroidU3E__1_3)); }
	inline NetworkAsteroid_t2751897214 * get_U3CasteroidU3E__1_3() const { return ___U3CasteroidU3E__1_3; }
	inline NetworkAsteroid_t2751897214 ** get_address_of_U3CasteroidU3E__1_3() { return &___U3CasteroidU3E__1_3; }
	inline void set_U3CasteroidU3E__1_3(NetworkAsteroid_t2751897214 * value)
	{
		___U3CasteroidU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CasteroidU3E__1_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U24this_4)); }
	inline NetworkGameManager_t158594586 * get_U24this_4() const { return ___U24this_4; }
	inline NetworkGameManager_t158594586 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(NetworkGameManager_t158594586 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CASTEROIDCOROUTINEU3EC__ITERATOR1_T1071769855_H
#ifndef NETWORKID_T4216585621_H
#define NETWORKID_T4216585621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NetworkID
struct  NetworkID_t4216585621 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.NetworkID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkID_t4216585621, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKID_T4216585621_H
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
#ifndef U3CPOPULATEU3EC__ANONSTOREY0_T1952366176_H
#define U3CPOPULATEU3EC__ANONSTOREY0_T1952366176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyServerEntry/<Populate>c__AnonStorey0
struct  U3CPopulateU3Ec__AnonStorey0_t1952366176  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.NetworkID Prototype.NetworkLobby.LobbyServerEntry/<Populate>c__AnonStorey0::networkID
	uint64_t ___networkID_0;
	// Prototype.NetworkLobby.LobbyManager Prototype.NetworkLobby.LobbyServerEntry/<Populate>c__AnonStorey0::lobbyManager
	LobbyManager_t2983451535 * ___lobbyManager_1;
	// Prototype.NetworkLobby.LobbyServerEntry Prototype.NetworkLobby.LobbyServerEntry/<Populate>c__AnonStorey0::$this
	LobbyServerEntry_t446634599 * ___U24this_2;

public:
	inline static int32_t get_offset_of_networkID_0() { return static_cast<int32_t>(offsetof(U3CPopulateU3Ec__AnonStorey0_t1952366176, ___networkID_0)); }
	inline uint64_t get_networkID_0() const { return ___networkID_0; }
	inline uint64_t* get_address_of_networkID_0() { return &___networkID_0; }
	inline void set_networkID_0(uint64_t value)
	{
		___networkID_0 = value;
	}

	inline static int32_t get_offset_of_lobbyManager_1() { return static_cast<int32_t>(offsetof(U3CPopulateU3Ec__AnonStorey0_t1952366176, ___lobbyManager_1)); }
	inline LobbyManager_t2983451535 * get_lobbyManager_1() const { return ___lobbyManager_1; }
	inline LobbyManager_t2983451535 ** get_address_of_lobbyManager_1() { return &___lobbyManager_1; }
	inline void set_lobbyManager_1(LobbyManager_t2983451535 * value)
	{
		___lobbyManager_1 = value;
		Il2CppCodeGenWriteBarrier((&___lobbyManager_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CPopulateU3Ec__AnonStorey0_t1952366176, ___U24this_2)); }
	inline LobbyServerEntry_t446634599 * get_U24this_2() const { return ___U24this_2; }
	inline LobbyServerEntry_t446634599 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(LobbyServerEntry_t446634599 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOPULATEU3EC__ANONSTOREY0_T1952366176_H
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
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef README_T240784718_H
#define README_T240784718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme
struct  Readme_t240784718  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t3840446185 * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t1447152577* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___icon_4)); }
	inline Texture2D_t3840446185 * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t3840446185 ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t3840446185 * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((&___icon_4), value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((&___title_5), value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___sections_6)); }
	inline SectionU5BU5D_t1447152577* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t1447152577** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t1447152577* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((&___sections_6), value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // README_T240784718_H
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
#ifndef MOVER_T2250641681_H
#define MOVER_T2250641681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mover
struct  Mover_t2250641681  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Mover::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Mover_t2250641681, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVER_T2250641681_H
#ifndef NETWORKSPACESHIPBULLET_T4183154769_H
#define NETWORKSPACESHIPBULLET_T4183154769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkSpaceshipBullet
struct  NetworkSpaceshipBullet_t4183154769  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 NetworkSpaceshipBullet::originalDirection
	Vector3_t3722313464  ___originalDirection_4;
	// NetworkSpaceship NetworkSpaceshipBullet::owner
	NetworkSpaceship_t2221554150 * ___owner_5;

public:
	inline static int32_t get_offset_of_originalDirection_4() { return static_cast<int32_t>(offsetof(NetworkSpaceshipBullet_t4183154769, ___originalDirection_4)); }
	inline Vector3_t3722313464  get_originalDirection_4() const { return ___originalDirection_4; }
	inline Vector3_t3722313464 * get_address_of_originalDirection_4() { return &___originalDirection_4; }
	inline void set_originalDirection_4(Vector3_t3722313464  value)
	{
		___originalDirection_4 = value;
	}

	inline static int32_t get_offset_of_owner_5() { return static_cast<int32_t>(offsetof(NetworkSpaceshipBullet_t4183154769, ___owner_5)); }
	inline NetworkSpaceship_t2221554150 * get_owner_5() const { return ___owner_5; }
	inline NetworkSpaceship_t2221554150 ** get_address_of_owner_5() { return &___owner_5; }
	inline void set_owner_5(NetworkSpaceship_t2221554150 * value)
	{
		___owner_5 = value;
		Il2CppCodeGenWriteBarrier((&___owner_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSPACESHIPBULLET_T4183154769_H
#ifndef PLAYERSHIPCONTROLLER_T730644332_H
#define PLAYERSHIPCONTROLLER_T730644332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShipController
struct  PlayerShipController_t730644332  : public MonoBehaviour_t3962482529
{
public:
	// System.Single PlayerShipController::speed
	float ___speed_4;
	// System.Single PlayerShipController::tilt
	float ___tilt_5;
	// Boundary PlayerShipController::boundary
	Boundary_t2442033035 * ___boundary_6;
	// System.Single PlayerShipController::nextFire
	float ___nextFire_7;
	// System.Single PlayerShipController::fireRate
	float ___fireRate_8;
	// UnityEngine.GameObject PlayerShipController::shot
	GameObject_t1113636619 * ___shot_9;
	// UnityEngine.Transform PlayerShipController::shotSqawn
	Transform_t3600365921 * ___shotSqawn_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerShipController_t730644332, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_tilt_5() { return static_cast<int32_t>(offsetof(PlayerShipController_t730644332, ___tilt_5)); }
	inline float get_tilt_5() const { return ___tilt_5; }
	inline float* get_address_of_tilt_5() { return &___tilt_5; }
	inline void set_tilt_5(float value)
	{
		___tilt_5 = value;
	}

	inline static int32_t get_offset_of_boundary_6() { return static_cast<int32_t>(offsetof(PlayerShipController_t730644332, ___boundary_6)); }
	inline Boundary_t2442033035 * get_boundary_6() const { return ___boundary_6; }
	inline Boundary_t2442033035 ** get_address_of_boundary_6() { return &___boundary_6; }
	inline void set_boundary_6(Boundary_t2442033035 * value)
	{
		___boundary_6 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_6), value);
	}

	inline static int32_t get_offset_of_nextFire_7() { return static_cast<int32_t>(offsetof(PlayerShipController_t730644332, ___nextFire_7)); }
	inline float get_nextFire_7() const { return ___nextFire_7; }
	inline float* get_address_of_nextFire_7() { return &___nextFire_7; }
	inline void set_nextFire_7(float value)
	{
		___nextFire_7 = value;
	}

	inline static int32_t get_offset_of_fireRate_8() { return static_cast<int32_t>(offsetof(PlayerShipController_t730644332, ___fireRate_8)); }
	inline float get_fireRate_8() const { return ___fireRate_8; }
	inline float* get_address_of_fireRate_8() { return &___fireRate_8; }
	inline void set_fireRate_8(float value)
	{
		___fireRate_8 = value;
	}

	inline static int32_t get_offset_of_shot_9() { return static_cast<int32_t>(offsetof(PlayerShipController_t730644332, ___shot_9)); }
	inline GameObject_t1113636619 * get_shot_9() const { return ___shot_9; }
	inline GameObject_t1113636619 ** get_address_of_shot_9() { return &___shot_9; }
	inline void set_shot_9(GameObject_t1113636619 * value)
	{
		___shot_9 = value;
		Il2CppCodeGenWriteBarrier((&___shot_9), value);
	}

	inline static int32_t get_offset_of_shotSqawn_10() { return static_cast<int32_t>(offsetof(PlayerShipController_t730644332, ___shotSqawn_10)); }
	inline Transform_t3600365921 * get_shotSqawn_10() const { return ___shotSqawn_10; }
	inline Transform_t3600365921 ** get_address_of_shotSqawn_10() { return &___shotSqawn_10; }
	inline void set_shotSqawn_10(Transform_t3600365921 * value)
	{
		___shotSqawn_10 = value;
		Il2CppCodeGenWriteBarrier((&___shotSqawn_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSHIPCONTROLLER_T730644332_H
#ifndef LOBBYHOOK_T3639298258_H
#define LOBBYHOOK_T3639298258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyHook
struct  LobbyHook_t3639298258  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYHOOK_T3639298258_H
#ifndef LOBBYPLAYERLIST_T2254251314_H
#define LOBBYPLAYERLIST_T2254251314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyPlayerList
struct  LobbyPlayerList_t2254251314  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform Prototype.NetworkLobby.LobbyPlayerList::playerListContentTransform
	RectTransform_t3704657025 * ___playerListContentTransform_5;
	// UnityEngine.GameObject Prototype.NetworkLobby.LobbyPlayerList::warningDirectPlayServer
	GameObject_t1113636619 * ___warningDirectPlayServer_6;
	// UnityEngine.Transform Prototype.NetworkLobby.LobbyPlayerList::addButtonRow
	Transform_t3600365921 * ___addButtonRow_7;
	// UnityEngine.UI.VerticalLayoutGroup Prototype.NetworkLobby.LobbyPlayerList::_layout
	VerticalLayoutGroup_t923838031 * ____layout_8;
	// System.Collections.Generic.List`1<Prototype.NetworkLobby.LobbyPlayer> Prototype.NetworkLobby.LobbyPlayerList::_players
	List_1_t2025498763 * ____players_9;

public:
	inline static int32_t get_offset_of_playerListContentTransform_5() { return static_cast<int32_t>(offsetof(LobbyPlayerList_t2254251314, ___playerListContentTransform_5)); }
	inline RectTransform_t3704657025 * get_playerListContentTransform_5() const { return ___playerListContentTransform_5; }
	inline RectTransform_t3704657025 ** get_address_of_playerListContentTransform_5() { return &___playerListContentTransform_5; }
	inline void set_playerListContentTransform_5(RectTransform_t3704657025 * value)
	{
		___playerListContentTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___playerListContentTransform_5), value);
	}

	inline static int32_t get_offset_of_warningDirectPlayServer_6() { return static_cast<int32_t>(offsetof(LobbyPlayerList_t2254251314, ___warningDirectPlayServer_6)); }
	inline GameObject_t1113636619 * get_warningDirectPlayServer_6() const { return ___warningDirectPlayServer_6; }
	inline GameObject_t1113636619 ** get_address_of_warningDirectPlayServer_6() { return &___warningDirectPlayServer_6; }
	inline void set_warningDirectPlayServer_6(GameObject_t1113636619 * value)
	{
		___warningDirectPlayServer_6 = value;
		Il2CppCodeGenWriteBarrier((&___warningDirectPlayServer_6), value);
	}

	inline static int32_t get_offset_of_addButtonRow_7() { return static_cast<int32_t>(offsetof(LobbyPlayerList_t2254251314, ___addButtonRow_7)); }
	inline Transform_t3600365921 * get_addButtonRow_7() const { return ___addButtonRow_7; }
	inline Transform_t3600365921 ** get_address_of_addButtonRow_7() { return &___addButtonRow_7; }
	inline void set_addButtonRow_7(Transform_t3600365921 * value)
	{
		___addButtonRow_7 = value;
		Il2CppCodeGenWriteBarrier((&___addButtonRow_7), value);
	}

	inline static int32_t get_offset_of__layout_8() { return static_cast<int32_t>(offsetof(LobbyPlayerList_t2254251314, ____layout_8)); }
	inline VerticalLayoutGroup_t923838031 * get__layout_8() const { return ____layout_8; }
	inline VerticalLayoutGroup_t923838031 ** get_address_of__layout_8() { return &____layout_8; }
	inline void set__layout_8(VerticalLayoutGroup_t923838031 * value)
	{
		____layout_8 = value;
		Il2CppCodeGenWriteBarrier((&____layout_8), value);
	}

	inline static int32_t get_offset_of__players_9() { return static_cast<int32_t>(offsetof(LobbyPlayerList_t2254251314, ____players_9)); }
	inline List_1_t2025498763 * get__players_9() const { return ____players_9; }
	inline List_1_t2025498763 ** get_address_of__players_9() { return &____players_9; }
	inline void set__players_9(List_1_t2025498763 * value)
	{
		____players_9 = value;
		Il2CppCodeGenWriteBarrier((&____players_9), value);
	}
};

struct LobbyPlayerList_t2254251314_StaticFields
{
public:
	// Prototype.NetworkLobby.LobbyPlayerList Prototype.NetworkLobby.LobbyPlayerList::_instance
	LobbyPlayerList_t2254251314 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(LobbyPlayerList_t2254251314_StaticFields, ____instance_4)); }
	inline LobbyPlayerList_t2254251314 * get__instance_4() const { return ____instance_4; }
	inline LobbyPlayerList_t2254251314 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(LobbyPlayerList_t2254251314 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYPLAYERLIST_T2254251314_H
#ifndef LOBBYSERVERENTRY_T446634599_H
#define LOBBYSERVERENTRY_T446634599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyServerEntry
struct  LobbyServerEntry_t446634599  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text Prototype.NetworkLobby.LobbyServerEntry::serverInfoText
	Text_t1901882714 * ___serverInfoText_4;
	// UnityEngine.UI.Text Prototype.NetworkLobby.LobbyServerEntry::slotInfo
	Text_t1901882714 * ___slotInfo_5;
	// UnityEngine.UI.Button Prototype.NetworkLobby.LobbyServerEntry::joinButton
	Button_t4055032469 * ___joinButton_6;

public:
	inline static int32_t get_offset_of_serverInfoText_4() { return static_cast<int32_t>(offsetof(LobbyServerEntry_t446634599, ___serverInfoText_4)); }
	inline Text_t1901882714 * get_serverInfoText_4() const { return ___serverInfoText_4; }
	inline Text_t1901882714 ** get_address_of_serverInfoText_4() { return &___serverInfoText_4; }
	inline void set_serverInfoText_4(Text_t1901882714 * value)
	{
		___serverInfoText_4 = value;
		Il2CppCodeGenWriteBarrier((&___serverInfoText_4), value);
	}

	inline static int32_t get_offset_of_slotInfo_5() { return static_cast<int32_t>(offsetof(LobbyServerEntry_t446634599, ___slotInfo_5)); }
	inline Text_t1901882714 * get_slotInfo_5() const { return ___slotInfo_5; }
	inline Text_t1901882714 ** get_address_of_slotInfo_5() { return &___slotInfo_5; }
	inline void set_slotInfo_5(Text_t1901882714 * value)
	{
		___slotInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___slotInfo_5), value);
	}

	inline static int32_t get_offset_of_joinButton_6() { return static_cast<int32_t>(offsetof(LobbyServerEntry_t446634599, ___joinButton_6)); }
	inline Button_t4055032469 * get_joinButton_6() const { return ___joinButton_6; }
	inline Button_t4055032469 ** get_address_of_joinButton_6() { return &___joinButton_6; }
	inline void set_joinButton_6(Button_t4055032469 * value)
	{
		___joinButton_6 = value;
		Il2CppCodeGenWriteBarrier((&___joinButton_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYSERVERENTRY_T446634599_H
#ifndef LOBBYSERVERLIST_T1035580108_H
#define LOBBYSERVERLIST_T1035580108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyServerList
struct  LobbyServerList_t1035580108  : public MonoBehaviour_t3962482529
{
public:
	// Prototype.NetworkLobby.LobbyManager Prototype.NetworkLobby.LobbyServerList::lobbyManager
	LobbyManager_t2983451535 * ___lobbyManager_4;
	// UnityEngine.RectTransform Prototype.NetworkLobby.LobbyServerList::serverListRect
	RectTransform_t3704657025 * ___serverListRect_5;
	// UnityEngine.GameObject Prototype.NetworkLobby.LobbyServerList::serverEntryPrefab
	GameObject_t1113636619 * ___serverEntryPrefab_6;
	// UnityEngine.GameObject Prototype.NetworkLobby.LobbyServerList::noServerFound
	GameObject_t1113636619 * ___noServerFound_7;
	// System.Int32 Prototype.NetworkLobby.LobbyServerList::currentPage
	int32_t ___currentPage_8;
	// System.Int32 Prototype.NetworkLobby.LobbyServerList::previousPage
	int32_t ___previousPage_9;

public:
	inline static int32_t get_offset_of_lobbyManager_4() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108, ___lobbyManager_4)); }
	inline LobbyManager_t2983451535 * get_lobbyManager_4() const { return ___lobbyManager_4; }
	inline LobbyManager_t2983451535 ** get_address_of_lobbyManager_4() { return &___lobbyManager_4; }
	inline void set_lobbyManager_4(LobbyManager_t2983451535 * value)
	{
		___lobbyManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___lobbyManager_4), value);
	}

	inline static int32_t get_offset_of_serverListRect_5() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108, ___serverListRect_5)); }
	inline RectTransform_t3704657025 * get_serverListRect_5() const { return ___serverListRect_5; }
	inline RectTransform_t3704657025 ** get_address_of_serverListRect_5() { return &___serverListRect_5; }
	inline void set_serverListRect_5(RectTransform_t3704657025 * value)
	{
		___serverListRect_5 = value;
		Il2CppCodeGenWriteBarrier((&___serverListRect_5), value);
	}

	inline static int32_t get_offset_of_serverEntryPrefab_6() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108, ___serverEntryPrefab_6)); }
	inline GameObject_t1113636619 * get_serverEntryPrefab_6() const { return ___serverEntryPrefab_6; }
	inline GameObject_t1113636619 ** get_address_of_serverEntryPrefab_6() { return &___serverEntryPrefab_6; }
	inline void set_serverEntryPrefab_6(GameObject_t1113636619 * value)
	{
		___serverEntryPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((&___serverEntryPrefab_6), value);
	}

	inline static int32_t get_offset_of_noServerFound_7() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108, ___noServerFound_7)); }
	inline GameObject_t1113636619 * get_noServerFound_7() const { return ___noServerFound_7; }
	inline GameObject_t1113636619 ** get_address_of_noServerFound_7() { return &___noServerFound_7; }
	inline void set_noServerFound_7(GameObject_t1113636619 * value)
	{
		___noServerFound_7 = value;
		Il2CppCodeGenWriteBarrier((&___noServerFound_7), value);
	}

	inline static int32_t get_offset_of_currentPage_8() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108, ___currentPage_8)); }
	inline int32_t get_currentPage_8() const { return ___currentPage_8; }
	inline int32_t* get_address_of_currentPage_8() { return &___currentPage_8; }
	inline void set_currentPage_8(int32_t value)
	{
		___currentPage_8 = value;
	}

	inline static int32_t get_offset_of_previousPage_9() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108, ___previousPage_9)); }
	inline int32_t get_previousPage_9() const { return ___previousPage_9; }
	inline int32_t* get_address_of_previousPage_9() { return &___previousPage_9; }
	inline void set_previousPage_9(int32_t value)
	{
		___previousPage_9 = value;
	}
};

struct LobbyServerList_t1035580108_StaticFields
{
public:
	// UnityEngine.Color Prototype.NetworkLobby.LobbyServerList::OddServerColor
	Color_t2555686324  ___OddServerColor_10;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyServerList::EvenServerColor
	Color_t2555686324  ___EvenServerColor_11;

public:
	inline static int32_t get_offset_of_OddServerColor_10() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108_StaticFields, ___OddServerColor_10)); }
	inline Color_t2555686324  get_OddServerColor_10() const { return ___OddServerColor_10; }
	inline Color_t2555686324 * get_address_of_OddServerColor_10() { return &___OddServerColor_10; }
	inline void set_OddServerColor_10(Color_t2555686324  value)
	{
		___OddServerColor_10 = value;
	}

	inline static int32_t get_offset_of_EvenServerColor_11() { return static_cast<int32_t>(offsetof(LobbyServerList_t1035580108_StaticFields, ___EvenServerColor_11)); }
	inline Color_t2555686324  get_EvenServerColor_11() const { return ___EvenServerColor_11; }
	inline Color_t2555686324 * get_address_of_EvenServerColor_11() { return &___EvenServerColor_11; }
	inline void set_EvenServerColor_11(Color_t2555686324  value)
	{
		___EvenServerColor_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYSERVERLIST_T1035580108_H
#ifndef LOBBYTOPPANEL_T3731876481_H
#define LOBBYTOPPANEL_T3731876481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyTopPanel
struct  LobbyTopPanel_t3731876481  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Prototype.NetworkLobby.LobbyTopPanel::isInGame
	bool ___isInGame_4;
	// System.Boolean Prototype.NetworkLobby.LobbyTopPanel::isDisplayed
	bool ___isDisplayed_5;
	// UnityEngine.UI.Image Prototype.NetworkLobby.LobbyTopPanel::panelImage
	Image_t2670269651 * ___panelImage_6;

public:
	inline static int32_t get_offset_of_isInGame_4() { return static_cast<int32_t>(offsetof(LobbyTopPanel_t3731876481, ___isInGame_4)); }
	inline bool get_isInGame_4() const { return ___isInGame_4; }
	inline bool* get_address_of_isInGame_4() { return &___isInGame_4; }
	inline void set_isInGame_4(bool value)
	{
		___isInGame_4 = value;
	}

	inline static int32_t get_offset_of_isDisplayed_5() { return static_cast<int32_t>(offsetof(LobbyTopPanel_t3731876481, ___isDisplayed_5)); }
	inline bool get_isDisplayed_5() const { return ___isDisplayed_5; }
	inline bool* get_address_of_isDisplayed_5() { return &___isDisplayed_5; }
	inline void set_isDisplayed_5(bool value)
	{
		___isDisplayed_5 = value;
	}

	inline static int32_t get_offset_of_panelImage_6() { return static_cast<int32_t>(offsetof(LobbyTopPanel_t3731876481, ___panelImage_6)); }
	inline Image_t2670269651 * get_panelImage_6() const { return ___panelImage_6; }
	inline Image_t2670269651 ** get_address_of_panelImage_6() { return &___panelImage_6; }
	inline void set_panelImage_6(Image_t2670269651 * value)
	{
		___panelImage_6 = value;
		Il2CppCodeGenWriteBarrier((&___panelImage_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYTOPPANEL_T3731876481_H
#ifndef RANDOMROTATOR_T4222898668_H
#define RANDOMROTATOR_T4222898668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRotator
struct  RandomRotator_t4222898668  : public MonoBehaviour_t3962482529
{
public:
	// System.Single RandomRotator::tumble
	float ___tumble_4;

public:
	inline static int32_t get_offset_of_tumble_4() { return static_cast<int32_t>(offsetof(RandomRotator_t4222898668, ___tumble_4)); }
	inline float get_tumble_4() const { return ___tumble_4; }
	inline float* get_address_of_tumble_4() { return &___tumble_4; }
	inline void set_tumble_4(float value)
	{
		___tumble_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMROTATOR_T4222898668_H
#ifndef NETWORKBEHAVIOUR_T204670959_H
#define NETWORKBEHAVIOUR_T204670959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_t204670959  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_t3299519057 * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_MyView_8)); }
	inline NetworkIdentity_t3299519057 * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_t3299519057 ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_t3299519057 * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_MyView_8), value);
	}
};

struct NetworkBehaviour_t204670959_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_t100189446 * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_t100189446 * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_t100189446 ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_t100189446 * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_CmdHandlerDelegates_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKBEHAVIOUR_T204670959_H
#ifndef NETWORKASTEROID_T2751897214_H
#define NETWORKASTEROID_T2751897214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkAsteroid
struct  NetworkAsteroid_t2751897214  : public NetworkBehaviour_t204670959
{
public:
	// System.Int32 NetworkAsteroid::level
	int32_t ___level_10;
	// System.Boolean NetworkAsteroid::_isDestroyed
	bool ____isDestroyed_11;
	// UnityEngine.Networking.NetworkTransform NetworkAsteroid::_netTransform
	NetworkTransform_t3548153263 * ____netTransform_12;
	// UnityEngine.Vector3 NetworkAsteroid::originalForce
	Vector3_t3722313464  ___originalForce_13;
	// UnityEngine.Vector3 NetworkAsteroid::originalTorque
	Vector3_t3722313464  ___originalTorque_14;

public:
	inline static int32_t get_offset_of_level_10() { return static_cast<int32_t>(offsetof(NetworkAsteroid_t2751897214, ___level_10)); }
	inline int32_t get_level_10() const { return ___level_10; }
	inline int32_t* get_address_of_level_10() { return &___level_10; }
	inline void set_level_10(int32_t value)
	{
		___level_10 = value;
	}

	inline static int32_t get_offset_of__isDestroyed_11() { return static_cast<int32_t>(offsetof(NetworkAsteroid_t2751897214, ____isDestroyed_11)); }
	inline bool get__isDestroyed_11() const { return ____isDestroyed_11; }
	inline bool* get_address_of__isDestroyed_11() { return &____isDestroyed_11; }
	inline void set__isDestroyed_11(bool value)
	{
		____isDestroyed_11 = value;
	}

	inline static int32_t get_offset_of__netTransform_12() { return static_cast<int32_t>(offsetof(NetworkAsteroid_t2751897214, ____netTransform_12)); }
	inline NetworkTransform_t3548153263 * get__netTransform_12() const { return ____netTransform_12; }
	inline NetworkTransform_t3548153263 ** get_address_of__netTransform_12() { return &____netTransform_12; }
	inline void set__netTransform_12(NetworkTransform_t3548153263 * value)
	{
		____netTransform_12 = value;
		Il2CppCodeGenWriteBarrier((&____netTransform_12), value);
	}

	inline static int32_t get_offset_of_originalForce_13() { return static_cast<int32_t>(offsetof(NetworkAsteroid_t2751897214, ___originalForce_13)); }
	inline Vector3_t3722313464  get_originalForce_13() const { return ___originalForce_13; }
	inline Vector3_t3722313464 * get_address_of_originalForce_13() { return &___originalForce_13; }
	inline void set_originalForce_13(Vector3_t3722313464  value)
	{
		___originalForce_13 = value;
	}

	inline static int32_t get_offset_of_originalTorque_14() { return static_cast<int32_t>(offsetof(NetworkAsteroid_t2751897214, ___originalTorque_14)); }
	inline Vector3_t3722313464  get_originalTorque_14() const { return ___originalTorque_14; }
	inline Vector3_t3722313464 * get_address_of_originalTorque_14() { return &___originalTorque_14; }
	inline void set_originalTorque_14(Vector3_t3722313464  value)
	{
		___originalTorque_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKASTEROID_T2751897214_H
#ifndef NETWORKGAMEMANAGER_T158594586_H
#define NETWORKGAMEMANAGER_T158594586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkGameManager
struct  NetworkGameManager_t158594586  : public NetworkBehaviour_t204670959
{
public:
	// UnityEngine.GameObject NetworkGameManager::uiScoreZone
	GameObject_t1113636619 * ___uiScoreZone_12;
	// UnityEngine.Font NetworkGameManager::uiScoreFont
	Font_t1956802104 * ___uiScoreFont_13;
	// UnityEngine.GameObject[] NetworkGameManager::asteroidPrefabs
	GameObjectU5BU5D_t3328599146* ___asteroidPrefabs_14;
	// System.Boolean NetworkGameManager::_spawningAsteroid
	bool ____spawningAsteroid_15;
	// System.Boolean NetworkGameManager::_running
	bool ____running_16;

public:
	inline static int32_t get_offset_of_uiScoreZone_12() { return static_cast<int32_t>(offsetof(NetworkGameManager_t158594586, ___uiScoreZone_12)); }
	inline GameObject_t1113636619 * get_uiScoreZone_12() const { return ___uiScoreZone_12; }
	inline GameObject_t1113636619 ** get_address_of_uiScoreZone_12() { return &___uiScoreZone_12; }
	inline void set_uiScoreZone_12(GameObject_t1113636619 * value)
	{
		___uiScoreZone_12 = value;
		Il2CppCodeGenWriteBarrier((&___uiScoreZone_12), value);
	}

	inline static int32_t get_offset_of_uiScoreFont_13() { return static_cast<int32_t>(offsetof(NetworkGameManager_t158594586, ___uiScoreFont_13)); }
	inline Font_t1956802104 * get_uiScoreFont_13() const { return ___uiScoreFont_13; }
	inline Font_t1956802104 ** get_address_of_uiScoreFont_13() { return &___uiScoreFont_13; }
	inline void set_uiScoreFont_13(Font_t1956802104 * value)
	{
		___uiScoreFont_13 = value;
		Il2CppCodeGenWriteBarrier((&___uiScoreFont_13), value);
	}

	inline static int32_t get_offset_of_asteroidPrefabs_14() { return static_cast<int32_t>(offsetof(NetworkGameManager_t158594586, ___asteroidPrefabs_14)); }
	inline GameObjectU5BU5D_t3328599146* get_asteroidPrefabs_14() const { return ___asteroidPrefabs_14; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_asteroidPrefabs_14() { return &___asteroidPrefabs_14; }
	inline void set_asteroidPrefabs_14(GameObjectU5BU5D_t3328599146* value)
	{
		___asteroidPrefabs_14 = value;
		Il2CppCodeGenWriteBarrier((&___asteroidPrefabs_14), value);
	}

	inline static int32_t get_offset_of__spawningAsteroid_15() { return static_cast<int32_t>(offsetof(NetworkGameManager_t158594586, ____spawningAsteroid_15)); }
	inline bool get__spawningAsteroid_15() const { return ____spawningAsteroid_15; }
	inline bool* get_address_of__spawningAsteroid_15() { return &____spawningAsteroid_15; }
	inline void set__spawningAsteroid_15(bool value)
	{
		____spawningAsteroid_15 = value;
	}

	inline static int32_t get_offset_of__running_16() { return static_cast<int32_t>(offsetof(NetworkGameManager_t158594586, ____running_16)); }
	inline bool get__running_16() const { return ____running_16; }
	inline bool* get_address_of__running_16() { return &____running_16; }
	inline void set__running_16(bool value)
	{
		____running_16 = value;
	}
};

struct NetworkGameManager_t158594586_StaticFields
{
public:
	// System.Collections.Generic.List`1<NetworkSpaceship> NetworkGameManager::sShips
	List_1_t3693628892 * ___sShips_10;
	// NetworkGameManager NetworkGameManager::sInstance
	NetworkGameManager_t158594586 * ___sInstance_11;

public:
	inline static int32_t get_offset_of_sShips_10() { return static_cast<int32_t>(offsetof(NetworkGameManager_t158594586_StaticFields, ___sShips_10)); }
	inline List_1_t3693628892 * get_sShips_10() const { return ___sShips_10; }
	inline List_1_t3693628892 ** get_address_of_sShips_10() { return &___sShips_10; }
	inline void set_sShips_10(List_1_t3693628892 * value)
	{
		___sShips_10 = value;
		Il2CppCodeGenWriteBarrier((&___sShips_10), value);
	}

	inline static int32_t get_offset_of_sInstance_11() { return static_cast<int32_t>(offsetof(NetworkGameManager_t158594586_StaticFields, ___sInstance_11)); }
	inline NetworkGameManager_t158594586 * get_sInstance_11() const { return ___sInstance_11; }
	inline NetworkGameManager_t158594586 ** get_address_of_sInstance_11() { return &___sInstance_11; }
	inline void set_sInstance_11(NetworkGameManager_t158594586 * value)
	{
		___sInstance_11 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKGAMEMANAGER_T158594586_H
#ifndef NETWORKLOBBYHOOK_T1721166793_H
#define NETWORKLOBBYHOOK_T1721166793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkLobbyHook
struct  NetworkLobbyHook_t1721166793  : public LobbyHook_t3639298258
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKLOBBYHOOK_T1721166793_H
#ifndef NETWORKSPACESHIP_T2221554150_H
#define NETWORKSPACESHIP_T2221554150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkSpaceship
struct  NetworkSpaceship_t2221554150  : public NetworkBehaviour_t204670959
{
public:
	// System.Single NetworkSpaceship::rotationSpeed
	float ___rotationSpeed_10;
	// System.Single NetworkSpaceship::speed
	float ___speed_11;
	// System.Single NetworkSpaceship::maxSpeed
	float ___maxSpeed_12;
	// UnityEngine.ParticleSystem NetworkSpaceship::killParticle
	ParticleSystem_t1800779281 * ___killParticle_13;
	// UnityEngine.GameObject NetworkSpaceship::trailGameobject
	GameObject_t1113636619 * ___trailGameobject_14;
	// UnityEngine.GameObject NetworkSpaceship::bulletPrefab
	GameObject_t1113636619 * ___bulletPrefab_15;
	// System.Int32 NetworkSpaceship::score
	int32_t ___score_16;
	// UnityEngine.Color NetworkSpaceship::color
	Color_t2555686324  ___color_17;
	// System.String NetworkSpaceship::playerName
	String_t* ___playerName_18;
	// System.Int32 NetworkSpaceship::lifeCount
	int32_t ___lifeCount_19;
	// UnityEngine.Rigidbody NetworkSpaceship::_rigidbody
	Rigidbody_t3916780224 * ____rigidbody_20;
	// UnityEngine.Collider NetworkSpaceship::_collider
	Collider_t1773347010 * ____collider_21;
	// UnityEngine.UI.Text NetworkSpaceship::_scoreText
	Text_t1901882714 * ____scoreText_22;
	// System.Single NetworkSpaceship::_rotation
	float ____rotation_23;
	// System.Single NetworkSpaceship::_acceleration
	float ____acceleration_24;
	// System.Single NetworkSpaceship::_shootingTimer
	float ____shootingTimer_25;
	// System.Boolean NetworkSpaceship::_canControl
	bool ____canControl_26;
	// System.Boolean NetworkSpaceship::_wasInit
	bool ____wasInit_27;

public:
	inline static int32_t get_offset_of_rotationSpeed_10() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___rotationSpeed_10)); }
	inline float get_rotationSpeed_10() const { return ___rotationSpeed_10; }
	inline float* get_address_of_rotationSpeed_10() { return &___rotationSpeed_10; }
	inline void set_rotationSpeed_10(float value)
	{
		___rotationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_speed_11() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___speed_11)); }
	inline float get_speed_11() const { return ___speed_11; }
	inline float* get_address_of_speed_11() { return &___speed_11; }
	inline void set_speed_11(float value)
	{
		___speed_11 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_12() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___maxSpeed_12)); }
	inline float get_maxSpeed_12() const { return ___maxSpeed_12; }
	inline float* get_address_of_maxSpeed_12() { return &___maxSpeed_12; }
	inline void set_maxSpeed_12(float value)
	{
		___maxSpeed_12 = value;
	}

	inline static int32_t get_offset_of_killParticle_13() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___killParticle_13)); }
	inline ParticleSystem_t1800779281 * get_killParticle_13() const { return ___killParticle_13; }
	inline ParticleSystem_t1800779281 ** get_address_of_killParticle_13() { return &___killParticle_13; }
	inline void set_killParticle_13(ParticleSystem_t1800779281 * value)
	{
		___killParticle_13 = value;
		Il2CppCodeGenWriteBarrier((&___killParticle_13), value);
	}

	inline static int32_t get_offset_of_trailGameobject_14() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___trailGameobject_14)); }
	inline GameObject_t1113636619 * get_trailGameobject_14() const { return ___trailGameobject_14; }
	inline GameObject_t1113636619 ** get_address_of_trailGameobject_14() { return &___trailGameobject_14; }
	inline void set_trailGameobject_14(GameObject_t1113636619 * value)
	{
		___trailGameobject_14 = value;
		Il2CppCodeGenWriteBarrier((&___trailGameobject_14), value);
	}

	inline static int32_t get_offset_of_bulletPrefab_15() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___bulletPrefab_15)); }
	inline GameObject_t1113636619 * get_bulletPrefab_15() const { return ___bulletPrefab_15; }
	inline GameObject_t1113636619 ** get_address_of_bulletPrefab_15() { return &___bulletPrefab_15; }
	inline void set_bulletPrefab_15(GameObject_t1113636619 * value)
	{
		___bulletPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((&___bulletPrefab_15), value);
	}

	inline static int32_t get_offset_of_score_16() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___score_16)); }
	inline int32_t get_score_16() const { return ___score_16; }
	inline int32_t* get_address_of_score_16() { return &___score_16; }
	inline void set_score_16(int32_t value)
	{
		___score_16 = value;
	}

	inline static int32_t get_offset_of_color_17() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___color_17)); }
	inline Color_t2555686324  get_color_17() const { return ___color_17; }
	inline Color_t2555686324 * get_address_of_color_17() { return &___color_17; }
	inline void set_color_17(Color_t2555686324  value)
	{
		___color_17 = value;
	}

	inline static int32_t get_offset_of_playerName_18() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___playerName_18)); }
	inline String_t* get_playerName_18() const { return ___playerName_18; }
	inline String_t** get_address_of_playerName_18() { return &___playerName_18; }
	inline void set_playerName_18(String_t* value)
	{
		___playerName_18 = value;
		Il2CppCodeGenWriteBarrier((&___playerName_18), value);
	}

	inline static int32_t get_offset_of_lifeCount_19() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ___lifeCount_19)); }
	inline int32_t get_lifeCount_19() const { return ___lifeCount_19; }
	inline int32_t* get_address_of_lifeCount_19() { return &___lifeCount_19; }
	inline void set_lifeCount_19(int32_t value)
	{
		___lifeCount_19 = value;
	}

	inline static int32_t get_offset_of__rigidbody_20() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____rigidbody_20)); }
	inline Rigidbody_t3916780224 * get__rigidbody_20() const { return ____rigidbody_20; }
	inline Rigidbody_t3916780224 ** get_address_of__rigidbody_20() { return &____rigidbody_20; }
	inline void set__rigidbody_20(Rigidbody_t3916780224 * value)
	{
		____rigidbody_20 = value;
		Il2CppCodeGenWriteBarrier((&____rigidbody_20), value);
	}

	inline static int32_t get_offset_of__collider_21() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____collider_21)); }
	inline Collider_t1773347010 * get__collider_21() const { return ____collider_21; }
	inline Collider_t1773347010 ** get_address_of__collider_21() { return &____collider_21; }
	inline void set__collider_21(Collider_t1773347010 * value)
	{
		____collider_21 = value;
		Il2CppCodeGenWriteBarrier((&____collider_21), value);
	}

	inline static int32_t get_offset_of__scoreText_22() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____scoreText_22)); }
	inline Text_t1901882714 * get__scoreText_22() const { return ____scoreText_22; }
	inline Text_t1901882714 ** get_address_of__scoreText_22() { return &____scoreText_22; }
	inline void set__scoreText_22(Text_t1901882714 * value)
	{
		____scoreText_22 = value;
		Il2CppCodeGenWriteBarrier((&____scoreText_22), value);
	}

	inline static int32_t get_offset_of__rotation_23() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____rotation_23)); }
	inline float get__rotation_23() const { return ____rotation_23; }
	inline float* get_address_of__rotation_23() { return &____rotation_23; }
	inline void set__rotation_23(float value)
	{
		____rotation_23 = value;
	}

	inline static int32_t get_offset_of__acceleration_24() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____acceleration_24)); }
	inline float get__acceleration_24() const { return ____acceleration_24; }
	inline float* get_address_of__acceleration_24() { return &____acceleration_24; }
	inline void set__acceleration_24(float value)
	{
		____acceleration_24 = value;
	}

	inline static int32_t get_offset_of__shootingTimer_25() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____shootingTimer_25)); }
	inline float get__shootingTimer_25() const { return ____shootingTimer_25; }
	inline float* get_address_of__shootingTimer_25() { return &____shootingTimer_25; }
	inline void set__shootingTimer_25(float value)
	{
		____shootingTimer_25 = value;
	}

	inline static int32_t get_offset_of__canControl_26() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____canControl_26)); }
	inline bool get__canControl_26() const { return ____canControl_26; }
	inline bool* get_address_of__canControl_26() { return &____canControl_26; }
	inline void set__canControl_26(bool value)
	{
		____canControl_26 = value;
	}

	inline static int32_t get_offset_of__wasInit_27() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150, ____wasInit_27)); }
	inline bool get__wasInit_27() const { return ____wasInit_27; }
	inline bool* get_address_of__wasInit_27() { return &____wasInit_27; }
	inline void set__wasInit_27(bool value)
	{
		____wasInit_27 = value;
	}
};

struct NetworkSpaceship_t2221554150_StaticFields
{
public:
	// System.Int32 NetworkSpaceship::kCmdCmdFire
	int32_t ___kCmdCmdFire_28;
	// System.Int32 NetworkSpaceship::kCmdCmdCollideAsteroid
	int32_t ___kCmdCmdCollideAsteroid_29;
	// System.Int32 NetworkSpaceship::kRpcRpcFire
	int32_t ___kRpcRpcFire_30;
	// System.Int32 NetworkSpaceship::kRpcRpcDestroyed
	int32_t ___kRpcRpcDestroyed_31;
	// System.Int32 NetworkSpaceship::kRpcRpcRespawn
	int32_t ___kRpcRpcRespawn_32;

public:
	inline static int32_t get_offset_of_kCmdCmdFire_28() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150_StaticFields, ___kCmdCmdFire_28)); }
	inline int32_t get_kCmdCmdFire_28() const { return ___kCmdCmdFire_28; }
	inline int32_t* get_address_of_kCmdCmdFire_28() { return &___kCmdCmdFire_28; }
	inline void set_kCmdCmdFire_28(int32_t value)
	{
		___kCmdCmdFire_28 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdCollideAsteroid_29() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150_StaticFields, ___kCmdCmdCollideAsteroid_29)); }
	inline int32_t get_kCmdCmdCollideAsteroid_29() const { return ___kCmdCmdCollideAsteroid_29; }
	inline int32_t* get_address_of_kCmdCmdCollideAsteroid_29() { return &___kCmdCmdCollideAsteroid_29; }
	inline void set_kCmdCmdCollideAsteroid_29(int32_t value)
	{
		___kCmdCmdCollideAsteroid_29 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcFire_30() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150_StaticFields, ___kRpcRpcFire_30)); }
	inline int32_t get_kRpcRpcFire_30() const { return ___kRpcRpcFire_30; }
	inline int32_t* get_address_of_kRpcRpcFire_30() { return &___kRpcRpcFire_30; }
	inline void set_kRpcRpcFire_30(int32_t value)
	{
		___kRpcRpcFire_30 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcDestroyed_31() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150_StaticFields, ___kRpcRpcDestroyed_31)); }
	inline int32_t get_kRpcRpcDestroyed_31() const { return ___kRpcRpcDestroyed_31; }
	inline int32_t* get_address_of_kRpcRpcDestroyed_31() { return &___kRpcRpcDestroyed_31; }
	inline void set_kRpcRpcDestroyed_31(int32_t value)
	{
		___kRpcRpcDestroyed_31 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcRespawn_32() { return static_cast<int32_t>(offsetof(NetworkSpaceship_t2221554150_StaticFields, ___kRpcRpcRespawn_32)); }
	inline int32_t get_kRpcRpcRespawn_32() const { return ___kRpcRpcRespawn_32; }
	inline int32_t* get_address_of_kRpcRpcRespawn_32() { return &___kRpcRpcRespawn_32; }
	inline void set_kRpcRpcRespawn_32(int32_t value)
	{
		___kRpcRpcRespawn_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSPACESHIP_T2221554150_H
#ifndef NETWORKLOBBYPLAYER_T1280660573_H
#define NETWORKLOBBYPLAYER_T1280660573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkLobbyPlayer
struct  NetworkLobbyPlayer_t1280660573  : public NetworkBehaviour_t204670959
{
public:
	// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::ShowLobbyGUI
	bool ___ShowLobbyGUI_10;
	// System.Byte UnityEngine.Networking.NetworkLobbyPlayer::m_Slot
	uint8_t ___m_Slot_11;
	// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::m_ReadyToBegin
	bool ___m_ReadyToBegin_12;

public:
	inline static int32_t get_offset_of_ShowLobbyGUI_10() { return static_cast<int32_t>(offsetof(NetworkLobbyPlayer_t1280660573, ___ShowLobbyGUI_10)); }
	inline bool get_ShowLobbyGUI_10() const { return ___ShowLobbyGUI_10; }
	inline bool* get_address_of_ShowLobbyGUI_10() { return &___ShowLobbyGUI_10; }
	inline void set_ShowLobbyGUI_10(bool value)
	{
		___ShowLobbyGUI_10 = value;
	}

	inline static int32_t get_offset_of_m_Slot_11() { return static_cast<int32_t>(offsetof(NetworkLobbyPlayer_t1280660573, ___m_Slot_11)); }
	inline uint8_t get_m_Slot_11() const { return ___m_Slot_11; }
	inline uint8_t* get_address_of_m_Slot_11() { return &___m_Slot_11; }
	inline void set_m_Slot_11(uint8_t value)
	{
		___m_Slot_11 = value;
	}

	inline static int32_t get_offset_of_m_ReadyToBegin_12() { return static_cast<int32_t>(offsetof(NetworkLobbyPlayer_t1280660573, ___m_ReadyToBegin_12)); }
	inline bool get_m_ReadyToBegin_12() const { return ___m_ReadyToBegin_12; }
	inline bool* get_address_of_m_ReadyToBegin_12() { return &___m_ReadyToBegin_12; }
	inline void set_m_ReadyToBegin_12(bool value)
	{
		___m_ReadyToBegin_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKLOBBYPLAYER_T1280660573_H
#ifndef LOBBYPLAYER_T553424021_H
#define LOBBYPLAYER_T553424021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prototype.NetworkLobby.LobbyPlayer
struct  LobbyPlayer_t553424021  : public NetworkLobbyPlayer_t1280660573
{
public:
	// UnityEngine.UI.Button Prototype.NetworkLobby.LobbyPlayer::colorButton
	Button_t4055032469 * ___colorButton_15;
	// UnityEngine.UI.InputField Prototype.NetworkLobby.LobbyPlayer::nameInput
	InputField_t3762917431 * ___nameInput_16;
	// UnityEngine.UI.Button Prototype.NetworkLobby.LobbyPlayer::readyButton
	Button_t4055032469 * ___readyButton_17;
	// UnityEngine.UI.Button Prototype.NetworkLobby.LobbyPlayer::waitingPlayerButton
	Button_t4055032469 * ___waitingPlayerButton_18;
	// UnityEngine.UI.Button Prototype.NetworkLobby.LobbyPlayer::removePlayerButton
	Button_t4055032469 * ___removePlayerButton_19;
	// UnityEngine.GameObject Prototype.NetworkLobby.LobbyPlayer::localIcone
	GameObject_t1113636619 * ___localIcone_20;
	// UnityEngine.GameObject Prototype.NetworkLobby.LobbyPlayer::remoteIcone
	GameObject_t1113636619 * ___remoteIcone_21;
	// System.String Prototype.NetworkLobby.LobbyPlayer::playerName
	String_t* ___playerName_22;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyPlayer::playerColor
	Color_t2555686324  ___playerColor_23;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyPlayer::OddRowColor
	Color_t2555686324  ___OddRowColor_24;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyPlayer::EvenRowColor
	Color_t2555686324  ___EvenRowColor_25;

public:
	inline static int32_t get_offset_of_colorButton_15() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___colorButton_15)); }
	inline Button_t4055032469 * get_colorButton_15() const { return ___colorButton_15; }
	inline Button_t4055032469 ** get_address_of_colorButton_15() { return &___colorButton_15; }
	inline void set_colorButton_15(Button_t4055032469 * value)
	{
		___colorButton_15 = value;
		Il2CppCodeGenWriteBarrier((&___colorButton_15), value);
	}

	inline static int32_t get_offset_of_nameInput_16() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___nameInput_16)); }
	inline InputField_t3762917431 * get_nameInput_16() const { return ___nameInput_16; }
	inline InputField_t3762917431 ** get_address_of_nameInput_16() { return &___nameInput_16; }
	inline void set_nameInput_16(InputField_t3762917431 * value)
	{
		___nameInput_16 = value;
		Il2CppCodeGenWriteBarrier((&___nameInput_16), value);
	}

	inline static int32_t get_offset_of_readyButton_17() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___readyButton_17)); }
	inline Button_t4055032469 * get_readyButton_17() const { return ___readyButton_17; }
	inline Button_t4055032469 ** get_address_of_readyButton_17() { return &___readyButton_17; }
	inline void set_readyButton_17(Button_t4055032469 * value)
	{
		___readyButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___readyButton_17), value);
	}

	inline static int32_t get_offset_of_waitingPlayerButton_18() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___waitingPlayerButton_18)); }
	inline Button_t4055032469 * get_waitingPlayerButton_18() const { return ___waitingPlayerButton_18; }
	inline Button_t4055032469 ** get_address_of_waitingPlayerButton_18() { return &___waitingPlayerButton_18; }
	inline void set_waitingPlayerButton_18(Button_t4055032469 * value)
	{
		___waitingPlayerButton_18 = value;
		Il2CppCodeGenWriteBarrier((&___waitingPlayerButton_18), value);
	}

	inline static int32_t get_offset_of_removePlayerButton_19() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___removePlayerButton_19)); }
	inline Button_t4055032469 * get_removePlayerButton_19() const { return ___removePlayerButton_19; }
	inline Button_t4055032469 ** get_address_of_removePlayerButton_19() { return &___removePlayerButton_19; }
	inline void set_removePlayerButton_19(Button_t4055032469 * value)
	{
		___removePlayerButton_19 = value;
		Il2CppCodeGenWriteBarrier((&___removePlayerButton_19), value);
	}

	inline static int32_t get_offset_of_localIcone_20() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___localIcone_20)); }
	inline GameObject_t1113636619 * get_localIcone_20() const { return ___localIcone_20; }
	inline GameObject_t1113636619 ** get_address_of_localIcone_20() { return &___localIcone_20; }
	inline void set_localIcone_20(GameObject_t1113636619 * value)
	{
		___localIcone_20 = value;
		Il2CppCodeGenWriteBarrier((&___localIcone_20), value);
	}

	inline static int32_t get_offset_of_remoteIcone_21() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___remoteIcone_21)); }
	inline GameObject_t1113636619 * get_remoteIcone_21() const { return ___remoteIcone_21; }
	inline GameObject_t1113636619 ** get_address_of_remoteIcone_21() { return &___remoteIcone_21; }
	inline void set_remoteIcone_21(GameObject_t1113636619 * value)
	{
		___remoteIcone_21 = value;
		Il2CppCodeGenWriteBarrier((&___remoteIcone_21), value);
	}

	inline static int32_t get_offset_of_playerName_22() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___playerName_22)); }
	inline String_t* get_playerName_22() const { return ___playerName_22; }
	inline String_t** get_address_of_playerName_22() { return &___playerName_22; }
	inline void set_playerName_22(String_t* value)
	{
		___playerName_22 = value;
		Il2CppCodeGenWriteBarrier((&___playerName_22), value);
	}

	inline static int32_t get_offset_of_playerColor_23() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___playerColor_23)); }
	inline Color_t2555686324  get_playerColor_23() const { return ___playerColor_23; }
	inline Color_t2555686324 * get_address_of_playerColor_23() { return &___playerColor_23; }
	inline void set_playerColor_23(Color_t2555686324  value)
	{
		___playerColor_23 = value;
	}

	inline static int32_t get_offset_of_OddRowColor_24() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___OddRowColor_24)); }
	inline Color_t2555686324  get_OddRowColor_24() const { return ___OddRowColor_24; }
	inline Color_t2555686324 * get_address_of_OddRowColor_24() { return &___OddRowColor_24; }
	inline void set_OddRowColor_24(Color_t2555686324  value)
	{
		___OddRowColor_24 = value;
	}

	inline static int32_t get_offset_of_EvenRowColor_25() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021, ___EvenRowColor_25)); }
	inline Color_t2555686324  get_EvenRowColor_25() const { return ___EvenRowColor_25; }
	inline Color_t2555686324 * get_address_of_EvenRowColor_25() { return &___EvenRowColor_25; }
	inline void set_EvenRowColor_25(Color_t2555686324  value)
	{
		___EvenRowColor_25 = value;
	}
};

struct LobbyPlayer_t553424021_StaticFields
{
public:
	// UnityEngine.Color[] Prototype.NetworkLobby.LobbyPlayer::Colors
	ColorU5BU5D_t941916413* ___Colors_13;
	// System.Collections.Generic.List`1<System.Int32> Prototype.NetworkLobby.LobbyPlayer::_colorInUse
	List_1_t128053199 * ____colorInUse_14;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyPlayer::JoinColor
	Color_t2555686324  ___JoinColor_26;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyPlayer::NotReadyColor
	Color_t2555686324  ___NotReadyColor_27;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyPlayer::ReadyColor
	Color_t2555686324  ___ReadyColor_28;
	// UnityEngine.Color Prototype.NetworkLobby.LobbyPlayer::TransparentColor
	Color_t2555686324  ___TransparentColor_29;
	// System.Int32 Prototype.NetworkLobby.LobbyPlayer::kRpcRpcUpdateCountdown
	int32_t ___kRpcRpcUpdateCountdown_30;
	// System.Int32 Prototype.NetworkLobby.LobbyPlayer::kRpcRpcUpdateRemoveButton
	int32_t ___kRpcRpcUpdateRemoveButton_31;
	// System.Int32 Prototype.NetworkLobby.LobbyPlayer::kCmdCmdColorChange
	int32_t ___kCmdCmdColorChange_32;
	// System.Int32 Prototype.NetworkLobby.LobbyPlayer::kCmdCmdNameChanged
	int32_t ___kCmdCmdNameChanged_33;

public:
	inline static int32_t get_offset_of_Colors_13() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___Colors_13)); }
	inline ColorU5BU5D_t941916413* get_Colors_13() const { return ___Colors_13; }
	inline ColorU5BU5D_t941916413** get_address_of_Colors_13() { return &___Colors_13; }
	inline void set_Colors_13(ColorU5BU5D_t941916413* value)
	{
		___Colors_13 = value;
		Il2CppCodeGenWriteBarrier((&___Colors_13), value);
	}

	inline static int32_t get_offset_of__colorInUse_14() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ____colorInUse_14)); }
	inline List_1_t128053199 * get__colorInUse_14() const { return ____colorInUse_14; }
	inline List_1_t128053199 ** get_address_of__colorInUse_14() { return &____colorInUse_14; }
	inline void set__colorInUse_14(List_1_t128053199 * value)
	{
		____colorInUse_14 = value;
		Il2CppCodeGenWriteBarrier((&____colorInUse_14), value);
	}

	inline static int32_t get_offset_of_JoinColor_26() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___JoinColor_26)); }
	inline Color_t2555686324  get_JoinColor_26() const { return ___JoinColor_26; }
	inline Color_t2555686324 * get_address_of_JoinColor_26() { return &___JoinColor_26; }
	inline void set_JoinColor_26(Color_t2555686324  value)
	{
		___JoinColor_26 = value;
	}

	inline static int32_t get_offset_of_NotReadyColor_27() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___NotReadyColor_27)); }
	inline Color_t2555686324  get_NotReadyColor_27() const { return ___NotReadyColor_27; }
	inline Color_t2555686324 * get_address_of_NotReadyColor_27() { return &___NotReadyColor_27; }
	inline void set_NotReadyColor_27(Color_t2555686324  value)
	{
		___NotReadyColor_27 = value;
	}

	inline static int32_t get_offset_of_ReadyColor_28() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___ReadyColor_28)); }
	inline Color_t2555686324  get_ReadyColor_28() const { return ___ReadyColor_28; }
	inline Color_t2555686324 * get_address_of_ReadyColor_28() { return &___ReadyColor_28; }
	inline void set_ReadyColor_28(Color_t2555686324  value)
	{
		___ReadyColor_28 = value;
	}

	inline static int32_t get_offset_of_TransparentColor_29() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___TransparentColor_29)); }
	inline Color_t2555686324  get_TransparentColor_29() const { return ___TransparentColor_29; }
	inline Color_t2555686324 * get_address_of_TransparentColor_29() { return &___TransparentColor_29; }
	inline void set_TransparentColor_29(Color_t2555686324  value)
	{
		___TransparentColor_29 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcUpdateCountdown_30() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___kRpcRpcUpdateCountdown_30)); }
	inline int32_t get_kRpcRpcUpdateCountdown_30() const { return ___kRpcRpcUpdateCountdown_30; }
	inline int32_t* get_address_of_kRpcRpcUpdateCountdown_30() { return &___kRpcRpcUpdateCountdown_30; }
	inline void set_kRpcRpcUpdateCountdown_30(int32_t value)
	{
		___kRpcRpcUpdateCountdown_30 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcUpdateRemoveButton_31() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___kRpcRpcUpdateRemoveButton_31)); }
	inline int32_t get_kRpcRpcUpdateRemoveButton_31() const { return ___kRpcRpcUpdateRemoveButton_31; }
	inline int32_t* get_address_of_kRpcRpcUpdateRemoveButton_31() { return &___kRpcRpcUpdateRemoveButton_31; }
	inline void set_kRpcRpcUpdateRemoveButton_31(int32_t value)
	{
		___kRpcRpcUpdateRemoveButton_31 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdColorChange_32() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___kCmdCmdColorChange_32)); }
	inline int32_t get_kCmdCmdColorChange_32() const { return ___kCmdCmdColorChange_32; }
	inline int32_t* get_address_of_kCmdCmdColorChange_32() { return &___kCmdCmdColorChange_32; }
	inline void set_kCmdCmdColorChange_32(int32_t value)
	{
		___kCmdCmdColorChange_32 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdNameChanged_33() { return static_cast<int32_t>(offsetof(LobbyPlayer_t553424021_StaticFields, ___kCmdCmdNameChanged_33)); }
	inline int32_t get_kCmdCmdNameChanged_33() const { return ___kCmdCmdNameChanged_33; }
	inline int32_t* get_address_of_kCmdCmdNameChanged_33() { return &___kCmdCmdNameChanged_33; }
	inline void set_kCmdCmdNameChanged_33(int32_t value)
	{
		___kCmdCmdNameChanged_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYPLAYER_T553424021_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (KickMsg_t2528387864), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (U3CDisplayIsConnectingU3Ec__AnonStorey1_t3264137609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[1] = 
{
	U3CDisplayIsConnectingU3Ec__AnonStorey1_t3264137609::get_offset_of__this_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2302[7] = 
{
	U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268::get_offset_of_U3CremainingTimeU3E__0_0(),
	U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268::get_offset_of_U3CfloorTimeU3E__0_1(),
	U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268::get_offset_of_U3CnewFloorTimeU3E__1_2(),
	U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268::get_offset_of_U24this_3(),
	U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268::get_offset_of_U24current_4(),
	U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268::get_offset_of_U24disposing_5(),
	U3CServerCountdownCoroutineU3Ec__Iterator0_t1110776268::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (LobbyPlayer_t553424021), -1, sizeof(LobbyPlayer_t553424021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2303[21] = 
{
	LobbyPlayer_t553424021_StaticFields::get_offset_of_Colors_13(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of__colorInUse_14(),
	LobbyPlayer_t553424021::get_offset_of_colorButton_15(),
	LobbyPlayer_t553424021::get_offset_of_nameInput_16(),
	LobbyPlayer_t553424021::get_offset_of_readyButton_17(),
	LobbyPlayer_t553424021::get_offset_of_waitingPlayerButton_18(),
	LobbyPlayer_t553424021::get_offset_of_removePlayerButton_19(),
	LobbyPlayer_t553424021::get_offset_of_localIcone_20(),
	LobbyPlayer_t553424021::get_offset_of_remoteIcone_21(),
	LobbyPlayer_t553424021::get_offset_of_playerName_22(),
	LobbyPlayer_t553424021::get_offset_of_playerColor_23(),
	LobbyPlayer_t553424021::get_offset_of_OddRowColor_24(),
	LobbyPlayer_t553424021::get_offset_of_EvenRowColor_25(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_JoinColor_26(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_NotReadyColor_27(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_ReadyColor_28(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_TransparentColor_29(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_kRpcRpcUpdateCountdown_30(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_kRpcRpcUpdateRemoveButton_31(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_kCmdCmdColorChange_32(),
	LobbyPlayer_t553424021_StaticFields::get_offset_of_kCmdCmdNameChanged_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (LobbyPlayerList_t2254251314), -1, sizeof(LobbyPlayerList_t2254251314_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2304[6] = 
{
	LobbyPlayerList_t2254251314_StaticFields::get_offset_of__instance_4(),
	LobbyPlayerList_t2254251314::get_offset_of_playerListContentTransform_5(),
	LobbyPlayerList_t2254251314::get_offset_of_warningDirectPlayServer_6(),
	LobbyPlayerList_t2254251314::get_offset_of_addButtonRow_7(),
	LobbyPlayerList_t2254251314::get_offset_of__layout_8(),
	LobbyPlayerList_t2254251314::get_offset_of__players_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (LobbyServerEntry_t446634599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2305[3] = 
{
	LobbyServerEntry_t446634599::get_offset_of_serverInfoText_4(),
	LobbyServerEntry_t446634599::get_offset_of_slotInfo_5(),
	LobbyServerEntry_t446634599::get_offset_of_joinButton_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (U3CPopulateU3Ec__AnonStorey0_t1952366176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2306[3] = 
{
	U3CPopulateU3Ec__AnonStorey0_t1952366176::get_offset_of_networkID_0(),
	U3CPopulateU3Ec__AnonStorey0_t1952366176::get_offset_of_lobbyManager_1(),
	U3CPopulateU3Ec__AnonStorey0_t1952366176::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (LobbyServerList_t1035580108), -1, sizeof(LobbyServerList_t1035580108_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2307[8] = 
{
	LobbyServerList_t1035580108::get_offset_of_lobbyManager_4(),
	LobbyServerList_t1035580108::get_offset_of_serverListRect_5(),
	LobbyServerList_t1035580108::get_offset_of_serverEntryPrefab_6(),
	LobbyServerList_t1035580108::get_offset_of_noServerFound_7(),
	LobbyServerList_t1035580108::get_offset_of_currentPage_8(),
	LobbyServerList_t1035580108::get_offset_of_previousPage_9(),
	LobbyServerList_t1035580108_StaticFields::get_offset_of_OddServerColor_10(),
	LobbyServerList_t1035580108_StaticFields::get_offset_of_EvenServerColor_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (LobbyTopPanel_t3731876481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[3] = 
{
	LobbyTopPanel_t3731876481::get_offset_of_isInGame_4(),
	LobbyTopPanel_t3731876481::get_offset_of_isDisplayed_5(),
	LobbyTopPanel_t3731876481::get_offset_of_panelImage_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (Mover_t2250641681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2309[1] = 
{
	Mover_t2250641681::get_offset_of_speed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (Boundary_t2442033035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2310[4] = 
{
	Boundary_t2442033035::get_offset_of_xMin_0(),
	Boundary_t2442033035::get_offset_of_xMax_1(),
	Boundary_t2442033035::get_offset_of_zMin_2(),
	Boundary_t2442033035::get_offset_of_zMax_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (PlayerShipController_t730644332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[7] = 
{
	PlayerShipController_t730644332::get_offset_of_speed_4(),
	PlayerShipController_t730644332::get_offset_of_tilt_5(),
	PlayerShipController_t730644332::get_offset_of_boundary_6(),
	PlayerShipController_t730644332::get_offset_of_nextFire_7(),
	PlayerShipController_t730644332::get_offset_of_fireRate_8(),
	PlayerShipController_t730644332::get_offset_of_shot_9(),
	PlayerShipController_t730644332::get_offset_of_shotSqawn_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (RandomRotator_t4222898668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[1] = 
{
	RandomRotator_t4222898668::get_offset_of_tumble_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (NetworkAsteroid_t2751897214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[5] = 
{
	NetworkAsteroid_t2751897214::get_offset_of_level_10(),
	NetworkAsteroid_t2751897214::get_offset_of__isDestroyed_11(),
	NetworkAsteroid_t2751897214::get_offset_of__netTransform_12(),
	NetworkAsteroid_t2751897214::get_offset_of_originalForce_13(),
	NetworkAsteroid_t2751897214::get_offset_of_originalTorque_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (NetworkGameManager_t158594586), -1, sizeof(NetworkGameManager_t158594586_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2314[7] = 
{
	NetworkGameManager_t158594586_StaticFields::get_offset_of_sShips_10(),
	NetworkGameManager_t158594586_StaticFields::get_offset_of_sInstance_11(),
	NetworkGameManager_t158594586::get_offset_of_uiScoreZone_12(),
	NetworkGameManager_t158594586::get_offset_of_uiScoreFont_13(),
	NetworkGameManager_t158594586::get_offset_of_asteroidPrefabs_14(),
	NetworkGameManager_t158594586::get_offset_of__spawningAsteroid_15(),
	NetworkGameManager_t158594586::get_offset_of__running_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (U3CReturnToLobyU3Ec__Iterator0_t292730479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2315[4] = 
{
	U3CReturnToLobyU3Ec__Iterator0_t292730479::get_offset_of_U24this_0(),
	U3CReturnToLobyU3Ec__Iterator0_t292730479::get_offset_of_U24current_1(),
	U3CReturnToLobyU3Ec__Iterator0_t292730479::get_offset_of_U24disposing_2(),
	U3CReturnToLobyU3Ec__Iterator0_t292730479::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[8] = 
{
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U3CdirU3E__1_0(),
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U3CpositionU3E__1_1(),
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U3CastU3E__1_2(),
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U3CasteroidU3E__1_3(),
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U24this_4(),
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U24current_5(),
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U24disposing_6(),
	U3CAsteroidCoroutineU3Ec__Iterator1_t1071769855::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (U3CWaitForRespawnU3Ec__Iterator2_t3331667059), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[4] = 
{
	U3CWaitForRespawnU3Ec__Iterator2_t3331667059::get_offset_of_ship_0(),
	U3CWaitForRespawnU3Ec__Iterator2_t3331667059::get_offset_of_U24current_1(),
	U3CWaitForRespawnU3Ec__Iterator2_t3331667059::get_offset_of_U24disposing_2(),
	U3CWaitForRespawnU3Ec__Iterator2_t3331667059::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (NetworkLobbyHook_t1721166793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (NetworkSpaceship_t2221554150), -1, sizeof(NetworkSpaceship_t2221554150_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2319[23] = 
{
	NetworkSpaceship_t2221554150::get_offset_of_rotationSpeed_10(),
	NetworkSpaceship_t2221554150::get_offset_of_speed_11(),
	NetworkSpaceship_t2221554150::get_offset_of_maxSpeed_12(),
	NetworkSpaceship_t2221554150::get_offset_of_killParticle_13(),
	NetworkSpaceship_t2221554150::get_offset_of_trailGameobject_14(),
	NetworkSpaceship_t2221554150::get_offset_of_bulletPrefab_15(),
	NetworkSpaceship_t2221554150::get_offset_of_score_16(),
	NetworkSpaceship_t2221554150::get_offset_of_color_17(),
	NetworkSpaceship_t2221554150::get_offset_of_playerName_18(),
	NetworkSpaceship_t2221554150::get_offset_of_lifeCount_19(),
	NetworkSpaceship_t2221554150::get_offset_of__rigidbody_20(),
	NetworkSpaceship_t2221554150::get_offset_of__collider_21(),
	NetworkSpaceship_t2221554150::get_offset_of__scoreText_22(),
	NetworkSpaceship_t2221554150::get_offset_of__rotation_23(),
	NetworkSpaceship_t2221554150::get_offset_of__acceleration_24(),
	NetworkSpaceship_t2221554150::get_offset_of__shootingTimer_25(),
	NetworkSpaceship_t2221554150::get_offset_of__canControl_26(),
	NetworkSpaceship_t2221554150::get_offset_of__wasInit_27(),
	NetworkSpaceship_t2221554150_StaticFields::get_offset_of_kCmdCmdFire_28(),
	NetworkSpaceship_t2221554150_StaticFields::get_offset_of_kCmdCmdCollideAsteroid_29(),
	NetworkSpaceship_t2221554150_StaticFields::get_offset_of_kRpcRpcFire_30(),
	NetworkSpaceship_t2221554150_StaticFields::get_offset_of_kRpcRpcDestroyed_31(),
	NetworkSpaceship_t2221554150_StaticFields::get_offset_of_kRpcRpcRespawn_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (NetworkSpaceshipBullet_t4183154769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[2] = 
{
	NetworkSpaceshipBullet_t4183154769::get_offset_of_originalDirection_4(),
	NetworkSpaceshipBullet_t4183154769::get_offset_of_owner_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (Readme_t240784718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2321[4] = 
{
	Readme_t240784718::get_offset_of_icon_4(),
	Readme_t240784718::get_offset_of_title_5(),
	Readme_t240784718::get_offset_of_sections_6(),
	Readme_t240784718::get_offset_of_loadedLayout_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (Section_t3705589568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2322[4] = 
{
	Section_t3705589568::get_offset_of_heading_0(),
	Section_t3705589568::get_offset_of_text_1(),
	Section_t3705589568::get_offset_of_linkText_2(),
	Section_t3705589568::get_offset_of_url_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
