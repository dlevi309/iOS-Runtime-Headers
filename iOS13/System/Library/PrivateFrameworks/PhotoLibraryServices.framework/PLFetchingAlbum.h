/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/_PLFetchingAlbum.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemAlbumMetadataPersistence.h>

@class NSArray, NSPredicate, NSOrderedSet, NSFetchRequest, NSData, NSString;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence> {

	unsigned long long _countForDisplay;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	int _emptyState;
	NSArray* _cachedKeyAssets;
	BOOL _needsPersistenceUpdate;
	NSPredicate* _ALAssetsGroupFilterPredicate;
	unsigned long long _batchSize;

}

@property (nonatomic,retain) NSOrderedSet * fetchedAssets; 
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                             //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
@property (nonatomic,retain) NSData * customQueryParameters; 
@property (nonatomic,retain) NSString * customQueryType; 
@property (nonatomic,readonly) NSPredicate * extraFilterPredicate; 
@property (nonatomic,retain) NSPredicate * ALAssetsGroupFilterPredicate;              //@synthesize ALAssetsGroupFilterPredicate=_ALAssetsGroupFilterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)validKindsForPersistence;
+(id)sortDescriptorsForAlbumKind:(int)arg1 ;
+(id)predicateForAlbumKind:(int)arg1 ;
+(BOOL)contextShouldIgnoreChangesForFetchedAssets;
+(BOOL)contextShouldIgnoreChangesForFetchRequest;
+(BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+(id)_panoramasAlbumPredicate;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(unsigned long long)approximateCount;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(void)awakeFromFetch;
-(void)didTurnIntoFault;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(void)didSave;
-(id)assets;
-(void)setAssets:(id)arg1 ;
-(long long)cloudDeletionType;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)mutableAssets;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)isValidForPersistence;
-(id)primitiveAssets;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(void)updateSnapshotAndClearCaches:(id)arg1 ;
-(id)_cachedKeyAssets;
-(void)setupFetchRequest;
-(NSPredicate *)extraFilterPredicate;
-(void)setALAssetsGroupFilterPredicate:(NSPredicate *)arg1 ;
-(id)_performFetchWithRequest:(id)arg1 ;
-(unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(BOOL)hasAssetsCache;
-(id)fastPointerAccessSetForAssets:(id)arg1 ;
-(BOOL)mayHaveAssetsInCommon:(id)arg1 ;
-(NSPredicate *)ALAssetsGroupFilterPredicate;
@end

