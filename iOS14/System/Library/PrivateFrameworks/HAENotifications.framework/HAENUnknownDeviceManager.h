/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


#import <HAENotifications/HAENotifications-Structs.h>
@class NSString;

@interface HAENUnknownDeviceManager : NSObject {

	BOOL _alertSupported;
	CFUserNotificationRef _notification;
	NSString* _deviceName;
	os_unfair_lock_s _lock;
	int _connectionCnt;
	BOOL _alertPending;
	unsigned long long _adamSessionID;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)_isAlertSupported;
-(BOOL)unknownWiredHeadsetConnected;
-(void)updateWiredDeviceStatus;
-(void)unknownWiredConnectionDidChange:(BOOL)arg1 ;
-(void)_wiredDeviceSessionCreated:(id)arg1 SessionID:(unsigned long long)arg2 ;
-(void)_wiredDeviceSessionInit:(id)arg1 ;
-(void)_processWiredDevice:(id)arg1 ;
-(void)_resetWiredStatus;
-(BOOL)_shouldSurfaceAlert:(id)arg1 ;
-(void)_processPrompt:(id)arg1 ;
-(void)_updateMXVolumeLimitStatus:(id)arg1 ;
-(BOOL)_isUnknownWiredHeadset:(id)arg1 ;
-(void)surfaceAlertBox;
-(void)_wiredDeviceSessionDestroyed:(id)arg1 ;
-(void)deviceSessionCreated:(id)arg1 SessionID:(unsigned long long)arg2 ;
-(void)deviceSessionDestroyed:(id)arg1 ;
@end

