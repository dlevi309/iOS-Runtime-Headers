/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/

typedef struct {
	[3 columns];
} SCD_Struct_St0;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
	CGSize field4;
	CGSize field5;
	float field6;
	int field7;
} SCD_Struct_St3;

typedef struct {
	char field1;
	char field2;
	char field3;
	char field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9[8];
	float field10[8];
	float field11[8];
	float field12[8];
} SCD_Struct_Di4;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_Di5;

typedef struct {
	SCD_Struct_St0 field1;
	SCD_Struct_Di5 field2;
	SCD_Struct_Di5 field3;
	float field4;
	float field5;
	unsigned field6;
	unsigned field7;
	float field8;
	unsigned field9[15];
	unsigned field10;
	unsigned field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17[15];
	int field18;
} SCD_Struct_Di6;

typedef struct {
	short searchRadius;
	short searchDiameter;
	unsigned short searchSpaceSize;
	short templateRadius;
	short minCornerResponseThreshold;
	short unusedPadding;
	float minNCCThreshold;
	float scaler;
} SCD_Struct_Re7;

typedef struct {
	unsigned w;
	unsigned h;
} SCD_Struct_Re8;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_Re9;

typedef struct {
	SCD_Struct_Re9 threadgroupsPerGrid;
	SCD_Struct_Re9 threadsPerThreadgroup;
} SCD_Struct_Re10;

typedef struct {
	SCD_Struct_Re10 level[8];
} SCD_Struct_Re11;

typedef struct {
	unsigned field1[256];
} SCD_Struct_Re12;

typedef struct {
	int field1;
	SCD_Struct_Re12 field2;
} SCD_Struct_Re13;

typedef struct {
	float field1[9];
	unsigned field2;
	float field3;
} SCD_Struct_Re14;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
} SCD_Struct_Re15;

typedef struct {
	CGSize real_res;
	int kernel_filter;
	 scaling_factor;
	 resampling_factor;
	int idx_ref;
	BOOL use_antialiasing;
} SCD_Struct_Py16;

typedef struct {
	CGSize field1;
	int field2;
	int field3;
	BOOL field4;
} SCD_Struct_Py17;

typedef struct AdaptiveCorrectionConfig {
	double epErrorLimitWidePix_FirstPass;
	double epErrorLimitWidePix_SecondPass;
	double rangePFL_T;
	double rangePFL_W;
	double rangeOCxT;
	double rangeOCxW;
	double rangeOCyW;
	double intermediateMacroDistMM;
	double extremeMacroDistMM;
	int minPointsForAdjustment;
	double errorVal_GreaterThanInf;
	double errorVal_LessThanExtremeMacro;
	double errorVal_BetweenIntermediate_ExtremeMacro;
	BOOL runAnalyticalPreconditioning;
	double spgEpsilon;
} AdaptiveCorrectionConfig;

typedef struct {
	float field1[8];
	float field2[8];
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8[9];
	float field9[9];
	BOOL field10;
	BOOL field11;
	float field12;
} SCD_Struct_GD19;

typedef struct AdaptiveCorrection* AdaptiveCorrectionRef;

typedef struct CalModel {
	double focalLengthTelePix;
	double focalLengthWidePix;
	double opticalCenterTeleX;
	double opticalCenterTeleY;
	double opticalCenterWideX;
	double opticalCenterWideY;
	double extrinRotTeleToWide[12];
} CalModel;

typedef struct {
	float distortPolynomCoefficients[8];
	float undistortPolynomCoefficients[8];
	float centerX;
	float centerY;
	float originalImageWidth;
	float originalImageHeight;
	float pixelSize;
	float homography[9];
	float inverseHomography[9];
	BOOL forceIdentityHomography;
	BOOL convertToRGBA;
	float disparityScalingFactor;
} SCD_Struct_Fi22;

typedef struct DistortionModel {
	double pixelSizeMM;
	double focalLengthPix;
	double opticalCenterX;
	double opticalCenterY;
	double polyBase[8];
	double polyDynamic[8];
} DistortionModel;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	unsigned long long inputImageWidth;
	unsigned long long inputImageHeight;
	unsigned long long outputDisparityWidth;
	unsigned long long outputDisparityHeight;
	float maxPaddingFactor;
	unsigned keypointGridWidth;
	unsigned keypointGridHeight;
} SCD_Struct_Fi25;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	[4 columns];
} SCD_Struct_Fi27;

