/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class NSMutableArray, GainValueArray;

@interface SyntheticLongPlist : NSObject {

	NSMutableArray* bands;
	GainValueArray* shadowThreshold;
	GainValueArray* blackFusionBoost;
	GainValueArray* sigmaFactorR;
	GainValueArray* sigmaFactorG;
	GainValueArray* sigmaFactorB;
	GainValueArray* sharpness;

}
-(int)readPlist:(id)arg1 ;
-(int)readBandData:(id)arg1 ;
@end

