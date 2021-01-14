/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKMedicalIDStoreServerInterface <NSObject>
@required
-(void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(/*^block*/id)arg1;
-(void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1;
-(void)remote_updateMedicalIDData:(id)arg1 lastFetchedMedicalIDData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchMedicalIDWithCompletion:(/*^block*/id)arg1;
-(void)remote_medicalIDClinicalContactsWithCompletion:(/*^block*/id)arg1;
-(void)remote_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1;

@end

