/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSource.h>

@class PXPhotosDataSource, PXPhotosDataSourceChange, NSString, NSCache;

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource {

	PXPhotosDataSource* _photosDataSource;
	PXPhotosDataSourceChange* _change;
	NSString* _changeFromDataSourceIdentifier;
	NSCache* __assetReferenceByIndexPathCache;

}

@property (nonatomic,readonly) PXPhotosDataSourceChange * change;                      //@synthesize change=_change - In the implementation block
@property (nonatomic,readonly) NSString * changeFromDataSourceIdentifier;              //@synthesize changeFromDataSourceIdentifier=_changeFromDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSCache * _assetReferenceByIndexPathCache;              //@synthesize _assetReferenceByIndexPathCache=__assetReferenceByIndexPathCache - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource;                  //@synthesize photosDataSource=_photosDataSource - In the implementation block
-(PXPhotosDataSource *)photosDataSource;
-(NSCache *)_assetReferenceByIndexPathCache;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2 ;
-(PXPhotosDataSourceChange *)change;
-(long long)numberOfAssetsWithMaximum:(long long)arg1 ;
-(id)indexPathForAssetReference:(id)arg1 ;
-(id)startingAssetReference;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)assetCollectionAtIndexPath:(id)arg1 ;
-(BOOL)isEmpty;
-(id)assetAtIndexPath:(id)arg1 ;
-(NSString *)changeFromDataSourceIdentifier;
-(id)indexPathForAssetCollection:(id)arg1 ;
-(id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3 ;
-(BOOL)couldAssetReferenceAppear:(id)arg1 ;
@end

