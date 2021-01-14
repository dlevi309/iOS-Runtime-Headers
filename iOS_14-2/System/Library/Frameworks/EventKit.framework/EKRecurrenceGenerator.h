/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <CalendarFoundation/CalRecurrenceGenerator.h>

@interface EKRecurrenceGenerator : CalRecurrenceGenerator
+(int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1 ;
-(void)_setupForEKEvent:(id)arg1 adjustDatesForAllDayEvents:(BOOL)arg2 ;
-(BOOL)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(BOOL)arg4 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5 ;
-(id)_copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 adjustDatesForAllDayEvents:(BOOL)arg8 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6 adjustDatesForAllDayEvents:(BOOL)arg7 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6 ;
-(BOOL)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2 ;
-(void)_prepareForEKRecurrence:(id)arg1 forCalendarItem:(id)arg2 ;
@end

