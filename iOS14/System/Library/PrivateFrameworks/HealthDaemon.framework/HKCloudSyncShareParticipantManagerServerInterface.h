/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKCloudSyncShareParticipantManagerServerInterface <NSObject>
@required
-(void)remote_fetchSharingParticipantStatus:(/*^block*/id)arg1;
-(void)remote_fetchAllShareParticipantEmailAddressesWithCompletion:(/*^block*/id)arg1;
-(void)remote_revokeAccessForAllShareParticipantsWithCompletion:(/*^block*/id)arg1;
-(void)remote_tearDownHealthSharingForProfile:(id)arg1 completion:(/*^block*/id)arg2;

@end

