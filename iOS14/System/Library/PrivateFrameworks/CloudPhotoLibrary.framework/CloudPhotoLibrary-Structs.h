/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned retryAfterMillis : 1;
	unsigned allowed : 1;
} SCD_Struct_CP1;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct network_usage_policy_client_s* network_usage_policy_client_sRef;

typedef struct {
	unsigned completed : 1;
} SCD_Struct_CP4;

typedef struct {
	unsigned version : 1;
	unsigned reason : 1;
	unsigned defaultHEVC : 1;
} SCD_Struct_CP5;

typedef struct {
	unsigned unknown : 1;
	unsigned quarantined : 1;
	unsigned resetting : 1;
	unsigned uploaded : 1;
	unsigned waitingForUpload : 1;
	unsigned uploading : 1;
	unsigned waitingForUpdate : 1;
	unsigned updating : 1;
	unsigned confirmed : 1;
} SCD_Struct_CP6;

typedef union {
	SCD_Struct_CP6 status;
	unsigned packedStatus;
} SCD_Union_CP7;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	unsigned centerX : 1;
	unsigned centerY : 1;
	unsigned size : 1;
	unsigned faceState : 1;
	unsigned nameSource : 1;
} SCD_Struct_CP10;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CP11;

