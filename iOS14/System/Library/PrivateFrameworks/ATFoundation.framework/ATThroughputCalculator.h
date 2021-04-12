/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)update:(double)arg1 ;
-(void)suspend;
-(id)init;
-(double)throughput;
-(void)resume;
@end

