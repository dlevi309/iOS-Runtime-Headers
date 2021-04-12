/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKNanoSyncControlServer <NSObject>
@required
-(void)remote_fetchNanoSyncPairedDevicesWithCompletion:(/*^block*/id)arg1;
-(void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)remote_resetNanoSyncWithCompletion:(/*^block*/id)arg1;
-(void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3;

@end

