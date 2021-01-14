/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol ICNanoPairedDeviceStatusObserver <NSObject>
@optional
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didFinishInitialSyncForPairingIdentifier:(id)arg2;
-(void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)arg1;
-(void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)arg1;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2;

@end

