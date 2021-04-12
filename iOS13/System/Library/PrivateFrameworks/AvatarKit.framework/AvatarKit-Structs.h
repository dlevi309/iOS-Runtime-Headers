/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

typedef struct {
	double field1;
	BOOL field2;
	float field3[51];
	float field4[51];
	float field5[1];
	float field6[1];
} SCD_Struct_AV0;

typedef struct {
	double timestamp;
	 translation;
	 orientation;
	BOOL cameraSpace;
	float blendShapeWeights_smooth[51];
	float blendShapeWeights_raw[51];
	float parameters_smooth[1];
	float parameters_raw[1];
} SCD_Struct_AV1;

typedef struct {
	[4 columns];
} SCD_Struct_AV2;

typedef struct {
	double refTimestamp;
	double arDelegateTimestamp;
} SCD_Struct_AV3;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	[3 columns];
} SCD_Struct_AV5;

typedef struct {
	BOOL mirroringEnabled;
	SCD_Struct_AV5 transform;
} SCD_Struct_AV6;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	BOOL field1;
	SCD_Struct_AV5 field2;
} SCD_Struct_AV8;

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct SCNVector3 {
	float x;
	float y;
	float z;
} SCNVector3;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_AV12;

typedef struct {
	id field1;
	id field2;
	long long field3;
} SCD_Struct_AV13;

typedef struct {
	double totalLatency;
	double arKitLatency;
	double updateSyncLatency;
	double metalLatency;
	double timeBetweenARFrame;
	unsigned fps;
	double audioTime;
	unsigned droppedFrame;
	BOOL doubleBuffer;
	unsigned onlineShaderCompilationCount;
} SCD_Struct_AV14;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	os_unfair_lock_s lock;
	/*function pointer*/void* head;
	int current;
	int capacity;
	BOOL reached_max_capacity;
} SCD_Struct_AV17;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV18;

typedef struct {
	 vector;
} SCD_Struct_AV19;

