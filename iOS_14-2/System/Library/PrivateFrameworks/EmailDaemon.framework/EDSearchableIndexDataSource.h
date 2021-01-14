/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDSearchableIndexDataSource <NSObject>
@optional
-(void)searchableIndex:(id)arg1 foundAttachmentPaths:(id)arg2 forMessagePersistentID:(id)arg3;
-(void)searchableIndex:(id)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(id)arg2;

@required
-(void)clearOrphanedSearchableMessagesFromDatabase;
-(id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
-(void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
-(id)updatesForSearchableIndex:(id)arg1 excludingIdentifiers:(id)arg2 count:(unsigned long long)arg3 cancelationToken:(id)arg4;
-(long long)indexingTypeForSearchableIndex:(id)arg1 item:(id)arg2;
-(void)searchableIndex:(id)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(id)arg3;
-(id)verificationDataSamplesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2 lastVerifiedMessageID:(long long)arg3;
-(id)searchableIndex:(id)arg1 invalidateItemsInTransactions:(id)arg2;
-(void)searchableIndex:(id)arg1 willRemoveIdentifiers:(id)arg2 type:(long long)arg3;
-(id)childIdentifiersToRemoveFromSearchableIndex:(id)arg1 whenRemovingParentIdentifiers:(id)arg2;

@end

