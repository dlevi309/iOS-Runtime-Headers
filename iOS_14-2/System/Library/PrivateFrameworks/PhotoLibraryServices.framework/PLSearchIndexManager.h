/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchHighlightUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchMomentsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchHighlightsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)shouldIndexFilenames;
+(id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(int)currentSearchIndexVersion;
+(id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)_defaultDatabaseDirectoryWithPathManager:(id)arg1 ;
+(id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(void)setShouldIndexFilenames:(BOOL)arg1 ;
+(id)localeForSearchIndex;
+(id)fetchMomentUUIDsToPopulateAssetSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(void)_inqStartTrackingRebuildWithReason:(long long)arg1 ;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1 andAssetUUIDsBySocialGroup:(id)arg2 ;
-(void)dropSearchIndexWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(BOOL)arg1 ;
-(id)_featuredPeopleIdentifiersFromPhotosGraphData:(id)arg1 photosGraphVersion:(long long)arg2 ;
-(id)_inqPhotoLibrary;
-(void)_inqEndTrackingRebuildIfNeeded;
-(BOOL)_onQueueAsyncWithDelay:(double)arg1 perform:(/*^block*/id)arg2 ;
-(BOOL)_removeFileAtPath:(id)arg1 description:(id)arg2 ;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetUUIDsBySocialGroup:(id)arg1 ;
-(void)_inqEnsureSearchProgressExists;
-(id)searchIndexManagerLog;
-(BOOL)_inqUpdateLocale;
-(void)_inqScheduleCloseIndexIfNeeded;
-(void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2 ;
-(void)_setIndexing:(BOOL)arg1 ;
-(BOOL)_inqUpdateVersion;
-(void)setSceneTaxonomyProxyClass:(Class)arg1 ;
-(void)_inqStartTrackingUpdateIfAble;
-(void)applyUpdates:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enqueuedUUIDsCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_searchMetadataStorePath;
-(id)_synonymsProcessPath;
-(void)_inqResumeIndexingIfNeeded;
-(void)_fetchMemoriesToIndexWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 result:(/*^block*/id)arg3 ;
-(BOOL)_inqUpdateSceneTaxonomySHA:(id)arg1 ;
-(void)_inqEnsurePhotoLibraryExists;
-(id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1 ;
-(void)_inqEndTrackingUpdateIfNeeded;
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)_isIndexing;
-(id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1 ;
-(long long)_inqRebuildReasonIfSearchSupportingDataIsValid;
-(void)_throttleTimerFire:(id)arg1 ;
-(void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultSearchMetadataStorePath;
-(BOOL)_inqUpdateWordEmbeddingVersion:(id)arg1 ;
-(BOOL)_inqIsIndexingPaused;
-(id)_oldDbPath;
-(id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)arg1 ;
-(void)_inqSetIndexingPaused:(BOOL)arg1 reason:(id)arg2 ;
-(BOOL)_onQueueSync:(/*^block*/id)arg1 ;
-(id)_cxindexProgressPath;
-(void)_inqCloseSearchIndexAndDelete:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setIndexingPaused:(BOOL)arg1 synchronously:(BOOL)arg2 reason:(id)arg3 ;
-(id)_dbPath;
-(id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1 ;
-(void)_inqEnsureSearchSystemInfoExists;
-(void)invalidate;
-(void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(/*^block*/id)arg2 ;
-(void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(/*^block*/id)arg2 ;
-(id)_graphDataProcessPath;
-(Class)sceneTaxonomyProxyClass;
-(void)_inqValidateSearchIndex;
-(void)_inqTakeClientServerTransactionIfNeeded;
-(long long)_inqRebuildReasonIfSearchIndexIsValid;
-(void)_inqIndexPhotoLibrary;
-(BOOL)_onQueueAsync:(/*^block*/id)arg1 ;
-(id)_inqAfterIndexingDidIterate;
-(void)pauseIndexingWithReason:(id)arg1 ;
-(void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
-(id)_defaultDatabaseDirectory;
-(void)ensureSearchIndexExistsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_inqCloseIndexIfAbleOrForce:(BOOL)arg1 isDelete:(BOOL)arg2 ;
-(void)_inqEnsureSearchIndexExists;
-(id)defaultDatabasePath;
-(void)_inqEnsureSceneTaxonomyProxyExists;
-(id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)arg1 ;
-(BOOL)isIndexingPaused;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1 ;
-(id)_dbSearchSystemInfoPath;
-(BOOL)_inqUpdateSearchSystemInfo:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3 ;
-(NSCountedSet *)_pauseReasons;
-(void)_setInqAfterIndexingDidIterate:(/*^block*/id)arg1 ;
-(void)_inqDropClientServerTransactionIfNeeded;
-(void)dealloc;
-(void)unpauseIndexingWithReason:(id)arg1 ;
@end

