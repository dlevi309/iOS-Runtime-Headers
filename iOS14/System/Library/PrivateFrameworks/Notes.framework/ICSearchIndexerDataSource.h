/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@protocol ICSearchIndexerDataSource <NSObject>
@required
-(id)uuid;
-(id)persistentStoreCoordinator;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2;
-(unsigned long long)indexingPriority;
-(id)dataSourceIdentifier;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1;
-(void)clearObjectIDsToProcess;
-(id)newManagedObjectContext;
-(void)startObservingChanges;
-(BOOL)isObservingChanges;
-(void)stageForReindexingWithContext:(id)arg1;
-(BOOL)needsReindexing;
-(id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
-(id)indexableObjectIDsWithURIs:(id)arg1 context:(id)arg2;
-(id)objectIDsNeedingProcessing;
-(long long)decisionOnObjectID:(id)arg1 searchableItemToIndex:(id*)arg2 objectIDURIToDelete:(id*)arg3 context:(id)arg4;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
-(void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
-(void)stageObjectIDURIsForIndexing:(id)arg1 context:(id)arg2;
-(void)stopObservingChanges;

@end

