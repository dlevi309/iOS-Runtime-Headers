/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDProfileServerInterface <NSObject>
@required
-(void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_deleteProfile:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_getAllProfilesWithCompletion:(/*^block*/id)arg1;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end

