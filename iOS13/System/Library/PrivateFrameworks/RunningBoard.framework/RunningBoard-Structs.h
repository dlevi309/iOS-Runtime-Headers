/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __SecTask* SecTaskRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_RB3;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_RB4;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_RB6;

typedef struct _launch_data* launch_dataRef;

