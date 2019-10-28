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


// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t4098906337;
// System.Action`3<WebSocketSharp.PayloadData,System.Boolean,System.Boolean>
struct Action_3_t3367317673;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_t2071317217;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t407452768;
// System.EventHandler
struct EventHandler_t1348719766;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t4095840750;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t1344838444;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t149217156;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Func`2<System.String[],WebSocketSharp.HandshakeRequest>
struct Func_2_t2457662789;
// System.Func`2<System.String[],WebSocketSharp.HandshakeResponse>
struct Func_2_t805064898;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t1203693676;
// System.Func`3<WebSocketSharp.Opcode,System.Byte[],System.Boolean>
struct Func_3_t4060436585;
// System.Func`3<WebSocketSharp.Opcode,System.IO.Stream,System.Boolean>
struct Func_3_t2923582405;
// System.IDisposable
struct IDisposable_t3640265483;
// System.IO.Stream
struct Stream_t1273022909;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3014364904;
// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1333520283;
// System.Uri
struct Uri_t100236324;
// WebSocketSharp.HandshakeRequest
struct HandshakeRequest_t3322584187;
// WebSocketSharp.Logger
struct Logger_t4025333586;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t3244447305;
// WebSocketSharp.Net.Cookie
struct Cookie_t4203102285;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t962330244;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3723273891;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t1094796801;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1205255311;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t3770402993;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t2376318492;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t619421455;
// WebSocketSharp.PayloadData
struct PayloadData_t688932160;
// WebSocketSharp.WebSocket
struct WebSocket_t62038747;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t3926438742;
// WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1
struct U3CdumpU3Ec__AnonStorey1_t3297801281;
// WebSocketSharp.WebSocketStream
struct WebSocketStream_t833095972;




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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
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
#ifndef U3CTOSTRINGU3EC__ANONSTOREY2_T1832203497_H
#define U3CTOSTRINGU3EC__ANONSTOREY2_T1832203497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebHeaderCollection/<ToString>c__AnonStorey2
struct  U3CToStringU3Ec__AnonStorey2_t1832203497  : public RuntimeObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.Net.WebHeaderCollection/<ToString>c__AnonStorey2::buff
	StringBuilder_t * ___buff_0;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<ToString>c__AnonStorey2::$this
	WebHeaderCollection_t1205255311 * ___U24this_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CToStringU3Ec__AnonStorey2_t1832203497, ___buff_0)); }
	inline StringBuilder_t * get_buff_0() const { return ___buff_0; }
	inline StringBuilder_t ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(StringBuilder_t * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((&___buff_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CToStringU3Ec__AnonStorey2_t1832203497, ___U24this_1)); }
	inline WebHeaderCollection_t1205255311 * get_U24this_1() const { return ___U24this_1; }
	inline WebHeaderCollection_t1205255311 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(WebHeaderCollection_t1205255311 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTOSTRINGU3EC__ANONSTOREY2_T1832203497_H
#ifndef U3CU3EC__ITERATOR0_T2500134981_H
#define U3CU3EC__ITERATOR0_T2500134981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2500134981  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::<protocols>__0
	String_t* ___U3CprotocolsU3E__0_0;
	// System.String[] WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::$locvar0
	StringU5BU5D_t1281789340* ___U24locvar0_1;
	// System.Int32 WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::$locvar1
	int32_t ___U24locvar1_2;
	// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::<protocol>__1
	String_t* ___U3CprotocolU3E__1_3;
	// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::$this
	HttpListenerWebSocketContext_t3770402993 * ___U24this_4;
	// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::$current
	String_t* ___U24current_5;
	// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CprotocolsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U3CprotocolsU3E__0_0)); }
	inline String_t* get_U3CprotocolsU3E__0_0() const { return ___U3CprotocolsU3E__0_0; }
	inline String_t** get_address_of_U3CprotocolsU3E__0_0() { return &___U3CprotocolsU3E__0_0; }
	inline void set_U3CprotocolsU3E__0_0(String_t* value)
	{
		___U3CprotocolsU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprotocolsU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U24locvar0_1)); }
	inline StringU5BU5D_t1281789340* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline StringU5BU5D_t1281789340** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(StringU5BU5D_t1281789340* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U3CprotocolU3E__1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U3CprotocolU3E__1_3)); }
	inline String_t* get_U3CprotocolU3E__1_3() const { return ___U3CprotocolU3E__1_3; }
	inline String_t** get_address_of_U3CprotocolU3E__1_3() { return &___U3CprotocolU3E__1_3; }
	inline void set_U3CprotocolU3E__1_3(String_t* value)
	{
		___U3CprotocolU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprotocolU3E__1_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U24this_4)); }
	inline HttpListenerWebSocketContext_t3770402993 * get_U24this_4() const { return ___U24this_4; }
	inline HttpListenerWebSocketContext_t3770402993 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(HttpListenerWebSocketContext_t3770402993 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U24current_5)); }
	inline String_t* get_U24current_5() const { return ___U24current_5; }
	inline String_t** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(String_t* value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2500134981, ___U24PC_7)); }
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
#endif // U3CU3EC__ITERATOR0_T2500134981_H
#ifndef U3CU3EC__ITERATOR0_T3615578217_H
#define U3CU3EC__ITERATOR0_T3615578217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t3615578217  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::<protocols>__0
	String_t* ___U3CprotocolsU3E__0_0;
	// System.String[] WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::$locvar0
	StringU5BU5D_t1281789340* ___U24locvar0_1;
	// System.Int32 WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::$locvar1
	int32_t ___U24locvar1_2;
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::<protocol>__1
	String_t* ___U3CprotocolU3E__1_3;
	// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::$this
	TcpListenerWebSocketContext_t2376318492 * ___U24this_4;
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::$current
	String_t* ___U24current_5;
	// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CprotocolsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U3CprotocolsU3E__0_0)); }
	inline String_t* get_U3CprotocolsU3E__0_0() const { return ___U3CprotocolsU3E__0_0; }
	inline String_t** get_address_of_U3CprotocolsU3E__0_0() { return &___U3CprotocolsU3E__0_0; }
	inline void set_U3CprotocolsU3E__0_0(String_t* value)
	{
		___U3CprotocolsU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprotocolsU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U24locvar0_1)); }
	inline StringU5BU5D_t1281789340* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline StringU5BU5D_t1281789340** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(StringU5BU5D_t1281789340* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U3CprotocolU3E__1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U3CprotocolU3E__1_3)); }
	inline String_t* get_U3CprotocolU3E__1_3() const { return ___U3CprotocolU3E__1_3; }
	inline String_t** get_address_of_U3CprotocolU3E__1_3() { return &___U3CprotocolU3E__1_3; }
	inline void set_U3CprotocolU3E__1_3(String_t* value)
	{
		___U3CprotocolU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprotocolU3E__1_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U24this_4)); }
	inline TcpListenerWebSocketContext_t2376318492 * get_U24this_4() const { return ___U24this_4; }
	inline TcpListenerWebSocketContext_t2376318492 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(TcpListenerWebSocketContext_t2376318492 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U24current_5)); }
	inline String_t* get_U24current_5() const { return ___U24current_5; }
	inline String_t** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(String_t* value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3615578217, ___U24PC_7)); }
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
#endif // U3CU3EC__ITERATOR0_T3615578217_H
#ifndef WEBSOCKETCONTEXT_T619421455_H
#define WEBSOCKETCONTEXT_T619421455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.WebSocketContext
struct  WebSocketContext_t619421455  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBSOCKETCONTEXT_T619421455_H
#ifndef PAYLOADDATA_T688932160_H
#define PAYLOADDATA_T688932160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.PayloadData
struct  PayloadData_t688932160  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.PayloadData::_applicationData
	ByteU5BU5D_t4116647657* ____applicationData_0;
	// System.Byte[] WebSocketSharp.PayloadData::_extensionData
	ByteU5BU5D_t4116647657* ____extensionData_1;
	// System.Boolean WebSocketSharp.PayloadData::_masked
	bool ____masked_2;

