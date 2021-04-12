/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying, NSSecureCoding> {

	long long _dayOfTheWeek;
	long long _weekNumber;

}

@property (nonatomic,readonly) long long dayOfTheWeek;              //@synthesize dayOfTheWeek=_dayOfTheWeek - In the implementation block
@property (nonatomic,readonly) long long weekNumber;                //@synthesize weekNumber=_weekNumber - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dayOfWeek:(long long)arg1 ;
+(long long)icsWeekDayFromDayOfTheWeek:(long long)arg1 ;
+(id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2 ;
-(long long)weekNumber;
-(long long)dayOfTheWeek;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)iCalendarDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)iCalendarValueFromDayOfTheWeek:(long long)arg1 ;
@end

