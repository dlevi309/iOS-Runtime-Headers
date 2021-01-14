/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <libobjc.A.dylib/ICSearchIndexerDataSource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableOrderedSet, NSURL;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {

	BOOL _observingChanges;
	BOOL _needsReindexing;
	NSString* _uuid;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableOrderedSet* _objectIDsToProcess;
	NSMutableOrderedSet* _objectIDsBeingProcessed;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                 //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stateFilename; 
@property (nonatomic,readonly) NSURL * stateFileURL; 
@property (nonatomic,retain) NSMutableOrderedSet * objectIDsToProcess;                     //@synthesize objectIDsToProcess=_objectIDsToProcess - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * objectIDsBeingProcessed;                //@synthesize objectIDsBeingProcessed=_objectIDsBeingProcessed - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (assign) BOOL needsReindexing;                                                   //@synthesize needsReindexing=_needsReindexing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAccountReindexedForMigration:(id)arg1 ;
+(id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg1 ;
+(void)markAccountReindexedForMigration:(id)arg1 ;
-(NSString *)uuid;
-(id)persistentStoreCoordinator;
-(id)init;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2 ;
-(unsigned long long)indexingPriority;
-(id)dataSourceIdentifier;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1 ;
-(void)clearObjectIDsToProcess;
-(BOOL)isFolderWithServerShareChanged:(id)arg1 ;
-(id)newManagedObjectContext;
-(id)addNotesFromSubtree:(id)arg1 ;
-(void)setObservingChanges:(BOOL)arg1 ;
-(void)setObjectIDsToProcess:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)objectIDsToProcess;
-(void)startObservingChanges;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)isObservingChanges;
-(void)stageForReindexingWithContext:(id)arg1 ;
-(BOOL)needsReindexing;
-(id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNeedsReindexing:(BOOL)arg1 ;
-(void)setObjectIDsBeingProcessed:(NSMutableOrderedSet *)arg1 ;
-(void)resetContextObservers;
-(void)loadOrClearStateIfNecessary;
-(BOOL)addNewObjectsForProcessing:(id)arg1 ;
-(void)saveStateIfNecessary;
-(BOOL)shouldIndexableObjectExistInIndexing:(id)arg1 ;
-(id)searchableItemForObject:(id)arg1 ;
-(NSMutableOrderedSet *)objectIDsBeingProcessed;
-(id)indexableObjectIDsWithURIs:(id)arg1 context:(id)arg2 ;
-(BOOL)saveStateDictionary:(id)arg1 ;
-(NSString *)stateFilename;
-(void)clearObjectIDsToIgnoreAndStageForReindexing;
-(id)moveIndexingTrackingFromUserDefaultsToFileIfNecessary;
-(id)loadStateDictionary;
-(BOOL)_loadStateDictionaryWithFileManager:(id*)arg1 fileURL:(id*)arg2 NSError:(id*)arg3 fileExists:(BOOL*)arg4 savedDictionary:(id*)arg5 ;
-(void)logFileSizeForFileAtPath:(id)arg1 fileManager:(id)arg2 ;
-(NSURL *)stateFileURL;
-(id)objectIDsNeedingProcessing;
-(long long)decisionOnObjectID:(id)arg1 searchableItemToIndex:(id*)arg2 objectIDURIToDelete:(id*)arg3 context:(id)arg4 ;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1 ;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2 ;
-(void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1 ;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2 ;
-(void)stageObjectIDURIsForIndexing:(id)arg1 context:(id)arg2 ;
-(id)objectIDsFromSearchableItems:(id)arg1 ;
-(void)stopObservingChanges;
-(void)contextWillSave:(id)arg1 ;
@end

