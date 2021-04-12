/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSource.h>

@protocol PUDisplayAssetCollection;
@class NSArray, NSDictionary;

@interface PUCameraTransientAssetsDataSource : PUAssetsDataSource {

	id<PUDisplayAssetCollection> __transientAssetCollection;
	NSArray* __assetUUIDs;
	NSDictionary* __assetsByUUID;
	NSDictionary* __representativeAssetsByBurstIdentifier;

}

@property (nonatomic,readonly) id<PUDisplayAssetCollection> _transientAssetCollection;              //@synthesize _transientAssetCollection=__transientAssetCollection - In the implementation block
@property (nonatomic,readonly) NSArray * _assetUUIDs;                                               //@synthesize _assetUUIDs=__assetUUIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * _assetsByUUID;                                        //@synthesize _assetsByUUID=__assetsByUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * _representativeAssetsByBurstIdentifier;               //@synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier - In the implementation block
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2 ;
-(id)indexPathForAssetReference:(id)arg1 ;
-(id)startingAssetReference;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)assetCollectionAtIndexPath:(id)arg1 ;
-(id)initWithUUIDs:(id)arg1 mapping:(id)arg2 representativeMapping:(id)arg3 inAssetCollection:(id)arg4 ;
-(id)_uuidAtIndexPath:(id)arg1 ;
-(id<PUDisplayAssetCollection>)_transientAssetCollection;
-(NSDictionary *)_representativeAssetsByBurstIdentifier;
-(NSDictionary *)_assetsByUUID;
-(BOOL)isEmpty;
-(id)assetAtIndexPath:(id)arg1 ;
-(NSArray *)_assetUUIDs;
-(id)indexPathForAssetCollection:(id)arg1 ;
-(id)assetReferenceForAssetReference:(id)arg1 ;
@end

