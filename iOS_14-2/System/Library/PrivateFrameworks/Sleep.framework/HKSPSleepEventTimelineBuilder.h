/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class HKSPSleepEventTimelineResults, HKSPSleepScheduleModel, NSDate, NSCalendar;

@interface HKSPSleepEventTimelineBuilder : NSObject {

	HKSPSleepEventTimelineResults* _results;
	HKSPSleepScheduleModel* _sleepScheduleModel;
	NSDate* _date;
	NSCalendar* _calendar;
	unsigned long long _options;

}

@property (nonatomic,readonly) HKSPSleepEventTimelineResults * results;                  //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel;              //@synthesize sleepScheduleModel=_sleepScheduleModel - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
+(id)builderWithSleepScheduleModel:(id)arg1 date:(id)arg2 ;
-(HKSPSleepEventTimelineResults *)results;
-(void)_gatherSessions;
-(void)_adjustSessionForSkippedWindDown;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_gatherSessionsForOccurrence:(id)arg1 overrideOccurrence:(id)arg2 ;
-(NSCalendar *)calendar;
-(unsigned long long)options;
-(void)_adjustSessionForSnoozedWakeUpAlarm;
-(void)_gatherSessionsForValidationForOccurrence:(id)arg1 overrideOccurrence:(id)arg2 ;
-(void)_adjustSessionForSkippedBedtime;
-(id)_windDownDateForBedtimeDate:(id)arg1 ;
-(void)_addSessionToTimelineWithWakeUpDate:(id)arg1 bedtimeDate:(id)arg2 windDownDate:(id)arg3 occurrence:(id)arg4 ;
-(void)_validateSessionAdjustmentForSnoozedWakeUpAlarm;
-(void)_adjustSessionForDismissedWakeUpAlarm;
-(void)_adjustSessions;
-(void)_adjustSessionForConfirmedWakeUp;
-(NSDate *)date;
-(id)initWithSleepScheduleModel:(id)arg1 date:(id)arg2 ;
-(id)buildTimelineWithOptions:(unsigned long long)arg1 ;
-(void)_adjustSessionForDelayedBedtime;
-(void)_validateSessionAdjustments;
@end

