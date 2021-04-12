/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIMotionEffectEngineLogger : NSObject {

	long long _motionLevelSamples[8];
	long long _sampleCount;
	long long _updateFreqency;
	double _lastUpdateTimeStamp;

}
-(void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2 ;
-(void)_dumpToAggregated;
-(id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2 ;
@end