public:
	inline static int32_t get_offset_of__applicationData_0() { return static_cast<int32_t>(offsetof(PayloadData_t688932160, ____applicationData_0)); }
	inline ByteU5BU5D_t4116647657* get__applicationData_0() const { return ____applicationData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__applicationData_0() { return &____applicationData_0; }
	inline void set__applicationData_0(ByteU5BU5D_t4116647657* value)
	{
		____applicationData_0 = value;
		Il2CppCodeGenWriteBarrier((&____applicationData_0), value);
	}

	inline static int32_t get_offset_of__extensionData_1() { return static_cast<int32_t>(offsetof(PayloadData_t688932160, ____extensionData_1)); }
	inline ByteU5BU5D_t4116647657* get__extensionData_1() const { return ____extensionData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__extensionData_1() { return &____extensionData_1; }
	inline void set__extensionData_1(ByteU5BU5D_t4116647657* value)
	{
		____extensionData_1 = value;
		Il2CppCodeGenWriteBarrier((&____extensionData_1), value);
	}

	inline static int32_t get_offset_of__masked_2() { return static_cast<int32_t>(offsetof(PayloadData_t688932160, ____masked_2)); }
	inline bool get__masked_2() const { return ____masked_2; }
	inline bool* get_address_of__masked_2() { return &____masked_2; }
	inline void set__masked_2(bool value)
	{
		____masked_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYLOADDATA_T688932160_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR0_T268869223_H
#define U3CGETENUMERATORU3EC__ITERATOR0_T268869223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0
struct  U3CGetEnumeratorU3Ec__Iterator0_t268869223  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$locvar0
	ByteU5BU5D_t4116647657* ___U24locvar0_0;
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$locvar1
	int32_t ___U24locvar1_1;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::<b>__1
	uint8_t ___U3CbU3E__1_2;
	// System.Byte[] WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$locvar2
	ByteU5BU5D_t4116647657* ___U24locvar2_3;
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$locvar3
	int32_t ___U24locvar3_4;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::<b>__2
	uint8_t ___U3CbU3E__2_5;
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$this
	PayloadData_t688932160 * ___U24this_6;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$current
	uint8_t ___U24current_7;
	// System.Boolean WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24locvar0_0)); }
	inline ByteU5BU5D_t4116647657* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(ByteU5BU5D_t4116647657* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24locvar1_1)); }
	inline int32_t get_U24locvar1_1() const { return ___U24locvar1_1; }
	inline int32_t* get_address_of_U24locvar1_1() { return &___U24locvar1_1; }
	inline void set_U24locvar1_1(int32_t value)
	{
		___U24locvar1_1 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E__1_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U3CbU3E__1_2)); }
	inline uint8_t get_U3CbU3E__1_2() const { return ___U3CbU3E__1_2; }
	inline uint8_t* get_address_of_U3CbU3E__1_2() { return &___U3CbU3E__1_2; }
	inline void set_U3CbU3E__1_2(uint8_t value)
	{
		___U3CbU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24locvar2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24locvar2_3)); }
	inline ByteU5BU5D_t4116647657* get_U24locvar2_3() const { return ___U24locvar2_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U24locvar2_3() { return &___U24locvar2_3; }
	inline void set_U24locvar2_3(ByteU5BU5D_t4116647657* value)
	{
		___U24locvar2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar2_3), value);
	}

	inline static int32_t get_offset_of_U24locvar3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24locvar3_4)); }
	inline int32_t get_U24locvar3_4() const { return ___U24locvar3_4; }
	inline int32_t* get_address_of_U24locvar3_4() { return &___U24locvar3_4; }
	inline void set_U24locvar3_4(int32_t value)
	{
		___U24locvar3_4 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E__2_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U3CbU3E__2_5)); }
	inline uint8_t get_U3CbU3E__2_5() const { return ___U3CbU3E__2_5; }
	inline uint8_t* get_address_of_U3CbU3E__2_5() { return &___U3CbU3E__2_5; }
	inline void set_U3CbU3E__2_5(uint8_t value)
	{
		___U3CbU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24this_6)); }
	inline PayloadData_t688932160 * get_U24this_6() const { return ___U24this_6; }
	inline PayloadData_t688932160 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(PayloadData_t688932160 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24current_7)); }
	inline uint8_t get_U24current_7() const { return ___U24current_7; }
	inline uint8_t* get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(uint8_t value)
	{
		___U24current_7 = value;
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t268869223, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR0_T268869223_H
#ifndef U3CU3EC__ITERATOR0_T2887482940_H
#define U3CU3EC__ITERATOR0_T2887482940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2887482940  : public RuntimeObject
{
public:
	// System.Object WebSocketSharp.WebSocket/<>c__Iterator0::$locvar0
	RuntimeObject * ___U24locvar0_0;
	// System.Collections.IEnumerator WebSocketSharp.WebSocket/<>c__Iterator0::$locvar1
	RuntimeObject* ___U24locvar1_1;
	// WebSocketSharp.Net.Cookie WebSocketSharp.WebSocket/<>c__Iterator0::<cookie>__1
	Cookie_t4203102285 * ___U3CcookieU3E__1_2;
	// System.IDisposable WebSocketSharp.WebSocket/<>c__Iterator0::$locvar2
	RuntimeObject* ___U24locvar2_3;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<>c__Iterator0::$this
	WebSocket_t62038747 * ___U24this_4;
	// WebSocketSharp.Net.Cookie WebSocketSharp.WebSocket/<>c__Iterator0::$current
	Cookie_t4203102285 * ___U24current_5;
	// System.Boolean WebSocketSharp.WebSocket/<>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 WebSocketSharp.WebSocket/<>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U24locvar0_0)); }
	inline RuntimeObject * get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject ** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject * value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U24locvar1_1)); }
	inline RuntimeObject* get_U24locvar1_1() const { return ___U24locvar1_1; }
	inline RuntimeObject** get_address_of_U24locvar1_1() { return &___U24locvar1_1; }
	inline void set_U24locvar1_1(RuntimeObject* value)
	{
		___U24locvar1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar1_1), value);
	}

	inline static int32_t get_offset_of_U3CcookieU3E__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U3CcookieU3E__1_2)); }
	inline Cookie_t4203102285 * get_U3CcookieU3E__1_2() const { return ___U3CcookieU3E__1_2; }
	inline Cookie_t4203102285 ** get_address_of_U3CcookieU3E__1_2() { return &___U3CcookieU3E__1_2; }
	inline void set_U3CcookieU3E__1_2(Cookie_t4203102285 * value)
	{
		___U3CcookieU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcookieU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U24locvar2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U24locvar2_3)); }
	inline RuntimeObject* get_U24locvar2_3() const { return ___U24locvar2_3; }
	inline RuntimeObject** get_address_of_U24locvar2_3() { return &___U24locvar2_3; }
	inline void set_U24locvar2_3(RuntimeObject* value)
	{
		___U24locvar2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar2_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U24this_4)); }
	inline WebSocket_t62038747 * get_U24this_4() const { return ___U24this_4; }
	inline WebSocket_t62038747 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(WebSocket_t62038747 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U24current_5)); }
	inline Cookie_t4203102285 * get_U24current_5() const { return ___U24current_5; }
	inline Cookie_t4203102285 ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Cookie_t4203102285 * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2887482940, ___U24PC_7)); }
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
#endif // U3CU3EC__ITERATOR0_T2887482940_H
#ifndef U3CCONNECTASYNCU3EC__ANONSTOREY6_T2980504462_H
#define U3CCONNECTASYNCU3EC__ANONSTOREY6_T2980504462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey6
struct  U3CConnectAsyncU3Ec__AnonStorey6_t2980504462  : public RuntimeObject
{
public:
	// System.Func`1<System.Boolean> WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey6::connector
	Func_1_t3822001908 * ___connector_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey6::$this
	WebSocket_t62038747 * ___U24this_1;

public:
	inline static int32_t get_offset_of_connector_0() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ec__AnonStorey6_t2980504462, ___connector_0)); }
	inline Func_1_t3822001908 * get_connector_0() const { return ___connector_0; }
	inline Func_1_t3822001908 ** get_address_of_connector_0() { return &___connector_0; }
	inline void set_connector_0(Func_1_t3822001908 * value)
	{
		___connector_0 = value;
		Il2CppCodeGenWriteBarrier((&___connector_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ec__AnonStorey6_t2980504462, ___U24this_1)); }
	inline WebSocket_t62038747 * get_U24this_1() const { return ___U24this_1; }
	inline WebSocket_t62038747 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(WebSocket_t62038747 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCONNECTASYNCU3EC__ANONSTOREY6_T2980504462_H
#ifndef U3CSENDASYNCU3EC__ANONSTOREY7_T2987885642_H
#define U3CSENDASYNCU3EC__ANONSTOREY7_T2987885642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey7
struct  U3CSendAsyncU3Ec__AnonStorey7_t2987885642  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey7::msg
	String_t* ___msg_0;
	// System.Int32 WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey7::length
	int32_t ___length_1;
	// System.Action`1<System.Boolean> WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey7::completed
	Action_1_t269755560 * ___completed_2;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey7::$this
	WebSocket_t62038747 * ___U24this_3;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey7_t2987885642, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey7_t2987885642, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey7_t2987885642, ___completed_2)); }
	inline Action_1_t269755560 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t269755560 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t269755560 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((&___completed_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey7_t2987885642, ___U24this_3)); }
	inline WebSocket_t62038747 * get_U24this_3() const { return ___U24this_3; }
	inline WebSocket_t62038747 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(WebSocket_t62038747 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDASYNCU3EC__ANONSTOREY7_T2987885642_H
#ifndef U3CCLOSEASYNCU3EC__ANONSTOREY1_T2051387318_H
#define U3CCLOSEASYNCU3EC__ANONSTOREY1_T2051387318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<closeAsync>c__AnonStorey1
struct  U3CcloseAsyncU3Ec__AnonStorey1_t2051387318  : public RuntimeObject
{
public:
	// System.Action`3<WebSocketSharp.PayloadData,System.Boolean,System.Boolean> WebSocketSharp.WebSocket/<closeAsync>c__AnonStorey1::closer
	Action_3_t3367317673 * ___closer_0;

public:
	inline static int32_t get_offset_of_closer_0() { return static_cast<int32_t>(offsetof(U3CcloseAsyncU3Ec__AnonStorey1_t2051387318, ___closer_0)); }
	inline Action_3_t3367317673 * get_closer_0() const { return ___closer_0; }
	inline Action_3_t3367317673 ** get_address_of_closer_0() { return &___closer_0; }
	inline void set_closer_0(Action_3_t3367317673 * value)
	{
		___closer_0 = value;
		Il2CppCodeGenWriteBarrier((&___closer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCLOSEASYNCU3EC__ANONSTOREY1_T2051387318_H
#ifndef U3CSENDASYNCU3EC__ANONSTOREY2_T3015208571_H
#define U3CSENDASYNCU3EC__ANONSTOREY2_T3015208571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey2
struct  U3CsendAsyncU3Ec__AnonStorey2_t3015208571  : public RuntimeObject
{
public:
	// System.Func`3<WebSocketSharp.Opcode,System.Byte[],System.Boolean> WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey2::sender
	Func_3_t4060436585 * ___sender_0;
	// System.Action`1<System.Boolean> WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey2::completed
	Action_1_t269755560 * ___completed_1;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey2::$this
	WebSocket_t62038747 * ___U24this_2;

public:
	inline static int32_t get_offset_of_sender_0() { return static_cast<int32_t>(offsetof(U3CsendAsyncU3Ec__AnonStorey2_t3015208571, ___sender_0)); }
	inline Func_3_t4060436585 * get_sender_0() const { return ___sender_0; }
	inline Func_3_t4060436585 ** get_address_of_sender_0() { return &___sender_0; }
	inline void set_sender_0(Func_3_t4060436585 * value)
	{
		___sender_0 = value;
		Il2CppCodeGenWriteBarrier((&___sender_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(U3CsendAsyncU3Ec__AnonStorey2_t3015208571, ___completed_1)); }
	inline Action_1_t269755560 * get_completed_1() const { return ___completed_1; }
	inline Action_1_t269755560 ** get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(Action_1_t269755560 * value)
	{
		___completed_1 = value;
		Il2CppCodeGenWriteBarrier((&___completed_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CsendAsyncU3Ec__AnonStorey2_t3015208571, ___U24this_2)); }
	inline WebSocket_t62038747 * get_U24this_2() const { return ___U24this_2; }
	inline WebSocket_t62038747 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(WebSocket_t62038747 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDASYNCU3EC__ANONSTOREY2_T3015208571_H
#ifndef U3CSENDASYNCU3EC__ANONSTOREY3_T3015274107_H
#define U3CSENDASYNCU3EC__ANONSTOREY3_T3015274107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey3
struct  U3CsendAsyncU3Ec__AnonStorey3_t3015274107  : public RuntimeObject
{
public:
	// System.Func`3<WebSocketSharp.Opcode,System.IO.Stream,System.Boolean> WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey3::sender
	Func_3_t2923582405 * ___sender_0;
	// System.Action`1<System.Boolean> WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey3::completed
	Action_1_t269755560 * ___completed_1;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<sendAsync>c__AnonStorey3::$this
	WebSocket_t62038747 * ___U24this_2;

public:
	inline static int32_t get_offset_of_sender_0() { return static_cast<int32_t>(offsetof(U3CsendAsyncU3Ec__AnonStorey3_t3015274107, ___sender_0)); }
	inline Func_3_t2923582405 * get_sender_0() const { return ___sender_0; }
	inline Func_3_t2923582405 ** get_address_of_sender_0() { return &___sender_0; }
	inline void set_sender_0(Func_3_t2923582405 * value)
	{
		___sender_0 = value;
		Il2CppCodeGenWriteBarrier((&___sender_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(U3CsendAsyncU3Ec__AnonStorey3_t3015274107, ___completed_1)); }
	inline Action_1_t269755560 * get_completed_1() const { return ___completed_1; }
	inline Action_1_t269755560 ** get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(Action_1_t269755560 * value)
	{
		___completed_1 = value;
		Il2CppCodeGenWriteBarrier((&___completed_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CsendAsyncU3Ec__AnonStorey3_t3015274107, ___U24this_2)); }
	inline WebSocket_t62038747 * get_U24this_2() const { return ___U24this_2; }
	inline WebSocket_t62038747 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(WebSocket_t62038747 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDASYNCU3EC__ANONSTOREY3_T3015274107_H
#ifndef U3CSTARTRECEIVINGU3EC__ANONSTOREY4_T3314047616_H
#define U3CSTARTRECEIVINGU3EC__ANONSTOREY4_T3314047616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<startReceiving>c__AnonStorey4
struct  U3CstartReceivingU3Ec__AnonStorey4_t3314047616  : public RuntimeObject
{
public:
	// System.Action WebSocketSharp.WebSocket/<startReceiving>c__AnonStorey4::receive
	Action_t1264377477 * ___receive_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<startReceiving>c__AnonStorey4::$this
	WebSocket_t62038747 * ___U24this_1;

public:
	inline static int32_t get_offset_of_receive_0() { return static_cast<int32_t>(offsetof(U3CstartReceivingU3Ec__AnonStorey4_t3314047616, ___receive_0)); }
	inline Action_t1264377477 * get_receive_0() const { return ___receive_0; }
	inline Action_t1264377477 ** get_address_of_receive_0() { return &___receive_0; }
	inline void set_receive_0(Action_t1264377477 * value)
	{
		___receive_0 = value;
		Il2CppCodeGenWriteBarrier((&___receive_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CstartReceivingU3Ec__AnonStorey4_t3314047616, ___U24this_1)); }
	inline WebSocket_t62038747 * get_U24this_1() const { return ___U24this_1; }
	inline WebSocket_t62038747 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(WebSocket_t62038747 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTRECEIVINGU3EC__ANONSTOREY4_T3314047616_H
#ifndef U3CVALIDATESECWEBSOCKETPROTOCOLHEADERU3EC__ANONSTOREY5_T4180329243_H
#define U3CVALIDATESECWEBSOCKETPROTOCOLHEADERU3EC__ANONSTOREY5_T4180329243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<validateSecWebSocketProtocolHeader>c__AnonStorey5
struct  U3CvalidateSecWebSocketProtocolHeaderU3Ec__AnonStorey5_t4180329243  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<validateSecWebSocketProtocolHeader>c__AnonStorey5::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CvalidateSecWebSocketProtocolHeaderU3Ec__AnonStorey5_t4180329243, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CVALIDATESECWEBSOCKETPROTOCOLHEADERU3EC__ANONSTOREY5_T4180329243_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR0_T3460275121_H
#define U3CGETENUMERATORU3EC__ITERATOR0_T3460275121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0
struct  U3CGetEnumeratorU3Ec__Iterator0_t3460275121  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0::$locvar0
	ByteU5BU5D_t4116647657* ___U24locvar0_0;
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0::$locvar1
	int32_t ___U24locvar1_1;
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0::<b>__1
	uint8_t ___U3CbU3E__1_2;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0::$this
	WebSocketFrame_t3926438742 * ___U24this_3;
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0::$current
	uint8_t ___U24current_4;
	// System.Boolean WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3460275121, ___U24locvar0_0)); }
	inline ByteU5BU5D_t4116647657* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(ByteU5BU5D_t4116647657* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3460275121, ___U24locvar1_1)); }
	inline int32_t get_U24locvar1_1() const { return ___U24locvar1_1; }
	inline int32_t* get_address_of_U24locvar1_1() { return &___U24locvar1_1; }
	inline void set_U24locvar1_1(int32_t value)
	{
		___U24locvar1_1 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E__1_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3460275121, ___U3CbU3E__1_2)); }
	inline uint8_t get_U3CbU3E__1_2() const { return ___U3CbU3E__1_2; }
	inline uint8_t* get_address_of_U3CbU3E__1_2() { return &___U3CbU3E__1_2; }
	inline void set_U3CbU3E__1_2(uint8_t value)
	{
		___U3CbU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3460275121, ___U24this_3)); }
	inline WebSocketFrame_t3926438742 * get_U24this_3() const { return ___U24this_3; }
	inline WebSocketFrame_t3926438742 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(WebSocketFrame_t3926438742 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3460275121, ___U24current_4)); }
	inline uint8_t get_U24current_4() const { return ___U24current_4; }
	inline uint8_t* get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(uint8_t value)
	{
		___U24current_4 = value;
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3460275121, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3460275121, ___U24PC_6)); }
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
#endif // U3CGETENUMERATORU3EC__ITERATOR0_T3460275121_H
#ifndef U3CPARSEASYNCU3EC__ANONSTOREY3_T2286505172_H
#define U3CPARSEASYNCU3EC__ANONSTOREY3_T2286505172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<ParseAsync>c__AnonStorey3
struct  U3CParseAsyncU3Ec__AnonStorey3_t2286505172  : public RuntimeObject
{
public:
	// System.IO.Stream WebSocketSharp.WebSocketFrame/<ParseAsync>c__AnonStorey3::stream
	Stream_t1273022909 * ___stream_0;
	// System.Boolean WebSocketSharp.WebSocketFrame/<ParseAsync>c__AnonStorey3::unmask
	bool ___unmask_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<ParseAsync>c__AnonStorey3::completed
	Action_1_t4098906337 * ___completed_2;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CParseAsyncU3Ec__AnonStorey3_t2286505172, ___stream_0)); }
	inline Stream_t1273022909 * get_stream_0() const { return ___stream_0; }
	inline Stream_t1273022909 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t1273022909 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___stream_0), value);
	}

	inline static int32_t get_offset_of_unmask_1() { return static_cast<int32_t>(offsetof(U3CParseAsyncU3Ec__AnonStorey3_t2286505172, ___unmask_1)); }
	inline bool get_unmask_1() const { return ___unmask_1; }
	inline bool* get_address_of_unmask_1() { return &___unmask_1; }
	inline void set_unmask_1(bool value)
	{
		___unmask_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CParseAsyncU3Ec__AnonStorey3_t2286505172, ___completed_2)); }
	inline Action_1_t4098906337 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t4098906337 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t4098906337 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((&___completed_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPARSEASYNCU3EC__ANONSTOREY3_T2286505172_H
#ifndef U3CDUMPU3EC__ANONSTOREY1_T3297801281_H
#define U3CDUMPU3EC__ANONSTOREY1_T3297801281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1
struct  U3CdumpU3Ec__AnonStorey1_t3297801281  : public RuntimeObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1::output
	StringBuilder_t * ___output_0;
	// System.String WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1::lineFmt
	String_t* ___lineFmt_1;

public:
	inline static int32_t get_offset_of_output_0() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey1_t3297801281, ___output_0)); }
	inline StringBuilder_t * get_output_0() const { return ___output_0; }
	inline StringBuilder_t ** get_address_of_output_0() { return &___output_0; }
	inline void set_output_0(StringBuilder_t * value)
	{
		___output_0 = value;
		Il2CppCodeGenWriteBarrier((&___output_0), value);
	}

	inline static int32_t get_offset_of_lineFmt_1() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey1_t3297801281, ___lineFmt_1)); }
	inline String_t* get_lineFmt_1() const { return ___lineFmt_1; }
	inline String_t** get_address_of_lineFmt_1() { return &___lineFmt_1; }
	inline void set_lineFmt_1(String_t* value)
	{
		___lineFmt_1 = value;
		Il2CppCodeGenWriteBarrier((&___lineFmt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDUMPU3EC__ANONSTOREY1_T3297801281_H
#ifndef U3CDUMPU3EC__ANONSTOREY2_T2749028009_H
#define U3CDUMPU3EC__ANONSTOREY2_T2749028009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1/<dump>c__AnonStorey2
struct  U3CdumpU3Ec__AnonStorey2_t2749028009  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1/<dump>c__AnonStorey2::lineCnt
	int64_t ___lineCnt_0;
	// WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1 WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1/<dump>c__AnonStorey2::<>f__ref$1
	U3CdumpU3Ec__AnonStorey1_t3297801281 * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_lineCnt_0() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey2_t2749028009, ___lineCnt_0)); }
	inline int64_t get_lineCnt_0() const { return ___lineCnt_0; }
	inline int64_t* get_address_of_lineCnt_0() { return &___lineCnt_0; }
	inline void set_lineCnt_0(int64_t value)
	{
		___lineCnt_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey2_t2749028009, ___U3CU3Ef__refU241_1)); }
	inline U3CdumpU3Ec__AnonStorey1_t3297801281 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CdumpU3Ec__AnonStorey1_t3297801281 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CdumpU3Ec__AnonStorey1_t3297801281 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDUMPU3EC__ANONSTOREY2_T2749028009_H
