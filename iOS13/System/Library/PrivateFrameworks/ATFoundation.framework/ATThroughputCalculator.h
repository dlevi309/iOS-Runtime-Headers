/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {

	BOOL _suspended;
	double _lastUpdate;
	double _startTime;
	double _currentValue;
	ATMovingAverage* _average;

}

@property (nonatomic,readonly) double throughput; 
-(id)init;
-(void)resume;
-(void)suspend;
-(double)throughput;
-(BOOL)update:(double)arg1 ;
@end

