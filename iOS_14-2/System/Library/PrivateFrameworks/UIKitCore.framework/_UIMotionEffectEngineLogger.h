/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

