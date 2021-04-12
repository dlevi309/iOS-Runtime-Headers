/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryLayoutAnimationHelper.h>

@class _PXCuratedLibraryLayoutAssetsSnapshot;

@interface PXCuratedLibraryLayoutZoomLevelChangeToOrFromAllPhotosAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {

	_PXCuratedLibraryLayoutAssetsSnapshot* _fromSnapshot;
	_PXCuratedLibraryLayoutAssetsSnapshot* _toSnapshot;

}
-(id)initWithLayout:(id)arg1 ;
-(double)animationDuration;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX83*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)_adjustGeometries:(inout SCD_Struct_PX11*)arg1 styles:(inout SCD_Struct_PX83*)arg2 infos:(inout SCD_Struct_PX15*)arg3 spriteIndexRange:(PXGSpriteIndexRange)arg4 appearing:(BOOL)arg5 ;
-(id)_snapshotForZoomLevel:(long long)arg1 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX83*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3 ;
@end

