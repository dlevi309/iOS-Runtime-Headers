/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts
*/


@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject {

	EAEmergencyAlertCenter* _emergencyAlertCenter;

}
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)dealloc;
-(void)_cellBroadcastMessageReceived:(id)arg1 ;
@end

