/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class NSMutableArray, GainValueArray;

@interface DenoiseAndSharpeningTuning : NSObject {

	NSMutableArray* bands;
	GainValueArray* ev0FrameDenoiseBoost;
	GainValueArray* shortFrameDenoiseBoost;
	GainValueArray* lowFusionNoiseBoost;
	GainValueArray* lensShadeFactor;
	GainValueArray* loGOffsetRangeMax;
	GainValueArray* loGOffsetScale;

}
-(id)init;
@end

