/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/

typedef struct {
	[3 columns];
} SCD_Struct_Wa0;

typedef struct __CVBuffer* CVBufferRef;

typedef struct NoiseModel {
	float lumaSigmaIntercept;
	float lumaSigmaSlope;
	float lumaSigmaMax;
	 chromaSigma;
} NoiseModel;

typedef struct exposureParameters {
	float gain;
	float red_gain;
	float blue_gain;
	float red_combo_gain;
	float blue_combo_gain;
	float analog_gain;
	float isp_digital_gain;
	float hard_gain;
	float ltm_soft_gain;
	float hr_gain_down_ratio;
	float exposure_time;
	float average_focus_score;
	float normalized_snr;
	float exposure_bias;
	float read_noise_1x;
	float read_noise_8x;
	float conversion_gain;
	float sensor_black_level;
	float lsModulationWeight;
	BOOL is_long;
	BOOL ae_locked;
	BOOL hr_enabled;
	float luxLevel;
	BOOL ltm_locked;
	float AETargetGain;
	float CCT;
} exposureParameters;

typedef struct DenoiseAndSharpening {
	float chromaDenoiseLumaThresholdGain;
	float chromaDenoiseChromaThresholdGain;
	float chromaDenoiseMixingCoeff;
	float lumaDenoiseThresholdGain;
	float lumaDenoiseMixingCoeff;
	float lumaSharpeningScalingOnSkin;
	float lumaDenoisingScalingOnSkin;
	float luma3x3SharpeningStrength;
	float lumaLowVarSharpeningStrength;
	float lumaLowVarDetailsLevel;
	float flatnessBoost;
	float flatnessThreshold;
	float gdFlatnessBoostMidtone;
	float gdFlatnessMidtoneValue;
	float gdFlatnessBoostShadow;
	float gdFlatnessBoostHighlight;
	float gdTexturenessThresholdLow;
	float gdTexturenessThresholdHigh;
	float gdTexturenessShadingFactor;
	float radialFlatnessBoost;
	float radialSharpnessBoost;
	float blueBoost;
	float ev0FrameDenoiseBoost;
	float shortFrameDenoiseBoost;
	float lowFusionNoiseBoost;
	float lensShadeFactor;
	float loGOffsetRangeMax;
	float loGOffsetScale;
	BOOL enableLumaDenoiseSharpening;
	BOOL enableChromaDenoiseSharpening;
	BOOL enableBilateralRegression;
	BOOL enableLowVarSharpening;
	BOOL enableGdFlatness;
	int gdNumDir;
	float gdFlatnessThreshold;
	int gdFilterSigma;
	BOOL enableLoGOffset;
	BOOL enableOPC;
	float OPCThresholdGain;
	NoiseModel bluenessCb;
	NoiseModel bluenessCr;
} DenoiseAndSharpening;

typedef struct AmbnrConfiguration {
	NoiseModel nm;
	DenoiseAndSharpening das;
	exposureParameters exposureParams;
	float lumaBlurKernelSize;
	float chromaBlurKernelSize;
	 lumaUpsamplingCoordOffset;
	 chromaUpsamplingCoordOffset;
} AmbnrConfiguration;

typedef struct PyramidFilterParams {
	int filterType;
	float luma_param;
	float chroma_param;
} PyramidFilterParams;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned short version;
	unsigned short lutsCountX;
	unsigned short lutsCountY;
	unsigned short lutsBytesPerRow;
	unsigned short lutsCurveEntryCount;
	unsigned short topPadding;
	unsigned short bottomPadding;
	unsigned short leftPadding;
	unsigned short rightPadding;
	unsigned short tileWidth;
	unsigned short tileHeight;
	unsigned short lutsData[0];
} SCD_Struct_De9;

typedef struct {
	unsigned short version;
	unsigned short lutsCountX;
	unsigned short lutsCountY;
	unsigned short lutsBytesPerRow;
	unsigned short lutsBytesPerColumn;
	unsigned short topPadding;
	unsigned short bottomPadding;
	unsigned short leftPadding;
	unsigned short rightPadding;
	unsigned short tileWidth;
	unsigned short tileHeight;
	unsigned short ltmCurveEntryCount;
	unsigned short ccmEntryCount;
	unsigned short lutsData[0];
} SCD_Struct_De10;

typedef struct {
	unsigned short lutEntryCount;
	unsigned short lutData[0];
} SCD_Struct_De11;

