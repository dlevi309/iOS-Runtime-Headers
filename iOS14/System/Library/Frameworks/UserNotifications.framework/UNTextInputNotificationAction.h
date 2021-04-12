/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationAction.h>

@class NSString;

@interface UNTextInputNotificationAction : UNNotificationAction

@property (nonatomic,copy,readonly) NSString * textInputButtonTitle; 
@property (nonatomic,copy,readonly) NSString * textInputPlaceholder; 
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end

