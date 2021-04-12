/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, _NSRefcountedPthreadMutex;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

	NSCalendar* cal;
	_NSRefcountedPthreadMutex* _lock;
	BOOL needsToCopy;

}
+(id)currentCalendar;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(void)setGregorianStartDate:(id)arg1 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(unsigned long long)firstWeekday;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(id)timeZone;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)locale;
-(void)setTimeZone:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(id)calendarIdentifier;
-(id)dateFromComponents:(id)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(id)_initWithCalendar:(id)arg1 ;
-(id)gregorianStartDate;
-(unsigned long long)hash;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(void)_copyWrappedCalendar;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)minimumDaysInFirstWeek;
-(void)dealloc;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
@end

