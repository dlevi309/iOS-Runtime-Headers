/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol PSYSyncSessionObserverDelegate <NSObject>
@optional
-(void)supportsMigrationSync;

@required
-(void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;

@end

