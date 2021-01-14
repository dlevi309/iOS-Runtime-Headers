/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDisplayAssetVideoContentProvider.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHFetchResult, PHAsset, PXPhotoKitUIMediaProvider, NSString;

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver> {

	PHFetchResult* _fetchResult;

}

@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) PXPhotoKitUIMediaProvider * mediaProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
@end

