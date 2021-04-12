/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)repeats;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(double)_retroactiveTriggerHysteresis;
-(id)_initWithRepeats:(BOOL)arg1 ;
-(id)nextTriggerDate;
-(id)nextTriggerDateAfterLastTriggerDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
@end

