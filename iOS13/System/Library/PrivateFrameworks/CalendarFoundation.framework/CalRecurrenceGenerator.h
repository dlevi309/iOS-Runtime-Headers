/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


#import <CalendarFoundation/CalendarFoundation-Structs.h>
@class NSCalendar, NSDate, NSTimeZone, NSArray;

@interface CalRecurrenceGenerator : NSObject {

	NSCalendar* _calendar;
	BOOL _allDay;
	BOOL _shouldPinMonthDays;
	int _interval;
	int _frequency;
	NSDate* _eventStartDate;
	NSDate* _eventEndDate;
	NSTimeZone* _eventTimeZone;
	NSDate* _endDate;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;
	unsigned long long _weekStart;

}

@property (nonatomic,copy) NSDate * eventStartDate;                     //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (nonatomic,copy) NSDate * eventEndDate;                       //@synthesize eventEndDate=_eventEndDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * eventTimeZone;                  //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (assign,nonatomic) BOOL allDay;                               //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSArray * daysOfTheWeek;                     //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
@property (nonatomic,copy) NSArray * daysOfTheMonth;                    //@synthesize daysOfTheMonth=_daysOfTheMonth - In the implementation block
@property (nonatomic,copy) NSArray * daysOfTheYear;                     //@synthesize daysOfTheYear=_daysOfTheYear - In the implementation block
@property (nonatomic,copy) NSArray * weeksOfTheYear;                    //@synthesize weeksOfTheYear=_weeksOfTheYear - In the implementation block
@property (nonatomic,copy) NSArray * monthsOfTheYear;                   //@synthesize monthsOfTheYear=_monthsOfTheYear - In the implementation block
@property (nonatomic,copy) NSArray * setPositions;                      //@synthesize setPositions=_setPositions - In the implementation block
@property (assign,nonatomic) int interval;                              //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) int frequency;                             //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) unsigned long long weekStart;              //@synthesize weekStart=_weekStart - In the implementation block
@property (assign,nonatomic) BOOL shouldPinMonthDays;                   //@synthesize shouldPinMonthDays=_shouldPinMonthDays - In the implementation block
-(id)init;
-(int)interval;
-(void)setInterval:(int)arg1 ;
-(NSDate *)endDate;
-(double)duration;
-(void)setEndDate:(NSDate *)arg1 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(unsigned long long)weekStart;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setSetPositions:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(NSDate *)eventStartDate;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(void)setWeekStart:(unsigned long long)arg1 ;
-(NSTimeZone *)eventTimeZone;
-(void)setEventTimeZone:(NSTimeZone *)arg1 ;
-(void)setEventStartDate:(NSDate *)arg1 ;
-(void)setEventEndDate:(NSDate *)arg1 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg1 allDay:(BOOL)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6 ;
-(id)copyOccurrenceDatesBetweenStartDate:(SCD_Struct_EK1)arg1 endDate:(SCD_Struct_EK1)arg2 timeZone:(id)arg3 limit:(long long)arg4 ;
-(NSDate *)eventEndDate;
-(double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3 ;
-(id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 timeZone:(id)arg4 ;
-(id)computeRecurrenceEndDate:(unsigned long long)arg1 ;
-(BOOL)_isSimpleYearlyRecurrence;
-(BOOL)_validateCalDate:(SCD_Struct_EK1)arg1 pinned:(BOOL)arg2 ;
-(BOOL)shouldPinMonthDays;
-(void)setShouldPinMonthDays:(BOOL)arg1 ;
@end

