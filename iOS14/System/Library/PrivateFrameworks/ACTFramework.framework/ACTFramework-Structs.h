/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
*/

typedef struct Projections_meanStdTable {
	float sumTable;
	float sumSqTable;
} Projections_meanStdTable;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct FastRegistration_Signatures {
	float piRow;
	unsigned long long nPiRow;
	Projections_meanStdTable piRowTable;
	float piCol;
	unsigned long long nPiCol;
	Projections_meanStdTable piColTable;
} FastRegistration_Signatures;

typedef struct _sbp_Slowmo_Projection {
	FastRegistration_Signatures signature;
	3264f deltaRow;
	3264f deltaCol;
	unsigned long long nDeltaRow;
	unsigned long long nDeltaCol;
	unsigned char valid;
	double timestamp;
	void allocatedBuffer;
	vImage_Buffer allocatedvImage;
} sbp_Slowmo_Projection;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct __IOSurface* IOSurfaceRef;

