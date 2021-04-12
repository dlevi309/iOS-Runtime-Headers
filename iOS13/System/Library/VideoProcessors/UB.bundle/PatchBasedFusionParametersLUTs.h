/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class GainValueArray;

@interface PatchBasedFusionParametersLUTs : NSObject {

	GainValueArray* boundsMapLimit;
	GainValueArray* shadowLimit;
	GainValueArray* lowResMotionThreshold;
	GainValueArray* boostedLumaMotionThreshold;
	GainValueArray* sadThreshold;
	GainValueArray* nccLowLimitMatchedTexture;
	GainValueArray* nccHighLimitMatchedTexture;
	GainValueArray* fusionBoostMatchedTexture;

}
-(int)readPlist:(id)arg1 ;
@end

