/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>

@class PXPhotosDataSource, NSString;

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager <PXPhotosDataSourceChangeObserver> {

	PXPhotosDataSource* _photosDataSource;

}

@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;              //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(PXPhotosDataSource *)photosDataSource;
-(id)initWithPhotosDataSource:(id)arg1 ;
-(id)photosDataSourceInterestingAssetReferences:(id)arg1 ;
-(id)init;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(id)initWithAssetsDataSourceManager:(id)arg1 ;
-(void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2 ;
-(void)dealloc;
@end

