/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBasicTileAnimator.h>

@class NSCountedSet;

@interface PXBasicUIViewTileAnimator : PXBasicTileAnimator {

	NSCountedSet* _suspendedTiles;

}
+(void)animateWithOptions:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)suspendAnimationsForTile:(id)arg1 ;
-(void)resumeAnimationsForTile:(id)arg1 ;
-(void)_applyGeometry:(PXTileGeometry*)arg1 toTile:(id)arg2 ;
-(void)_applyGeometry:(PXTileGeometry*)arg1 userData:(id)arg2 toTile:(id)arg3 ;
-(void)prepareTile:(id)arg1 withGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 ;
-(void)animateTile:(id)arg1 toGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 withOptions:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