typedef struct ltmCurves {
	/*function pointer*/void* ltmLut;
	unsigned short version;
	char bytes[18242];
	SCD_Struct_De9 v1;
	SCD_Struct_De9 v2;
	SCD_Struct_De10) v3;
	SCD_Struct_De11 globalLtmLut;
	unsigned short globalLtmLutData[257];
	SCD_Struct_De11 gtcLut;
	unsigned short gtcLutData[257];
	float ltmHardGain;
} ltmCurves;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct frameMetadata {
	int sensorID;
	BOOL isPreBracketedFrame;
	BOOL isEVMFrame;
	BOOL isLongFrame;
	long long averageFocusScore;
	exposureParameters exposureParams;
	BOOL metadataHasROI;
	CGRect ROI;
	int exifOrientation;
	BOOL metadataHasLtmCurves;
	ltmCurves ltmCurves;
	SCD_Struct_Wa0 colorCorrectionMatrix;
	BOOL isStationary;
	BOOL allowSpatialCCM;
} frameMetadata;

typedef struct DeepFusionFrameMeta {
	long long combo;
	exposureParameters refExposure;
	exposureParameters syntheticLongExposure;
	exposureParameters longExposure;
} DeepFusionFrameMeta;

typedef struct DenoiseRemixStageOptions {
	int lgaAlgorithm;
	BOOL enableBandZeroDenoising;
	BOOL enableBilateralRegression;
	BOOL enableLoGOffset;
	BOOL enableLowVarSharpening;
	BOOL enableNoiseMap;
	BOOL enableGdFlatness;
	BOOL enableDefringingStage;
} DenoiseRemixStageOptions;

typedef struct {
	int index;
	DenoiseRemixStageOptions options;
} SCD_Struct_De17;

typedef struct {
	SCD_Struct_De17 entries[10];
	unsigned count;
} SCD_Struct_De18;

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
	unsigned long long field10;
	unsigned long long field11;
	unsigned long long field12;
	unsigned long long field13;
	unsigned long long field14;
	unsigned long long field15;
	unsigned long long field16;
	unsigned long long field17;
	unsigned long long field18;
	unsigned long long field19;
	unsigned long long field20;
	unsigned long long field21;
	unsigned long long field22;
	unsigned long long field23;
	unsigned long long field24;
	unsigned long long field25;
	unsigned long long field26;
	unsigned long long field27;
	unsigned long long field28;
	unsigned long long field29;
	unsigned long long field30;
	unsigned long long field31;
	unsigned long long field32;
	unsigned long long field33;
	unsigned long long field34;
	unsigned long long field35;
	unsigned long long field36;
	unsigned long long field37;
	unsigned long long field38;
	unsigned long long field39;
	unsigned long long field40;
	unsigned long long field41;
	unsigned long long field42;
	unsigned long long field43;
	unsigned long long field44;
	unsigned long long field45;
	unsigned long long field46;
	unsigned long long field47;
	unsigned long long field48;
	unsigned long long field49;
	unsigned long long field50;
	unsigned long long field51;
	unsigned long long field52;
} SCD_Struct_De19;

typedef struct {
	[2 columns];
} SCD_Struct_De20;

typedef struct {
	int index;
	BOOL lumaFP16;
	BOOL chromaFP16;
	DenoiseRemixStageOptions options;
} SCD_Struct_De21;

typedef struct {
	SCD_Struct_De21 entries[100];
	int count;
} SCD_Struct_De22;

typedef struct {
	3 columns;
} SCD_Struct_Fu23;

typedef struct TransferFunctionParameters {
	float linearScale;
	float linearThreshold;
	float nonLinearScale;
	float nonLinearBias;
	float nonLinearPower;
} TransferFunctionParameters;

typedef struct PedestalParameters {
	float normalizedPedestal;
	float ispChromaBias;
	 compressionScale;
	 expansionScale;
} PedestalParameters;

typedef struct PatchBasedFusionParameters {
	float boundsMapLimit;
	float shadowLimit;
	float lowResMotionThreshold;
	float boostedLumaMotionThreshold;
	float sadThreshold;
	float nccLowLimitMatchedTexture;
	float nccHighLimitMatchedTexture;
	float fusionBoostMatchedTexture;
} PatchBasedFusionParameters;

typedef struct ColorSpaceConversionParameters {
	SCD_Struct_Fu23 colorCorrectionMatrix;
	TransferFunctionParameters transferFunctionFwd;
	TransferFunctionParameters transferFunctionInv;
	PedestalParameters pedestalParams;
	BOOL outputToLinearYCbCr;
	BOOL clampNegativesToZero;
	BOOL applyColorCorrection;
} ColorSpaceConversionParameters;

