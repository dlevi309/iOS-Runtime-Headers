/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLSearchIndexManagerSceneTaxonomyProxy, OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLSearchIndexDateFormatter, PLPhotoLibraryPathManager, PLPhotoLibrary, PSIDatabase, PLZeroKeywordStore, PLSearchMetadataStore, PLThrottleTimer, PLClientServerTransaction, NSDictionary, NSObject, NSMutableDictionary, NSHashTable, NSCountedSet;

@interface PLSearchIndexManager : NSObject {

	PLSearchIndexDateFormatter* _dateFormatter;
	PLPhotoLibraryPathManager* _pathManager;
	PLPhotoLibrary* _photoLibrary;
	PSIDatabase* _db;
	PLZeroKeywordStore* _zeroKeywordStore;
	PLSearchMetadataStore* _searchMetadataStore;
	PLThrottleTimer* _throttleTimer;
	PLClientServerTransaction* _serverTransaction;
	Class _sceneTaxonomyProxyClass;
	id<PLSearchIndexManagerSceneTaxonomyProxy> _sceneTaxonomyProxy;
	NSDictionary* _searchSystemInfo;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _inqUUIDsToProcess;
	NSMutableDictionary* _inqGraphDataByUUID;
	NSMutableDictionary* _inqSynonymsByIndexCategoryMask;
	BOOL _receivedUpdatesWhileIndexing;
	BOOL _hasScheduledCloseIndex;
	BOOL _hasValidSearchIndex;
	BOOL _hasValidSearchSupportingData;
	BOOL _shouldCheckLookupTableIsOutOfSync;
	BOOL _shouldCheckDatabaseIntegrity;
	BOOL _isTrackingRebuild;
	long long _rebuildReason;
	long long _updateState;
	double _lastIndexingStartTime;
	BOOL _startedIndexing;
	os_unfair_lock_s _stateLock;
	BOOL _searchIndexInvalidated;
	NSHashTable* _blocksOnQueueAfterDelay;
	BOOL __indexing;
	/*^block*/id __inqAfterIndexingDidIterate;
	NSCountedSet* __pauseReasons;

}

@property (setter=_setIndexing:,getter=_isIndexing) BOOL _indexing;                                            //@synthesize _indexing=__indexing - In the implementation block
@property (setter=_setInqAfterIndexingDidIterate:,nonatomic,copy) id _inqAfterIndexingDidIterate;              //@synthesize _inqAfterIndexingDidIterate=__inqAfterIndexingDidIterate - In the implementation block
@property (nonatomic,copy,readonly) NSCountedSet * _pauseReasons;                                              //@synthesize _pauseReasons=__pauseReasons - In the implementation block
@property (nonatomic,retain) Class sceneTaxonomyProxyClass; 
@property (getter=isIndexingPaused,readonly) BOOL indexingPaused; 
+(BOOL)shouldIndexFilenames;
+(id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchMomentsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchHighlightsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchMomentUUIDsToPopulateAssetSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchHighlightUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)localeForSearchIndex;
+(int)currentSearchIndexVersion;
+(id)_defaultDatabaseDirectoryWithPathManager:(id)arg1 ;
+(void)setShouldIndexFilenames:(BOOL)arg1 ;
+(id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)_dbPath;
-(BOOL)_onQueueAsync:(/*^block*/id)arg1 ;
-(id)initWithPathManager:(id)arg1 ;
-(void)pauseIndexingWithReason:(id)arg1 ;
-(void)unpauseIndexingWithReason:(id)arg1 ;
-(id)_defaultDatabaseDirectory;
-(id)defaultDatabasePath;
-(id)defaultSearchMetadataStorePath;
-(Class)sceneTaxonomyProxyClass;
-(void)setSceneTaxonomyProxyClass:(Class)arg1 ;
-(BOOL)_onQueueSync:(/*^block*/id)arg1 ;
-(BOOL)_onQueueAsyncWithDelay:(double)arg1 perform:(/*^block*/id)arg2 ;
-(BOOL)_inqUpdateSearchSystemInfo:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3 ;
-(BOOL)_inqUpdateVersion;
-(BOOL)_inqUpdateLocale;
-(BOOL)_inqUpdateSceneTaxonomySHA:(id)arg1 ;
-(BOOL)_inqUpdateWordEmbeddingVersion:(id)arg1 ;
-(void)_inqStartTrackingRebuildWithReason:(long long)arg1 ;
-(void)_inqEndTrackingRebuildIfNeeded;
-(void)_inqStartTrackingUpdateIfAble;
-(void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
-(void)_inqEndTrackingUpdateIfNeeded;
-(unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(BOOL)arg1 ;
-(void)enqueuedUUIDsCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_inqIsIndexingPaused;
-(BOOL)isIndexingPaused;
-(void)_inqSetIndexingPaused:(BOOL)arg1 reason:(id)arg2 ;
-(void)_setIndexingPaused:(BOOL)arg1 synchronously:(BOOL)arg2 reason:(id)arg3 ;
-(void)_throttleTimerFire:(id)arg1 ;
-(void)_inqCloseSearchIndexAndDelete:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)ensureSearchIndexExistsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dropSearchIndexWithCompletion:(/*^block*/id)arg1 ;
-(void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(/*^block*/id)arg2 ;
-(void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(/*^block*/id)arg2 ;
-(id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1 ;
-(id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1 ;
-(id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1 ;
-(void)applyUpdates:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_cxindexProgressPath;
-(id)_graphDataProcessPath;
-(id)_synonymsProcessPath;
-(id)_oldDbPath;
-(id)_searchMetadataStorePath;
-(id)_dbSearchSystemInfoPath;
-(BOOL)_removeFileAtPath:(id)arg1 description:(id)arg2 ;
-(void)_inqScheduleCloseIndexIfNeeded;
-(void)_inqTakeClientServerTransactionIfNeeded;
-(void)_inqDropClientServerTransactionIfNeeded;
-(void)_inqCloseIndexIfAbleOrForce:(BOOL)arg1 isDelete:(BOOL)arg2 ;
-(void)_inqEnsureSearchIndexExists;
-(void)_inqEnsureSearchSystemInfoExists;
-(void)_inqEnsureSearchProgressExists;
-(void)_inqIndexPhotoLibrary;
-(void)_inqEnsureSceneTaxonomyProxyExists;
-(void)_inqEnsurePhotoLibraryExists;
-(id)_inqPhotoLibrary;
-(long long)_inqRebuildReasonIfSearchIndexIsValid;
-(long long)_inqRebuildReasonIfSearchSupportingDataIsValid;
-(id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)arg1 ;
-(id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)arg1 ;
-(void)_inqValidateSearchIndex;
-(void)_inqResumeIndexingIfNeeded;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1 andAssetUUIDsBySocialGroup:(id)arg2 ;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1 ;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetUUIDsBySocialGroup:(id)arg1 ;
-(void)_fetchMemoriesToIndexWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 result:(/*^block*/id)arg3 ;
-(id)_featuredPeopleIdentifiersFromPhotosGraphData:(id)arg1 photosGraphVersion:(long long)arg2 ;
-(id)searchIndexManagerLog;
-(BOOL)_isIndexing;
-(void)_setIndexing:(BOOL)arg1 ;
-(id)_inqAfterIndexingDidIterate;
-(void)_setInqAfterIndexingDidIterate:(/*^block*/id)arg1 ;
-(NSCountedSet *)_pauseReasons;
@end

