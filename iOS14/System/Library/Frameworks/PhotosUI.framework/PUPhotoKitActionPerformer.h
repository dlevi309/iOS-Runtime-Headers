/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionPerformer.h>

@class PXPhotosDataSource, NSArray;

@interface PUPhotoKitActionPerformer : PUAssetActionPerformer {

	PXPhotosDataSource* _photosDataSource;

}

@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;              //@synthesize photosDataSource=_photosDataSource - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(PXPhotosDataSource *)photosDataSource;
-(void)forceIncludeAssetsInDataSource;
-(id)_indexPathsInPhotosDataSource:(id)arg1 ;
-(void)stopExcludingAssetsFromDataSource;
-(void)instantlyExcludeAssetsFromDataSource;
@end

