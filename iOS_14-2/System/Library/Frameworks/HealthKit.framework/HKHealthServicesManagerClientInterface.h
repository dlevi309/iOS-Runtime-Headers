/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKHealthServicesManagerClientInterface <NSObject>
@required
-(void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
-(void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4;
-(void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4;
-(void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;

@end

