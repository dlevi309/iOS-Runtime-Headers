/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@interface REMRecurrenceRuleFormatter : NSObject
+(id)_daysOfWeek;
+(id)naturalLanguageDescriptionForRecurrenceRule:(id)arg1 withStartDate:(id)arg2 ;
+(id)naturalLanguageDescriptionForFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 withStartDate:(id)arg10 ;
+(id)_readableWeekDays;
+(id)_readableMonths;
+(long long)daysTypeForDayArray:(id)arg1 ;
+(id)_andDaysOfWeekString:(id)arg1 ;
+(id)_weekDayPositionAsString:(long long)arg1 ;
+(id)_orDaysOfWeekString:(id)arg1 ;
+(id)_dayOfMonthAsString:(long long)arg1 ;
+(id)_numberedWeekDayString:(id)arg1 ;
+(id)_customDayCombinationDescription:(id)arg1 ;
+(id)shortNaturalLanguageDescriptionForFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 setPositions:(id)arg6 date:(id)arg7 timeZone:(id)arg8 lowercase:(BOOL)arg9 ;
+(id)_stringForDayOfWeek:(long long)arg1 ;
+(id)_stringForByDayOfWeek:(id)arg1 setPositions:(id)arg2 ;
+(id)_stringForMonthNumber:(long long)arg1 ;
+(id)_localizedOfMonthStringForMonth:(id)arg1 ;
+(id)_byDayOfWeekOrdinalStrings;
+(id)_customByDayItemFormatLocalizedString;
+(long long)repeatTypeForFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 recurrenceDate:(id)arg10 recurrenceTimeZone:(id)arg11 getRepeatEnd:(out id*)arg12 ;
+(id)shortNaturalLanguageDescriptionForRecurrenceRule:(id)arg1 date:(id)arg2 timeZone:(id)arg3 lowercase:(BOOL)arg4 ;
+(long long)repeatTypeForRecurrenceRules:(id)arg1 recurrenceDate:(id)arg2 recurrenceTimeZone:(id)arg3 getRepeatEnd:(out id*)arg4 ;
+(id)localizedDescriptionForRepeatType:(long long)arg1 ;
+(id)localizedEveryStringForFrequency:(long long)arg1 ;
@end

