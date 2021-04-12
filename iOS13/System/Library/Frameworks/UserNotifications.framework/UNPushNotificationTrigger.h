/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithContentAvailable:(BOOL)arg1 mutableContent:(BOOL)arg2 ;
-(BOOL)isContentAvailable;
-(BOOL)isMutableContent;
@end

