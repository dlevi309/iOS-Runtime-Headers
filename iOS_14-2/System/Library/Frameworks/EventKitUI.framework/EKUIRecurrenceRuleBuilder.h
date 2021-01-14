/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject {

	int _days;
	int _ordinalValue;
	long long _frequency;
	long long _interval;
	unsigned long long _count;
	NSArray* _dayNumbers;
	NSArray* _monthNumbers;

}

@property (assign) long long frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign) long long interval;                    //@synthesize interval=_interval - In the implementation block
@property (assign) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (retain) NSArray * dayNumbers;                  //@synthesize dayNumbers=_dayNumbers - In the implementation block
@property (assign) int days;                              //@synthesize days=_days - In the implementation block
@property (assign) int ordinalValue;                      //@synthesize ordinalValue=_ordinalValue - In the implementation block
@property (retain) NSArray * monthNumbers;                //@synthesize monthNumbers=_monthNumbers - In the implementation block
-(void)setFrequency:(long long)arg1 ;
-(int)days;
-(void)setCount:(unsigned long long)arg1 ;
-(long long)frequency;
-(void)setInterval:(long long)arg1 ;
-(id)init;
-(long long)interval;
-(void)setDayNumbers:(NSArray *)arg1 ;
-(unsigned long long)count;
-(int)ordinalValue;
-(void)setOrdinalValue:(int)arg1 ;
-(id)description;
-(void)setMonthNumbers:(NSArray *)arg1 ;
-(id)recurrenceRule;
-(void)setDays:(int)arg1 ;
-(void)_setDefaultValues;
-(long long)_frequencyToUse;
-(NSArray *)dayNumbers;
-(NSArray *)monthNumbers;
-(id)daysOfTheWeekWithWeek:(long long)arg1 ;
-(id)daysOfTheWeek;
-(id)setPositions;
@end

