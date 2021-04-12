/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <libobjc.A.dylib/WDNotificationPolicy.h>
#import <UIKit/UIApplicationTestingDelegate.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesAppDelegate : NSObject <WDNotificationPolicy, UIApplicationTestingDelegate> {

	 healthStore;

}
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(id)init;
@end

