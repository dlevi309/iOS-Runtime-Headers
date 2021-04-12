/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface CalTimeIntervalLocalization : NSObject
+(id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(BOOL)arg2 ;
+(id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3 ;
+(id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(BOOL)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(BOOL)arg4 abbreviate:(BOOL)arg5 ;
+(id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(BOOL)arg4 dayDuration:(id*)arg5 hourDuration:(id*)arg6 minuteDuration:(id*)arg7 secondDuration:(id*)arg8 abbreviate:(BOOL)arg9 ;
+(id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2 ;
@end

