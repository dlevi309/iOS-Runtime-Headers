/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)calendarDate;
+(id)distantPast;
+(id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
-(id)addTimeInterval:(double)arg1 ;
-(long long)dayOfWeek;
-(id)timeZone;
-(id)initWithString:(id)arg1 ;
-(oneway void)release;
-(id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(void)setTimeZone:(id)arg1 ;
-(void)years:(long long*)arg1 months:(long long*)arg2 days:(long long*)arg3 hours:(long long*)arg4 minutes:(long long*)arg5 seconds:(long long*)arg6 sinceDate:(id)arg7 ;
-(id)init;
-(long long)monthOfYear;
-(long long)dayOfMonth;
-(id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
-(long long)dayOfYear;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)minuteOfHour;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)descriptionWithCalendarFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 ;
-(id)calendarFormat;
-(id)timeZoneDetail;
-(long long)dayOfCommonEra;
-(long long)yearOfCommonEra;
-(long long)secondOfMinute;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)description;
-(Class)classForCoder;
-(void)setCalendarFormat:(id)arg1 ;
-(long long)microsecondOfSecond;
-(id)initWithCoder:(id)arg1 ;
-(long long)hourOfDay;
-(double)timeIntervalSinceReferenceDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

