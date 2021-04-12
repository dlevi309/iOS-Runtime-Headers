/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, PLLibraryServicesDelegate, PLMigrationServiceProtocol;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryBundle, PLPhotoLibraryPathManager, PLLazyObject, PLClientServerTransaction, NSObject, NSMutableDictionary, NSError, PLBackgroundJobService, PLTrackableRequestManager, NSProgress, NSString, PLLibraryServicesStateNode, NSMutableArray, NSURL, PLPhotoLibrary, PLImageWriter, PLModelMigrator, PLSearchIndexManager, PLDatabaseContext, PLDupeManager, PLRelationshipOrderKeyManager, PLMomentGenerationDataManager, PLJournalManager, PLQuickActionManager, PLKeywordManager, PLCameraProcessingAdjustmentService, PLCloudPhotoLibraryManager, PLAssetsdCrashRecoverySupport, PLPairing, PLLibraryServicesCPLReadiness, PLCameraPreviewWellManager, PLChangeHandlingContainer;

@interface PLLibraryServicesManager : NSObject {

	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibraryPathManager* _pathManager;
	BOOL _isCreateMode;
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
	PLLazyObject* _lazyCrashRecoverySupport;
	PLLazyObject* _lazyPairingManager;
	PLLazyObject* _lazyCameraProcessingAdjustmentService;
	PLLazyObject* _lazyCPLReadiness;
	PLLazyObject* _lazyCameraPreviewWellManager;
	PLLazyObject* _lazyIsSystemPhotoLibrary;
	PLClientServerTransaction* _serverTransaction;
	NSObject*<OS_dispatch_queue> _albumCountQueue;
	NSMutableDictionary* _externalWaiterCompletionBlocksByState;
	unsigned _maxWaiterQoS;
	BOOL _active;
	BOOL _finalizing;
	os_unfair_lock_s _importMutex;
	os_unfair_lock_s _localeUpdateLock;
	id<PLLibraryServicesDelegate> _libraryServicesDelegate;
	NSError* _invalidationError;
	PLBackgroundJobService* _backgroundJobService;
	PLTrackableRequestManager* _trackableRequestManager;
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
@property (assign,nonatomic) os_unfair_lock_s importMutex;                                                            //@synthesize importMutex=_importMutex - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s localeUpdateLock;                                                       //@synthesize localeUpdateLock=_localeUpdateLock - In the implementation block
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
@property (readonly) PLCameraProcessingAdjustmentService * cameraProcessingAdjustmentService; 
@property (readonly) PLCloudPhotoLibraryManager * cloudPhotoLibraryManager; 
@property (readonly) PLTrackableRequestManager * trackableRequestManager;                                             //@synthesize trackableRequestManager=_trackableRequestManager - In the implementation block
@property (readonly) PLAssetsdCrashRecoverySupport * crashRecoverySupport; 
@property (readonly) PLPairing * pairingManager; 
@property (readonly) PLLibraryServicesCPLReadiness * cplReadiness; 
@property (readonly) PLCameraPreviewWellManager * cameraPreviewWellManager; 
@property (getter=isCreateMode,readonly) BOOL createMode; 
@property (copy) NSString * upgradeClient;                                                                            //@synthesize upgradeClient=_upgradeClient - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (__weak) id<PLMigrationServiceProtocol> migrationServiceProxy;                                              //@synthesize migrationServiceProxy=_migrationServiceProxy - In the implementation block
@property (readonly) PLChangeHandlingContainer * changeHandlingContainer; 
+(long long)_initialState;
+(void)setLibraryServicesDelegateClass:(Class)arg1 ;
+(long long)_finalState;
+(id)errorForInvalidationError:(id)arg1 userInfo:(id)arg2 ;
+(Class)libraryServicesDelegateClass;
+(id)libraryServicesManagerForLibraryURL:(id)arg1 ;
-(BOOL)activate:(id*)arg1 ;
-(NSURL *)libraryURL;
-(void)initializeChangeHandling;
-(void)_handleLibraryStateCompletedAllOperations;
-(void)_invalidateModelMigrator;
-(PLPhotoLibraryPathManager *)pathManager;
-(NSMutableArray *)mutablePendingOperations;
-(id)newCrashRecoverySupport;
-(PLBackgroundJobService *)backgroundJobService;
-(void)_invalidate;
-(id)newPhotoLibrary;
-(long long)_state;
-(id)pendingOperations;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)finalize:(id*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)_invalidateDatabaseContext;
-(void)setFinalizing:(BOOL)arg1 ;
-(void)_invalidateReframeService;
-(NSError *)invalidationError;
-(void)initializeConstraintsDirector;
-(PLPhotoLibrary *)photoLibrary;
-(void)setCreateMode:(BOOL)arg1 options:(id)arg2 ;
-(void)_invalidateCameraPreviewWellManager;
-(void)_initCloudPhotoLibraryManager;
-(PLDupeManager *)dupeManager;
-(void)setImportMutex:(os_unfair_lock_s)arg1 ;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCreateMode;
-(NSString *)upgradeClient;
-(os_unfair_lock_s)importMutex;
-(BOOL)enqueueOperation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isActive;
-(void)_invalidateImageWriter;
-(BOOL)isFinalizing;
-(void)_cancelPendingOperations;
-(void)deactivateWithInvalidationError:(id)arg1 ;
-(PLLibraryServicesStateNode *)currentStateNode;
-(PLImageWriter *)imageWriter;
-(BOOL)_canTransitionToState:(long long)arg1 error:(id*)arg2 ;
-(void)_invalidateSystemPhotoLibrarySpecificServices;
-(id)_libraryServicesStateNodeWithState:(long long)arg1 ;
-(BOOL)isCloudPhotoLibraryEnabled;
-(void)_invalidateRelationshipOrderKeyManager;
-(void)_invalidateMomentGenerationDataManager;
-(void)_increaseStateQueueQoSIfNeeded;
-(void)_setCameraRollCountedInQuota:(BOOL)arg1 ;
-(void)_dispatchAwaitLibraryStateCompletionHandler:(/*^block*/id)arg1 group:(id)arg2 error:(id)arg3 ;
-(PLAssetsdCrashRecoverySupport *)crashRecoverySupport;
-(void)_awaitLibraryState:(long long)arg1 sync:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performBlockWithImportMutex:(/*^block*/id)arg1 ;
-(void)_invalidateCrashRecoverySupport;
-(void)_dispatchExternalWaitersForState:(long long)arg1 ;
-(BOOL)transitionToState:(long long)arg1 error:(id*)arg2 ;
-(PLSearchIndexManager *)searchIndexManager;
-(void)setLocaleUpdateLock:(os_unfair_lock_s)arg1 ;
-(id)description;
-(void)didRemainSystemPhotoLibrary;
-(void)_invalidatePhotoLibrary;
-(void)_initSystemPhotoLibrarySpecificServices;
-(void)_invalidateBackgroundJobService;
-(PLModelMigrator *)modelMigrator;
-(NSObject*<OS_dispatch_queue>)helperQueue;
-(PLCameraPreviewWellManager *)cameraPreviewWellManager;
-(PLMomentGenerationDataManager *)momentGenerationDataManager;
-(BOOL)awaitLibraryState:(long long)arg1 error:(id*)arg2 ;
-(void)setICloudPhotosEnabledInternal:(BOOL)arg1 ;
-(void)_invalidateDupeManager;
-(id)initWithLibraryBundle:(id)arg1 backgroundJobService:(id)arg2 delegateClass:(Class)arg3 ;
-(void)invalidateReverseLocationDataOnAllAssets;
-(void)setOperationCountObservee:(id)arg1 ;
-(void)_invalidateJournalManager;
-(PLQuickActionManager *)quickActionManager;
-(PLLibraryServicesCPLReadiness *)cplReadiness;
-(NSObject*<OS_dispatch_queue>)stateSerializationQueue;
-(void)_invalidateQuickActionManager;
-(void)setUpgradeClient:(NSString *)arg1 ;
-(void)_invalidatePairingManager;
-(id)newAlbumCountCoalescer:(id)arg1 ;
-(void)_invalidateSearchIndexManager;
-(PLTrackableRequestManager *)trackableRequestManager;
-(PLDatabaseContext *)databaseContext;
-(void)_resetStateQueueQoS;
-(unsigned long long)createOptions;
-(NSProgress *)postRunningProgress;
-(PLCameraProcessingAdjustmentService *)cameraProcessingAdjustmentService;
-(PLRelationshipOrderKeyManager *)relationshipOrderKeyManager;
-(PLJournalManager *)journalManager;
-(PLKeywordManager *)keywordManager;
-(void)_setCurrentStateNode:(id)arg1 ;
-(void)_addPendingOperationsForStateNode:(id)arg1 ;
-(long long)state;
-(void)setLibraryServicesDelegate:(id<PLLibraryServicesDelegate>)arg1 ;
-(id<PLLibraryServicesDelegate>)libraryServicesDelegate;
-(PLPhotoLibraryBundle *)libraryBundle;
-(BOOL)updateSavedLocaleIfNeeded;
-(void)_startObservingLibraryStateCompletedAllOperations;
-(void)_invalidateAlbumCountCoalescer;
-(BOOL)_enqueueOperation:(id)arg1 error:(id*)arg2 ;
-(void)_stopObservingLibraryStateCompletedAllOperations;
-(id<PLMigrationServiceProtocol>)migrationServiceProxy;
-(void)didBecomeNonSystemPhotoLibrary;
-(id)newCloudPhotoLibraryManager;
-(id)_enqueueAwaitOperation;
-(void)_initLazyIsSystemPhotoLibrary;
-(void)setMigrationServiceProxy:(id<PLMigrationServiceProtocol>)arg1 ;
-(PLPairing *)pairingManager;
-(void)shutdownLibraryWithDescription:(id)arg1 ;
-(id)statusDescription;
-(void)_invalidateCloudPhotoLibraryManager;
-(void)setPostRunningProgress:(NSProgress *)arg1 ;
-(id)newMomentGenerationDataManager;
-(void)currentLocaleDidChangeNotification:(id)arg1 ;
-(PLCloudPhotoLibraryManager *)cloudPhotoLibraryManager;
-(void)refreshAlbumCountForAlbumIDs:(id)arg1 ;
-(PLChangeHandlingContainer *)changeHandlingContainer;
-(void)setPreRunningProgress:(NSProgress *)arg1 ;
-(id)activeOperations;
-(void)_enqueueExternalWaiterCompletionBlockForState:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_invalidateCPLReadiness;
-(id)newJournalManager;
-(id)operationCountObservee;
-(id)newSearchIndexManager;
-(void)_waitForAwaitOperation:(id)arg1 ;
-(BOOL)willBecomeNonSystemPhotoLibrary:(id*)arg1 ;
-(os_unfair_lock_s)localeUpdateLock;
-(void)dealloc;
-(void)_invalidateKeywordManager;
-(void)_transitionToState:(long long)arg1 ;
-(BOOL)isSystemPhotoLibrary;
-(NSProgress *)preRunningProgress;
@end

