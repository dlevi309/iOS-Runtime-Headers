/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSDictionary, NSDateInterval, NSCalendar, NSArray, NSDate;

@interface _HDSleepReportResult : NSObject {

	NSDictionary* _inBedSamplesBySource;
	NSDateInterval* _dateInterval;
	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * sources; 
@property (nonatomic,readonly) BOOL usedAppleBedtimeAlarm; 
@property (nonatomic,readonly) double appleBedtimeCorrection; 
@property (nonatomic,readonly) double appleBedtimeDeltaFromSleepDayStart; 
@property (nonatomic,readonly) NSDate * appleBedtime; 
@property (nonatomic,readonly) NSDate * appleWaketime; 
@property (nonatomic,readonly) NSDate * appleCorrectedBedtime; 
@property (nonatomic,readonly) double appleTotalInBedTime; 
@property (nonatomic,readonly) NSDate * appleFirstSleepInterruption; 
@property (nonatomic,readonly) NSDate * appleStartOfLongestSleepInterval; 
@property (nonatomic,readonly) NSDate * appleFinalWakeupTime; 
+(id)_correctedDateFromDate:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3 ;
-(NSDateInterval *)dateInterval;
-(NSArray *)sources;
-(BOOL)usedAppleBedtimeAlarm;
-(NSDate *)appleBedtime;
-(NSDate *)appleCorrectedBedtime;
-(double)appleBedtimeCorrection;
-(NSDate *)appleFirstSleepInterruption;
-(NSDate *)appleStartOfLongestSleepInterval;
-(NSDate *)appleWaketime;
-(double)appleTotalInBedTime;
-(NSDate *)appleFinalWakeupTime;
-(id)deviceForSource:(id)arg1 ;
-(id)sleepOnsetForSource:(id)arg1 ;
-(id)finalWakeupForSource:(id)arg1 ;
-(double)appleBedtimeDeltaFromSleepDayStart;
-(id)_firstAppleInBedSample;
-(id)_lastEndDateInSampleArray:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 inBedSamplesBySource:(id)arg2 calendar:(id)arg3 ;
@end

