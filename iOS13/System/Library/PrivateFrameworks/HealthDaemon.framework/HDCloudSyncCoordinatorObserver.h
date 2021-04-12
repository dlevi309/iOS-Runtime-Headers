/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDCloudSyncCoordinatorObserver
@required
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateLastPushDate:(id)arg2 lastPullDate:(id)arg3;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;

@end

