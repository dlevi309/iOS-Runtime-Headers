/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol WPXPCDaemonProtocol <NSObject>
@optional
-(void)startAdvertising:(id)arg1;
-(void)unregisterEndpoint:(id)arg1;
-(void)connectToPeer:(id)arg1;
-(void)disconnectFromPeer:(id)arg1;
-(void)sendTestRequest:(id)arg1;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2;
-(void)disableScanning;
-(void)enableTestMode;
-(void)startScanning:(id)arg1;
-(void)stopScanning:(id)arg1;
-(void)checkAllowDuplicates:(/*^block*/id)arg1;
-(void)stopAdvertising:(id)arg1;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)isRangingEnabledReply:(/*^block*/id)arg1;
-(void)startTrackingPeerWithRequest:(id)arg1;
-(void)stopTrackingPeerWithRequest:(id)arg1;
-(void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3;
-(void)listenToBandwidthNotifications;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
-(void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
-(void)registerForAnyScanResults:(BOOL)arg1;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2;
-(void)startTrackingZone:(id)arg1;
-(void)stopTrackingZones:(id)arg1;
-(void)stopTrackingAllZones;
-(void)getAllTrackedZones;
-(void)getPowerLogStats:(/*^block*/id)arg1;
-(void)dumpDaemonState;
-(void)enableBubbleTestMode;
-(void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2;

@end

