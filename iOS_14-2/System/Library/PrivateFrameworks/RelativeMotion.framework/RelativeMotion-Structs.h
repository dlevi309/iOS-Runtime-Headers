/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/

typedef struct {
	/*function pointer*/void* ;
	float data[16];
	Q) abstime;
} SCD_Struct_RM0;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_RM2;

typedef struct {
	double x;
	double y;
	double z;
	double w;
} SCD_Struct_RM3;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	SCD_Struct_RM3 quaternion;
	double timestamp;
	long long error;
	double consumedAuxTimestamp;
	double receivedAuxTimestamp;
	double machAbsTimestamp;
} SCD_Struct_RM5;

