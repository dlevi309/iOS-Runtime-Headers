/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct __CFArray* CFArrayRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct IMAssociatedMessageGeometryDescriptor {
	unsigned long long layoutIntent;
	unsigned long long associatedLayoutIntent;
	float parentPreviewWidth;
	float xScalar;
	float yScalar;
	float scale;
	float rotation;
} IMAssociatedMessageGeometryDescriptor;

typedef struct __CFPhoneNumber* CFPhoneNumberRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_IM9;

typedef struct __DDScanner* DDScannerRef;

typedef struct _IMDChatRecordStruct* IMDChatRecordStructRef;

