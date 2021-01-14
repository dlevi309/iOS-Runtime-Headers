/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGKeyCurator.h>

@class PHPhotoLibrary;

@interface PGKeyCurator_PHAsset : PGKeyCurator {

	PHPhotoLibrary* _photoLibrary;

}
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)keyAssetWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)keyAssetInAssets:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
@end

