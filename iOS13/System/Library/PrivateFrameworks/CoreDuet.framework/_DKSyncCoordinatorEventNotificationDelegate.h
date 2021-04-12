/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKSyncCoordinatorEventNotificationDelegate
@optional
-(void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
-(void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
-(void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
-(void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
-(void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;

@end

