/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFDatabaseBackingStore.h>

@class NSPersistentContainer, NSManagedObjectContext, NSString, NSURL;

@interface WFCoreDataDatabase : NSObject <WFDatabaseBackingStore> {

	BOOL _transactionInProgress;
	NSPersistentContainer* _container;
	NSManagedObjectContext* _context;

}

@property (nonatomic,retain) NSManagedObjectContext * context;                 //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL transactionInProgress;                       //@synthesize transactionInProgress=_transactionInProgress - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * fileURL; 
-(BOOL)isEqual:(id)arg1 ;
-(NSPersistentContainer *)container;
-(NSManagedObjectContext *)context;
-(NSURL *)fileURL;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)refresh;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)syncToken;
-(void)setSyncToken:(id)arg1 ;
-(id)_syncToken;
-(void)setTransactionInProgress:(BOOL)arg1 ;
-(BOOL)transactionInProgress;
-(void)setWorkflowOrdering:(id)arg1 ;
-(void)setConflictingReference:(id)arg1 forReference:(id)arg2 ;
-(id)createWorkflowWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteReference:(id)arg1 tombstone:(BOOL)arg2 error:(id*)arg3 ;
-(id)sortedWorkflowsIncludingTombstonesAndConflicts;
-(id)deletedWorkflows;
-(id)conflictingReferenceForReference:(id)arg1 ;
-(id)sortedVisibleWorkflows;
-(void)clearTombstonesAndSyncState;
-(id)referencesForWorkflowName:(id)arg1 ;
-(BOOL)startObservingChangesForResult:(id)arg1 ;
-(id)sortedVisibleWorkflowsByName;
-(void)accessStorageForDescriptor:(id)arg1 usingBlock:(/*^block*/id)arg2 withError:(id*)arg3 ;
-(void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)workflowReferenceWithName:(id)arg1 ;
-(id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id*)arg3 ;
-(id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3 ;
-(void)setOutcome:(long long)arg1 forRunEvent:(id)arg2 ;
-(void)setTrustedToRunScripts:(BOOL)arg1 forReference:(id)arg2 onDomain:(id)arg3 ;
-(BOOL)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2 ;
-(id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg1 forReference:(id)arg2 ;
-(void)setPerWorkflowStateData:(id)arg1 forAccessResourceWithIdentifier:(id)arg2 forReference:(id)arg3 ;
-(id)accessResourceStatesForReference:(id)arg1 ;
-(void)deleteAllAccessResourceStateDataForReference:(id)arg1 ;
-(id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id*)arg3 ;
-(id)descriptorsForResult:(id)arg1 error:(id*)arg2 ;
-(id)sortedVisibleWorkflowsWithType:(id)arg1 ;
-(id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1 ;
-(id)allConfiguredTriggers;
-(id)sortedRunEventsWithSource:(id)arg1 ;
-(id)sortedRunEventsForTriggerID:(id)arg1 ;
-(id)latestRunEvent;
-(id)initWithStoreDescription:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveIfNecessary:(id*)arg1 ;
-(id)objectForDescriptor:(id)arg1 ;
-(id)visiblePredicate;
-(id)objectOfClass:(Class)arg1 withIdentifier:(id)arg2 forKey:(id)arg3 ;
@end

