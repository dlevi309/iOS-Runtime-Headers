/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/Heart.healthplugin/Heart
*/

#import <libobjc.A.dylib/WDNotificationPolicy.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@interface Heart.HeartAppDelegate : NSObject <WDNotificationPolicy, UNUserNotificationCenterDelegate>
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(id)init;
@end

