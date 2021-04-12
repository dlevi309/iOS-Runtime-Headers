/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, PLLibraryServicesDelegate, PLMigrationServiceProtocol;
@class PLPhotoLibraryBundle, PLPhotoLibraryPathManager, PLLazyObject, PLClientServerTransaction, NSObject, NSMutableDictionary, NSError, PLBackgroundJobService, NSProgress, NSString, PLLibraryServicesStateNode, NSMutableArray, NSURL, PLPhotoLibrary, PLImageWriter, PLModelMigrator, PLSearchIndexManager, PLDatabaseContext, PLDupeManager, PLRelationshipOrderKeyManager, PLMomentGenerationDataManager, PLJournalManager, PLQuickActionManager, PLKeywordManager, PLReframeService, PLCloudPhotoLibraryManager, PLTrackableRequestManager, PLAssetsdCrashRecoverySupport, PLPairing, PLLibraryServicesCPLReadiness, PLChangeHandlingContainer;

@interface PLLibraryServicesManager : NSObject {

	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibraryPathManager* _pathManager;
	PLLazyObject* _lazyPhotoLibrary;
	PLLazyObject* _lazyImageWriter;
	PLLazyObject* _lazyModelMigrator;
	PLLazyObject* _lazySearchIndexManager;
	PLLazyObject* _lazyDatabaseContext;
	PLLazyObject* _lazyDupeManager;
	PLLazyObject* _lazyRelationshipOrderKeyManager;
	PLLazyObject* _lazyMomentGenerationDataManager;
	PLLazyObject* _lazyJournalManager;
	PLLazyObject* _lazyQuickActionManager;
	PLLazyObject* _lazyKeywordManager;
	PLLazyObject* _lazyAlbumCountCoalescer;
	PLLazyObject* _lazyCloudPhotoLibraryManager;
	PLLazyObject* _lazyTrackableRequestManager;
	PLLazyObject* _lazyCrashRecoverySupport;
	PLLazyObject* _lazyPairingManager;
	PLLazyObject* _lazyReframeService;
	PLLazyObject* _lazyCPLReadiness;
	PLClientServerTransaction* _serverTransaction;
	NSObject*<OS_dispatch_queue> _albumCountQueue;
	NSMutableDictionary* _externalWaiterCompletionBlocksByState;
	unsigned _maxWaiterQoS;
	BOOL _createMode;
	BOOL _active;
	BOOL _finalizing;
	id<PLLibraryServicesDelegate> _libraryServicesDelegate;
	NSError* _invalidationError;
	PLBackgroundJobService* _backgroundJobService;
	NSProgress* _preRunningProgress;
	NSProgress* _postRunningProgress;
	NSString* _upgradeClient;
	id<PLMigrationServiceProtocol> _migrationServiceProxy;
	PLLibraryServicesStateNode* _currentStateNode;
	id _operationCountObservee;
	NSMutableArray* _mutablePendingOperations;
	NSObject*<OS_dispatch_queue> _stateSerializationQueue;
	NSObject*<OS_dispatch_queue> _helperQueue;

}