#ifndef WEBSOCKETSTREAM_T833095972_H
#define WEBSOCKETSTREAM_T833095972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketStream
struct  WebSocketStream_t833095972  : public RuntimeObject
{
public:
	// System.Object WebSocketSharp.WebSocketStream::_forWrite
	RuntimeObject * ____forWrite_1;
	// System.IO.Stream WebSocketSharp.WebSocketStream::_innerStream
	Stream_t1273022909 * ____innerStream_2;
	// System.Boolean WebSocketSharp.WebSocketStream::_secure
	bool ____secure_3;

public:
	inline static int32_t get_offset_of__forWrite_1() { return static_cast<int32_t>(offsetof(WebSocketStream_t833095972, ____forWrite_1)); }
	inline RuntimeObject * get__forWrite_1() const { return ____forWrite_1; }
	inline RuntimeObject ** get_address_of__forWrite_1() { return &____forWrite_1; }
	inline void set__forWrite_1(RuntimeObject * value)
	{
		____forWrite_1 = value;
		Il2CppCodeGenWriteBarrier((&____forWrite_1), value);
	}

	inline static int32_t get_offset_of__innerStream_2() { return static_cast<int32_t>(offsetof(WebSocketStream_t833095972, ____innerStream_2)); }
	inline Stream_t1273022909 * get__innerStream_2() const { return ____innerStream_2; }
	inline Stream_t1273022909 ** get_address_of__innerStream_2() { return &____innerStream_2; }
	inline void set__innerStream_2(Stream_t1273022909 * value)
	{
		____innerStream_2 = value;
		Il2CppCodeGenWriteBarrier((&____innerStream_2), value);
	}

