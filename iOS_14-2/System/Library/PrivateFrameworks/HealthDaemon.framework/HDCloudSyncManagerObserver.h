/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDCloudSyncManagerObserver
@required
-(void)cloudSyncManager:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPushDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPullDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPulledUpdateDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end

