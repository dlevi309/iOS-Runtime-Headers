/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sortDescriptorsForAlbumKind:(int)arg1 ;
+(id)_predicateForAssetSubtype:(short)arg1 ;
+(BOOL)contextShouldIgnoreChangesForFetchRequest;
+(id)validKindsForPersistence;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)predicateForAlbumKind:(int)arg1 ;
+(BOOL)contextShouldIgnoreChangesForFetchedAssets;
+(id)cloudUUIDKeyForDeletion;
+(BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
-(long long)cloudDeletionType;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(id)assets;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(void)awakeFromFetch;
-(void)didSave;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(void)awakeFromInsert;
-(id)mutableAssets;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)canPerformDeleteOperation;
-(void)willSave;
-(NSString *)cloudUUIDForDeletion;
-(void)prepareForDeletion;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(id)keyAsset;
-(NSFetchRequest *)fetchRequest;
-(void)setKeyAsset:(id)arg1 ;
-(unsigned long long)count;
-(void)updateSnapshotAndClearCaches:(id)arg1 ;
-(id)_cachedKeyAssets;
-(void)setupFetchRequest;
-(NSPredicate *)extraFilterPredicate;
-(void)setALAssetsGroupFilterPredicate:(NSPredicate *)arg1 ;
-(id)_performFetchWithRequest:(id)arg1 ;
-(unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(BOOL)hasAssetsCache;
-(id)fastPointerAccessSetForAssets:(id)arg1 ;
-(BOOL)mayHaveAssetsInCommon:(id)arg1 ;
-(NSPredicate *)ALAssetsGroupFilterPredicate;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(void)setAssets:(id)arg1 ;
-(unsigned long long)approximateCount;
-(void)batchFetchAssets:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(BOOL)isEmpty;
-(void)didTurnIntoFault;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(id)primitiveAssets;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
@end