	inline static int32_t get_offset_of__secure_3() { return static_cast<int32_t>(offsetof(WebSocketStream_t833095972, ____secure_3)); }
	inline bool get__secure_3() const { return ____secure_3; }
	inline bool* get_address_of__secure_3() { return &____secure_3; }
	inline void set__secure_3(bool value)
	{
		____secure_3 = value;
	}
};

struct WebSocketStream_t833095972_StaticFields
{
public:
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.WebSocketStream::<>f__am$cache0
	RemoteCertificateValidationCallback_t3014364904 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<System.String[],WebSocketSharp.HandshakeRequest> WebSocketSharp.WebSocketStream::<>f__mg$cache0
	Func_2_t2457662789 * ___U3CU3Ef__mgU24cache0_5;
	// System.Func`2<System.String[],WebSocketSharp.HandshakeResponse> WebSocketSharp.WebSocketStream::<>f__mg$cache1
	Func_2_t805064898 * ___U3CU3Ef__mgU24cache1_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(WebSocketStream_t833095972_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(WebSocketStream_t833095972_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline Func_2_t2457662789 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline Func_2_t2457662789 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(Func_2_t2457662789 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_6() { return static_cast<int32_t>(offsetof(WebSocketStream_t833095972_StaticFields, ___U3CU3Ef__mgU24cache1_6)); }
	inline Func_2_t805064898 * get_U3CU3Ef__mgU24cache1_6() const { return ___U3CU3Ef__mgU24cache1_6; }
	inline Func_2_t805064898 ** get_address_of_U3CU3Ef__mgU24cache1_6() { return &___U3CU3Ef__mgU24cache1_6; }
	inline void set_U3CU3Ef__mgU24cache1_6(Func_2_t805064898 * value)
	{
		___U3CU3Ef__mgU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBSOCKETSTREAM_T833095972_H
#ifndef U3CREADHANDSHAKEHEADERSU3EC__ANONSTOREY0_T3427667854_H
#define U3CREADHANDSHAKEHEADERSU3EC__ANONSTOREY0_T3427667854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketStream/<readHandshakeHeaders>c__AnonStorey0
struct  U3CreadHandshakeHeadersU3Ec__AnonStorey0_t3427667854  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> WebSocketSharp.WebSocketStream/<readHandshakeHeaders>c__AnonStorey0::buff
	List_1_t2606371118 * ___buff_0;
	// System.Int32 WebSocketSharp.WebSocketStream/<readHandshakeHeaders>c__AnonStorey0::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CreadHandshakeHeadersU3Ec__AnonStorey0_t3427667854, ___buff_0)); }
	inline List_1_t2606371118 * get_buff_0() const { return ___buff_0; }
	inline List_1_t2606371118 ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(List_1_t2606371118 * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((&___buff_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(U3CreadHandshakeHeadersU3Ec__AnonStorey0_t3427667854, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADHANDSHAKEHEADERSU3EC__ANONSTOREY0_T3427667854_H
#ifndef U24ARRAYTYPEU3D16_T3253128244_H
#define U24ARRAYTYPEU3D16_T3253128244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D16_t3253128244 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_t3253128244__padding[16];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D16_T3253128244_H
#ifndef U24ARRAYTYPEU3D8_T3242499063_H
#define U24ARRAYTYPEU3D8_T3242499063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D8_t3242499063 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t3242499063__padding[8];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D8_T3242499063_H
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
#ifndef HTTPLISTENERWEBSOCKETCONTEXT_T3770402993_H
#define HTTPLISTENERWEBSOCKETCONTEXT_T3770402993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct  HttpListenerWebSocketContext_t3770402993  : public WebSocketContext_t619421455
{
public:
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_context
	HttpListenerContext_t3723273891 * ____context_0;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_websocket
	WebSocket_t62038747 * ____websocket_1;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(HttpListenerWebSocketContext_t3770402993, ____context_0)); }
	inline HttpListenerContext_t3723273891 * get__context_0() const { return ____context_0; }
	inline HttpListenerContext_t3723273891 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(HttpListenerContext_t3723273891 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((&____context_0), value);
	}

	inline static int32_t get_offset_of__websocket_1() { return static_cast<int32_t>(offsetof(HttpListenerWebSocketContext_t3770402993, ____websocket_1)); }
	inline WebSocket_t62038747 * get__websocket_1() const { return ____websocket_1; }
	inline WebSocket_t62038747 ** get_address_of__websocket_1() { return &____websocket_1; }
	inline void set__websocket_1(WebSocket_t62038747 * value)
	{
		____websocket_1 = value;
		Il2CppCodeGenWriteBarrier((&____websocket_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPLISTENERWEBSOCKETCONTEXT_T3770402993_H
#ifndef TCPLISTENERWEBSOCKETCONTEXT_T2376318492_H
#define TCPLISTENERWEBSOCKETCONTEXT_T2376318492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct  TcpListenerWebSocketContext_t2376318492  : public WebSocketContext_t619421455
{
public:
	// System.Net.Sockets.TcpClient WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_client
	TcpClient_t822906377 * ____client_0;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_cookies
	CookieCollection_t962330244 * ____cookies_1;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_queryString
	NameValueCollection_t407452768 * ____queryString_2;
	// WebSocketSharp.HandshakeRequest WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_request
	HandshakeRequest_t3322584187 * ____request_3;
	// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_secure
	bool ____secure_4;
	// WebSocketSharp.WebSocketStream WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_stream
	WebSocketStream_t833095972 * ____stream_5;
	// System.Uri WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_uri
	Uri_t100236324 * ____uri_6;
	// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_user
	RuntimeObject* ____user_7;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_websocket
	WebSocket_t62038747 * ____websocket_8;

public:
	inline static int32_t get_offset_of__client_0() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____client_0)); }
	inline TcpClient_t822906377 * get__client_0() const { return ____client_0; }
	inline TcpClient_t822906377 ** get_address_of__client_0() { return &____client_0; }
	inline void set__client_0(TcpClient_t822906377 * value)
	{
		____client_0 = value;
		Il2CppCodeGenWriteBarrier((&____client_0), value);
	}

	inline static int32_t get_offset_of__cookies_1() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____cookies_1)); }
	inline CookieCollection_t962330244 * get__cookies_1() const { return ____cookies_1; }
	inline CookieCollection_t962330244 ** get_address_of__cookies_1() { return &____cookies_1; }
	inline void set__cookies_1(CookieCollection_t962330244 * value)
	{
		____cookies_1 = value;
		Il2CppCodeGenWriteBarrier((&____cookies_1), value);
	}

	inline static int32_t get_offset_of__queryString_2() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____queryString_2)); }
	inline NameValueCollection_t407452768 * get__queryString_2() const { return ____queryString_2; }
	inline NameValueCollection_t407452768 ** get_address_of__queryString_2() { return &____queryString_2; }
	inline void set__queryString_2(NameValueCollection_t407452768 * value)
	{
		____queryString_2 = value;
		Il2CppCodeGenWriteBarrier((&____queryString_2), value);
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____request_3)); }
	inline HandshakeRequest_t3322584187 * get__request_3() const { return ____request_3; }
	inline HandshakeRequest_t3322584187 ** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(HandshakeRequest_t3322584187 * value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier((&____request_3), value);
	}

