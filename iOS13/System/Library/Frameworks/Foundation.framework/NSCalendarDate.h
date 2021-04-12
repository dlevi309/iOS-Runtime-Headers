/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDate.h>

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {

	unsigned long long refCount;
	double _timeIntervalSinceReferenceDate;
	NSTimeZone* _timeZone;
	NSString* _formatString;
	void* _reserved;

}
+(BOOL)supportsSecureCoding;
+(id)distantFuture;
+(id)distantPast;
+(id)calendarDate;
+(id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(oneway void)release;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)descriptionWithLocale:(id)arg1 ;
-(double)timeIntervalSinceReferenceDate;
-(void)setTimeZone:(id)arg1 ;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)addTimeInterval:(double)arg1 ;
-(id)timeZone;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)setCalendarFormat:(id)arg1 ;
-(id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(id)calendarFormat;
-(id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
-(id)timeZoneDetail;
-(long long)dayOfCommonEra;
-(long long)yearOfCommonEra;
-(long long)monthOfYear;
-(long long)dayOfMonth;
-(long long)dayOfWeek;
-(long long)dayOfYear;
-(long long)hourOfDay;
-(long long)minuteOfHour;
-(long long)secondOfMinute;
-(long long)microsecondOfSecond;
-(id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(void)years:(long long*)arg1 months:(long long*)arg2 days:(long long*)arg3 hours:(long long*)arg4 minutes:(long long*)arg5 seconds:(long long*)arg6 sinceDate:(id)arg7 ;
-(id)descriptionWithCalendarFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 ;
@end

