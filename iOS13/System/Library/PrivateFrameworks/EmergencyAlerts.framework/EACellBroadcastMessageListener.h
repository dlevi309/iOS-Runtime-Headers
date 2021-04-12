/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts
*/


@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject {

	EAEmergencyAlertCenter* _emergencyAlertCenter;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)_cellBroadcastMessageReceived:(id)arg1 ;
@end

