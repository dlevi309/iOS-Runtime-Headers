/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned retryAfterMillis : 1;
	unsigned allowed : 1;
} SCD_Struct_CP1;

typedef struct {
	unsigned completed : 1;
} SCD_Struct_CP2;

typedef struct {
	unsigned version : 1;
	unsigned reason : 1;
	unsigned defaultHEVC : 1;
} SCD_Struct_CP3;

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
} SCD_Struct_CP4;

typedef union {
	SCD_Struct_CP4 status;
	unsigned packedStatus;
} SCD_Union_CP5;

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
} SCD_Struct_CP8;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CP9;

