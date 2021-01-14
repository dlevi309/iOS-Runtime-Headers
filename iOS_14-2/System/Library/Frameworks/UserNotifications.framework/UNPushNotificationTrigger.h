/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNPushNotificationTrigger : UNNotificationTrigger {

	BOOL _isContentAvailable;
	BOOL _isMutableContent;

}

@property (nonatomic,readonly) BOOL isContentAvailable;              //@synthesize isContentAvailable=_isContentAvailable - In the implementation block
@property (nonatomic,readonly) BOOL isMutableContent;                //@synthesize isMutableContent=_isMutableContent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithContentAvailable:(BOOL)arg1 mutableContent:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isContentAvailable;
-(id)_initWithContentAvailable:(BOOL)arg1 mutableContent:(BOOL)arg2 ;
-(BOOL)isMutableContent;
-(BOOL)isEqual:(id)arg1 ;
@end