	inline static int32_t get_offset_of__secure_4() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____secure_4)); }
	inline bool get__secure_4() const { return ____secure_4; }
	inline bool* get_address_of__secure_4() { return &____secure_4; }
	inline void set__secure_4(bool value)
	{
		____secure_4 = value;
	}

	inline static int32_t get_offset_of__stream_5() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____stream_5)); }
	inline WebSocketStream_t833095972 * get__stream_5() const { return ____stream_5; }
	inline WebSocketStream_t833095972 ** get_address_of__stream_5() { return &____stream_5; }
	inline void set__stream_5(WebSocketStream_t833095972 * value)
	{
		____stream_5 = value;
		Il2CppCodeGenWriteBarrier((&____stream_5), value);
	}

	inline static int32_t get_offset_of__uri_6() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____uri_6)); }
	inline Uri_t100236324 * get__uri_6() const { return ____uri_6; }
	inline Uri_t100236324 ** get_address_of__uri_6() { return &____uri_6; }
	inline void set__uri_6(Uri_t100236324 * value)
	{
		____uri_6 = value;
		Il2CppCodeGenWriteBarrier((&____uri_6), value);
	}

	inline static int32_t get_offset_of__user_7() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____user_7)); }
	inline RuntimeObject* get__user_7() const { return ____user_7; }
	inline RuntimeObject** get_address_of__user_7() { return &____user_7; }
	inline void set__user_7(RuntimeObject* value)
	{
		____user_7 = value;
		Il2CppCodeGenWriteBarrier((&____user_7), value);
	}

	inline static int32_t get_offset_of__websocket_8() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492, ____websocket_8)); }
	inline WebSocket_t62038747 * get__websocket_8() const { return ____websocket_8; }
	inline WebSocket_t62038747 ** get_address_of__websocket_8() { return &____websocket_8; }
	inline void set__websocket_8(WebSocket_t62038747 * value)
	{
		____websocket_8 = value;
		Il2CppCodeGenWriteBarrier((&____websocket_8), value);
	}
};

