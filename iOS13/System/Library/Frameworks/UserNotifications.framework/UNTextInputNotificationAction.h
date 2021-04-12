/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationAction.h>

@class NSString;

@interface UNTextInputNotificationAction : UNNotificationAction

@property (nonatomic,copy,readonly) NSString * textInputButtonTitle; 
@property (nonatomic,copy,readonly) NSString * textInputPlaceholder; 
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

