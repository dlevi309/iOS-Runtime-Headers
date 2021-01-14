/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSource.h>

@protocol PUDisplayAssetCollection;
@class NSDictionary, NSArray;

@interface PUReviewAssetsDataSource : PUAssetsDataSource {

	id<PUDisplayAssetCollection> __reviewAssetCollection;
	NSDictionary* __assetsByIdentifier;
	NSArray* __assetIdentifiers;

}

@property (nonatomic,readonly) id<PUDisplayAssetCollection> _reviewAssetCollection;              //@synthesize _reviewAssetCollection=__reviewAssetCollection - In the implementation block
@property (nonatomic,readonly) NSDictionary * _assetsByIdentifier;                               //@synthesize _assetsByIdentifier=__assetsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * _assetIdentifiers;                                      //@synthesize _assetIdentifiers=__assetIdentifiers - In the implementation block
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(id)initWithAssetsByIdentifier:(id)arg1 usingOrdering:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)indexPathForAssetWithIdentifier:(id)arg1 ;
-(id)_identifierAtIndexPath:(id)arg1 ;
-(id<PUDisplayAssetCollection>)_reviewAssetCollection;
-(NSDictionary *)_assetsByIdentifier;
-(NSArray *)_assetIdentifiers;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2 ;
-(id)indexPathForAssetReference:(id)arg1 ;
-(id)startingAssetReference;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)assetCollectionAtIndexPath:(id)arg1 ;
-(BOOL)isEmpty;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg1 ;
-(id)assetReferenceForAssetReference:(id)arg1 ;
@end