struct TcpListenerWebSocketContext_t2376318492_StaticFields
{
public:
	// System.Func`2<System.String[],WebSocketSharp.HandshakeRequest> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::<>f__mg$cache0
	Func_2_t2457662789 * ___U3CU3Ef__mgU24cache0_9;
	// System.Func`2<System.String[],WebSocketSharp.HandshakeRequest> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::<>f__mg$cache1
	Func_2_t2457662789 * ___U3CU3Ef__mgU24cache1_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline Func_2_t2457662789 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline Func_2_t2457662789 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(Func_2_t2457662789 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_10() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t2376318492_StaticFields, ___U3CU3Ef__mgU24cache1_10)); }
	inline Func_2_t2457662789 * get_U3CU3Ef__mgU24cache1_10() const { return ___U3CU3Ef__mgU24cache1_10; }
	inline Func_2_t2457662789 ** get_address_of_U3CU3Ef__mgU24cache1_10() { return &___U3CU3Ef__mgU24cache1_10; }
	inline void set_U3CU3Ef__mgU24cache1_10(Func_2_t2457662789 * value)
	{
		___U3CU3Ef__mgU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPLISTENERWEBSOCKETCONTEXT_T2376318492_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-03F4297FCC30D0FD5E420E5D26E7FA711167C7EF
	U24ArrayTypeU3D8_t3242499063  ___U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-EB8077FF0D4F4A927EB9224048538295DEF1227A
	U24ArrayTypeU3D16_t3253128244  ___U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-6532575F81314AADD4BCFD96F1517D5BBFF2B60B
	U24ArrayTypeU3D8_t3242499063  ___U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2;

public:
	inline static int32_t get_offset_of_U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0)); }
	inline U24ArrayTypeU3D8_t3242499063  get_U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0() const { return ___U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0; }
	inline U24ArrayTypeU3D8_t3242499063 * get_address_of_U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0() { return &___U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0; }
	inline void set_U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0(U24ArrayTypeU3D8_t3242499063  value)
	{
		___U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1)); }
	inline U24ArrayTypeU3D16_t3253128244  get_U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1() const { return ___U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1; }
	inline U24ArrayTypeU3D16_t3253128244 * get_address_of_U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1() { return &___U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1; }
	inline void set_U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1(U24ArrayTypeU3D16_t3253128244  value)
	{
		___U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2)); }
	inline U24ArrayTypeU3D8_t3242499063  get_U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2() const { return ___U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2; }
	inline U24ArrayTypeU3D8_t3242499063 * get_address_of_U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2() { return &___U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2; }
	inline void set_U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2(U24ArrayTypeU3D8_t3242499063  value)
	{
		___U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef CLOSESTATUSCODE_T3786097442_H
#define CLOSESTATUSCODE_T3786097442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.CloseStatusCode
struct  CloseStatusCode_t3786097442 
{
public:
	// System.UInt16 WebSocketSharp.CloseStatusCode::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CloseStatusCode_t3786097442, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSESTATUSCODE_T3786097442_H
#ifndef COMPRESSIONMETHOD_T1062973517_H
#define COMPRESSIONMETHOD_T1062973517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.CompressionMethod
struct  CompressionMethod_t1062973517 
{
public:
	// System.Byte WebSocketSharp.CompressionMethod::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionMethod_t1062973517, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONMETHOD_T1062973517_H
#ifndef FIN_T411169233_H
#define FIN_T411169233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Fin
struct  Fin_t411169233 
{
public:
	// System.Byte WebSocketSharp.Fin::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fin_t411169233, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIN_T411169233_H
#ifndef MASK_T3471462035_H
#define MASK_T3471462035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Mask
struct  Mask_t3471462035 
{
public:
	// System.Byte WebSocketSharp.Mask::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mask_t3471462035, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASK_T3471462035_H
#ifndef OPCODE_T2755924248_H
#define OPCODE_T2755924248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Opcode
struct  Opcode_t2755924248 
{
public:
	// System.Byte WebSocketSharp.Opcode::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Opcode_t2755924248, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T2755924248_H
#ifndef RSV_T2704667083_H
#define RSV_T2704667083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Rsv
struct  Rsv_t2704667083 
{
public:
	// System.Byte WebSocketSharp.Rsv::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Rsv_t2704667083, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSV_T2704667083_H
#ifndef WEBSOCKETSTATE_T45461673_H
#define WEBSOCKETSTATE_T45461673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketState
struct  WebSocketState_t45461673 
{
public:
	// System.UInt16 WebSocketSharp.WebSocketState::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WebSocketState_t45461673, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBSOCKETSTATE_T45461673_H
#ifndef WEBSOCKET_T62038747_H
#define WEBSOCKET_T62038747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket
struct  WebSocket_t62038747  : public RuntimeObject
{
public:
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t3244447305 * ____authChallenge_2;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_3;
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.WebSocket::_certValidationCallback
	RemoteCertificateValidationCallback_t3014364904 * ____certValidationCallback_4;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_5;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_t1264377477 * ____closeContext_6;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_7;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t619421455 * ____context_8;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_t962330244 * ____cookies_9;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t1094796801 * ____credentials_10;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_11;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_exitReceiving
	AutoResetEvent_t1333520283 * ____exitReceiving_12;
	// System.Object WebSocketSharp.WebSocket::_forConn
	RuntimeObject * ____forConn_13;
	// System.Object WebSocketSharp.WebSocket::_forEvent
	RuntimeObject * ____forEvent_14;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject * ____forMessageEventQueue_15;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject * ____forSend_16;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t1203693676 * ____handshakeRequestChecker_17;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t4025333586 * ____logger_18;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_t2071317217 * ____messageEventQueue_19;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_20;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_21;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_22;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_23;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t1281789340* ____protocols_24;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_25;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_receivePong
	AutoResetEvent_t1333520283 * ____receivePong_26;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_27;
	// WebSocketSharp.WebSocketStream WebSocketSharp.WebSocket::_stream
	WebSocketStream_t833095972 * ____stream_28;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t822906377 * ____tcpClient_29;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t100236324 * ____uri_30;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t4095840750 * ___OnClose_32;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t1344838444 * ___OnError_33;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t149217156 * ___OnMessage_34;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t1348719766 * ___OnOpen_35;

public:
	inline static int32_t get_offset_of__authChallenge_2() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____authChallenge_2)); }
	inline AuthenticationChallenge_t3244447305 * get__authChallenge_2() const { return ____authChallenge_2; }
	inline AuthenticationChallenge_t3244447305 ** get_address_of__authChallenge_2() { return &____authChallenge_2; }
	inline void set__authChallenge_2(AuthenticationChallenge_t3244447305 * value)
	{
		____authChallenge_2 = value;
		Il2CppCodeGenWriteBarrier((&____authChallenge_2), value);
	}

	inline static int32_t get_offset_of__base64Key_3() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____base64Key_3)); }
	inline String_t* get__base64Key_3() const { return ____base64Key_3; }
	inline String_t** get_address_of__base64Key_3() { return &____base64Key_3; }
	inline void set__base64Key_3(String_t* value)
	{
		____base64Key_3 = value;
		Il2CppCodeGenWriteBarrier((&____base64Key_3), value);
	}

	inline static int32_t get_offset_of__certValidationCallback_4() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____certValidationCallback_4)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get__certValidationCallback_4() const { return ____certValidationCallback_4; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of__certValidationCallback_4() { return &____certValidationCallback_4; }
	inline void set__certValidationCallback_4(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		____certValidationCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&____certValidationCallback_4), value);
	}

	inline static int32_t get_offset_of__client_5() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____client_5)); }
	inline bool get__client_5() const { return ____client_5; }
	inline bool* get_address_of__client_5() { return &____client_5; }
	inline void set__client_5(bool value)
	{
		____client_5 = value;
	}

	inline static int32_t get_offset_of__closeContext_6() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____closeContext_6)); }
	inline Action_t1264377477 * get__closeContext_6() const { return ____closeContext_6; }
	inline Action_t1264377477 ** get_address_of__closeContext_6() { return &____closeContext_6; }
	inline void set__closeContext_6(Action_t1264377477 * value)
	{
		____closeContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____closeContext_6), value);
	}

	inline static int32_t get_offset_of__compression_7() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____compression_7)); }
	inline uint8_t get__compression_7() const { return ____compression_7; }
	inline uint8_t* get_address_of__compression_7() { return &____compression_7; }
	inline void set__compression_7(uint8_t value)
	{
		____compression_7 = value;
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____context_8)); }
	inline WebSocketContext_t619421455 * get__context_8() const { return ____context_8; }
	inline WebSocketContext_t619421455 ** get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(WebSocketContext_t619421455 * value)
	{
		____context_8 = value;
		Il2CppCodeGenWriteBarrier((&____context_8), value);
	}

	inline static int32_t get_offset_of__cookies_9() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____cookies_9)); }
	inline CookieCollection_t962330244 * get__cookies_9() const { return ____cookies_9; }
	inline CookieCollection_t962330244 ** get_address_of__cookies_9() { return &____cookies_9; }
	inline void set__cookies_9(CookieCollection_t962330244 * value)
	{
		____cookies_9 = value;
		Il2CppCodeGenWriteBarrier((&____cookies_9), value);
	}

	inline static int32_t get_offset_of__credentials_10() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____credentials_10)); }
	inline NetworkCredential_t1094796801 * get__credentials_10() const { return ____credentials_10; }
	inline NetworkCredential_t1094796801 ** get_address_of__credentials_10() { return &____credentials_10; }
	inline void set__credentials_10(NetworkCredential_t1094796801 * value)
	{
		____credentials_10 = value;
		Il2CppCodeGenWriteBarrier((&____credentials_10), value);
	}

	inline static int32_t get_offset_of__extensions_11() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____extensions_11)); }
	inline String_t* get__extensions_11() const { return ____extensions_11; }
	inline String_t** get_address_of__extensions_11() { return &____extensions_11; }
	inline void set__extensions_11(String_t* value)
	{
		____extensions_11 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_11), value);
	}

	inline static int32_t get_offset_of__exitReceiving_12() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____exitReceiving_12)); }
	inline AutoResetEvent_t1333520283 * get__exitReceiving_12() const { return ____exitReceiving_12; }
	inline AutoResetEvent_t1333520283 ** get_address_of__exitReceiving_12() { return &____exitReceiving_12; }
	inline void set__exitReceiving_12(AutoResetEvent_t1333520283 * value)
	{
		____exitReceiving_12 = value;
		Il2CppCodeGenWriteBarrier((&____exitReceiving_12), value);
	}

	inline static int32_t get_offset_of__forConn_13() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____forConn_13)); }
	inline RuntimeObject * get__forConn_13() const { return ____forConn_13; }
	inline RuntimeObject ** get_address_of__forConn_13() { return &____forConn_13; }
	inline void set__forConn_13(RuntimeObject * value)
	{
		____forConn_13 = value;
		Il2CppCodeGenWriteBarrier((&____forConn_13), value);
	}

	inline static int32_t get_offset_of__forEvent_14() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____forEvent_14)); }
	inline RuntimeObject * get__forEvent_14() const { return ____forEvent_14; }
	inline RuntimeObject ** get_address_of__forEvent_14() { return &____forEvent_14; }
	inline void set__forEvent_14(RuntimeObject * value)
	{
		____forEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&____forEvent_14), value);
	}

	inline static int32_t get_offset_of__forMessageEventQueue_15() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____forMessageEventQueue_15)); }
	inline RuntimeObject * get__forMessageEventQueue_15() const { return ____forMessageEventQueue_15; }
	inline RuntimeObject ** get_address_of__forMessageEventQueue_15() { return &____forMessageEventQueue_15; }
	inline void set__forMessageEventQueue_15(RuntimeObject * value)
	{
		____forMessageEventQueue_15 = value;
		Il2CppCodeGenWriteBarrier((&____forMessageEventQueue_15), value);
	}

	inline static int32_t get_offset_of__forSend_16() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____forSend_16)); }
	inline RuntimeObject * get__forSend_16() const { return ____forSend_16; }
	inline RuntimeObject ** get_address_of__forSend_16() { return &____forSend_16; }
	inline void set__forSend_16(RuntimeObject * value)
	{
		____forSend_16 = value;
		Il2CppCodeGenWriteBarrier((&____forSend_16), value);
	}

	inline static int32_t get_offset_of__handshakeRequestChecker_17() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____handshakeRequestChecker_17)); }
	inline Func_2_t1203693676 * get__handshakeRequestChecker_17() const { return ____handshakeRequestChecker_17; }
	inline Func_2_t1203693676 ** get_address_of__handshakeRequestChecker_17() { return &____handshakeRequestChecker_17; }
	inline void set__handshakeRequestChecker_17(Func_2_t1203693676 * value)
	{
		____handshakeRequestChecker_17 = value;
		Il2CppCodeGenWriteBarrier((&____handshakeRequestChecker_17), value);
	}

	inline static int32_t get_offset_of__logger_18() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____logger_18)); }
	inline Logger_t4025333586 * get__logger_18() const { return ____logger_18; }
	inline Logger_t4025333586 ** get_address_of__logger_18() { return &____logger_18; }
	inline void set__logger_18(Logger_t4025333586 * value)
	{
		____logger_18 = value;
		Il2CppCodeGenWriteBarrier((&____logger_18), value);
	}

	inline static int32_t get_offset_of__messageEventQueue_19() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____messageEventQueue_19)); }
	inline Queue_1_t2071317217 * get__messageEventQueue_19() const { return ____messageEventQueue_19; }
	inline Queue_1_t2071317217 ** get_address_of__messageEventQueue_19() { return &____messageEventQueue_19; }
	inline void set__messageEventQueue_19(Queue_1_t2071317217 * value)
	{
		____messageEventQueue_19 = value;
		Il2CppCodeGenWriteBarrier((&____messageEventQueue_19), value);
	}

	inline static int32_t get_offset_of__nonceCount_20() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____nonceCount_20)); }
	inline uint32_t get__nonceCount_20() const { return ____nonceCount_20; }
	inline uint32_t* get_address_of__nonceCount_20() { return &____nonceCount_20; }
	inline void set__nonceCount_20(uint32_t value)
	{
		____nonceCount_20 = value;
	}

	inline static int32_t get_offset_of__origin_21() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____origin_21)); }
	inline String_t* get__origin_21() const { return ____origin_21; }
	inline String_t** get_address_of__origin_21() { return &____origin_21; }
	inline void set__origin_21(String_t* value)
	{
		____origin_21 = value;
		Il2CppCodeGenWriteBarrier((&____origin_21), value);
	}

	inline static int32_t get_offset_of__preAuth_22() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____preAuth_22)); }
	inline bool get__preAuth_22() const { return ____preAuth_22; }
	inline bool* get_address_of__preAuth_22() { return &____preAuth_22; }
	inline void set__preAuth_22(bool value)
	{
		____preAuth_22 = value;
	}

	inline static int32_t get_offset_of__protocol_23() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____protocol_23)); }
	inline String_t* get__protocol_23() const { return ____protocol_23; }
	inline String_t** get_address_of__protocol_23() { return &____protocol_23; }
	inline void set__protocol_23(String_t* value)
	{
		____protocol_23 = value;
		Il2CppCodeGenWriteBarrier((&____protocol_23), value);
	}

	inline static int32_t get_offset_of__protocols_24() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____protocols_24)); }
	inline StringU5BU5D_t1281789340* get__protocols_24() const { return ____protocols_24; }
	inline StringU5BU5D_t1281789340** get_address_of__protocols_24() { return &____protocols_24; }
	inline void set__protocols_24(StringU5BU5D_t1281789340* value)
	{
		____protocols_24 = value;
		Il2CppCodeGenWriteBarrier((&____protocols_24), value);
	}

	inline static int32_t get_offset_of__readyState_25() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____readyState_25)); }
	inline uint16_t get__readyState_25() const { return ____readyState_25; }
	inline uint16_t* get_address_of__readyState_25() { return &____readyState_25; }
	inline void set__readyState_25(uint16_t value)
	{
		____readyState_25 = value;
	}

	inline static int32_t get_offset_of__receivePong_26() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____receivePong_26)); }
	inline AutoResetEvent_t1333520283 * get__receivePong_26() const { return ____receivePong_26; }
	inline AutoResetEvent_t1333520283 ** get_address_of__receivePong_26() { return &____receivePong_26; }
	inline void set__receivePong_26(AutoResetEvent_t1333520283 * value)
	{
		____receivePong_26 = value;
		Il2CppCodeGenWriteBarrier((&____receivePong_26), value);
	}

	inline static int32_t get_offset_of__secure_27() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____secure_27)); }
	inline bool get__secure_27() const { return ____secure_27; }
	inline bool* get_address_of__secure_27() { return &____secure_27; }
	inline void set__secure_27(bool value)
	{
		____secure_27 = value;
	}

	inline static int32_t get_offset_of__stream_28() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____stream_28)); }
	inline WebSocketStream_t833095972 * get__stream_28() const { return ____stream_28; }
	inline WebSocketStream_t833095972 ** get_address_of__stream_28() { return &____stream_28; }
	inline void set__stream_28(WebSocketStream_t833095972 * value)
	{
		____stream_28 = value;
		Il2CppCodeGenWriteBarrier((&____stream_28), value);
	}

	inline static int32_t get_offset_of__tcpClient_29() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____tcpClient_29)); }
	inline TcpClient_t822906377 * get__tcpClient_29() const { return ____tcpClient_29; }
	inline TcpClient_t822906377 ** get_address_of__tcpClient_29() { return &____tcpClient_29; }
	inline void set__tcpClient_29(TcpClient_t822906377 * value)
	{
		____tcpClient_29 = value;
		Il2CppCodeGenWriteBarrier((&____tcpClient_29), value);
	}

	inline static int32_t get_offset_of__uri_30() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ____uri_30)); }
	inline Uri_t100236324 * get__uri_30() const { return ____uri_30; }
	inline Uri_t100236324 ** get_address_of__uri_30() { return &____uri_30; }
	inline void set__uri_30(Uri_t100236324 * value)
	{
		____uri_30 = value;
		Il2CppCodeGenWriteBarrier((&____uri_30), value);
	}

	inline static int32_t get_offset_of_OnClose_32() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ___OnClose_32)); }
	inline EventHandler_1_t4095840750 * get_OnClose_32() const { return ___OnClose_32; }
	inline EventHandler_1_t4095840750 ** get_address_of_OnClose_32() { return &___OnClose_32; }
	inline void set_OnClose_32(EventHandler_1_t4095840750 * value)
	{
		___OnClose_32 = value;
		Il2CppCodeGenWriteBarrier((&___OnClose_32), value);
	}

	inline static int32_t get_offset_of_OnError_33() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ___OnError_33)); }
	inline EventHandler_1_t1344838444 * get_OnError_33() const { return ___OnError_33; }
	inline EventHandler_1_t1344838444 ** get_address_of_OnError_33() { return &___OnError_33; }
	inline void set_OnError_33(EventHandler_1_t1344838444 * value)
	{
		___OnError_33 = value;
		Il2CppCodeGenWriteBarrier((&___OnError_33), value);
	}

	inline static int32_t get_offset_of_OnMessage_34() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ___OnMessage_34)); }
	inline EventHandler_1_t149217156 * get_OnMessage_34() const { return ___OnMessage_34; }
	inline EventHandler_1_t149217156 ** get_address_of_OnMessage_34() { return &___OnMessage_34; }
	inline void set_OnMessage_34(EventHandler_1_t149217156 * value)
	{
		___OnMessage_34 = value;
		Il2CppCodeGenWriteBarrier((&___OnMessage_34), value);
	}

	inline static int32_t get_offset_of_OnOpen_35() { return static_cast<int32_t>(offsetof(WebSocket_t62038747, ___OnOpen_35)); }
	inline EventHandler_t1348719766 * get_OnOpen_35() const { return ___OnOpen_35; }
	inline EventHandler_t1348719766 ** get_address_of_OnOpen_35() { return &___OnOpen_35; }
	inline void set_OnOpen_35(EventHandler_t1348719766 * value)
	{
		___OnOpen_35 = value;
		Il2CppCodeGenWriteBarrier((&___OnOpen_35), value);
	}
};

