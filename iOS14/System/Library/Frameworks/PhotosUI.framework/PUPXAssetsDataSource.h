/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSource.h>

@class PXAssetsDataSource;

@interface PUPXAssetsDataSource : PUAssetsDataSource {

	PXAssetsDataSource* _underlyingDataSource;

}

@property (nonatomic,readonly) PXAssetsDataSource * underlyingDataSource;              //@synthesize underlyingDataSource=_underlyingDataSource - In the implementation block
-(id)init;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2 ;
-(id)indexPathForAssetReference:(id)arg1 ;
-(id)initWithUnderlyingDataSource:(id)arg1 ;
-(PXAssetsDataSource *)underlyingDataSource;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
@end

