/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLRegion *)region;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)_initWithRegion:(id)arg1 repeats:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