typedef struct FusionConfiguration {
	5SCD_Struct_Fu23 xforms3x3;
	BOOL preWarpEnabled;
	5ColorSpaceConversionParameters colorSpaceConversionParameters;
	int frameCount;
	int ltcFrameIndex;
	int evm;
	int ev0;
	int evp;
	int fusionRef;
	BOOL isToneMapped;
	BOOL doGTCCorrection;
	BOOL doRec709Correction;
	BOOL doHighlightRecovery;
	int hdrFusionMode;
	BOOL useCorrectedLumaForNoise;
	BOOL isStationary;
} FusionConfiguration;

typedef struct FusionRemixStageUniformsIBP {
	FusionConfiguration config;
	float adaptiveBlur;
	float blackThreshold;
	float blackAdaptiveBlurBoost;
	float lowFusionNoiseBoost;
	float decayEdgeBoost;
	PedestalParameters diffWeight;
	PedestalParameters fusionStrength;
	NoiseModel nm;
	4f relativeBrightness;
	4f noiseAdjustment;
	4f exposureEffectiveTime;
	float lensShadingFactor;
	4f blurryFrameWeight;
	PatchBasedFusionParameters patchBasedFusionParameters;
} FusionRemixStageUniformsIBP;

typedef struct FusionRemixStageUniformsVertex {
	FusionConfiguration config;
	float width;
	float height;
	int bandIndex;
} FusionRemixStageUniformsVertex;

typedef struct PyramidStageConfiguration {
	BOOL use_m2m;
	BOOL do_sync_at_end;
	BOOL compensate_gpu_shift;
	BOOL supportFP16;
} PyramidStageConfiguration;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6[20];
	unsigned long long field7[20];
} SCD_Struct_Re32;

typedef struct {
	unsigned long long interimNextShiftMap;
	unsigned long long nonRefDerivTex;
	unsigned long long prevShiftMap;
	unsigned long long shiftMapWeight;
	unsigned long long refDerivTex;
	unsigned long long refTextureY[20];
	unsigned long long nonRefTextureY[20];
} SCD_Struct_Re33;

typedef struct {
	PedestalParameters field1;
	PedestalParameters field2;
} SCD_Struct_Re34;

typedef struct {
	SCD_Struct_Wa0 field1;
	SCD_Struct_Re34 field2;
	SCD_Struct_Re34 field3;
} SCD_Struct_Re35;

typedef struct {
	float field1;
} SCD_Struct_Re36;

typedef struct {
	SCD_Struct_Re36 field1;
	SCD_Struct_Re36 field2;
	float field3;
	float field4[8];
	float field5[8];
} SCD_Struct_Re37;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	SCD_Struct_Wa0 field3[2];
	SCD_Struct_Re37 field4;
} SCD_Struct_Re38;

typedef struct {
	SCD_Struct_Re34 field1;
	SCD_Struct_Re34 field2;
	SCD_Struct_Re35 field3;
	SCD_Struct_Re35 field4;
	SCD_Struct_Re38 field5;
} SCD_Struct_Re39;

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
} SCD_Struct_Re40;

typedef struct {
	float field1[9];
} SCD_Struct_Re41;

typedef struct {
	unsigned char field1[256];
} SCD_Struct_Re42;

typedef struct {
	unsigned field1[256];
} SCD_Struct_Re43;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_Ti44;

typedef struct TileBounds {
	int index;
	int in_x;
	int in_y;
	int in_w;
	int in_h;
	int out_x;
	int out_y;
	int out_w;
	int out_h;
	int padding;
} TileBounds;

typedef struct NoiseDivisorQuantizationBoundaries {
	float minValue;
	float maxValue;
} NoiseDivisorQuantizationBoundaries;

typedef struct DFApplyEspressoOutputUniforms {
	 yuvDeghostsingMinValue;
	float lumaSlope;
	 yuvSkinSlope;
	 yuvGlobalAlpha;
	int level;
	TileBounds tile;
	float scaleFactor;
	int texturenessType;
	float clippingThresholdLow;
	float clippingThresholdHigh;
	float shadingSuppressionPower;
	BOOL isMotionBelowThreshold;
	float fusionLscAmpFactor;
	float fusionLscOffsetFactor;
	float fusionLumaSlope;
	float fusionLumaMid;
	float fusionChromaGlobalFactor;
	float highlightFusionAlpha;
	float lscGainGreenMax;
	BOOL hasSIFR;
	 fullSize;
	NoiseDivisorQuantizationBoundaries slQuantBounds;
	float colorMatchStart;
	float colorMatchEnd;
	float edgeMatchStart;
	float edgeMatchEnd;
	float aeShutterTimeRatio;
	float desaturateYThreshold;
	float desaturateSigmaSquaredInverse;
	float desaturateStrength;
	SCD_Struct_Fu23 colorCorrectionMatrix;
	SCD_Struct_Fu23 inverseColorCorrectionMatrix;
	float haloSuppressionStrength;
} DFApplyEspressoOutputUniforms;

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
} SCD_Struct_To48;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_To49;

