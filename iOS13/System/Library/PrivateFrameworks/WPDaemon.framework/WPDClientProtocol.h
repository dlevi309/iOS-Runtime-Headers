/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol WPDClientProtocol <NSObject>
@optional
-(void)disconnectFromPeer:(id)arg1;
-(void)resetConnection;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
-(void)advertisingStartedOfType:(unsigned char)arg1;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
-(void)advertisingPendingOfType:(unsigned char)arg1;
-(void)peerTrackingFull;
-(void)peerTrackingAvailable;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3;
-(void)connectedDeviceOverLEPipe:(id)arg1;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
-(void)anyDiscoveredDevice:(id)arg1;
-(void)receivedTestResponse:(id)arg1;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2;
-(void)exitedZone:(id)arg1;
-(void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2;
-(void)disconnectedPeer:(id)arg1 error:(id)arg2;
-(id)getManager;
-(void)readyForDataTransfer;
-(id)xpcConnectionForClient;
-(void)discoveredDevice:(id)arg1;
-(void)discoveredDevices:(id)arg1;
-(void)createdConnection:(id)arg1;
-(id)connectionForUUID:(id)arg1;
-(void)receivedData:(id)arg1 fromCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;

@end

