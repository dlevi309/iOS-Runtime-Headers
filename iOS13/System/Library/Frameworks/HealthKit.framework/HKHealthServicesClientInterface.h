/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKHealthServicesClientInterface <NSObject>
@required
-(void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
-(void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4;
-(void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4;
-(void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;

@end

