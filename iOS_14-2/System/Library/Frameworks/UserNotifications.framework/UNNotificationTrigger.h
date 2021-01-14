/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding> {

	BOOL _repeats;

}

@property (nonatomic,readonly) BOOL repeats;              //@synthesize repeats=_repeats - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)nextTriggerDate;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)repeats;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(double)_retroactiveTriggerHysteresis;
-(id)_initWithRepeats:(BOOL)arg1 ;
-(id)nextTriggerDateAfterLastTriggerDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

