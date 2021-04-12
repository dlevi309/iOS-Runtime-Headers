/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_EK1 _dateGr;
	double _dateAbs;
	EKTimeZone* _timeZone;
	unsigned _flags;

}
+(id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithGregorianDate:(SCD_Struct_EK1)arg1 timeZone:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)date;
-(id)earlierDate:(id)arg1 ;
-(id)laterDate:(id)arg1 ;
-(id)timeZone;
-(unsigned long long)year;
-(unsigned long long)month;
-(unsigned long long)day;
-(unsigned long long)hour;
-(unsigned long long)minute;
-(double)second;
-(unsigned long long)weekOfYear;
-(long long)secondsFromGMT;
-(int)dayOfWeek;
-(unsigned long long)dayOfYear;
-(id)components;
-(double)absoluteTime;
-(id)calendarDateByAddingDays:(long long)arg1 ;
-(id)calendarDateForEndOfDay;
-(id)calendarDateInTimeZone:(id)arg1 ;
-(id)calendarDateForDay;
-(long long)differenceInDays:(id)arg1 ;
-(SCD_Struct_EK2)differenceAsCalGregorianUnits:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)calendarDateForMonth;
-(id)calendarDateForEndOfMonth;
-(unsigned long long)daysInMonth;
-(id)calendarDateByAddingMonths:(long long)arg1 ;
-(id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
-(id)calendarDateForWeekWithWeekStart:(int)arg1 ;
-(id)calendarDateForEndOfWeekWithWeekStart:(int)arg1 ;
-(SCD_Struct_EK1)gregorianDate;
-(id)initWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithGregorianDate:(SCD_Struct_EK1)arg1 timeZone:(id)arg2 ;
-(id)initWithDateComponents:(id)arg1 timeZone:(id)arg2 ;
-(id)componentsIncludingTime:(BOOL)arg1 ;
-(id)initWithGregorianDate:(SCD_Struct_EK1)arg1 internalTimeZone:(id)arg2 ;
-(id)calendarDateByAddingGregorianUnits:(SCD_Struct_EK2)arg1 ;
-(SCD_Struct_EK2)differenceAsGregorianUnits:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)calendarDateForWeekWithWeekStart:(int)arg1 daysSinceWeekStart:(long long*)arg2 ;
-(id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2 ;
-(id)componentsWithoutTime;
-(id)calendarDateByAddingWeeks:(long long)arg1 ;
-(id)calendarDateByAddingYears:(long long)arg1 ;
-(id)calendarDateWithDate:(id)arg1 ;
-(long long)differenceInYears:(id)arg1 ;
-(long long)differenceInMonths:(id)arg1 ;
-(double)differenceInSeconds:(id)arg1 ;
-(unsigned long long)daysInYear;
-(unsigned long long)weeksInYear;
-(id)calendarDateForYear;
@end

