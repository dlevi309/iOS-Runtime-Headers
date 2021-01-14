/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


#import <CalendarFoundation/CalendarFoundation-Structs.h>
@interface CalDateLocalization : NSObject
+(BOOL)hasAMPM;
+(id)sharedDateFormatter;
+(BOOL)uses24HourTime;
+(void)initializeFormatters;
+(void)rebuildFormatters;
+(void)rebuildWeekendDays;
+(BOOL)weekdayIsWeekend:(long long)arg1 ;
+(void)generateLocalizedDateTimeFormats;
+(id)weekendDays;
+(id)ICUFormats;
+(BOOL)shouldUseHourMinutesWithoutAMPMForHours;
+(void)setupFormatter:(CFDateFormatterRef)arg1 forKey:(id)arg2 ;
+(void)setupFormat:(id)arg1 forKey:(id)arg2 locale:(id)arg3 ;
+(void)setupFormatTemplate:(id)arg1 forKey:(id)arg2 locale:(id)arg3 ;
+(id)_hourSymbolInFormat:(id)arg1 ;
+(void)generateStandardFormatters:(id)arg1 ;
+(void)generateAdditionalPrecodedFormatters:(id)arg1 ;
+(void)generateDerivedTimeFormats:(id)arg1 ;
+(void)generatePreferedOrders;
+(id)dateFormatters;
+(id)calendarDayFormatter;
+(id)dateFormatterForKey:(id)arg1 formatString:(id)arg2 ;
+(BOOL)dateIsWeekend:(id)arg1 ;
+(id)formatKeyForHourString;
+(id)sizeOrderedDateFormats;
+(id)sizeOrderedDateFormatsWithYear;
+(id)sizeOrderedDateFormatsWithoutYear;
+(id)sizeOrderedAllDateFormatsWithoutYear;
+(id)ICUFormatForKey:(id)arg1 ;
+(CFDateFormatterRef)dateFormatterForKey:(id)arg1 ;
+(id)intervalStringFromDate:(id)arg1 toDate:(id)arg2 withFormat:(id)arg3 options:(int)arg4 ;
@end

