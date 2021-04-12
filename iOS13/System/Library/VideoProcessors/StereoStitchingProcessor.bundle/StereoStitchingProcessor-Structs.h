/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/

typedef struct {
	float cropMotionPxSize;
	float maxMotionPxSize;
	float maxTransitionDistance;
	float transitionPower;
} SCD_Struct_Li0;

typedef struct {
	SCD_Struct_Li0 adaptive_stitching;
} SCD_Struct_Li1;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	unsigned long long x;
	unsigned long long y;
	unsigned long long z;
} SCD_Struct_Fi3;

typedef struct {
	SCD_Struct_Fi3 origin;
	SCD_Struct_Fi3 size;
} SCD_Struct_Fi4;

typedef struct {
	 resolution;
	float delta;
	float alpha;
	float sigmoidA;
	float sigmoidB;
	float minConfidence;
	unsigned samplingRate;
	unsigned maxNonZeroElements;
	unsigned maxNonZeroPerColumn;
	unsigned ataExpansionGroups;
	unsigned maxATAExpansionElements;
	unsigned maxSparseSolverMemSize;
	BOOL dataConfidencePenalty;
	BOOL varianceSmoothnessPenalty;
} SCD_Struct_Fi5;

typedef struct ColorMatchingDescriptor {
	unsigned extraBorderWidth;
	unsigned extraBorderHeight;
	unsigned narrowValidWidth;
	unsigned narrowValidHeight;
	unsigned gridRowsCount;
	unsigned gridColsCount;
} ColorMatchingDescriptor;

typedef struct {
	unsigned long long regPyrShiftmap;
	unsigned long long regPyrConfidenceMap;
	unsigned long long regPyrNarrowTop;
	unsigned long long jbfConfidenceMap;
	unsigned long long extendedShiftmap;
	unsigned long long stitchingConfidenceMap;
	unsigned long long smoothFlowShiftmapX;
	unsigned long long smoothFlowShiftmapY;
	unsigned long long warpedNarrowLumaTexture;
	unsigned long long warpedNarrowChromaTexture;
	unsigned long long horizonEdgesList;
	unsigned long long bendingEdgesList;
	unsigned long long bendMaxVolume;
	unsigned long long flowBasedGatingFlagAndScore;
	unsigned long long isPlanarScene;
	unsigned long long subProcessor;
} SCD_Struct_Fi7;

typedef struct {
	[3 columns];
} SCD_Struct_Fi8;

typedef struct {
	SCD_Struct_Fi8 homography;
	SCD_Struct_Fi4 narrowRoi;
	SCD_Struct_Fi4 wideRoi;
} SCD_Struct_Fi9;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	unsigned inputImageWidth;
	unsigned inputImageHeight;
	unsigned outputImageWidth;
	unsigned outputImageHeight;
} SCD_Struct_Fi11;

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

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_Fi15;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	float field8;
	float field9;
	unsigned field10;
	BOOL field11;
} SCD_Struct_Re16;

typedef struct {
	float field1[9];
} SCD_Struct_Re17;

typedef struct {
	unsigned char field1[256];
} SCD_Struct_Re18;

typedef struct {
	unsigned field1[256];
} SCD_Struct_Re19;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_Re20;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_Re21;

typedef struct {
	SCD_Struct_Re21 field1;
	SCD_Struct_Re21 field2;
} SCD_Struct_Re22;

typedef struct {
	 c0;
	 c1;
} SCD_Struct_Py23;

typedef struct {
	unsigned field1;
	float field2;
} SCD_Struct_Py24;

typedef struct {
	unsigned field1;
	float field2;
	float field3;
	int field4;
} SCD_Struct_Py25;

typedef struct {
	int field1;
	float field2;
	float field3[8];
} SCD_Struct_Py26;

typedef struct {
	SCD_Struct_Py24 field1;
	SCD_Struct_Py25 field2;
	SCD_Struct_Py26 field3;
} SCD_Struct_Py27;

typedef struct {
	SCD_Struct_Fi4 field1;
	SCD_Struct_Fi4 field2;
	SCD_Struct_Py27 field3;
} SCD_Struct_Py28;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
} SCD_Struct_Py29;

typedef struct {
	float field1[7];
} SCD_Struct_Py30;

