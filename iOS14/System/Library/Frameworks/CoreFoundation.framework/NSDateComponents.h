/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCalendar, NSTimeZone, NSDate;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) long long era; 
@property (assign) long long year; 
@property (assign) long long month; 
@property (assign) long long day; 
@property (assign) long long hour; 
@property (assign) long long minute; 
@property (assign) long long second; 
@property (assign) long long nanosecond; 
@property (assign) long long weekday; 
@property (assign) long long weekdayOrdinal; 
@property (assign) long long quarter; 
@property (assign) long long weekOfMonth; 
@property (assign) long long weekOfYear; 
@property (assign) long long yearForWeekOfYear; 
@property (getter=isLeapMonth) BOOL leapMonth; 
@property (copy,readonly) NSDate * date; 
@property (getter=isValidDate,readonly) BOOL validDate; 
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)hour;
-(long long)week;
-(void)setEra:(long long)arg1 ;
-(long long)quarter;
-(long long)weekday;
-(long long)second;
-(long long)nanosecond;
-(void)setQuarter:(long long)arg1 ;
-(long long)weekOfMonth;
-(void)setWeekday:(long long)arg1 ;
-(BOOL)isLeapMonth;
-(BOOL)isValidDate;
-(void)setWeekOfMonth:(long long)arg1 ;
-(_CFDateComponents*)_dateComponents;
-(void)setYear:(long long)arg1 ;
-(void)setNanosecond:(long long)arg1 ;
-(void)setWeekOfYear:(long long)arg1 ;
-(void)setLeapMonth:(BOOL)arg1 ;
-(long long)weekdayOrdinal;
-(BOOL)isLeapMonthSet;
-(long long)day;
-(long long)yearForWeekOfYear;
-(void)setWeekdayOrdinal:(long long)arg1 ;
-(void)setYearForWeekOfYear:(long long)arg1 ;
-(BOOL)isValidDateInCalendar:(id)arg1 ;
-(long long)year;
-(NSTimeZone *)timeZone;
-(void)setMonth:(long long)arg1 ;
-(long long)month;
-(id)_initWithCFDateComponents:(_CFDateComponents*)arg1 ;
-(void)setDay:(long long)arg1 ;
-(long long)weekOfYear;
-(void)setHour:(long long)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(long long)valueForComponent:(unsigned long long)arg1 ;
-(id)init;
-(long long)minute;
-(NSCalendar *)calendar;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)era;
-(void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2 ;
-(id)description;
-(void)setMinute:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(long long)arg1 ;
-(void)setWeek:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

