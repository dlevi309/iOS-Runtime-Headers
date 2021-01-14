/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone;

@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allDay;
	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (nonatomic,copy,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;              //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                    //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSTimeZone *)timeZone;
-(BOOL)isAllDay;
-(id)initWithDate:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3 ;
-(id)initWithFloatingDateComponents:(id)arg1 nonFloatingDateComponents:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDueDateComponents:(id)arg1 alarms:(id)arg2 ;
@end

