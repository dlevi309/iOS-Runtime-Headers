/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger {

	double _timeInterval;

}

@property (nonatomic,readonly) double timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 ;
-(id)nextTriggerDate;
-(double)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)_initWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

