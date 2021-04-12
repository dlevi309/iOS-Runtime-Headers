/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(BOOL)isAllDay;
-(id)initWithDueDateComponents:(id)arg1 alarms:(id)arg2 ;
-(id)initWithFloatingDateComponents:(id)arg1 nonFloatingDateComponents:(id)arg2 ;
-(id)initWithDate:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3 ;
@end

