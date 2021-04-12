/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFDatabaseBackingStore.h>

@protocol OS_dispatch_queue;
@class NSURL, RLMRealm, RLMRealmConfiguration, NSObject, NSString;

@interface WFRealmDatabase : NSObject <WFDatabaseBackingStore> {

	BOOL _mainThreadOnly;
	RLMRealm* _inMemoryRealm;
	RLMRealmConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (nonatomic,retain) RLMRealm * inMemoryRealm;                                      //@synthesize inMemoryRealm=_inMemoryRealm - In the implementation block
@property (nonatomic,copy,readonly) RLMRealmConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL mainThreadOnly;                                         //@synthesize mainThreadOnly=_mainThreadOnly - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * fileURL; 
+(id)visibleWorkflowsInRealm:(id)arg1 ;
+(void)cleanOrphanedObjectsFromRealm:(id)arg1 ;
+(BOOL)wf_createDataVaultAndMigrateToItIfNeeded;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)fileURL;
-(RLMRealmConfiguration *)configuration;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)refresh;
-(id)performOperation:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)syncToken;
-(void)setSyncToken:(id)arg1 ;
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
-(id)initWithConfiguration:(id)arg1 mainThreadOnly:(BOOL)arg2 error:(id*)arg3 ;
-(void)performAsynchronousOperation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)performOperation:(/*^block*/id)arg1 withError:(id*)arg2 ;
-(id)performRealmOperationWithBlock:(/*^block*/id)arg1 ;
-(id)performRealmOperationWithBlock:(/*^block*/id)arg1 withError:(id*)arg2 ;
-(id)performRealmTransactionWithBlock:(/*^block*/id)arg1 withError:(id*)arg2 ;
-(id)realmWithError:(id*)arg1 ;
-(id)objectForDescriptor:(id)arg1 inRealm:(id)arg2 ;
-(id)collectionForResult:(id)arg1 inRealm:(id)arg2 ;
-(long long)suggestedSortOrderingInRealm:(id)arg1 ;
-(RLMRealm *)inMemoryRealm;
-(void)setInMemoryRealm:(RLMRealm *)arg1 ;
-(BOOL)mainThreadOnly;
-(BOOL)migrateToCoreData:(id)arg1 error:(id*)arg2 ;
@end

