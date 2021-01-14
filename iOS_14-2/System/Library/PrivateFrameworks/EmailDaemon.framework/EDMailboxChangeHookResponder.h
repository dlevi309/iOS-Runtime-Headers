/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDMailboxChangeHookResponder <NSObject>
@optional
-(void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;

@end

