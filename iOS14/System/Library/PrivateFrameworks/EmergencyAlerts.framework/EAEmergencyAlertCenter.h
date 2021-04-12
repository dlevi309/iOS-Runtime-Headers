/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts
*/


@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}
-(unsigned long long)currentAudioAndVideoCallCount;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(void)addAlertRequestForCellBroadcastMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

