/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,copy,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithDateMatchingComponents:(id)arg1 repeats:(BOOL)arg2 ;
-(id)nextTriggerDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDateComponents *)dateComponents;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)_initWithDateComponents:(id)arg1 repeats:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

