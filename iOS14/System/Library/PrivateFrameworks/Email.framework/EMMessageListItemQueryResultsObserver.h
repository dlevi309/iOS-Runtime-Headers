/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol EMMessageListItemQueryResultsObserver <NSObject>
@optional
-(void)observerDidFinishRemoteSearch:(id)arg1;

@required
-(void)observer:(id)arg1 wasUpdated:(id)arg2;
-(void)observerWillRestart:(id)arg1;
-(void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4;
-(void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4;
-(void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3;
-(void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3;
-(void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2;
-(void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2;
-(void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3;
-(void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2;
-(void)observerDidFinishInitialLoad:(id)arg1;

@end

