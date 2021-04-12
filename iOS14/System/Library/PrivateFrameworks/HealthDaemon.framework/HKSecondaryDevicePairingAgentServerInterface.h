/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKSecondaryDevicePairingAgentServerInterface <HKUnitTestingTaskServerInterface>
@required
-(void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(/*^block*/id)arg1;
-(void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(/*^block*/id)arg2;

@end

