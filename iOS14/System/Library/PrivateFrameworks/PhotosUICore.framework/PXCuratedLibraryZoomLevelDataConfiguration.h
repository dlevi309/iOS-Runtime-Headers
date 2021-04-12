/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPhotosDataSourceProvider.h>

@class PXAssetsDataSourceManager, PHPhotoLibrary, NSString;

@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject <PXPhotosDataSourceProvider> {

	PXAssetsDataSourceManager* _assetsDataSourceManager;
	long long _zoomLevel;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                      //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                              //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * assetsDataSourceManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(long long)zoomLevel;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1 ;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)initWithZoomLevel:(long long)arg1 ;
-(id)initWithZoomLevel:(long long)arg1 assetsDataSourceManager:(id)arg2 ;
@end

