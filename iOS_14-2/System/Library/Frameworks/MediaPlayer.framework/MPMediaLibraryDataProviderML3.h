/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPMediaLibraryDataProviderPrivate.h>
#import <libobjc.A.dylib/MPUserIdentityConsuming.h>

@protocol OS_dispatch_queue, OS_dispatch_source, MPArtworkDataSource;
@class NSString, NSArray, NSObject, NSOperationQueue, ML3MusicLibrary, MPMediaEntityCache, ICUserIdentity, MPMediaLibrary, NSSet;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate, MPUserIdentityConsuming> {

	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	NSObject*<OS_dispatch_queue> _cloudUpdateQueue;
	unsigned long long _backgroundTask;
	unsigned long long _backgroundTaskCount;
	BOOL _hasScheduledEventPosting;
	long long _refreshState;
	NSString* _uniqueIdentifier;
	NSOperationQueue* _setValuesWidthLimitedQueue;
	NSObject*<OS_dispatch_queue> _entitiesAddedOrRemovedNotificationQueue;
	NSObject*<OS_dispatch_source> _entitiesAddedOrRemovedCoalescingTimer;
	ML3MusicLibrary* _library;
	MPMediaEntityCache* _entityCache;
	id<MPArtworkDataSource> _artworkDataSource;
	ICUserIdentity* _userIdentity;
	MPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) ML3MusicLibrary * library;                                                    //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) MPMediaLibrary * mediaLibrary;                                         //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) long long playbackHistoryPlaylistPersistentID; 
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) id<MPArtworkDataSource> completeMyCollectionArtworkDataSource; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) MPMediaEntityCache * entityCache;                                           //@synthesize entityCache=_entityCache - In the implementation block
@property (nonatomic,readonly) id<MPArtworkDataSource> artworkDataSource;                                  //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthentication; 
@property (nonatomic,readonly) NSSet * propertiesToCache; 
@property (nonatomic,readonly) NSString * syncValidity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                                  //@synthesize userIdentity=_userIdentity - In the implementation block
+(id)onDiskProviders;
+(id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2 ;
+(id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1 ;
-(NSString *)databasePath;
-(ML3MusicLibrary *)library;
-(unsigned long long)currentEntityRevision;
-(id<MPArtworkDataSource>)artworkDataSource;
-(ICUserIdentity *)userIdentity;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 inUsersLibrary:(BOOL)arg3 itemBlock:(/*^block*/id)arg4 collectionBlock:(/*^block*/id)arg5 ;
-(void)_importStoreItemElements:(id)arg1 withReferralObject:(id)arg2 andAddTracksToCloudLibrary:(BOOL)arg3 usingCloudAdamID:(long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 ;
-(BOOL)writable;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(BOOL)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3 additionalFilterPredicates:(id)arg4 ;
-(id)lastModifiedDate;
-(void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3 ;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4 ;
-(BOOL)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(NSString *)uniqueIdentifier;
-(id)initWithLibrary:(id)arg1 ;
-(BOOL)hasUbiquitousBookmarkableItems;
-(NSString *)name;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(BOOL)hasGeniusMixes;
-(void)addTracksToMyLibrary:(id)arg1 ;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)syncGenerationID;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasMediaOfType:(unsigned long long)arg1 ;
-(BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(void)_libraryPathDidChange:(id)arg1 ;
-(long long)itemPersistentIDForStoreID:(long long)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_postEvents;
-(void)setLibrary:(ML3MusicLibrary *)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(long long)addPlaylistWithValuesForProperties:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(long long)sdk_addPlaylistWithValuesForProperties:(id)arg1 ;
-(BOOL)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)_displayValuesDidChange:(id)arg1 ;
-(BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)removePlaylistWithIdentifier:(long long)arg1 ;
-(void)setItemsWithIdentifiers:(id)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_storePlatformRequestContext;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSArray *)localizedSectionIndexTitles;
-(void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performBackgroundTaskWithBlock:(/*^block*/id)arg1 ;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(void)sdk_addItemWithOpaqueIdentifier:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeItemsAtIndexes:(id)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)playbackHistoryPlaylistPersistentID;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1 ;
-(void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1 ;
-(void)_coalesceEvents;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 ;
-(void)_libraryUIDDidChange:(id)arg1 ;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1 ;
-(void)sdk_addItemWithOpaqueID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_syncGenerationDidChange:(id)arg1 ;
-(void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)collectionResultSetForQueryCriteria:(id)arg1 ;
-(void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)_dataProviderSupportsEntityChangeTracking;
-(void)_addGlobalPlaylistsToLibraryDatabase:(id)arg1 asLibraryOwned:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3 ;
-(id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)_libraryEntitiesAddedOrRemoved:(id)arg1 ;
-(id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemNonnullDateOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)_libraryCloudLibraryAvailabilityDidChange:(id)arg1 ;
-(id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)_dynamicPropertiesDidChange:(id)arg1 ;
-(id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(BOOL)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)_invisiblePropertiesDidChange:(id)arg1 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1 ;
-(NSArray *)preferredAudioLanguages;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5 ;
-(long long)playlistGeneration;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 ;
-(NSArray *)preferredSubtitleLanguages;
-(MPMediaLibrary *)mediaLibrary;
-(NSString *)accountDSID;
-(NSString *)syncValidity;
-(MPMediaEntityCache *)entityCache;
-(BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(BOOL)isCurrentThreadInTransaction;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2 ;
-(BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1 ;
-(void)dealloc;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
@end

