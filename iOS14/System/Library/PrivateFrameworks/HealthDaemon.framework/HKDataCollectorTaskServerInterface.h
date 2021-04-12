/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKDataCollectorTaskServerInterface <HKUnitTestingTaskServerInterface>
@required
-(void)remote_registerWithCompletion:(/*^block*/id)arg1;
-(void)remote_synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)remote_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(/*^block*/id)arg6;

@end

