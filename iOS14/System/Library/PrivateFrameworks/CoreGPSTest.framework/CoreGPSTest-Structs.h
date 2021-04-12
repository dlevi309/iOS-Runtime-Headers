/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreGPSTest.framework/CoreGPSTest
*/

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct {
	unsigned char __size_;
} SCD_Struct_Gp1;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _short {
	char __data_[23];
	SCD_Struct_Gp1 ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct Options {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > uartPortName;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > gnssDeviceLibraryName;
	unsigned logLevel;
	unsigned secondaryLogLevel;
	unsigned long long logMask;
	BOOL clearNvStore;
	BOOL printNmeaMessage;
	BOOL enableB13LteFilter;
	BOOL hostPassThroughMode;
	BOOL doCw;
	BOOL doModulated;
	BOOL doPowerMode;
	BOOL doHostWakeGpio;
	BOOL doTimeMarkGpio;
	BOOL doCommPing;
	int periodicDurationSec;
	int cwDurationSec;
	int cwBandwidthHz;
	int integrationTimeMilliseconds;
	unsigned char band;
	Subband subband;
	int prn;
	i) fcn;
	int modulatedDurationSec;
	int powerMode;
	int hostWakeGpioTimeoutMs;
	int timeMarkGpioTimeoutMs;
	int commPingTimeoutMs;
	int commLoopbackNumBytes;
	int uartBaudRate;
	BOOL dataSnifferEnabled;
	int forceHardwareType;
} Options;

typedef struct {
	unsigned field1;
	unsigned field2;
	int field3;
} SCD_Struct_Gp8;

