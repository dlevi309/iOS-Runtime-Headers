/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHFetchResult, PHPhotoLibrary, PXFetchResultDataSource, NSString;

@interface PXFetchResultDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	PHFetchResult* _currentFetchResult;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PXFetchResultDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)createInitialDataSource;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)initWithInitialFetchResult:(id)arg1 ;
-(void)setFetchResult:(id)arg1 changeDetails:(id)arg2 ;
@end

