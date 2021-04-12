/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKSyncRemoteContextStorage <_DKSyncRemoteStorage>
@required
-(void)setDelegate:(id)arg1;
-(void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;

@end

