/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/

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

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	[3 columns];
} SCD_Struct_Fi4;

typedef struct dynamic_tuning_param_config {
	float brightLightExposureLevel;
	float lowLightExposureLevel;
	float nearSubjectDistanceRatio;
	float farSubjectDistanceRatio;
	float brightLightNearValue;
	float brightLightFarValue;
	float lowLightNearValue;
	float lowLightFarValue;
} dynamic_tuning_param_config;

typedef struct dynamic_tuning_parameters {
	dynamic_tuning_param_config disparityScalingFactor;
	dynamic_tuning_param_config segmentationFusionSubtractiveMaxBlur;
	dynamic_tuning_param_config segmentationFusionAdditiveMaxBlur;
} dynamic_tuning_parameters;

typedef struct xhlrb_control_logic_params {
	int mode;
	float exposureScoreT0;
	float exposureScoreT1;
	float clippedPixelsT0;
	float clippedPixelsT1;
	float recoveryScoreT;
	int maxColourDiffusionIterations;
	float maxPreFilterGain;
	float maxWeightGain;
	float maxIntensityGain;
	float maxBGBlur;
	float blurRadiusT0;
	float blurRadiusT1;
	float maxIntensityT0;
	float maxIntensityT1;
	float minIntensityT0;
	float minIntensityT1;
} xhlrb_control_logic_params;

typedef struct disparity_refinement_params {
	int radius;
	float weightScaling;
	float maxReconstructionWeight;
	float innerSamplingRadius;
	float outerSamplingRadius;
	int nSamples;
	float lumaSigma;
	float chromaSigma;
	float segmentationSigma;
	float disparitySigma;
	float accumulatedWeightT0;
	float accumulatedWeightT1;
	float aaLumaSigma;
	float aaChromaSigma;
	float aaSegmentationSigma;
	float aaSpatialSigma;
} disparity_refinement_params;

typedef struct simple_lens_model_params {
	float left;
	float top;
	float width;
	float height;
	float zeroShiftPercentile;
	float simulatedFocalLength;
	float simulatedAperture;
	float minimumSimulatedAperture;
	float maximumSimulatedAperture;
	float frameNormalizedFocalLength;
	float maxFGBlur;
	float maxBGBlur;
	float shiftDeadZone;
	float disparityScalingFactor;
} simple_lens_model_params;

typedef struct face_mask_params {
	float maxBlur;
	float simulatedAperture;
	float defaultSimulatedAperture;
	 centreX;
	 centreY;
	 leftEyeX;
	 leftEyeY;
	 rightEyeX;
	 rightEyeY;
	 chinX;
	 chinY;
	float maxBlurOnEyes;
	float maxBlurDistFromFocus;
	float eyeToEyebrowRatio;
	float linearBlurGrowthM;
	float linearBlurGrowthC;
	float distToBlurScaling;
	float capMultip;
	float gainMultip;
	float chinThetaLimit;
	float chinThetaMultip;
	float chinVectorSnapping;
	float imageAspectRatio;
} face_mask_params;

typedef struct segmentation_fusion_params {
	float simulatedAperture;
	float defaultSimulatedAperture;
	float maxBlur;
	float subtractiveLowerAlpha;
	float subtractiveUpperAlpha;
	float subtractiveMaxBlur;
	float additiveLowerAlpha;
	float additiveUpperAlpha;
	float additiveMaxBlur;
} segmentation_fusion_params;

typedef struct blurmap_smoothing_params {
	int nIterations;
	float originalBlurValueT0;
	float originalBlurValueT1;
	float localMinimumBlurValueT0;
	float localMinimumBlurValueT1;
} blurmap_smoothing_params;

typedef struct rendering_config_params {
	float simulatedAperture;
	float defaultSimulatedAperture;
	float preFilterBlurStrength;
	int preFilterRadius;
	float maxBlur;
	float sharpRadius;
	float softRadius;
	float lumaNoiseModelCoeff;
	float lumaNoiseAmplitude;
	float highlightBoostGain;
	int nRings;
	float basePixelWeight;
	float antiAliasBlurStrength;
	int antiAliasRadius;
	float relativeWeightThreshold;
	float alphaEpsilon;
	float alphaGain;
	float shapeObstructionCoeff;
	float ringAmplitude;
	float ringSharpness;
	float blendingQuarterResAlphaGain;
	float blendingFullResAlphaGain;
	int xhlrbIterations;
	float xhlrbBlurRadiusT0;
	float xhlrbBlurRadiusT1;
	float xhlrbMaxIntensityT0;
	float xhlrbMaxIntensityT1;
	float xhlrbMinIntensityT0;
	float xhlrbMinIntensityT1;
	float xhlrbPreFilterGain;
	float xhlrbWeightGain;
	float xhlrbIntensityGain;
	int xhlrbTileSize;
} rendering_config_params;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_Fi14;

typedef struct threadgroup_sizes_config {
	SCD_Struct_Fi14 slm_minMax;
	SCD_Struct_Fi14 disparityrefinement_calcWeightsX;
	SCD_Struct_Fi14 disparityrefinement_calcWeightsY;
	SCD_Struct_Fi14 disparityrefinement_preproc;
	SCD_Struct_Fi14 disparityrefinement_sample;
	SCD_Struct_Fi14 disparityrefinement_antialias;
	SCD_Struct_Fi14 disparityrefinement_passthrough;
	SCD_Struct_Fi14 faceMask_apply;
	SCD_Struct_Fi14 segfusion_apply;
	SCD_Struct_Fi14 blurmapsmoothing_x;
	SCD_Struct_Fi14 blurmapsmoothing_y;
	SCD_Struct_Fi14 sparserendering_preprocess;
	SCD_Struct_Fi14 sparserendering_preFilterX;
	SCD_Struct_Fi14 sparserendering_preFilterY;
	SCD_Struct_Fi14 sparserendering_withAlpha;
	SCD_Struct_Fi14 sparserendering_noAlpha;
	SCD_Struct_Fi14 sparserendering_opt2x_withAlpha;
	SCD_Struct_Fi14 sparserendering_opt2x_noAlpha;
	SCD_Struct_Fi14 sparserendering_antiAliasX;
	SCD_Struct_Fi14 sparserendering_antiAliasY;
	SCD_Struct_Fi14 sparserendering_yuvOutput1;
	SCD_Struct_Fi14 sparserendering_yuvOutput2;
} threadgroup_sizes_config;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
} SCD_Struct_Fi17;

