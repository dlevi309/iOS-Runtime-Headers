/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/

typedef struct {
	[3 field1];
} SCD_Struct_Re0;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	unsigned long long interimNextShiftMap;
	unsigned long long nonRefDerivTex;
	unsigned long long prevShiftMap;
	unsigned long long shiftMapWeight;
	unsigned long long refDerivTex;
	unsigned long long refTextureY[20];
	unsigned long long nonRefTextureY[20];
} SCD_Struct_Re2;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_Re3;

typedef struct {
	SCD_Struct_Re3 field1;
	SCD_Struct_Re3 field2;
} SCD_Struct_Re4;

typedef struct {
	SCD_Struct_Re0 field1;
	SCD_Struct_Re4 field2;
	SCD_Struct_Re4 field3;
} SCD_Struct_Re5;

typedef struct {
	float field1;
} SCD_Struct_Re6;

typedef struct {
	SCD_Struct_Re6 field1;
	SCD_Struct_Re6 field2;
	float field3;
	float field4[8];
	float field5[8];
} SCD_Struct_Re7;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	SCD_Struct_Re0 field3[2];
	SCD_Struct_Re7 field4;
} SCD_Struct_Re8;

typedef struct {
	SCD_Struct_Re4 field1;
	SCD_Struct_Re4 field2;
	SCD_Struct_Re5 field3;
	SCD_Struct_Re5 field4;
	SCD_Struct_Re8 field5;
} SCD_Struct_Re9;

typedef struct {
	float start;
	float end;
	float margin;
} SCD_Struct_AM10;

typedef struct exposureParameters {
	float gain;
	float red_gain;
	float blue_gain;
	float digital_gain;
	float exposure_time;
	float average_focus_score;
	float normalized_snr;
	float original_exposure_bias;
	float exposure_bias;
	BOOL is_long;
} exposureParameters;

typedef struct NoiseModel {
	float lumaSigmaIntercept;
	float lumaSigmaSlope;
	float lumaSigmaMax;
	 chromaSigma;
	float lumaRemixWeight;
	float chromaRemixWeight;
	float blueBoost;
	float flatnessBoost;
	float flatnessThreshold;
	float blurKernelSize;
	float haloSuppression;
	float highGainDenoiseThreshold;
	float highGainSharpenThreshold;
	float radialSharpnessBoost;
	float radialFlatnessBoost;
	SCD_Struct_AM10 bluenessCb;
	SCD_Struct_AM10 bluenessCr;
} NoiseModel;

typedef struct AmbnrConfiguration {
	NoiseModel nm;
	NoiseModel nmHighGain;
	exposureParameters exposureParams;
	float lumaLensShadingFactor;
	float chromaLensShadingFactor;
	float chromaDemoireStrength;
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

typedef struct {
	3 columns;
} SCD_Struct_Fu15;

typedef struct {
	float dense;
	float normal;
} SCD_Struct_Fu16;

typedef struct BilateralSolverConfiguration {
	float min_confidence;
	float min_input_signal;
	float max_input_signal;
	float lambda;
} BilateralSolverConfiguration;

typedef struct BilateralGridUniforms {
	int space_sigma;
	float range_sigma;
	float oo_space_sigma;
	float oo_range_sigma;
	int grid_depth;
	BilateralSolverConfiguration solver;
} BilateralGridUniforms;

typedef struct FusionConfiguration {
	int fusionAlgo;
	4SCD_Struct_Fu15 xforms3x3;
	int frameCount;
	BOOL fixPyramidAlignment;
	int registrationReference;
	int longest;
	int evm;
	int ev0;
	int evp;
} FusionConfiguration;

typedef struct FusionRemixStageUniformsSBP {
	FusionConfiguration config;
	float lumaSigmaIntercept;
	float lumaSigmaSlope;
	float lumaSigmaMax;
	float chromaSigmaCr;
	float chromaSigmaCb;
	float blackThreshold;
	float sharpening;
	float adaptiveBlur;
	float hdrEVPChromaWeightBoost;
	SCD_Struct_Fu16 diffWeight;
	SCD_Struct_Fu16 fusionStrength;
	4f relativeBrightness;
	BilateralGridUniforms bgUniforms;
	float toneMapSaturationFactor;
	float staticOISSharpening;
	float accumulatedWeightSaturation;
	BOOL supportLumaBlotchinessRemoval;
} FusionRemixStageUniformsSBP;

typedef struct FusionRemixStageUniformsVertex {
	FusionConfiguration config;
	int hdrFusionMode;
	float width;
	float height;
	int bandIndex;
} FusionRemixStageUniformsVertex;

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
	int length;
	/*function pointer*/void* elements;
} SCD_Struct_Ba25;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct ltmCurves {
	unsigned short ltmLut[1584];
	unsigned short globalLtmLut[257];
	unsigned short gtcLut[257];
} ltmCurves;

typedef struct frameProperties_t {
	BOOL isPreBracketedFrame;
	int bracketedCaptureSequenceNumber;
	long long averageFocusScore;
	exposureParameters exposureParams;
	BOOL metadataHasROI;
	CGRect ROI;
	BOOL registrationComplete;
	BOOL hasValidRegistration;
	SCD_Struct_Re0 regHomography;
	BOOL metadataHasLtmCurves;
	ltmCurves ltmCurves;
	BOOL hasFaces;
} frameProperties_t;

typedef struct {
	opaqueCMSampleBuffer buffer;
	frameProperties_t info;
} SCD_Struct_GN29;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct PyramidStageConfiguration {
	BOOL use_m2m;
	BOOL do_sync_at_end;
	BOOL compensate_gpu_shift;
	BOOL supportFP16;
} PyramidStageConfiguration;

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

typedef struct ColorSpaceConversionParameters {
	SCD_Struct_Re0 colorCorrectionMatrix;
	TransferFunctionParameters transferFunctionFwd;
	TransferFunctionParameters transferFunctionInv;
	PedestalParameters pedestalParams;
	BOOL outputToLinearYCbCr;
	BOOL clampNegativesToZero;
	BOOL applyColorCorrection;
} ColorSpaceConversionParameters;

typedef struct ImageRegistrationCtx_s* ImageRegistrationCtx_sRef;

