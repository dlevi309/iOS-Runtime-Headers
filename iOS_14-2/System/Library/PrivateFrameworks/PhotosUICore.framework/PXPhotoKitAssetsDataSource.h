/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class NSMutableDictionary, NSCache, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource {

	NSMutableDictionary* _layoutItemByAssetCache;
	NSCache* _fetchedKeyAssetByAssetCollectionLocalIdentifierCache;
	NSCache* _assetReferenceNearestToAssetCache;
	PXPhotosDataSource* _photosDataSource;
	PXPhotosDataSourceChange* _change;

}

@property (nonatomic,readonly) PXPhotosDataSourceChange * change;                  //@synthesize change=_change - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource;              //@synthesize photosDataSource=_photosDataSource - In the implementation block
+(id)dataSourceWithAsset:(id)arg1 ;
+(id)dataSourceWithAssets:(id)arg1 ;
-(id)filterPredicate;
-(PXPhotosDataSource *)photosDataSource;
-(BOOL)containsAnyItems;
-(long long)numberOfUncuratedItemsInAssetCollection:(id)arg1 ;
-(long long)numberOfCuratedItemsInAssetCollection:(id)arg1 ;
-(BOOL)areAllSectionsConsideredAccurate;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id*)arg2 ;
-(PXSimpleIndexPath)keyAssetIndexPathForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)_fastKeyCuratedAssetForAssetCollection:(id)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 ;
-(unsigned long long)estimatedVideosCount;
-(id)objectsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSections;
-(long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1 ;
-(id)firstAssetCollection;
-(PXPhotosDataSourceChange *)change;
-(id)startingAssetReference;
-(BOOL)isFiltered;
-(BOOL)isFilteringDisabledForAssetCollection:(id)arg1 ;
-(id)selectionSnapshotForAsset:(id)arg1 assetCollection:(id)arg2 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)photosGraphSuggestedContributions;
-(id)assetIdentifierAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)description;
-(PXSimpleIndexPath)indexPathForObjectID:(id)arg1 ;
-(id)inputForItem:(id)arg1 ;
-(id)lastAssetCollection;
-(BOOL)containsMultipleItems;
-(id)keyAssetsForAssetCollection:(id)arg1 ;
-(BOOL)hasCurationForAssetCollection:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)keyAssetsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(BOOL)startsAtEnd;
-(BOOL)couldObjectReferenceAppear:(id)arg1 ;
-(long long)numberOfCuratedItemsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectReferenceNearestToObjectReference:(id)arg1 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 ;
-(id)objectReferenceAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)_assetReferenceReferenceNearestToAssetReferenceUsingExhaustiveSearch:(id)arg1 ;
-(long long)numberOfUncuratedItemsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)containerCollection;
-(BOOL)isFilteringAssetCollection:(id)arg1 ;
-(unsigned long long)identifier;
-(unsigned long long)estimatedAssetCountForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2 ;
-(void)prefetchIndexPaths:(id)arg1 ;
-(void)prefetchSections:(id)arg1 ;
-(BOOL)isSorted;
-(id)indexPathSetForObjectIDs:(id)arg1 ;
-(long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1 ;
-(PXSimpleIndexPath)_indexPathForObjectReference:(id)arg1 restrictedToSection:(long long)arg2 ;
-(id)objectReferenceNearestToObjectReference:(id)arg1 inSection:(long long)arg2 ;
-(unsigned long long)estimatedOtherCount;
-(long long)startingSection;
-(id)_assetCollectionReferenceNearestToObjectReferenceAssumingSortedByIncreasingCreationDate:(id)arg1 ;
-(BOOL)isAssetAtIndexPathPartOfCuratedSet:(PXSimpleIndexPath)arg1 ;
-(unsigned long long)estimatedPhotosCount;
-(id)assetCollectionReferenceNearestToObjectReference:(id)arg1 ;
@end

