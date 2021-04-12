/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/

#import <CalendarFoundation/CalRecurrenceGenerator.h>

@interface CDBRecurrenceGenerator : CalRecurrenceGenerator
-(id)_copyOccurrenceDatesWithBirthdayEvent:(void*)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(BOOL)arg6 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5 ;
-(void)_setupForCalEvent:(void*)arg1 locked:(BOOL)arg2 ;
-(void)_prepareForCalRecurrence:(void*)arg1 locked:(BOOL)arg2 ;
-(id)computeRecurrenceEndDateForCalEvent:(void*)arg1 recurrenceRule:(void*)arg2 locked:(BOOL)arg3 ;
-(id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(BOOL)arg6 ;
@end

