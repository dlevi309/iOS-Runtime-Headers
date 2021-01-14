/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@class NSMutableArray;

@interface FusionDeviceParameters : NSObject {

	float temporalFusionEffectivenessPerBracket;
	float hdrGrayGhostingCutoff;
	float hdrGrayGhostingEV0WeightThreshold;
	float hdrGrayGhostingEV0EVMDifferenceThreshold;
	float hdrBlackSubtractionLowLimit;
	float hdrBlackSubtractionClippingRatio;
	float hdrMaximumContrastStrength;
	float hdrDetailEnhanceLeftLimit;
	float hdrDetailEnhanceRightLimit;
	float hdrDetailEnhanceStrength;
	float hdrEVPChromaWeightBoost;
	float oisMotionThreshold;
	float denseRegisterLastFrameBelowNormalizedSNR;
	float accumulatedWeightSaturationOffset;
	BOOL supportStaticOis;
	BOOL reduceOisGhosting;
	BOOL fixPyramidAlignment;
	BOOL supportLumaBlotchinessRemoval;
	NSMutableArray* bands;

}
-(id)init;
@end

