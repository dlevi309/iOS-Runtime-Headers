/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

