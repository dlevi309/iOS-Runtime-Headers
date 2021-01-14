/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct hmf_unfair_data_lock_s {
	os_unfair_lock_s lock;
} hmf_unfair_data_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct HMFRate {
	unsigned long long value;
	double period;
} HMFRate;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_HM6;

typedef struct _CFHTTPServer* CFHTTPServerRef;

typedef struct _CFHTTPServerConnection* CFHTTPServerConnectionRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct _CFHTTPServerRequest* CFHTTPServerRequestRef;

typedef struct _CFHTTPServerResponse* CFHTTPServerResponseRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_HM14;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

