/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFString* CFStringRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_IM11;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

