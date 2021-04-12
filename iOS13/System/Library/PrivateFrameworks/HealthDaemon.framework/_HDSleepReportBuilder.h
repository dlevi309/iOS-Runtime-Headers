/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSDateInterval, NSCalendar, NSMutableDictionary;

@interface _HDSleepReportBuilder : NSObject {

	NSDateInterval* _resultInterval;
	NSCalendar* _calendar;
	NSMutableDictionary* _inBedSamplesBySource;

}
-(id)_categorySampleBufferForSource:(id)arg1 ;
-(void)addSleepSamples:(id)arg1 ;
-(id)calculateResult;
-(id)initWithResultInterval:(id)arg1 calendar:(id)arg2 ;
@end

