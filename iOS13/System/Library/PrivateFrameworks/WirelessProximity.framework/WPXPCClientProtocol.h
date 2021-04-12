/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/


@protocol WPXPCClientProtocol <NSObject>
@optional
-(void)stateDidChange:(long long)arg1;
-(void)deviceDiscovered:(id)arg1;
-(void)scanningStartedOfType:(unsigned char)arg1;
-(void)scanningStoppedOfType:(unsigned char)arg1;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2;
-(void)advertisingStartedOfType:(unsigned char)arg1;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
-(void)advertisingPendingOfType:(unsigned char)arg1;
-(void)rangingEnabled:(BOOL)arg1 withError:(id)arg2;
-(void)peerTrackingFull;
-(void)peerTrackingAvailable;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3;
-(void)connectedDeviceOverLEPipe:(id)arg1;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
-(void)bandwidthStateUpdated:(id)arg1;
-(void)anyDiscoveredDevice:(id)arg1;
-(void)devicesDiscovered:(id)arg1;
-(void)receivedTestResponse:(id)arg1;
-(void)advertiserStateDidChange:(long long)arg1;
-(void)scannerStateDidChange:(long long)arg1;
-(void)failedToRegisterZones:(id)arg1 withError:(id)arg2;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2;
-(void)exitedZone:(id)arg1;
-(void)fetchedCurrentlyTrackedZones:(id)arg1;

@required
-(void)registeredWithDaemonAndContinuingSession:(BOOL)arg1;

@end

