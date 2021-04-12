/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@interface NewsUI2.UserNotificationDelegate : NSObject <UNUserNotificationCenterDelegate> {

	 notificationResponseHandlerManager;
	 notificationOpenSettingsHandler;
	 navigator;

}
-(id)init;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
@end

