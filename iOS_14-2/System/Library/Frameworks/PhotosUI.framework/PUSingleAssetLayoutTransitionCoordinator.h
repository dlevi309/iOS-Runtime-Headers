/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTileTransitionCoordinator.h>

@protocol PUTilingCoordinateSystem;
@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator {

	id<PUTilingCoordinateSystem> _fixedCoordinateSystem;

}

@property (nonatomic,retain) id<PUTilingCoordinateSystem> fixedCoordinateSystem;              //@synthesize fixedCoordinateSystem=_fixedCoordinateSystem - In the implementation block
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(id)_layoutInfoWithDefaultDisappearance:(id)arg1 ;
-(void)setFixedCoordinateSystem:(id<PUTilingCoordinateSystem>)arg1 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(id<PUTilingCoordinateSystem>)fixedCoordinateSystem;
@end

