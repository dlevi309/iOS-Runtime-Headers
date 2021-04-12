/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct {
	unsigned estimatedChangeCount : 1;
} SCD_Struct_SY5;

typedef struct {
	unsigned buffersSessions : 1;
	unsigned inSession : 1;
	unsigned suspended : 1;
} SCD_Struct_SY6;

typedef struct __CFString* CFStringRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned fullSessionTimeout : 1;
	unsigned perMessageTimeout : 1;
	unsigned canRestart : 1;
	unsigned canRollback : 1;
	unsigned canceled : 1;
	unsigned isReset : 1;
} SCD_Struct_SY9;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_SY10;

