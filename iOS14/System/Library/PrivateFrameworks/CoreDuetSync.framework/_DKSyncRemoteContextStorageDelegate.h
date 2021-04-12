/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetSync.framework/CoreDuetSync
*/


@protocol _DKSyncRemoteContextStorageDelegate <_DKSyncRemoteStorageDelegate>
@required
-(BOOL)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;
-(void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
-(id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;
-(void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
-(void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;

@end

