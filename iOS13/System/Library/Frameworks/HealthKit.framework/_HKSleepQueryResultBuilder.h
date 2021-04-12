/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDateInterval, NSArray, NSMutableDictionary;

@interface _HKSleepQueryResultBuilder : NSObject {

	NSDateInterval* _resultInterval;
	NSArray* _sourceOrder;
	NSMutableDictionary* _samplesByCategoryValue;
	NSMutableDictionary* _samplesBySource;

}
-(id)_categorySampleBufferForCategoryValue:(long long)arg1 ;
-(id)_categorySampleBufferForSource:(id)arg1 ;
-(id)_organizeSamplesBySource:(id)arg1 ;
-(id)_createDateIntervalsFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithResultInterval:(id)arg1 sourceOrder:(id)arg2 ;
-(void)addSleepSamples:(id)arg1 ;
-(id)calculateResult;
@end

