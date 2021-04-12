/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(int)days;
-(int)ordinalValue;
-(void)setOrdinalValue:(int)arg1 ;
-(id)recurrenceRule;
-(id)daysOfTheWeek;
-(void)setDayNumbers:(NSArray *)arg1 ;
-(void)setMonthNumbers:(NSArray *)arg1 ;
-(void)_setDefaultValues;
-(long long)_frequencyToUse;
-(NSArray *)dayNumbers;
-(NSArray *)monthNumbers;
-(id)setPositions;
-(id)daysOfTheWeekWithWeek:(long long)arg1 ;
-(void)setDays:(int)arg1 ;
@end

