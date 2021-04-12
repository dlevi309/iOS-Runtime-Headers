/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


#import <AppleAccount/AppleAccount-Structs.h>
@interface AAUserNotification : NSObject
+(id)_defaultParameters;
+(void)_waitForResponseAndReleaseNotification:(CFUserNotificationRef)arg1 completion:(/*^block*/id)arg2 ;
+(void)waitForResponseToNotification:(CFUserNotificationRef)arg1 completion:(/*^block*/id)arg2 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 textFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 secureTextFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

