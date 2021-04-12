/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKSyncRemoteContextStorage <_DKSyncRemoteStorage>
@required
-(void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)setDelegate:(id)arg1;
-(void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;

@end

