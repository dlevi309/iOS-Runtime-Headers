/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetReference.h>

@class PUAssetReference;

@interface PUJoiningAssetReference : PUAssetReference {

	long long _hintDataSourceIndex;
	PUAssetReference* _containedAssetReference;

}

@property (nonatomic,readonly) long long hintDataSourceIndex;                           //@synthesize hintDataSourceIndex=_hintDataSourceIndex - In the implementation block
@property (nonatomic,readonly) PUAssetReference * containedAssetReference;              //@synthesize containedAssetReference=_containedAssetReference - In the implementation block
-(long long)hintDataSourceIndex;
-(PUAssetReference *)containedAssetReference;
-(id)initWithContainedAssetReference:(id)arg1 hintDataSourceIndex:(long long)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4 ;
-(id)description;
-(id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4 ;
@end