typedef struct DisparityConversionParams {
	BOOL arePCEShiftsRotated;
	int pcePaddingX;
	int pcePaddingY;
	int pceExtraPaddingRotationX;
	float depthRefOffsetX;
	float depthRefOffsetY;
	float dxShiftOffset;
	float dyShiftOffset;
} DisparityConversionParams;

typedef struct DisparityDescriptor {
	DisparityConversionParams conversionParams;
	 baselineDirection;
	 widePCEResPadding;
	 wideSize;
	 narrowDownscaledSize;
	SCD_Struct_Fi4 extendedDisparityROI;
} DisparityDescriptor;

typedef struct {
	SCD_Struct_Fi8 field1;
	unsigned field2;
	unsigned field3;
	SCD_Struct_Fi11 field4;
} SCD_Struct_Di33;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 2;
	unsigned field4 : 11;
	1 field5;
	unsigned field6 : 1;
} SCD_Struct_Co34;

typedef struct {
	int field1;
	int field2;
	long long field3;
	int field4;
	SCD_Struct_Co34 field5;
	unsigned char field6;
} SCD_Struct_Co35;

typedef struct {
	SCD_Struct_Co35 field1;
	float field2;
} SCD_Struct_Co36;

typedef struct {
	int field1;
	float field2;
} SCD_Struct_Co37;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_Co38;

typedef struct {
	unsigned long long phatk_x_offset;
	unsigned long long phatk_y_offset;
	unsigned long long pk_x_offset;
	unsigned long long pk_y_offset;
	unsigned long long confidence_offset;
	unsigned long long vhatk_x_offset;
	unsigned long long vhatk_y_offset;
	unsigned long long weights_offset;
	unsigned long long vk_xy_offset;
} SCD_Struct_Sh39;

typedef struct {
	float field1;
} SCD_Struct_Qu40;

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
	float field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	float field18;
	float field19;
	float field20;
	float field21;
	float field22;
	float field23;
} SCD_Struct_Qu41;

typedef struct {
	unsigned field1;
	unsigned field2;
	BOOL field3;
	float field4;
	float field5;
} SCD_Struct_Qu42;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct {
	SCD_Struct_Li0 field1;
	SCD_Struct_Li1 field2;
	SCD_Struct_Fi4 field3;
} SCD_Struct_Fi44;

typedef struct {
	unsigned long long maximaGroupScheduling;
	unsigned long long edgeGroupScheduling[2];
	unsigned long long maximaList;
	unsigned long long count[11];
	unsigned long long edgesList[2];
	unsigned long long guardedEdgesList;
} SCD_Struct_Li45;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
	float field12;
	BOOL field13;
	BOOL field14;
	BOOL field15;
	BOOL field16;
} SCD_Struct_Li46;

typedef struct {
	BOOL field1;
	float field2;
	float field3;
} SCD_Struct_Ho47;

typedef struct {
	unsigned field1;
	[1 field2];
} SCD_Struct_Ho48;

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
} SCD_Struct_Ca51;

typedef struct DistortionModel {
	double pixelSizeMM;
	double focalLengthPix;
	double opticalCenterX;
	double opticalCenterY;
	8d polyBase;
	8d polyDynamic;
} DistortionModel;

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
	__IOSurface field1;
	BOOL field2;
} SCD_Struct_St54;

typedef struct {
	unsigned short sampleInterval;
	unsigned short validSampleThreshold;
	unsigned short gatingThreshold;
} SCD_Struct_Fi55;

typedef struct {
	unsigned transitionBandWidth;
	float jbfSpatialSigma;
	float jbfColorSigma;
} SCD_Struct_Fi56;

typedef struct {
	unsigned attenuatePercentage;
	unsigned gridRowsCount;
	unsigned gridColsCount;
} SCD_Struct_Fi57;

typedef struct {
	unsigned maximaLimit;
	unsigned edgeLimits;
	unsigned edgeNormalizeRadius;
	float edgeNormalizeMin;
	float minSegmentLength;
	float minSegmentStrength;
	float minRedundantEdgeTolerance;
	float turnDegrees;
	float edgeCheckTolerance;
	float trimAngleTolerance;
	float edgeCoalesceTolerance;
	float edgeCoalesceMinLength;
	BOOL edgeCoalesce;
	BOOL suppressRedundantEdgesEnabled;
	BOOL edgeCheckEnabled;
	BOOL trimEnabled;
} SCD_Struct_Fi58;

