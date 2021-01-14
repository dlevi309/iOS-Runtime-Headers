/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <libobjc.A.dylib/WDNotificationPolicy.h>
#import <UIKit/UIApplicationTestingDelegate.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesAppDelegate : NSObject <WDNotificationPolicy, UIApplicationTestingDelegate> {

	 healthStore;

}
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
@end

