/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(long long)columnCount;
-(MTAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
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

