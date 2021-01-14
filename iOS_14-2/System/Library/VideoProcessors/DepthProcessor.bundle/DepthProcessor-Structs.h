/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	float field1;
} SCD_Struct_SL1;

typedef struct BGHashMapContext* BGHashMapContextRef;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	unsigned long long field3;
	unsigned char field4[8];
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
} SCD_Struct_Bi3;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_Fi5;

typedef struct {
	[4 columns];
} SCD_Struct_Fi6;

typedef struct {
	float field1;
	float field2;
	float field3;
	int field4[640];
	int field5[640];
	int field6[480];
	int field7[480];
} SCD_Struct_Fi7;

typedef struct {
	[3 columns];
} SCD_Struct_Fi8;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_Bi9;

typedef struct {
	SCD_Struct_Bi9 dispatchThreadgroups;
	SCD_Struct_Bi9 threadsPerThreadgroup;
} SCD_Struct_Bi10;

typedef struct {
	float lambda;
	unsigned N;
	unsigned short dims;
	float sigma_s;
	float sigma_r_luma;
} SCD_Struct_Bi11;

typedef struct BodyProbabilityParameters {
	unsigned long long width;
	unsigned long long height;
	unsigned long long segmentation_width;
	unsigned long long segmentation_height;
	float confidence_threshold;
	float probability_falloff_sigma;
	float max_probability;
	int min_required_faces_for_segmentation;
} BodyProbabilityParameters;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	float confidenceUpdateValue;
	float minQuality;
	float confidenceMinVal;
	float maskShrinkRatio;
	float minRatioFaceFill;
} SCD_Struct_Fi16;

typedef struct {
	unsigned long long width;
	unsigned long long height;
} SCD_Struct_Fi17;

typedef struct {
	unsigned similarityMetric;
	unsigned numHistogramBinsPerChannel;
	unsigned numImageChannels;
} SCD_Struct_Fi18;

typedef struct {
	float maxLocalWeightThres;
	float maxBodyMaskThreshold;
	unsigned maxIterations;
	float sigma;
} SCD_Struct_Fi19;

typedef struct {
	unsigned doBrightnessCorrection;
	float h;
	float k;
	float thres;
} SCD_Struct_Fi20;

typedef struct {
	float colorSigma;
	float histogramSigma;
	unsigned useBodyMaskSigmaModulation;
} SCD_Struct_Fi21;

typedef struct {
	float sigmaColor;
	float sigmaDepth;
	float sigmaPixelColorDiff;
	float minConfVal;
	float minBaseConfVal;
} SCD_Struct_Fi22;

typedef struct {
	float maxDistance;
	float furthestDisparity;
	float confidence;
	int firstCoordinateWithPotentialDepthDataYStart[640];
	int firstCoordinateWithPotentialDepthDataYEnd[640];
	int firstCoordinateWithPotentialDepthDataXStart[480];
	int firstCoordinateWithPotentialDepthDataXEnd[480];
} SCD_Struct_Fi23;

typedef struct {
	SCD_Struct_Fi20 brightnessCorrectionParams;
	SCD_Struct_Fi21 similarityParams;
	float initialLocalWeight;
	float initialGlobalWeight;
	float maxLocalWeightThres;
	float minDepthValidThreshold;
	float fractionValidThreshold;
	float lambda;
	float minDataTermWeight;
	float bodyMaskThresholdCenter;
	float bodyMaskThresholdCand;
} SCD_Struct_Fi24;

typedef struct {
	SCD_Struct_Fi18 common;
	SCD_Struct_Fi19 iterMask;
	SCD_Struct_Fi24 holeFill;
	SCD_Struct_Fi22 confidence;
} SCD_Struct_Fi25;

typedef struct {
	SCD_Struct_Fi16 faceLandmarkProcessingParameters;
	BodyProbabilityParameters bodyProbabilityParameters;
	SCD_Struct_Fi17 distanceTransformParameters;
	SCD_Struct_Fi25 superPixelHoleFillParameters;
	int slicSuperPixelsSize;
	int slicMaxIters;
	float slicSpatialBias;
	SCD_Struct_Fi23 setFarDistance;
	float confidenceSeedValue;
	float confidenceFalloffMaxDist;
	float confidenceFalloffSigma;
	int bilateralSolverSigmaSpace;
	int bilateralSolverSigmaLumaRange;
	int bilateralSolverSigmaChromaRange;
	int bilateralSolverMaxHashTableSize;
	float bilateralSolverLambda;
	int bilateralSolverPCGMaxIters;
	float disparityQualityThreshold;
} SCD_Struct_Fi26;

typedef struct {
	unsigned transpose : 1;
	unsigned triangle : 1;
	unsigned kind : 2;
	unsigned _reserved : 11;
	unsigned _allocatedBySparse : 1;
} SCD_Struct_Su27;

typedef struct {
	int rowCount;
	int columnCount;
	long long columnStarts;
	int rowIndices;
	SCD_Struct_Su27 attributes;
	unsigned char blockSize;
} SCD_Struct_Su28;

typedef struct {
	SCD_Struct_Su28 structure;
	float data;
} SCD_Struct_Su29;

typedef struct {
	int count;
	float data;
} SCD_Struct_Su30;

typedef struct {
	SCD_Struct_Fi18 field1;
	SCD_Struct_Fi19 field2;
	SCD_Struct_Fi22 field3;
	SCD_Struct_Fi24 field4;
} SCD_Struct_Su31;

