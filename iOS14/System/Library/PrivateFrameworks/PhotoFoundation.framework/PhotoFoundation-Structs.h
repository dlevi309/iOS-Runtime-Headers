/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct pc_session* pc_sessionRef;

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
} SCD_Struct_PF4;

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