struct WebSocket_t62038747_StaticFields
{
public:
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::<>f__am$cache0
	Func_2_t1203693676 * ___U3CU3Ef__amU24cache0_36;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_36() { return static_cast<int32_t>(offsetof(WebSocket_t62038747_StaticFields, ___U3CU3Ef__amU24cache0_36)); }
	inline Func_2_t1203693676 * get_U3CU3Ef__amU24cache0_36() const { return ___U3CU3Ef__amU24cache0_36; }
	inline Func_2_t1203693676 ** get_address_of_U3CU3Ef__amU24cache0_36() { return &___U3CU3Ef__amU24cache0_36; }
	inline void set_U3CU3Ef__amU24cache0_36(Func_2_t1203693676 * value)
	{
		___U3CU3Ef__amU24cache0_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBSOCKET_T62038747_H
#ifndef WEBSOCKETEXCEPTION_T618477455_H
#define WEBSOCKETEXCEPTION_T618477455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketException
struct  WebSocketException_t618477455  : public Exception_t
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::<Code>k__BackingField
	uint16_t ___U3CCodeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WebSocketException_t618477455, ___U3CCodeU3Ek__BackingField_11)); }
	inline uint16_t get_U3CCodeU3Ek__BackingField_11() const { return ___U3CCodeU3Ek__BackingField_11; }
	inline uint16_t* get_address_of_U3CCodeU3Ek__BackingField_11() { return &___U3CCodeU3Ek__BackingField_11; }
	inline void set_U3CCodeU3Ek__BackingField_11(uint16_t value)
	{
		___U3CCodeU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBSOCKETEXCEPTION_T618477455_H
#ifndef WEBSOCKETFRAME_T3926438742_H
#define WEBSOCKETFRAME_T3926438742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame
struct  WebSocketFrame_t3926438742  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::_extPayloadLength
	ByteU5BU5D_t4116647657* ____extPayloadLength_0;
	// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::_fin
	uint8_t ____fin_1;
	// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::_mask
	uint8_t ____mask_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame::_maskingKey
	ByteU5BU5D_t4116647657* ____maskingKey_3;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::_opcode
	uint8_t ____opcode_4;
	// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::_payloadData
	PayloadData_t688932160 * ____payloadData_5;
	// System.Byte WebSocketSharp.WebSocketFrame::_payloadLength
	uint8_t ____payloadLength_6;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv1
	uint8_t ____rsv1_7;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv2
	uint8_t ____rsv2_8;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv3
	uint8_t ____rsv3_9;

public:
	inline static int32_t get_offset_of__extPayloadLength_0() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____extPayloadLength_0)); }
	inline ByteU5BU5D_t4116647657* get__extPayloadLength_0() const { return ____extPayloadLength_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__extPayloadLength_0() { return &____extPayloadLength_0; }
	inline void set__extPayloadLength_0(ByteU5BU5D_t4116647657* value)
	{
		____extPayloadLength_0 = value;
		Il2CppCodeGenWriteBarrier((&____extPayloadLength_0), value);
	}

	inline static int32_t get_offset_of__fin_1() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____fin_1)); }
	inline uint8_t get__fin_1() const { return ____fin_1; }
	inline uint8_t* get_address_of__fin_1() { return &____fin_1; }
	inline void set__fin_1(uint8_t value)
	{
		____fin_1 = value;
	}

	inline static int32_t get_offset_of__mask_2() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____mask_2)); }
	inline uint8_t get__mask_2() const { return ____mask_2; }
	inline uint8_t* get_address_of__mask_2() { return &____mask_2; }
	inline void set__mask_2(uint8_t value)
	{
		____mask_2 = value;
	}

	inline static int32_t get_offset_of__maskingKey_3() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____maskingKey_3)); }
	inline ByteU5BU5D_t4116647657* get__maskingKey_3() const { return ____maskingKey_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__maskingKey_3() { return &____maskingKey_3; }
	inline void set__maskingKey_3(ByteU5BU5D_t4116647657* value)
	{
		____maskingKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____maskingKey_3), value);
	}

	inline static int32_t get_offset_of__opcode_4() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____opcode_4)); }
	inline uint8_t get__opcode_4() const { return ____opcode_4; }
	inline uint8_t* get_address_of__opcode_4() { return &____opcode_4; }
	inline void set__opcode_4(uint8_t value)
	{
		____opcode_4 = value;
	}

	inline static int32_t get_offset_of__payloadData_5() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____payloadData_5)); }
	inline PayloadData_t688932160 * get__payloadData_5() const { return ____payloadData_5; }
	inline PayloadData_t688932160 ** get_address_of__payloadData_5() { return &____payloadData_5; }
	inline void set__payloadData_5(PayloadData_t688932160 * value)
	{
		____payloadData_5 = value;
		Il2CppCodeGenWriteBarrier((&____payloadData_5), value);
	}

	inline static int32_t get_offset_of__payloadLength_6() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____payloadLength_6)); }
	inline uint8_t get__payloadLength_6() const { return ____payloadLength_6; }
	inline uint8_t* get_address_of__payloadLength_6() { return &____payloadLength_6; }
	inline void set__payloadLength_6(uint8_t value)
	{
		____payloadLength_6 = value;
	}

	inline static int32_t get_offset_of__rsv1_7() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____rsv1_7)); }
	inline uint8_t get__rsv1_7() const { return ____rsv1_7; }
	inline uint8_t* get_address_of__rsv1_7() { return &____rsv1_7; }
	inline void set__rsv1_7(uint8_t value)
	{
		____rsv1_7 = value;
	}

	inline static int32_t get_offset_of__rsv2_8() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____rsv2_8)); }
	inline uint8_t get__rsv2_8() const { return ____rsv2_8; }
	inline uint8_t* get_address_of__rsv2_8() { return &____rsv2_8; }
	inline void set__rsv2_8(uint8_t value)
	{
		____rsv2_8 = value;
	}

	inline static int32_t get_offset_of__rsv3_9() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742, ____rsv3_9)); }
	inline uint8_t get__rsv3_9() const { return ____rsv3_9; }
	inline uint8_t* get_address_of__rsv3_9() { return &____rsv3_9; }
	inline void set__rsv3_9(uint8_t value)
	{
		____rsv3_9 = value;
	}
};

struct WebSocketFrame_t3926438742_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::EmptyUnmaskPingData
	ByteU5BU5D_t4116647657* ___EmptyUnmaskPingData_10;

