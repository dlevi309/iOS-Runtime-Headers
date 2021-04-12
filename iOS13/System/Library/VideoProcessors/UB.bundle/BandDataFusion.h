/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class GainValueArray, PerReferenceBandata;

@interface BandDataFusion : NSObject {

	GainValueArray* adaptive_blur;
	GainValueArray* lumaBlackThreshold;
	GainValueArray* chromaBlackThreshold;
	GainValueArray* decayEdgeBoost;
	PerReferenceBandata* diffWeight;
	PerReferenceBandata* lumaFusionStrength;
	PerReferenceBandata* chromaFusionStrength;

}
-(id)init;
@end

