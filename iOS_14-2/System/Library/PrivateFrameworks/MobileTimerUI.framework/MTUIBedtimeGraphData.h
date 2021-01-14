/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/


@class NSDateInterval, NSArray, MTAlarm, NSCalendar, NSDate;

@interface MTUIBedtimeGraphData : NSObject {

	BOOL _useTrailingWeek;
	NSDateInterval* _firstSleepAlarmInterval;
	NSArray* _allColumnData;
	MTAlarm* _sleepAlarm;
	NSCalendar* _calendar;

}

@property (nonatomic,retain) MTAlarm * sleepAlarm;                                    //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) NSArray * allColumnData;                                 //@synthesize allColumnData=_allColumnData - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                   //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) BOOL useTrailingWeek;                                    //@synthesize useTrailingWeek=_useTrailingWeek - In the implementation block
@property (nonatomic,readonly) NSDate * earliestStartOnFirstDay; 
@property (nonatomic,readonly) NSDate * latestEndOnFirstDay; 
@property (nonatomic,readonly) long long columnCount; 
@property (nonatomic,readonly) NSDateInterval * firstSleepAlarmInterval;              //@synthesize firstSleepAlarmInterval=_firstSleepAlarmInterval - In the implementation block
-(MTAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(NSCalendar *)calendar;
-(long long)columnCount;
-(id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2 ;
-(NSArray *)allColumnData;
-(NSDate *)earliestStartOnFirstDay;
-(NSDate *)latestEndOnFirstDay;
-(NSDateInterval *)firstSleepAlarmInterval;
-(id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2 useTrailingWeek:(BOOL)arg3 ;
-(id)sleepAlarmIntervalForDay:(long long)arg1 ;
-(long long)_earliestDay;
-(void)setAllColumnData:(NSArray *)arg1 ;
-(BOOL)useTrailingWeek;
-(void)setUseTrailingWeek:(BOOL)arg1 ;
@end

