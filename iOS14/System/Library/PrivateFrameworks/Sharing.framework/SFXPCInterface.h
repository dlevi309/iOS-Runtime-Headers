/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol SFXPCInterface
@optional
-(void)deviceDiscoveryFoundDevice:(id)arg1;
-(void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;
-(void)serviceReceivedResponse:(id)arg1;
-(void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned)arg2;
-(void)serviceReceivedEvent:(id)arg1;
-(void)deviceDiscoveryLostDevice:(id)arg1;
-(void)deviceDiscoveryScanStateChanged:(long long)arg1;
-(void)sessionError:(id)arg1;
-(void)autoFillDismissUserNotification;
-(void)autoFillPairingSucceeded:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)autoFillPromptForPIN:(unsigned)arg1 throttleSeconds:(int)arg2;
-(void)proximityClientDeviceEnteredImmediate:(id)arg1;
-(void)proximityClientDeviceExitedImmediate:(id)arg1;
-(void)proximityClientDeviceEnteredNearby:(id)arg1;
-(void)proximityClientDeviceExitedNearby:(id)arg1;
-(void)proximityClientDeviceWasDismissedHandler:(id)arg1 reason:(long long)arg2;
-(void)sessionReceivedEvent:(id)arg1;
-(void)proximityClientDeviceWasSelectedHandler:(id)arg1;
-(void)proximityClientDeviceWillTriggerHandler:(id)arg1;
-(void)proximityClientDeviceDidUntriggerHandler:(id)arg1;
-(void)proximityClientDeviceUpdated:(id)arg1 rssi:(long long)arg2 state:(long long)arg3;
-(void)remoteInteractionSessionRemoteTextEvent:(id)arg1;
-(void)remoteInteractionSessionTextSessionDidBegin:(id)arg1;
-(void)remoteInteractionSessionTextSessionDidEnd:(id)arg1;
-(void)remoteInteractionSessionTextSessionDidChange:(id)arg1;
-(void)sessionBluetoothStateChanged:(long long)arg1;
-(void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2;
-(void)sessionReceivedRequest:(id)arg1;
-(void)sessionReceivedResponse:(id)arg1;
-(void)shareAudioProgressEvent:(int)arg1 info:(id)arg2;
-(void)userNotificationError:(id)arg1;
-(void)userNotificationResponse:(int)arg1;
-(void)userNotificationTextResponse:(id)arg1;
-(void)userNotificationDictionaryResponse:(id)arg1;
-(void)servicePeerDisconnected:(id)arg1 error:(id)arg2;
-(void)serviceError:(id)arg1;
-(void)serviceReceivedRequest:(id)arg1;

@end

