/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKProfileStoreServer <NSObject>
@required
-(void)remote_fetchDisplayImageData:(/*^block*/id)arg1;
-(void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_deleteProfile:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_getAllProfilesWithCompletion:(/*^block*/id)arg1;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 ownerAppleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_fetchDisplayNameWithCompletion:(/*^block*/id)arg1;
-(void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setDisplayImageData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_startObservingWithCompletion:(/*^block*/id)arg1;

@end

