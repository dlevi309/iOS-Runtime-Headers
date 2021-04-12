/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EMMessageListItemQueryResultsObserver <NSObject>
@optional
-(void)observerDidFinishRemoteSearch:(id)arg1;

@required
-(void)observer:(id)arg1 wasUpdated:(id)arg2;
-(void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4;
-(void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4;
-(void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3;
-(void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3;
-(void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2;
-(void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2;
-(void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3;
-(void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2;
-(void)observerDidFinishInitialLoad:(id)arg1;
-(void)observerWillRestart:(id)arg1;

@end

