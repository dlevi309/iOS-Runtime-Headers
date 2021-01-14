/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/


@protocol WPXPCDaemonProtocol <NSObject>
@optional
-(void)unregisterEndpoint:(id)arg1;
-(void)disconnectFromPeer:(id)arg1;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
-(void)stopScanning:(id)arg1;
-(void)sendTestRequest:(id)arg1;
-(void)registerForAnyScanResults:(BOOL)arg1;
-(void)stopAdvertising:(id)arg1;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 holdVouchers:(long long)arg4;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3;
-(void)enableTestMode;
-(void)stopTrackingPeerWithRequest:(id)arg1;
-(void)getPowerLogStats:(/*^block*/id)arg1;
-(void)startTrackingZone:(id)arg1;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)stopTrackingZones:(id)arg1;
-(void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2;
-(void)startTrackingPeerWithRequest:(id)arg1;
-(void)listenToBandwidthNotifications;
-(void)isRangingEnabledReply:(/*^block*/id)arg1;
-(void)dumpDaemonState;
-(void)stopTrackingAllZones;
-(void)startScanning:(id)arg1;
-(void)disableScanning;
-(void)checkAllowDuplicates:(/*^block*/id)arg1;
-(void)connectToPeer:(id)arg1;
-(void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
-(void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
-(void)startAdvertising:(id)arg1;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2;
-(void)getAllTrackedZones;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4;
-(void)enableBubbleTestMode;

@end

