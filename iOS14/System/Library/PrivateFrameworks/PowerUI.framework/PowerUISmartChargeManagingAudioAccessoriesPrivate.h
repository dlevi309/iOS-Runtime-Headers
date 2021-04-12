/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol PowerUISmartChargeManagingAudioAccessoriesPrivate <PowerUISmartChargeManagingAudioAccessories>
@required
-(void)getAvailableDevicesWithHandler:(/*^block*/id)arg1;
-(void)startMockingBluetoothForFakeDevice:(id)arg1;
-(void)stopMockingBluetooth;
-(void)clearLastActionForDevice:(id)arg1;
-(void)fakeConnectionForDevice:(id)arg1;
-(void)engageUntil:(id)arg1 forDevice:(id)arg2 overrideAllSignals:(BOOL)arg3 withHandler:(/*^block*/id)arg4;
-(void)lastActionForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)deleteRecordsForDevices:(id)arg1;
-(void)getStatusForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setFakeConnectionStatusTo:(BOOL)arg1;

@end

