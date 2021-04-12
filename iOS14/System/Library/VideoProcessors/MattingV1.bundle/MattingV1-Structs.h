/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MattingV1.bundle/MattingV1
*/

typedef struct {
	unsigned internalWidth;
	unsigned internalHeight;
	unsigned radius;
	unsigned subsampling;
	float epsilon;
	unsigned iterations;
	BOOL useDepthFilter;
	float fgThresholdValue;
	float bgThresholdValue;
	unsigned erosionKernelSize;
	unsigned resolutionMode;
} SCD_Struct_Ma0;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	float field6;
	BOOL field7;
} SCD_Struct_Ma1;

typedef struct {
	unsigned internalWidth;
	unsigned internalHeight;
	unsigned spatialRadius;
	unsigned temporalRadius;
	unsigned arrayLength;
	float epsilon;
	BOOL disableForSameResolution;
} SCD_Struct_Ma2;

typedef struct {
	float left;
	float top;
	float width;
	float height;
	float zeroShiftPercentile;
} SCD_Struct_Fo3;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	unsigned field11;
} SCD_Struct_Fo4;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_Ma6;

typedef struct {
	unsigned internalWidth;
	unsigned internalHeight;
	float farCutOffBegin;
	float farCutOffEnd;
	unsigned dilationRadius;
	float dilationPower;
	BOOL enabled;
	float zeroShiftPercentile;
} SCD_Struct_Ma7;

typedef struct {
	float zeroShiftPercentile;
	float preprocessingAlphaThreshold;
	float preprocessingAmplitude;
	float preprocessingExponent;
	float preprocessingGamma;
	float preprocessingMinFactor;
	float preprocessingMaxFactor;
	float radius;
	float subsampling;
	float epsilon;
	unsigned iterations;
} SCD_Struct_Fi8;

typedef struct {
	unsigned inputImageWidth;
	unsigned inputImageHeight;
	unsigned inputDisparityWidth;
	unsigned inputDisparityHeight;
	unsigned segmentationWidth;
	unsigned segmentationHeight;
	unsigned enabledOutputs;
	int tuningConfiguration;
} SCD_Struct_Fi9;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

