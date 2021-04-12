/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUTileTransitionCoordinator : NSObject
+(id)defaultTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5 ;
+(id)defaultTileTransitionCoordinatorForUpdates;
+(id)defaultTileTransitionCoordinatorForFrameChangeWithTileCrossFade:(BOOL)arg1 tilingView:(id)arg2 ;
+(id)defaultTileTransitionCoordinatorForReattachedTileControllers:(id)arg1 context:(id)arg2 ;
+(id)defaultTileTransitionCoordinatorForLayoutInvalidationContext:(id)arg1 layout:(id)arg2 viewModel:(id)arg3 ;
+(id)browsingTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5 ;
-(id)newTileAnimationOptions;
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
@end

