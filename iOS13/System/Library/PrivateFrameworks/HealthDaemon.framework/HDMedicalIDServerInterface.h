/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDMedicalIDServerInterface <NSObject>
@required
-(void)remote_fetchMedicalIDWithCompletion:(/*^block*/id)arg1;
-(void)remote_medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)remote_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1;
-(void)remote_updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1;

@end