@property (setter=_setCurrentStateNode:,nonatomic,retain) PLLibraryServicesStateNode * currentStateNode;              //@synthesize currentStateNode=_currentStateNode - In the implementation block
@property (nonatomic,retain) id operationCountObservee;                                                               //@synthesize operationCountObservee=_operationCountObservee - In the implementation block
@property (retain) id<PLLibraryServicesDelegate> libraryServicesDelegate;                                             //@synthesize libraryServicesDelegate=_libraryServicesDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutablePendingOperations;                                             //@synthesize mutablePendingOperations=_mutablePendingOperations - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateSerializationQueue;                                  //@synthesize stateSerializationQueue=_stateSerializationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> helperQueue;                                              //@synthesize helperQueue=_helperQueue - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=isFinalizing,nonatomic) BOOL finalizing;                                                     //@synthesize finalizing=_finalizing - In the implementation block
@property (nonatomic,retain) NSProgress * preRunningProgress;                                                         //@synthesize preRunningProgress=_preRunningProgress - In the implementation block
@property (nonatomic,retain) NSProgress * postRunningProgress;                                                        //@synthesize postRunningProgress=_postRunningProgress - In the implementation block
@property (readonly) long long state; 
@property (copy,readonly) NSURL * libraryURL; 
@property (__weak,readonly) PLPhotoLibraryBundle * libraryBundle;                                                     //@synthesize libraryBundle=_libraryBundle - In the implementation block
@property (nonatomic,readonly) NSError * invalidationError;                                                           //@synthesize invalidationError=_invalidationError - In the implementation block
@property (readonly) PLPhotoLibrary * photoLibrary; 
@property (readonly) PLPhotoLibraryPathManager * pathManager;                                                         //@synthesize pathManager=_pathManager - In the implementation block
@property (readonly) PLImageWriter * imageWriter; 
@property (readonly) PLModelMigrator * modelMigrator; 
@property (readonly) PLSearchIndexManager * searchIndexManager; 
@property (readonly) PLDatabaseContext * databaseContext; 
@property (readonly) PLDupeManager * dupeManager; 
@property (readonly) PLRelationshipOrderKeyManager * relationshipOrderKeyManager; 
@property (readonly) PLMomentGenerationDataManager * momentGenerationDataManager; 
@property (readonly) PLJournalManager * journalManager; 
@property (readonly) PLQuickActionManager * quickActionManager; 
@property (readonly) PLKeywordManager * keywordManager; 
@property (readonly) PLBackgroundJobService * backgroundJobService;                                                   //@synthesize backgroundJobService=_backgroundJobService - In the implementation block
@property (readonly) PLReframeService * reframeService; 
@property (readonly) PLCloudPhotoLibraryManager * cloudPhotoLibraryManager; 
@property (readonly) PLTrackableRequestManager * trackableRequestManager; 
@property (readonly) PLAssetsdCrashRecoverySupport * crashRecoverySupport; 
@property (readonly) PLPairing * pairingManager; 
@property (readonly) PLLibraryServicesCPLReadiness * cplReadiness; 
@property (getter=isCreateMode) BOOL createMode;                                                                      //@synthesize createMode=_createMode - In the implementation block
@property (copy) NSString * upgradeClient;                                                                            //@synthesize upgradeClient=_upgradeClient - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (__weak) id<PLMigrationServiceProtocol> migrationServiceProxy;                                              //@synthesize migrationServiceProxy=_migrationServiceProxy - In the implementation block
@property (readonly) PLChangeHandlingContainer * changeHandlingContainer; 
+(id)userDefaults;
+(long long)_initialState;
+(id)libraryServicesManagerForLibraryURL:(id)arg1 ;
+(Class)libraryServicesDelegateClass;
+(long long)_finalState;
+(id)errorForInvalidationError:(id)arg1 userInfo:(id)arg2 ;
+(void)setLibraryServicesDelegateClass:(Class)arg1 ;
-(void)dealloc;
-(id)description;
-(void)_invalidate;
-(long long)_state;
-(BOOL)isActive;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)state;
-(void)setActive:(BOOL)arg1 ;
-(void)_transitionToState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)helperQueue;
-(PLPhotoLibrary *)photoLibrary;
-(NSURL *)libraryURL;
-(PLPhotoLibraryPathManager *)pathManager;
-(PLCloudPhotoLibraryManager *)cloudPhotoLibraryManager;
-(PLPhotoLibraryBundle *)libraryBundle;
-(PLDatabaseContext *)databaseContext;
-(BOOL)isCloudPhotoLibraryEnabled;
-(PLKeywordManager *)keywordManager;
-(PLModelMigrator *)modelMigrator;
-(PLLibraryServicesCPLReadiness *)cplReadiness;
-(BOOL)awaitLibraryState:(long long)arg1 error:(id*)arg2 ;
-(PLChangeHandlingContainer *)changeHandlingContainer;
-(PLSearchIndexManager *)searchIndexManager;
-(PLDupeManager *)dupeManager;
-(void)shutdownLibraryWithDescription:(id)arg1 ;
-(PLBackgroundJobService *)backgroundJobService;
-(PLAssetsdCrashRecoverySupport *)crashRecoverySupport;
-(PLImageWriter *)imageWriter;
-(NSProgress *)postRunningProgress;
-(void)setICloudPhotosEnabledInternal:(BOOL)arg1 ;
-(PLJournalManager *)journalManager;
-(PLMomentGenerationDataManager *)momentGenerationDataManager;
-(PLRelationshipOrderKeyManager *)relationshipOrderKeyManager;
-(id)statusDescription;
-(id)initWithLibraryBundle:(id)arg1 backgroundJobService:(id)arg2 delegateClass:(Class)arg3 ;
-(void)currentLocaleDidChangeNotification:(id)arg1 ;
-(BOOL)updateSavedLocaleIfNeeded;
-(void)invalidateReverseLocationDataOnAllAssets;
-(void)refreshAlbumCountForAlbumIDs:(id)arg1 ;
-(BOOL)_isSystemPhotoLibrary;
-(void)_initSystemPhotoLibrarySpecificServices;
-(void)_invalidateSystemPhotoLibrarySpecificServices;
-(id)newAlbumCountCoalescer:(id)arg1 ;
-(id)newPhotoLibrary;
-(id)newCloudPhotoLibraryManager;
-(PLTrackableRequestManager *)trackableRequestManager;
-(id)newCrashRecoverySupport;
-(id)newSearchIndexManager;
-(id)newMomentGenerationDataManager;
-(PLReframeService *)reframeService;
-(void)_invalidateMomentGenerationDataManager;
-(void)_invalidateJournalManager;
-(void)_invalidateSearchIndexManager;
-(void)_invalidateModelMigrator;
-(void)_invalidatePhotoLibrary;
-(void)_invalidateAlbumCountCoalescer;
-(void)_invalidateImageWriter;
-(void)_invalidateKeywordManager;
-(void)_invalidatePairingManager;
-(void)_invalidateDupeManager;
-(void)_invalidateRelationshipOrderKeyManager;
-(void)_invalidateQuickActionManager;
-(void)_invalidateDatabaseContext;
-(void)_invalidateCloudPhotoLibraryManager;
-(void)_invalidateTrackableRequestManager;
-(void)_invalidateCrashRecoverySupport;
-(void)_invalidateReframeService;
-(void)_invalidateBackgroundJobService;
-(void)_invalidateCPLReadiness;
-(id)newJournalManager;
-(PLQuickActionManager *)quickActionManager;
-(PLPairing *)pairingManager;
-(void)initializeChangeHandling;
-(void)initializeConstraintsDirector;
-(id)_libraryServicesStateNodeWithState:(long long)arg1 ;
-(BOOL)enqueueOperation:(id)arg1 error:(id*)arg2 ;
-(void)_increaseStateQueueQoSIfNeeded;
-(void)_resetStateQueueQoS;
-(BOOL)_enqueueOperation:(id)arg1 error:(id*)arg2 ;
-(id)activeOperations;
-(id)pendingOperations;
-(BOOL)activate:(id*)arg1 ;
-(void)_dispatchAwaitLibraryStateCompletionHandler:(/*^block*/id)arg1 group:(id)arg2 error:(id)arg3 ;
-(void)_awaitLibraryState:(long long)arg1 sync:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_enqueueAwaitOperation;
-(void)_waitForAwaitOperation:(id)arg1 ;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enqueueExternalWaiterCompletionBlockForState:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)transitionToState:(long long)arg1 error:(id*)arg2 ;
-(BOOL)finalize:(id*)arg1 ;
-(void)deactivateWithInvalidationError:(id)arg1 ;
-(BOOL)_canTransitionToState:(long long)arg1 error:(id*)arg2 ;
-(void)_dispatchExternalWaitersForState:(long long)arg1 ;
-(void)_startObservingLibraryStateCompletedAllOperations;
-(void)_stopObservingLibraryStateCompletedAllOperations;
-(void)_handleLibraryStateCompletedAllOperations;
-(void)_setCurrentStateNode:(id)arg1 ;
-(void)_addPendingOperationsForStateNode:(id)arg1 ;
-(void)_cancelPendingOperations;
-(BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
-(void)_setCameraRollCountedInQuota:(BOOL)arg1 ;
-(void)didBecomeNonSystemPhotoLibrary;
-(id<PLLibraryServicesDelegate>)libraryServicesDelegate;
-(void)setLibraryServicesDelegate:(id<PLLibraryServicesDelegate>)arg1 ;
-(NSError *)invalidationError;
-(NSProgress *)preRunningProgress;
-(void)setPreRunningProgress:(NSProgress *)arg1 ;
-(void)setPostRunningProgress:(NSProgress *)arg1 ;
-(BOOL)isCreateMode;
-(void)setCreateMode:(BOOL)arg1 ;
-(NSString *)upgradeClient;
-(void)setUpgradeClient:(NSString *)arg1 ;
-(id<PLMigrationServiceProtocol>)migrationServiceProxy;
-(void)setMigrationServiceProxy:(id<PLMigrationServiceProtocol>)arg1 ;
-(PLLibraryServicesStateNode *)currentStateNode;
-(id)operationCountObservee;
-(void)setOperationCountObservee:(id)arg1 ;
-(NSMutableArray *)mutablePendingOperations;
-(NSObject*<OS_dispatch_queue>)stateSerializationQueue;
-(BOOL)isFinalizing;
-(void)setFinalizing:(BOOL)arg1 ;
@end

