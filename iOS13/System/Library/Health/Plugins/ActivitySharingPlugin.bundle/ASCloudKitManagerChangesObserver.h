/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol ASCloudKitManagerChangesObserver <NSObject>
@property (nonatomic,readonly) BOOL isReadyToProcessChanges; 
@optional
-(void)cloudKitManager:(id)arg1 didBeginUpdatesForFetchWithType:(long long)arg2;
-(void)cloudKitManager:(id)arg1 didEndUpdatesForFetchWithType:(long long)arg2;
-(void)cloudKitManager:(id)arg1 didRecieveNewRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(BOOL)arg4 changesProcessedHandler:(/*^block*/id)arg5;
-(void)cloudKitManager:(id)arg1 didRecieveNewRemoteRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(BOOL)arg4 changesProcessedHandler:(/*^block*/id)arg5;
-(void)cloudKitManager:(id)arg1 didReceiveNewActivitySnapshotsForSelf:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewActivitySnapshots:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendWorkouts:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendAchievements:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewNotificationEvents:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didReceiveNewCompetitionListsForSelf:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didReceiveNewCompetitionLists:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManagerDidUpdateAccountStatus:(id)arg1;

@required
-(BOOL)isReadyToProcessChanges;

@end

