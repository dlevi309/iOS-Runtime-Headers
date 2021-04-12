/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXPhotosDataSource.h>

@class PXImportAssetsDataSource;

@interface PUImportFakePhotosDataSource : PXPhotosDataSource {

	PXImportAssetsDataSource* _importDataSource;

}

@property (nonatomic,retain) PXImportAssetsDataSource * importDataSource;              //@synthesize importDataSource=_importDataSource - In the implementation block
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(PXImportAssetsDataSource *)importDataSource;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(id)initWithImportDataSource:(id)arg1 ;
-(void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(BOOL)arg2 ;
-(void)setImportDataSource:(PXImportAssetsDataSource *)arg1 ;
@end

