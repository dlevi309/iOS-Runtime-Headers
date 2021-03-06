/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString, NSArray;


@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>
@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) long long playbackHistoryPlaylistPersistentID; 
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) id<MPArtworkDataSource> completeMyCollectionArtworkDataSource; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@optional
+(id)onDiskProviders;
+(void)setOnDiskProviders:(id)arg1;
-(NSString *)databasePath;
-(BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
-(BOOL)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
-(id)lastModifiedDate;
-(void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
-(BOOL)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
-(BOOL)isGeniusEnabled;
-(BOOL)hasUbiquitousBookmarkableItems;
-(id<MPArtworkDataSource>)completeMyCollectionArtworkDataSource;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
-(void)geniusItemsForSeedItem:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)hasGeniusMixes;
-(void)addTracksToMyLibrary:(id)arg1;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1;
-(void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)hasMediaOfType:(unsigned long long)arg1;
-(BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
-(long long)itemPersistentIDForStoreID:(long long)arg1;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(long long)addPlaylistWithValuesForProperties:(id)arg1;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(/*^block*/id)arg5;
-(long long)sdk_addPlaylistWithValuesForProperties:(id)arg1;
-(BOOL)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
-(BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
-(BOOL)removePlaylistWithIdentifier:(long long)arg1;
-(void)setItemsWithIdentifiers:(id)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(NSArray *)localizedSectionIndexTitles;
-(void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
-(void)sdk_addItemWithOpaqueIdentifier:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)removeItemsAtIndexes:(id)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(long long)playbackHistoryPlaylistPersistentID;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
-(void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
-(void)sdk_addItemWithOpaqueID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3;
-(BOOL)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1;
-(NSArray *)preferredAudioLanguages;
-(id)valueForDatabaseProperty:(id)arg1;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
-(void)updateEntitesToCurrentRevision;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
-(NSArray *)preferredSubtitleLanguages;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3;
-(NSString *)accountDSID;
-(BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
-(BOOL)isCurrentThreadInTransaction;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
-(BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1;
-(void)releaseGeniusClusterPlaylist:(void*)arg1;
-(BOOL)deleteDatabaseProperty:(id)arg1;

@end

