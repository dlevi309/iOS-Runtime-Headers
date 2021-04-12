/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <libobjc.A.dylib/ICSearchIndexerDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSString;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {

	BOOL _observingChanges;
	BOOL _needsReindexing;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableOrderedSet* _objectIDsToProcess;
	NSMutableOrderedSet* _objectIDsBeingProcessed;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                 //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * objectIDsToProcess;                     //@synthesize objectIDsToProcess=_objectIDsToProcess - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * objectIDsBeingProcessed;                //@synthesize objectIDsBeingProcessed=_objectIDsBeingProcessed - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (assign) BOOL needsReindexing;                                                   //@synthesize needsReindexing=_needsReindexing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAccountReindexedForMigration:(id)arg1 ;
+(id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg1 ;
+(void)markAccountReindexedForMigration:(id)arg1 ;
-(id)init;
-(id)persistentStoreCoordinator;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadState;
-(void)saveState;
-(id)dataSourceIdentifier;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(id)newManagedObjectContext;
-(void)stageForReindexing;
-(void)setObservingChanges:(BOOL)arg1 ;
-(void)stopObservingChanges;
-(BOOL)needsReindexing;
-(void)clearObjectIDsToProcess;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2 ;
-(id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2 ;
-(void)setObjectIDsToProcess:(NSMutableOrderedSet *)arg1 ;
-(void)setObjectIDsBeingProcessed:(NSMutableOrderedSet *)arg1 ;
-(void)setNeedsReindexing:(BOOL)arg1 ;
-(id)searchableItemForObject:(id)arg1 ;
-(void)contextWillSave:(id)arg1 ;
-(void)resetContextObservers;
-(NSMutableOrderedSet *)objectIDsToProcess;
-(BOOL)shouldIndexableObjectExistInIndexing:(id)arg1 ;
-(NSMutableOrderedSet *)objectIDsBeingProcessed;
-(id)allIndexableObjectIDsInReversedReindexingOrder;
-(id)indexableObjectIDsWithURIs:(id)arg1 ;
-(id)stateDefaultsKey;
-(void)clearObjectIDsToIgnoreAndStageForReindexing;
-(unsigned long long)indexingPriority;
-(id)objectIDsNeedingIndexing;
-(id)objectIDURIsToBeDeleted;
-(id)searchableItemsForObjectIDs:(id)arg1 ;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1 ;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2 ;
-(void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1 ;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2 ;
-(void)stageObjectIDURIsForIndexing:(id)arg1 ;
-(id)objectIDsFromSearchableItems:(id)arg1 ;
@end

