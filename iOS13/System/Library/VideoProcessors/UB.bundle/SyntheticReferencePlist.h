/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class NSMutableArray;

@interface SyntheticReferencePlist : NSObject {

	NSMutableArray* highlightRecoveryBands;
	NSMutableArray* deepShadowRecoveryBands;
	int grayGhostingDetectionBand;
	float grayGhostingCutoff;
	float grayGhostingEV0EVMDifferenceThreshold;
	float grayGhostingEV0WeightThreshold;
	float grayGhostingClippingThreshold;
	float motionCutoff;
	float motionDetectionSifrEitCutoffHigh;
	float motionDetectionSifrEitCutoffLow;

}
-(int)readPlist:(id)arg1 ;
-(int)_readHighlightRecoveryBandData:(id)arg1 ;
-(int)_readDeepShadowRecoveryBandData:(id)arg1 ;
@end

