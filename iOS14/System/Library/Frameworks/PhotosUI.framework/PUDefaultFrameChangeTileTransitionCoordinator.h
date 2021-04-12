/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUTilingView, NSSet;

@interface PUDefaultFrameChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {

	BOOL _shouldCrossFadeTiles;
	PUTilingView* _tilingView;
	NSSet* __invisibleTileControllers;

}

@property (setter=_setInvisibleTileControllers:,nonatomic,copy) NSSet * _invisibleTileControllers;              //@synthesize _invisibleTileControllers=__invisibleTileControllers - In the implementation block
@property (assign,nonatomic) BOOL shouldCrossFadeTiles;                                                         //@synthesize shouldCrossFadeTiles=_shouldCrossFadeTiles - In the implementation block
@property (assign,nonatomic,__weak) PUTilingView * tilingView;                                                  //@synthesize tilingView=_tilingView - In the implementation block
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(PUTilingView *)tilingView;
-(BOOL)_isLayoutInfoVisible:(id)arg1 ;
-(void)setTilingView:(PUTilingView *)arg1 ;
-(id)_layoutInfoForDisappearedInvisibleTile:(id)arg1 ;
-(BOOL)shouldCrossFadeTiles;
-(void)setShouldCrossFadeTiles:(BOOL)arg1 ;
-(NSSet *)_invisibleTileControllers;
-(void)_setInvisibleTileControllers:(id)arg1 ;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(void)prepare;
@end