public:
	inline static int32_t get_offset_of_EmptyUnmaskPingData_10() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3926438742_StaticFields, ___EmptyUnmaskPingData_10)); }
	inline ByteU5BU5D_t4116647657* get_EmptyUnmaskPingData_10() const { return ___EmptyUnmaskPingData_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyUnmaskPingData_10() { return &___EmptyUnmaskPingData_10; }
	inline void set_EmptyUnmaskPingData_10(ByteU5BU5D_t4116647657* value)
	{
		___EmptyUnmaskPingData_10 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyUnmaskPingData_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBSOCKETFRAME_T3926438742_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (U3CToStringU3Ec__AnonStorey2_t1832203497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[2] = 
{
	U3CToStringU3Ec__AnonStorey2_t1832203497::get_offset_of_buff_0(),
	U3CToStringU3Ec__AnonStorey2_t1832203497::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (HttpListenerWebSocketContext_t3770402993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[2] = 
{
	HttpListenerWebSocketContext_t3770402993::get_offset_of__context_0(),
	HttpListenerWebSocketContext_t3770402993::get_offset_of__websocket_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (U3CU3Ec__Iterator0_t2500134981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2302[8] = 
{
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U3CprotocolsU3E__0_0(),
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U24locvar0_1(),
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U24locvar1_2(),
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U3CprotocolU3E__1_3(),
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U24this_4(),
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U24current_5(),
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U24disposing_6(),
	U3CU3Ec__Iterator0_t2500134981::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (TcpListenerWebSocketContext_t2376318492), -1, sizeof(TcpListenerWebSocketContext_t2376318492_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2303[11] = 
{
	TcpListenerWebSocketContext_t2376318492::get_offset_of__client_0(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__cookies_1(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__queryString_2(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__request_3(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__secure_4(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__stream_5(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__uri_6(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__user_7(),
	TcpListenerWebSocketContext_t2376318492::get_offset_of__websocket_8(),
	TcpListenerWebSocketContext_t2376318492_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_9(),
	TcpListenerWebSocketContext_t2376318492_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (U3CU3Ec__Iterator0_t3615578217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[8] = 
{
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U3CprotocolsU3E__0_0(),
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U24locvar0_1(),
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U24locvar1_2(),
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U3CprotocolU3E__1_3(),
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U24this_4(),
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U24current_5(),
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U24disposing_6(),
	U3CU3Ec__Iterator0_t3615578217::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (WebSocketContext_t619421455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (Opcode_t2755924248)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2306[7] = 
{
	Opcode_t2755924248::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (PayloadData_t688932160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[4] = 
{
	PayloadData_t688932160::get_offset_of__applicationData_0(),
	PayloadData_t688932160::get_offset_of__extensionData_1(),
	PayloadData_t688932160::get_offset_of__masked_2(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (U3CGetEnumeratorU3Ec__Iterator0_t268869223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[10] = 
{
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24locvar0_0(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24locvar1_1(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U3CbU3E__1_2(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24locvar2_3(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24locvar3_4(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U3CbU3E__2_5(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24this_6(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24current_7(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24disposing_8(),
	U3CGetEnumeratorU3Ec__Iterator0_t268869223::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (Rsv_t2704667083)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2309[3] = 
{
	Rsv_t2704667083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (WebSocket_t62038747), -1, sizeof(WebSocket_t62038747_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2310[37] = 
{
	0,
	0,
	WebSocket_t62038747::get_offset_of__authChallenge_2(),
	WebSocket_t62038747::get_offset_of__base64Key_3(),
	WebSocket_t62038747::get_offset_of__certValidationCallback_4(),
	WebSocket_t62038747::get_offset_of__client_5(),
	WebSocket_t62038747::get_offset_of__closeContext_6(),
	WebSocket_t62038747::get_offset_of__compression_7(),
	WebSocket_t62038747::get_offset_of__context_8(),
	WebSocket_t62038747::get_offset_of__cookies_9(),
	WebSocket_t62038747::get_offset_of__credentials_10(),
	WebSocket_t62038747::get_offset_of__extensions_11(),
	WebSocket_t62038747::get_offset_of__exitReceiving_12(),
	WebSocket_t62038747::get_offset_of__forConn_13(),
	WebSocket_t62038747::get_offset_of__forEvent_14(),
	WebSocket_t62038747::get_offset_of__forMessageEventQueue_15(),
	WebSocket_t62038747::get_offset_of__forSend_16(),
	WebSocket_t62038747::get_offset_of__handshakeRequestChecker_17(),
	WebSocket_t62038747::get_offset_of__logger_18(),
	WebSocket_t62038747::get_offset_of__messageEventQueue_19(),
	WebSocket_t62038747::get_offset_of__nonceCount_20(),
	WebSocket_t62038747::get_offset_of__origin_21(),
	WebSocket_t62038747::get_offset_of__preAuth_22(),
	WebSocket_t62038747::get_offset_of__protocol_23(),
	WebSocket_t62038747::get_offset_of__protocols_24(),
	WebSocket_t62038747::get_offset_of__readyState_25(),
	WebSocket_t62038747::get_offset_of__receivePong_26(),
	WebSocket_t62038747::get_offset_of__secure_27(),
	WebSocket_t62038747::get_offset_of__stream_28(),
	WebSocket_t62038747::get_offset_of__tcpClient_29(),
	WebSocket_t62038747::get_offset_of__uri_30(),
	0,
	WebSocket_t62038747::get_offset_of_OnClose_32(),
	WebSocket_t62038747::get_offset_of_OnError_33(),
	WebSocket_t62038747::get_offset_of_OnMessage_34(),
	WebSocket_t62038747::get_offset_of_OnOpen_35(),
	WebSocket_t62038747_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (U3CU3Ec__Iterator0_t2887482940), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[8] = 
{
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U24locvar0_0(),
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U24locvar1_1(),
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U3CcookieU3E__1_2(),
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U24locvar2_3(),
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U24this_4(),
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U24current_5(),
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U24disposing_6(),
	U3CU3Ec__Iterator0_t2887482940::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (U3CcloseAsyncU3Ec__AnonStorey1_t2051387318), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[1] = 
{
	U3CcloseAsyncU3Ec__AnonStorey1_t2051387318::get_offset_of_closer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (U3CsendAsyncU3Ec__AnonStorey2_t3015208571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[3] = 
{
	U3CsendAsyncU3Ec__AnonStorey2_t3015208571::get_offset_of_sender_0(),
	U3CsendAsyncU3Ec__AnonStorey2_t3015208571::get_offset_of_completed_1(),
	U3CsendAsyncU3Ec__AnonStorey2_t3015208571::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (U3CsendAsyncU3Ec__AnonStorey3_t3015274107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2314[3] = 
{
	U3CsendAsyncU3Ec__AnonStorey3_t3015274107::get_offset_of_sender_0(),
	U3CsendAsyncU3Ec__AnonStorey3_t3015274107::get_offset_of_completed_1(),
	U3CsendAsyncU3Ec__AnonStorey3_t3015274107::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (U3CstartReceivingU3Ec__AnonStorey4_t3314047616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2315[2] = 
{
	U3CstartReceivingU3Ec__AnonStorey4_t3314047616::get_offset_of_receive_0(),
	U3CstartReceivingU3Ec__AnonStorey4_t3314047616::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (U3CvalidateSecWebSocketProtocolHeaderU3Ec__AnonStorey5_t4180329243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[1] = 
{
	U3CvalidateSecWebSocketProtocolHeaderU3Ec__AnonStorey5_t4180329243::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (U3CConnectAsyncU3Ec__AnonStorey6_t2980504462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[2] = 
{
	U3CConnectAsyncU3Ec__AnonStorey6_t2980504462::get_offset_of_connector_0(),
	U3CConnectAsyncU3Ec__AnonStorey6_t2980504462::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (U3CSendAsyncU3Ec__AnonStorey7_t2987885642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2318[4] = 
{
	U3CSendAsyncU3Ec__AnonStorey7_t2987885642::get_offset_of_msg_0(),
	U3CSendAsyncU3Ec__AnonStorey7_t2987885642::get_offset_of_length_1(),
	U3CSendAsyncU3Ec__AnonStorey7_t2987885642::get_offset_of_completed_2(),
	U3CSendAsyncU3Ec__AnonStorey7_t2987885642::get_offset_of_U24this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (WebSocketException_t618477455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2319[1] = 
{
	WebSocketException_t618477455::get_offset_of_U3CCodeU3Ek__BackingField_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (WebSocketFrame_t3926438742), -1, sizeof(WebSocketFrame_t3926438742_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2320[11] = 
{
	WebSocketFrame_t3926438742::get_offset_of__extPayloadLength_0(),
	WebSocketFrame_t3926438742::get_offset_of__fin_1(),
	WebSocketFrame_t3926438742::get_offset_of__mask_2(),
	WebSocketFrame_t3926438742::get_offset_of__maskingKey_3(),
	WebSocketFrame_t3926438742::get_offset_of__opcode_4(),
	WebSocketFrame_t3926438742::get_offset_of__payloadData_5(),
	WebSocketFrame_t3926438742::get_offset_of__payloadLength_6(),
	WebSocketFrame_t3926438742::get_offset_of__rsv1_7(),
	WebSocketFrame_t3926438742::get_offset_of__rsv2_8(),
	WebSocketFrame_t3926438742::get_offset_of__rsv3_9(),
	WebSocketFrame_t3926438742_StaticFields::get_offset_of_EmptyUnmaskPingData_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (U3CdumpU3Ec__AnonStorey1_t3297801281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2321[2] = 
{
	U3CdumpU3Ec__AnonStorey1_t3297801281::get_offset_of_output_0(),
	U3CdumpU3Ec__AnonStorey1_t3297801281::get_offset_of_lineFmt_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (U3CdumpU3Ec__AnonStorey2_t2749028009), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2322[2] = 
{
	U3CdumpU3Ec__AnonStorey2_t2749028009::get_offset_of_lineCnt_0(),
	U3CdumpU3Ec__AnonStorey2_t2749028009::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (U3CGetEnumeratorU3Ec__Iterator0_t3460275121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[7] = 
{
	U3CGetEnumeratorU3Ec__Iterator0_t3460275121::get_offset_of_U24locvar0_0(),
	U3CGetEnumeratorU3Ec__Iterator0_t3460275121::get_offset_of_U24locvar1_1(),
	U3CGetEnumeratorU3Ec__Iterator0_t3460275121::get_offset_of_U3CbU3E__1_2(),
	U3CGetEnumeratorU3Ec__Iterator0_t3460275121::get_offset_of_U24this_3(),
	U3CGetEnumeratorU3Ec__Iterator0_t3460275121::get_offset_of_U24current_4(),
	U3CGetEnumeratorU3Ec__Iterator0_t3460275121::get_offset_of_U24disposing_5(),
	U3CGetEnumeratorU3Ec__Iterator0_t3460275121::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (U3CParseAsyncU3Ec__AnonStorey3_t2286505172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2324[3] = 
{
	U3CParseAsyncU3Ec__AnonStorey3_t2286505172::get_offset_of_stream_0(),
	U3CParseAsyncU3Ec__AnonStorey3_t2286505172::get_offset_of_unmask_1(),
	U3CParseAsyncU3Ec__AnonStorey3_t2286505172::get_offset_of_completed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (WebSocketState_t45461673)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2325[5] = 
{
	WebSocketState_t45461673::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (WebSocketStream_t833095972), -1, sizeof(WebSocketStream_t833095972_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2326[7] = 
{
	0,
	WebSocketStream_t833095972::get_offset_of__forWrite_1(),
	WebSocketStream_t833095972::get_offset_of__innerStream_2(),
	WebSocketStream_t833095972::get_offset_of__secure_3(),
	WebSocketStream_t833095972_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_4(),
	WebSocketStream_t833095972_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_5(),
	WebSocketStream_t833095972_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (U3CreadHandshakeHeadersU3Ec__AnonStorey0_t3427667854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2327[2] = 
{
	U3CreadHandshakeHeadersU3Ec__AnonStorey0_t3427667854::get_offset_of_buff_0(),
	U3CreadHandshakeHeadersU3Ec__AnonStorey0_t3427667854::get_offset_of_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2328[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255366), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2329[3] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_0(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DEB8077FF0D4F4A927EB9224048538295DEF1227A_1(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D6532575F81314AADD4BCFD96F1517D5BBFF2B60B_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (U24ArrayTypeU3D8_t3242499063)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D8_t3242499063 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (U24ArrayTypeU3D16_t3253128244)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D16_t3253128244 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
