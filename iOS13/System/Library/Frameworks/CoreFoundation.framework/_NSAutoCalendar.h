/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, NSLocale, NSTimeZone, NSDate;

@interface _NSAutoCalendar : NSCalendar {

	NSCalendar* cal;
	NSLocale* changedLocale;
	NSTimeZone* changedTimeZone;
	unsigned long long changedFirstWeekday;
	unsigned long long changedMinimumDaysinFirstWeek;
	NSDate* changedGregorianStartDate;
	unsigned long long combinedNoteCount;
	os_unfair_lock_s _lock;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)calendarIdentifier;
-(void)setLocale:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(unsigned long long)firstWeekday;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(unsigned long long)minimumDaysInFirstWeek;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)timeZone;
-(id)_init;
-(id)locale;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_update;
@end

