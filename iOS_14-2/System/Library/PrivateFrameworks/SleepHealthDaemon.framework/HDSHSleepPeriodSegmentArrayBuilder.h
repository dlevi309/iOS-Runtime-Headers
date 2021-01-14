/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/


@class NSMutableArray, NSDate, HKDateIntervalTree;

@interface HDSHSleepPeriodSegmentArrayBuilder : NSObject {

	NSMutableArray* _segments;
	long long _category;
	double _minimumInterSegmentTimeInterval;
	NSDate* _minDate;
	NSDate* _maxDate;
	HKDateIntervalTree* _sampleIntervals;

}
-(id)finish;
-(id)initWithCategory:(long long)arg1 ;
-(void)addOrderedSample:(id)arg1 ;
-(id)_createSegmentAndReset;
@end

