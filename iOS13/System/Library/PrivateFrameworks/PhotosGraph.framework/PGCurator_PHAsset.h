/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGCurator.h>

@class PHPhotoLibrary;

@interface PGCurator_PHAsset : PGCurator {

	PHPhotoLibrary* _photoLibrary;

}
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)bestAssetsForFeeder:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)newSemanticalDeduperWithOptions:(id)arg1 ;
-(id)newMovieDeduperWithOptions:(id)arg1 ;
-(void)lastPassToCompleteItems:(id)arg1 fromFeeder:(id)arg2 options:(id)arg3 maximumNumberOfItems:(unsigned long long)arg4 debugInfo:(id)arg5 ;
-(void)addMoviesToAssets:(id)arg1 fromFeeder:(id)arg2 maximumNumberOfAssets:(unsigned long long)arg3 debugInfo:(id)arg4 ;
@end

