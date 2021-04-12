/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PUTilingView, NSMutableDictionary;

@interface PUTileHider : NSObject {

	PUTilingView* _tilingView;
	NSMutableDictionary* __hiddenTileControllersByLayoutInfo;
	double __animationDuration;

}

@property (nonatomic,readonly) NSMutableDictionary * _hiddenTileControllersByLayoutInfo;              //@synthesize _hiddenTileControllersByLayoutInfo=__hiddenTileControllersByLayoutInfo - In the implementation block
@property (nonatomic,readonly) double _animationDuration;                                             //@synthesize _animationDuration=__animationDuration - In the implementation block
@property (nonatomic,readonly) PUTilingView * tilingView;                                             //@synthesize tilingView=_tilingView - In the implementation block
-(id)init;
-(id)initWithTilingView:(id)arg1 ;
-(void)unhideTilesAnimated:(BOOL)arg1 ;
-(void)reattachTiles;
-(void)hideTilesAtIndexPath:(id)arg1 withKinds:(id)arg2 dataSourceIdentifier:(id)arg3 animated:(BOOL)arg4 ;
-(PUTilingView *)tilingView;
-(double)_animationDuration;
-(NSMutableDictionary *)_hiddenTileControllersByLayoutInfo;
-(void)dealloc;
@end

