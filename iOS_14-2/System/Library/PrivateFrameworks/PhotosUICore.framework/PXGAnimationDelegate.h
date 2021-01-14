/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGAnimationDelegate <NSObject>
@optional
-(void)animation:(id)arg1 adjustPresentedGeometries:(SCD_Struct_PX11*)arg2 styles:(SCD_Struct_PX14*)arg3 infos:(SCD_Struct_PX15*)arg4 count:(unsigned)arg5;
-(void)animation:(id)arg1 updateSpriteTransferMap:(inout unsigned*)arg2 forSpritesRemovedFromIndexes:(id)arg3 presentedGeometries:(const SCD_Struct_PX11*)arg4 styles:(const SCD_Struct_PX14*)arg5 infos:(const SCD_Struct_PX15*)arg6 spritesInsertedToIndexes:(id)arg7 targetGeometries:(const SCD_Struct_PX11*)arg8 styles:(const SCD_Struct_PX14*)arg9 infos:(const SCD_Struct_PX15*)arg10 rootLayout:(id)arg11;
-(id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const SCD_Struct_PX11*)arg4 styles:(const SCD_Struct_PX14*)arg5 infos:(const SCD_Struct_PX15*)arg6;

@required
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5;
-(void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3;

@end

