/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@protocol ICSearchIndexerDataSource <NSObject>
@required
-(id)persistentStoreCoordinator;
-(id)dataSourceIdentifier;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(id)newManagedObjectContext;
-(void)stageForReindexing;
-(void)stopObservingChanges;
-(BOOL)needsReindexing;
-(void)clearObjectIDsToProcess;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2;
-(id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
-(id)allIndexableObjectIDsInReversedReindexingOrder;
-(id)indexableObjectIDsWithURIs:(id)arg1;
-(unsigned long long)indexingPriority;
-(id)objectIDsNeedingIndexing;
-(id)objectIDURIsToBeDeleted;
-(id)searchableItemsForObjectIDs:(id)arg1;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
-(void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
-(void)stageObjectIDURIsForIndexing:(id)arg1;

@end

