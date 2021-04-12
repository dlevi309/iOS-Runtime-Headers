/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <CalendarFoundation/CalRecurrenceGenerator.h>

@interface EKRecurrenceGenerator : CalRecurrenceGenerator
+(int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1 ;
-(void)_setupForEKEvent:(id)arg1 adjustDatesForAllDayEvents:(BOOL)arg2 ;
-(void)_prepareForEKRecurrence:(id)arg1 forCalendarItem:(id)arg2 ;
-(id)_copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK3)arg3 endDate:(SCD_Struct_EK3)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 adjustDatesForAllDayEvents:(BOOL)arg8 ;
-(BOOL)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(BOOL)arg4 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(SCD_Struct_EK3)arg2 endDate:(SCD_Struct_EK3)arg3 timeZone:(id)arg4 limit:(long long)arg5 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK3)arg3 endDate:(SCD_Struct_EK3)arg4 timeZone:(id)arg5 limit:(long long)arg6 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK3)arg3 endDate:(SCD_Struct_EK3)arg4 timeZone:(id)arg5 limit:(long long)arg6 adjustDatesForAllDayEvents:(BOOL)arg7 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK3)arg3 endDate:(SCD_Struct_EK3)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 ;
-(BOOL)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4 ;
@end

