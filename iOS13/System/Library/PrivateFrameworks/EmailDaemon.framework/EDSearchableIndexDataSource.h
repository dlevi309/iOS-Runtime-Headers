/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDSearchableIndexDataSource <NSObject>
@optional
-(void)searchableIndex:(id)arg1 foundAttachmentPaths:(id)arg2 forMessagePersistentID:(id)arg3;
-(void)searchableIndex:(id)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(id)arg2;

@required
-(id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
-(void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
-(id)updatesForSearchableIndex:(id)arg1 excludingIdentifiers:(id)arg2 count:(unsigned long long)arg3 cancelationToken:(id)arg4;
-(long long)indexingTypeForSearchableIndex:(id)arg1 item:(id)arg2;
-(void)searchableIndex:(id)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(id)arg3;
-(id)verificationDataSamplesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2;
-(id)searchableIndex:(id)arg1 invalidateItemsInTransactions:(id)arg2;
-(void)searchableIndex:(id)arg1 willRemoveIdentifiers:(id)arg2 type:(long long)arg3;
-(id)childIdentifiersToRemoveFromSearchableIndex:(id)arg1 whenRemovingParentIdentifiers:(id)arg2;

@end

