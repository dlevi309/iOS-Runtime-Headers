/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKCloudSyncControlServerInterface <NSObject>
@required
-(id)remote_forceCloudResetWithCompletion:(/*^block*/id)arg1;
-(id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3;
-(id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1;
-(id)remote_fetchCloudDescriptionWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1;
-(id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1;
-(void)remote_disableCloudSyncWithCompletion:(/*^block*/id)arg1;
-(void)remote_enableCloudSyncWithCompletion:(/*^block*/id)arg1;
-(void)remote_accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1;
-(void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(/*^block*/id)arg1;
-(id)remote_fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1;
-(void)remote_requestDataRefreshWithCompletion:(/*^block*/id)arg1;

@end

