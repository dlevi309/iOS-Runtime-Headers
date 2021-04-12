/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDHealthServicesServerInterface <NSObject>
@required
-(void)remote_beginBluetoothStatusUpdates:(/*^block*/id)arg1 client:(id)arg2;
-(void)remote_endBluetoothStatusUpdates;
-(void)remote_fetchSupportedServiceIDsWithCompletion:(/*^block*/id)arg1;
-(void)remote_startHealthServiceDiscovery:(long long)arg1 client:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)remote_endHealthServiceDiscovery:(unsigned long long)arg1;
-(void)remote_startHealthServiceSession:(id)arg1 client:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)remote_endHealthServiceSession:(unsigned long long)arg1;
-(void)remote_getHealthPeripheralsWithFilter:(unsigned long long)arg1 handler:(/*^block*/id)arg2;
-(void)remote_addPairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)remote_removePairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)remote_getSupportedPropertyNamesWithHandler:(/*^block*/id)arg1;
-(void)remote_getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;
-(void)remote_performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)remote_removePeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)remote_getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)remote_setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

