/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFrequency:(int)arg1 ;
-(void)setWeekStart:(unsigned long long)arg1 ;
-(int)frequency;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setInterval:(int)arg1 ;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(id)init;
-(int)interval;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3 ;
-(id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(BOOL)_isSimpleYearlyRecurrence;
-(BOOL)_validateCalDate:(SCD_Struct_Ca4)arg1 pinned:(BOOL)arg2 ;
-(NSTimeZone *)eventTimeZone;
-(BOOL)allDay;
-(NSArray *)weeksOfTheYear;
-(NSArray *)daysOfTheYear;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setSetPositions:(NSArray *)arg1 ;
-(BOOL)shouldPinMonthDays;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setEventStartDate:(NSDate *)arg1 ;
-(void)setEventEndDate:(NSDate *)arg1 ;
-(void)setEventTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)eventStartDate;
-(NSDate *)eventEndDate;
-(id)copyOccurrenceDatesBetweenStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 limit:(long long)arg4 ;
-(void)setShouldPinMonthDays:(BOOL)arg1 ;
-(id)computeRecurrenceEndDate:(unsigned long long)arg1 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg1 allDay:(BOOL)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6 ;
-(unsigned long long)weekStart;
-(NSArray *)daysOfTheMonth;
-(double)duration;
-(NSArray *)monthsOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(NSArray *)setPositions;
@end

