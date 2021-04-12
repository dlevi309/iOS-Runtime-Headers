/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class NSMutableArray, GainValueArray, PatchBasedFusionParametersLUTs;

@interface FusionPlist : NSObject {

	NSMutableArray* bands;
	NSMutableArray* toneMapSmoothingBands;
	BOOL preWarpInputs;
	float grayGhostingCutoff;
	float grayGhostingEV0EVMDifferenceThreshold;
	float grayGhostingEV0WeightThreshold;
	float grayGhostingClippingThreshold;
	BOOL enableMotionDetection;
	float motionDetectionClippingCutoffHigh;
	float motionDetectionClippingCutoffLow;
	float motionDetectionSifrEitCutoffHigh;
	float motionDetectionSifrEitCutoffLow;
	float motionDetectionGradientCutoffHigh;
	float motionDetectionGamma;
	float motionDetectionMotionThreshold;
	float motionDetectionMotionThresholdStaticScene;
	float lensShadingFactor;
	GainValueArray* lensShadingFactorLUT;
	int hybridRegistrationMode;
	GainValueArray* shadowDenseBlendStrength;
	GainValueArray* nonShadowDenseBlendStrength;
	BOOL enablePatchBasedFusion;
	PatchBasedFusionParametersLUTs* patchBasedFusionParametersLUTs;
	float blackAdaptiveBlurBoost;

}
-(id)init;
@end

