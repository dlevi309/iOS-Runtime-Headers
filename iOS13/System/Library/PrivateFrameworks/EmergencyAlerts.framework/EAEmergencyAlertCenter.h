/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts
*/


@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}
-(id)init;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)currentCallCount;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(void)addAlertRequestForCellBroadcastMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

