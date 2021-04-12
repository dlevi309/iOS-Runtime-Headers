/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	int field1;
	long long field2;
	long long field3;
	char* field4;
	int field5;
	long long field6;
	long long field7;
	int field8;
	_ field9;
	opaque_pthread_mutex_t field10;
	_ field11;
	t field12;
	e field13;
	long field14;
	long field15;
	double field16;
	int field17;
	const  field18;
} SCD_Struct_PF3;

typedef struct mach_timebase_info {
	unsigned numer;
	unsigned denom;
} mach_timebase_info;

typedef struct {
	char* field1;
	char* field2;
	char* field3;
	char* field4;
	void field5;
} SCD_Struct_PF5;

typedef union {
	unsigned long long unsignedPayload;
	long long signedPayload;
} SCD_Union_PF6;

typedef struct PFChecksumBytes {
	unsigned char data[16];
} PFChecksumBytes;

