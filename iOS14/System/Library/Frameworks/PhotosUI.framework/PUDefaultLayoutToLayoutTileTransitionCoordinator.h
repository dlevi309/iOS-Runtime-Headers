/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@protocol PUTilingCoordinateSystem;
@class PUTilingLayout, PUAssetReference, PUTilingLayoutTransitionContext;

@interface PUDefaultLayoutToLayoutTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {

	BOOL __isZoomingIn;
	BOOL __needsUpdateZoomingIn;
	PUTilingLayout* _fromLayout;
	PUTilingLayout* _toLayout;
	PUAssetReference* _anchorAssetReference;
	PUTilingLayoutTransitionContext* _context;
	id<PUTilingCoordinateSystem> _fixedCoordinateSystem;

}

@property (assign,setter=_setZoomingIn:,nonatomic) BOOL _isZoomingIn;                                  //@synthesize _isZoomingIn=__isZoomingIn - In the implementation block
@property (assign,setter=_setNeedsUpdateZoomingIn:,nonatomic) BOOL _needsUpdateZoomingIn;              //@synthesize _needsUpdateZoomingIn=__needsUpdateZoomingIn - In the implementation block
@property (nonatomic,retain) PUTilingLayout * fromLayout;                                              //@synthesize fromLayout=_fromLayout - In the implementation block
@property (nonatomic,retain) PUTilingLayout * toLayout;                                                //@synthesize toLayout=_toLayout - In the implementation block
@property (nonatomic,retain) PUAssetReference * anchorAssetReference;                                  //@synthesize anchorAssetReference=_anchorAssetReference - In the implementation block
@property (nonatomic,retain) PUTilingLayoutTransitionContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<PUTilingCoordinateSystem> fixedCoordinateSystem;                       //@synthesize fixedCoordinateSystem=_fixedCoordinateSystem - In the implementation block
-(void)setToLayout:(PUTilingLayout *)arg1 ;
-(void)setAnchorAssetReference:(PUAssetReference *)arg1 ;
-(PUTilingLayoutTransitionContext *)context;
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(BOOL)_isCenterTileLayoutInfo:(id)arg1 ;
-(id)_centerTileLayoutInfoWithDefaultDisappearance:(id)arg1 layoutWhereCenterTileExists:(id)arg2 layoutWhereCenterTileDisappeared:(id)arg3 ;
-(BOOL)_isZoomingIn;
-(void)_invalidateIsZoomingIn;
-(void)_updateIsZoomingInIfNeeded;
-(long long)_zoomLevelForLayout:(id)arg1 ;
-(void)_setZoomingIn:(BOOL)arg1 ;
-(BOOL)_needsUpdateZoomingIn;
-(void)_setNeedsUpdateZoomingIn:(BOOL)arg1 ;
-(PUAssetReference *)anchorAssetReference;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(id)description;
-(void)setFixedCoordinateSystem:(id<PUTilingCoordinateSystem>)arg1 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(id<PUTilingCoordinateSystem>)fixedCoordinateSystem;
-(PUTilingLayout *)fromLayout;
-(PUTilingLayout *)toLayout;
-(void)setFromLayout:(PUTilingLayout *)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
-(void)setContext:(PUTilingLayoutTransitionContext *)arg1 ;
@end