typedef struct {
	unsigned transitionZoneSizeLog;
	float seamRadius;
} SCD_Struct_Fi59;

typedef struct {
	unsigned enabled;
	float maxSigma;
	float blendRadius;
	int maxLevel;
} SCD_Struct_Fi60;

typedef struct {
	int seamLocation;
	float extraBlending;
	float blendRadiusOverride[8];
} SCD_Struct_Fi61;

typedef struct {
	SCD_Struct_Fi59 blending;
	SCD_Struct_Fi60 contrastMatching;
	SCD_Struct_Fi61 seamAdjustments;
} SCD_Struct_Fi62;

typedef struct {
	float scalingWeights[3];
	float spatialSigma;
	float colorSigmas[3];
	float confSigma;
	float binSize;
	float minFlowVal;
	float maxFlowVal;
	float confThreshold;
	float gradThreshold;
	float flatDistanceThresholdX;
	float flatDistanceThresholdY;
	float outlierPercentage;
} SCD_Struct_Fi63;

typedef struct {
	float confRegPyrThreshold;
	float flowSigma;
	float lumaSigma;
	float pixelScoreFlowWeight;
	float maxFlowScoreLumaGradValue;
	float flowBinSize;
	float minFlowVal;
	float maxFlowVal;
	float scoreBinSize;
	float flowOutlierPercentage;
	float validScoreThreshold;
	float weightedAlpha;
	float weightedSigma;
	float histWidthThreshold;
	float goodRegionScoreThreshold;
	float extremelyBadRegionScoreThreshold;
	float minScoreThreshold;
	float midScoreThreshold;
	float minFocalLengthScale;
	float maxFocalLengthScale;
	float minFocalLengthDiff;
	float maxFocalLengthDiff;
	float focalLengthScaleHistWidthThreshold;
} SCD_Struct_Fi64;

typedef struct {
	float valueThreshold;
} SCD_Struct_Fi65;

typedef struct {
	float effectiveIntegrationTimeHardGatingThreshold;
	float effectiveIntegrationTimeDecayThreshold;
} SCD_Struct_Fi66;

typedef struct {
	SCD_Struct_Fi64 flowParameters;
	SCD_Struct_Fi65 focusDistanceGating;
	SCD_Struct_Fi66 lowLightGating;
} SCD_Struct_Fi67;

typedef struct {
	unsigned keypointGridWidth;
	unsigned keypointGridHeight;
	AdaptiveCorrectionConfig adaptiveCorrectionConfig;
} SCD_Struct_Fi68;

typedef struct {
	unsigned field1;
	unsigned field2;
	AdaptiveCorrection field3;
	unsigned char field4;
	o field5;
	n field6;
	float field7;
	int field8;
	g field9;
} SCD_Struct_Fi69;

typedef struct {
	unsigned long long dispatchIndirect;
} SCD_Struct_Li70;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_Li71;

typedef struct {
	3 columns;
} SCD_Struct_Re72;

typedef struct {
	unsigned numThreads;
	unsigned numHorizontalBlocks;
	unsigned numVerticalBlocks;
	unsigned nccSearchRadius;
	unsigned nccPatchRadius;
	unsigned maxSearchRadius;
	unsigned internalBorderSize;
	float ransacAdaptiveThresholdFactor;
	float ransacMinMatchingScoreAccepted;
	unsigned maxNumberOfPyramidLevels;
	BOOL skipInitialDownsample;
} SCD_Struct_Ca73;

typedef struct {
	SCD_Struct_Fi66 ref;
	SCD_Struct_Fi66 tgt;
} SCD_Struct_Ca74;

typedef struct {
	SCD_Struct_Fi4 field1;
	SCD_Struct_Fi4 field2;
	SCD_Struct_Fi8 field3;
} SCD_Struct_Ca75;

typedef struct {
	float w[11][11];
} SCD_Struct_Pl76;

typedef struct {
	unsigned long long blurTextures;
	unsigned long long downscaledTextures;
	unsigned long long validCount;
	unsigned long long stopRunning0;
	unsigned long long stopRunning1;
	unsigned long long downscaled;
	unsigned long long Xdst;
	unsigned long long Ydst;
	unsigned long long W;
	unsigned long long smallVariables;
	unsigned long long narrow2Wide;
} SCD_Struct_Sm77;

