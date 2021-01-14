/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

