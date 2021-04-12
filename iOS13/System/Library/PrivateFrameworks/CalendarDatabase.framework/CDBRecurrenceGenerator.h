/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <CalendarFoundation/CalRecurrenceGenerator.h>

@interface CDBRecurrenceGenerator : CalRecurrenceGenerator
-(id)computeRecurrenceEndDateForCalEvent:(void*)arg1 recurrenceRule:(void*)arg2 locked:(BOOL)arg3 ;
-(id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(SCD_Struct_CD5)arg2 endDate:(SCD_Struct_CD5)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(BOOL)arg6 ;
-(void)_setupForCalEvent:(void*)arg1 locked:(BOOL)arg2 ;
-(id)_copyOccurrenceDatesWithBirthdayEvent:(void*)arg1 startDate:(SCD_Struct_CD5)arg2 endDate:(SCD_Struct_CD5)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(BOOL)arg6 ;
-(void)_prepareForCalRecurrence:(void*)arg1 locked:(BOOL)arg2 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5 ;
@end

