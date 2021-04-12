/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol PSYSyncCoordinatorDelegate <NSObject>
@optional
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
-(void)supportsMigrationSync;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;

@end