typedef struct {
	double bias;
	double gyroWeight;
	double cornerWeight;
	double focusWeight;
	double motionWeight;
} SCD_Struct_Fr50;

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
} SCD_Struct_LS51;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_LS51) field4;
} SCD_Struct_LS52;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned long long sharedMetalBufferSizeRequested;
	unsigned long long sharedRegWarpBufferSizeRequested;
	unsigned long long width;
	unsigned long long height;
	unsigned pixelFormat;
	unsigned long long regwarpInputWidth;
	unsigned long long regwarpInputHeight;
} SCD_Struct_UB54;

typedef struct frameProperties_t {
	frameMetadata meta;
	BOOL contentExtended;
	 extendedDimensions;
	BOOL registrationComplete;
	BOOL hasValidRegistration;
	SCD_Struct_Wa0 regHomography;
	int inputColorSpace;
	ColorSpaceConversionParameters colorSpaceConversionParameters;
	BOOL motionScoreCalculationComplete;
	float motionScore;
	double focusScore;
	float gyroScore;
	BOOL isMissingMetadata;
	float cornerStrength;
	BOOL referenceFrameSelectionMetricsComputed;
	float blurryFrameWeight;
	BOOL blurryFrameWeightCalculationComplete;
	BOOL denseRegistered;
} frameProperties_t;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	unsigned short version;
	unsigned short lutsCountX;
	unsigned short lutsCountY;
	unsigned short lutsBytesPerRow;
	unsigned short lutsCurveEntryCount;
	unsigned short topPadding;
	unsigned short bottomPadding;
	unsigned short leftPadding;
	unsigned short rightPadding;
	unsigned short tileWidth;
	unsigned short tileHeight;
	0S lutsData;
} SCD_Struct_UB57;

typedef struct {
	unsigned short version;
	unsigned short lutsCountX;
	unsigned short lutsCountY;
	unsigned short lutsBytesPerRow;
	unsigned short lutsBytesPerColumn;
	unsigned short topPadding;
	unsigned short bottomPadding;
	unsigned short leftPadding;
	unsigned short rightPadding;
	unsigned short tileWidth;
	unsigned short tileHeight;
	unsigned short ltmCurveEntryCount;
	unsigned short ccmEntryCount;
	0S lutsData;
} SCD_Struct_UB58;

typedef struct {
	unsigned short lutEntryCount;
	0S lutData;
} SCD_Struct_UB59;

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
} SCD_Struct_UB60;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_UB61;

typedef struct {
	float radialScale;
	float radialR0;
	float radialR1;
	float radialF0;
	float radialF1;
	float radialF2;
	float max_chroma;
	float blueTh0;
	float blueTh1;
	float blueCrTh0;
	float brightnessTh0;
	float brightnessTh1;
	float contrastTh0;
	float contrastTh1;
	float darknessTh0;
	float darknessTh1;
	float luma_knee;
	float luma_amp;
	float pbrightnessTh0;
	float pbrightnessTh1;
	float blueBrightThr0;
	float blueBrightThr1;
	float colorfullThr0;
	float colorfullThr1;
	float colorfull_PThr0;
	float colorfull_PThr1;
	float blueCrThr0;
	float blueCrThr1;
	float darkAchromThr0;
	float darkAchromThr1;
	float darkAchromCThr;
	float darkAchromYThr;
	float darkBlue_YThr0;
	float darkBlue_YThr1;
	float darkBlue_CbThr0;
	float darkBlue_CbThr1;
	float skyBlue_YThr0;
	float skyBlue_YThr1;
	float skyBlue_CbThr0;
	float skyBlue_CbThr1;
	float skyBlue_PThr0;
	float skyBlue_PThr1;
	float eitThr0;
	float eitThr1;
	float awbRatioThr0;
	float awbRatioThr1;
	float correctionStrength;
	float filtThr;
	float mixFiltLUT;
	float pCb1;
	float pCb2;
	float pCb3;
	float pCr1;
	float pCr2;
	float pCr3;
} SCD_Struct_Vi62;

