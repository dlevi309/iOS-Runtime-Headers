/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSPredicate;

@interface PXAssetsDataSource : PXSectionedDataSource {

	long long _cachedNumberOfAssets;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;
	unsigned long long _estimatedOtherCount;

}

@property (nonatomic,readonly) id<PXDisplayCollection> containerCollection; 
@property (nonatomic,readonly) id<PXDisplayAssetCollection> firstAssetCollection; 
@property (nonatomic,readonly) id<PXDisplayAssetCollection> lastAssetCollection; 
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;                        //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;                        //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedOtherCount;                         //@synthesize estimatedOtherCount=_estimatedOtherCount - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) long long startingSection; 
@property (nonatomic,readonly) BOOL startsAtEnd; 
@property (nonatomic,readonly) BOOL isFiltered; 
@property (nonatomic,readonly) NSPredicate * filterPredicate; 
@property (nonatomic,readonly) BOOL isSorted; 
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset; 
@property (nonatomic,readonly) BOOL areAllSectionsConsideredAccurate; 
-(NSPredicate *)filterPredicate;
-(long long)numberOfUncuratedItemsInAssetCollection:(id)arg1 ;
-(long long)numberOfCuratedItemsInAssetCollection:(id)arg1 ;
-(BOOL)areAllSectionsConsideredAccurate;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id*)arg2 ;
-(id<PXDisplayAsset>)keyAsset;
-(PXSimpleIndexPath)keyAssetIndexPathForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(unsigned long long)estimatedVideosCount;
-(long long)aggregateMediaType;
-(long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1 ;
-(id<PXDisplayAssetCollection>)firstAssetCollection;
-(PXSimpleIndexPath)indexPathForAssetReference:(id)arg1 ;
-(id)assetReferenceAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)startingAssetReference;
-(BOOL)isFiltered;
-(BOOL)isFilteringDisabledForAssetCollection:(id)arg1 ;
-(id)photosGraphSuggestedContributions;
-(long long)totalNumberOfItems;
-(id)assetIdentifierAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id<PXDisplayAssetCollection>)lastAssetCollection;
-(id)keyAssetsForAssetCollection:(id)arg1 ;
-(BOOL)hasCurationForAssetCollection:(id)arg1 ;
-(id)keyAssetsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)startsAtEnd;
-(long long)numberOfCuratedItemsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectReferenceNearestToObjectReference:(id)arg1 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 ;
-(id)assetsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfUncuratedItemsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id<PXDisplayCollection>)containerCollection;
-(id)metadataAssetAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)isFilteringAssetCollection:(id)arg1 ;
-(unsigned long long)numberOfAssets;
-(id)objectIDAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(Class)objectReferenceClassForSection;
-(Class)objectReferenceClassForItem;
-(unsigned long long)estimatedAssetCountForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2 ;
-(id)assetAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)isSorted;
-(long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1 ;
-(id)assetCollectionAtSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)assetCollectionReferenceAtSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForAssetCollectionReference:(id)arg1 ;
-(id)assetCollectionReferenceForAssetCollectionReference:(id)arg1 ;
-(BOOL)isFilteringSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)isFilteringDisabledForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)assetReferenceForAssetReference:(id)arg1 ;
-(id)objectReferenceNearestToObjectReference:(id)arg1 inSection:(long long)arg2 ;
-(unsigned long long)estimatedOtherCount;
-(long long)startingSection;
-(BOOL)isAssetAtIndexPathPartOfCuratedSet:(PXSimpleIndexPath)arg1 ;
-(unsigned long long)estimatedPhotosCount;
-(id)assetCollectionReferenceNearestToObjectReference:(id)arg1 ;
@end

