/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <libobjc.A.dylib/PHAssetCollectionDataSource.h>

@class PHFetchResult, NSMutableDictionary, NSString;

@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource> {

	PHFetchResult* _assetCollectionsFetchResult;
	NSMutableDictionary* _assetsFetchResultByAssetCollection;
	unsigned long long _allAssetsCount;
	unsigned long long* _containerCounts;
	BOOL _cachedValuesNeedUpdate;
	unsigned long long _lastAssetCollectionIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHFetchResult * assetCollectionsFetchResult;              //@synthesize assetCollectionsFetchResult=_assetCollectionsFetchResult - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)globalIndexForIndexPath:(id)arg1 ;
-(id)indexPathForGlobalIndex:(unsigned long long)arg1 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(id)initWithAssetCollectionsFetchResult:(id)arg1 collectionsAssetsFetchResults:(id)arg2 ;
-(void)_updateCachedValues;
-(void)_updateCachedCount:(unsigned long long)arg1 forContainerAtContainerIndex:(unsigned long long)arg2 ;
-(unsigned long long)allAssetsCount;
-(id)assetContainerForAsset:(id)arg1 ;
-(id)assetContainerForAssetGlobalIndex:(unsigned long long)arg1 ;
-(unsigned long long)incrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3 ;
-(unsigned long long)decrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3 ;
-(id)assetAtGlobalIndex:(unsigned long long)arg1 ;
-(unsigned long long)globalIndexOfAsset:(id)arg1 ;
-(unsigned long long)indexOffsetForAssetContainerAtAssetIndex:(unsigned long long)arg1 ;
-(id)assetWithObjectID:(id)arg1 ;
-(id)assetsInAssetCollectionAtIndex:(unsigned long long)arg1 ;
-(id)newAssetsFetchResults;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)indexPathOfAsset:(id)arg1 ;
-(id)assetContainerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfContainer:(id)arg1 ;
-(id)firstAssetIndexPath;
-(id)lastAssetIndexPath;
-(BOOL)hasAssetAtIndexPath:(id)arg1 ;
-(id)findNearestIndexPath:(id)arg1 preferNext:(BOOL)arg2 ;
-(unsigned long long)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned long long)arg1 wrap:(BOOL)arg2 ;
-(unsigned long long)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned long long)arg1 wrap:(BOOL)arg2 ;
-(id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3 ;
-(id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3 ;
-(unsigned long long)assetCountForContainer:(id)arg1 ;
-(unsigned long long)assetCountForContainerAtIndex:(unsigned long long)arg1 ;
-(id)assetInAssetContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)pl_fetchAllAssets;
-(void)viewControllerPhotoLibraryDidChange:(id)arg1 ;
@end

