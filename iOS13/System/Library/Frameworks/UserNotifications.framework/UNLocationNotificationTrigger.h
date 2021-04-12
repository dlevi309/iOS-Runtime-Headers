/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationTrigger.h>

@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger {

	CLRegion* _region;

}

@property (nonatomic,copy,readonly) CLRegion * region;              //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithRegion:(id)arg1 repeats:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLRegion *)region;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)_initWithRegion:(id)arg1 repeats:(BOOL)arg2 ;
@end

