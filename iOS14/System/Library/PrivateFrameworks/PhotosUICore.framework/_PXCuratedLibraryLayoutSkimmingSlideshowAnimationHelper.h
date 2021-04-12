/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryLayoutAnimationHelper.h>

@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {

	unsigned long long _userInterfaceDirection;
	PXSimpleIndexPath _fromIndexPath;
	PXSimpleIndexPath _toIndexPath;

}
-(id)initWithLayout:(id)arg1 ;
-(double)animationDuration;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(BOOL)wantsDoubleSidedAnimations;
-(void)_adjustGeometries:(inout SCD_Struct_PX11*)arg1 styles:(inout SCD_Struct_PX14*)arg2 infos:(inout SCD_Struct_PX15*)arg3 spriteIndexRange:(PXGSpriteIndexRange)arg4 appearing:(BOOL)arg5 ;
-(BOOL)_shoulAnimateSpriteWithInfo:(const SCD_Struct_PX15*)arg1 matchingSectionIndexPath:(PXSimpleIndexPath)arg2 spriteKind:(out unsigned char*)arg3 ;
-(id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const SCD_Struct_PX11*)arg4 styles:(const SCD_Struct_PX14*)arg5 infos:(const SCD_Struct_PX15*)arg6 ;
-(long long)animationCurve;
-(void)setUserData:(id)arg1 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5 ;
@end

