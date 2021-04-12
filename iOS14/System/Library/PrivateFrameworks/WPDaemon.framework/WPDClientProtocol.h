/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol WPDClientProtocol <NSObject>
@optional
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
-(void)exitedZone:(id)arg1;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4;
-(void)advertisingPendingOfType:(unsigned char)arg1;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3;
-(void)readyForDataTransfer;
-(void)advertisingStartedOfType:(unsigned char)arg1;
-(void)disconnectFromPeer:(id)arg1;
-(void)connectedDeviceOverLEPipe:(id)arg1;
-(void)peerTrackingAvailable;
-(void)peerTrackingFull;
-(void)resetConnection;
-(void)discoveredDevices:(id)arg1;
-(void)anyDiscoveredDevice:(id)arg1;
-(id)getManager;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2;
-(void)disconnectedPeer:(id)arg1 error:(id)arg2;
-(void)discoveredDevice:(id)arg1;
-(void)createdConnection:(id)arg1;
-(id)connectionForUUID:(id)arg1;
-(void)receivedTestResponse:(id)arg1;
-(void)receivedData:(id)arg1 fromCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
-(id)xpcConnectionForClient;
-(void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2;

@end

