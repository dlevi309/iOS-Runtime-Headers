/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTPersistenceMetricsDelegate <NSObject>
@required
-(void)onDailyMetricsNotification:(id)arg1;
-(void)persistenceStore:(id)arg1 didPrepareWithContext:(id)arg2;
-(void)persistenceStoreFailedWithError:(id)arg1;
-(void)persistenceStoreResetSyncWithUserInfo:(id)arg1;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didStartMigratingStore:(id)arg3 withModelProvider:(id)arg4;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didFinishMigratingStore:(id)arg3 withModelProvider:(id)arg4;

@end

