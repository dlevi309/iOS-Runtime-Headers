/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/_PLManagedAlbum.h>
#import <libobjc.A.dylib/PLUserEditableAlbumProtocol.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemAlbumMetadataPersistence.h>
#import <libobjc.A.dylib/PLDeletableManagedObject.h>

@class NSMutableOrderedSet, NSOrderedSet, NSSet, PLPhotoLibrary, NSNumber, NSString, NSObject, NSURL, PLManagedAsset, NSArray, NSDate;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject> {

	BOOL _albumShouldBeAutomaticallyDeleted;
	BOOL _needsPersistenceUpdate;

}

@property (assign,nonatomic) BOOL albumShouldBeAutomaticallyDeleted;                         //@synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted - In the implementation block
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                                    //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * assets; 
@property (nonatomic,retain) NSSet * assetOrders; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSObject * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL isProjectAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)childKeyForOrdering;
+(id)albumSupportsAssetOrderKeysPredicate;
+(id)keyPathsForValuesAffectingVideosCount;
+(id)keyPathsForValuesAffectingApproximateCount;
+(id)validKindsForPersistence;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)keyPathsForValuesAffectingPhotosCount;
+(void)clearAssetOrderByAbumUUIDs;
+(id)cloudUUIDKeyForDeletion;
-(long long)cloudDeletionType;
-(BOOL)supportsAssetOrderKeys;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(unsigned long long)assetsCount;
-(id)_expectedKeyAssets:(id)arg1 ;
-(unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1 ;
-(BOOL)albumShouldBeAutomaticallyDeleted;
-(unsigned long long)_albumStandInCount;
-(void)_updateKeyAssetsIfNeeded:(id)arg1 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(unsigned long long)videosCount;
-(void)recalculateCachedCounts;
-(void)unregisterForChanges;
-(void)didSave;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)updateKeyAssetsIfNeeded;
-(void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(id)internalUserEditableAssetsAtIndexes:(id)arg1 ;
-(unsigned long long)countOfInternalUserEditableAssets;
-(NSMutableOrderedSet *)userEditableAssets;
-(id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1 ;
-(BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1 ;
-(void)refreshAssets;
-(id)descriptionOfAssetOrderValues;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 commentText:(id)arg5 ;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 ;
-(NSMutableOrderedSet *)mutableAssets;
-(id)childKeyForOrdering;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(void)addAssetUsingiTunesAlbumOrder:(id)arg1 ;
-(BOOL)canPerformDeleteOperation;
-(void)willSave;
-(void)sortAssetsUsingiTunesAlbumOrder;
-(NSString *)cloudUUIDForDeletion;
-(id)_keysToBeObserved;
-(void)prepareForDeletion;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(id)_assetOrderByAssetUUID;
-(void)removeInternalUserEditableAssetsAtIndexes:(id)arg1 ;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)registerForChanges;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(id)assetOrderByAbumUUIDs;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)photosCount;
-(unsigned long long)approximateCount;
-(BOOL)isEmpty;
@end

