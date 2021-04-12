/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/

typedef struct {
	short searchRadius;
	short searchDiameter;
	unsigned short searchSpaceSize;
	short templateRadius;
	short minCornerResponseThreshold;
	short unusedPadding;
	float minNCCThreshold;
	float scaler;
} SCD_Struct_Re0;

typedef struct {
	unsigned w;
	unsigned h;
} SCD_Struct_Re1;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_Re2;

typedef struct {
	SCD_Struct_Re2 threadgroupsPerGrid;
	SCD_Struct_Re2 threadsPerThreadgroup;
} SCD_Struct_Re3;

typedef struct {
	SCD_Struct_Re3 level[8];
} SCD_Struct_Re4;

typedef struct {
	unsigned field1[256];
} SCD_Struct_Re5;

typedef struct {
	int field1;
	SCD_Struct_Re5 field2;
} SCD_Struct_Re6;

typedef struct {
	float field1[9];
	unsigned field2;
	float field3;
} SCD_Struct_Re7;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
} SCD_Struct_Re8;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

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
	CGSize real_res;
	int kernel_filter;
	 scaling_factor;
	 resampling_factor;
	int idx_ref;
	BOOL use_antialiasing;
} SCD_Struct_Py12;

typedef struct {
	CGSize field1;
	int field2;
	int field3;
	BOOL field4;
} SCD_Struct_Py13;

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
} SCD_Struct_Di14;

typedef struct {
	[3 columns];
} SCD_Struct_St15;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
	CGSize field4;
	CGSize field5;
	float field6;
	int field7;
} SCD_Struct_St16;

typedef struct AdaptiveCorrection* AdaptiveCorrectionRef;

typedef struct CalModel {
	double focalLengthPix[2];
	double opticalCenterX[2];
	double opticalCenterY[2];
	double extrinRotRefefenceToAuxiliary[12];
} CalModel;

typedef struct {
	int width;
	int height;
} SCD_Struct_Ca19;

typedef struct DistortionModel {
	double pixelSizeMM;
	double focalLengthPix;
	double opticalCenterX;
	double opticalCenterY;
	8d polyBase;
	8d polyDynamic;
} DistortionModel;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

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
} SCD_Struct_GD22;

typedef struct {
	unsigned sensorBlack;
	unsigned sensorWhite;
	unsigned outputOffsetY;
	unsigned outputSizeY;
	float sensorAGC;
	float noise_e_1x8x[2];
	float sensorGain;
	float expIspGain;
	float expAwbRgb[3];
	unsigned scaleRawTo16bits;
	float sensorGainCeilingToFullRange;
	unsigned rawSensorWidth;
	unsigned rawSensorHeight;
	 lscSampingOffset;
	 lscSampingRatio;
} SCD_Struct_De23;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	float field11[0];
} SCD_Struct_De24;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_De24) field4;
} SCD_Struct_De25;

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
} SCD_Struct_Fi26;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	unsigned long long inputImageWidth;
	unsigned long long inputImageHeight;
	unsigned long long outputDisparityWidth;
	unsigned long long outputDisparityHeight;
	float maxPaddingFactor;
	unsigned keypointGridWidth;
	unsigned keypointGridHeight;
} SCD_Struct_Fi28;

typedef struct {
	[4 columns];
} SCD_Struct_Fi29;

