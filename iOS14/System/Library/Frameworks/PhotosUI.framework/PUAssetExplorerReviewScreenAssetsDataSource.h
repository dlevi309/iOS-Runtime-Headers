/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSource.h>

@class PUAssetsDataSource, NSDictionary, NSCache;

@interface PUAssetExplorerReviewScreenAssetsDataSource : PUAssetsDataSource {

	PUAssetsDataSource* __originalDataSource;
	NSDictionary* __substitutedAssetsByUUID;
	NSCache* __assetReferenceByIndexPathCache;

}

@property (nonatomic,readonly) PUAssetsDataSource * _originalDataSource;               //@synthesize _originalDataSource=__originalDataSource - In the implementation block
@property (nonatomic,readonly) NSDictionary * _substitutedAssetsByUUID;                //@synthesize _substitutedAssetsByUUID=__substitutedAssetsByUUID - In the implementation block
@property (nonatomic,readonly) NSCache * _assetReferenceByIndexPathCache;              //@synthesize _assetReferenceByIndexPathCache=__assetReferenceByIndexPathCache - In the implementation block
-(NSCache *)_assetReferenceByIndexPathCache;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(id)indexPathForAssetReference:(id)arg1 ;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)assetCollectionAtIndexPath:(id)arg1 ;
-(id)identifier;
-(id)indexPathForAssetCollection:(id)arg1 ;
-(PUAssetsDataSource *)_originalDataSource;
-(id)initWithDataSource:(id)arg1 substitutedAssets:(id)arg2 ;
-(NSDictionary *)_substitutedAssetsByUUID;
@end

