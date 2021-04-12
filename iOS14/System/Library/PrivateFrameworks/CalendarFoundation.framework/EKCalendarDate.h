/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSCalendar, NSDate, NSDateComponents;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {

	NSCalendar* _calendar;
	NSDate* _date;
	NSDateComponents* _components;
	NSDateComponents* _originalComponents;

}
+(id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4 ;
-(long long)hour;
-(long long)second;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 ;
-(long long)day;
-(int)dayOfWeek;
-(long long)year;
-(id)initWithDate:(id)arg1 originalComponents:(id)arg2 components:(id)arg3 calendar:(id)arg4 ;
-(id)timeZone;
-(long long)month;
-(long long)compare:(id)arg1 ;
-(id)calendarDateByAddingSeconds:(long long)arg1 ;
-(unsigned long long)weekOfYear;
-(long long)minute;
-(id)calendarDateForWeekWithWeekStart:(int)arg1 daysSinceWeekStart:(long long*)arg2 ;
-(id)calendarDateForEndOfYear;
-(id)calendarDateForDay;
-(id)initWithDate:(id)arg1 originalComponents:(id)arg2 components:(id)arg3 timeZone:(id)arg4 ;
-(id)laterDate:(id)arg1 ;
-(unsigned long long)dayOfYear;
-(unsigned long long)daysInYear;
-(id)calendar;
-(id)calendarDateByComponentwiseAddingComponents:(id)arg1 ;
-(id)timeComponents;
-(id)calendarDateForMonth;
-(id)calendarDateByAddingHours:(long long)arg1 ;
-(id)componentsWithoutTime;
-(unsigned long long)daysInMonth;
-(long long)differenceInMonths:(id)arg1 ;
-(id)differenceAsDateComponents:(id)arg1 units:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)calendarDateForEndOfMonth;
-(id)weekComponents;
-(double)absoluteTime;
-(id)components;
-(id)calendarDateForEndOfWeekWithWeekStart:(int)arg1 ;
-(long long)era;
-(id)dayTimeComponents;
-(id)description;
-(id)calendarDateByAddingGregorianUnits:(SCD_Struct_EK2)arg1 ;
-(SCD_Struct_EK2)differenceAsGregorianUnits:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)calendarDateByAddingComponents:(id)arg1 ;
-(id)calendarDateInTimeZone:(id)arg1 ;
-(id)calendarDateByAddingMonths:(long long)arg1 ;
-(long long)differenceInDays:(id)arg1 ;
-(id)calendarDateByAddingDays:(long long)arg1 ;
-(double)differenceInSeconds:(id)arg1 ;
-(id)initWithDateComponents:(id)arg1 calendar:(id)arg2 ;
-(unsigned long long)weeksInYear;
-(id)calendarDateByAddingYears:(long long)arg1 ;
-(id)calendarDateForYear;
-(id)calendarDateByAddingMinutes:(long long)arg1 ;
-(id)dayComponents;
-(long long)secondsFromGMT;
-(id)allComponents;
-(id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
-(id)initWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)calendarDateByComponentwiseAddingSeconds:(long long)arg1 ;
-(id)initWithDateComponents:(id)arg1 timeZone:(id)arg2 ;
-(long long)differenceInYears:(id)arg1 ;
-(id)date;
-(id)calendarDateWithDate:(id)arg1 ;
-(id)earlierDate:(id)arg1 ;
-(id)calendarDateForEndOfDay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)calendarDateByAddingWeeks:(long long)arg1 ;
-(id)calendarDateForWeekWithWeekStart:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)differenceAsComponentwiseDateComponents:(id)arg1 ;
-(id)initWithDate:(id)arg1 components:(id)arg2 timeZone:(id)arg3 ;
@end

