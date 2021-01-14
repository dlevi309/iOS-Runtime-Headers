/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXBasicTileAnimationOptions;

@interface _PXWidgetCompositionUIViewElementTileTransitionContext : NSObject {

	PXBasicTileAnimationOptions* _animationOptions;
	/*^block*/id _alongsideAnimation;
	/*^block*/id _alongsideAnimationCompletion;

}

@property (nonatomic,retain) PXBasicTileAnimationOptions * animationOptions;              //@synthesize animationOptions=_animationOptions - In the implementation block
@property (nonatomic,copy) id alongsideAnimation;                                         //@synthesize alongsideAnimation=_alongsideAnimation - In the implementation block
@property (nonatomic,copy) id alongsideAnimationCompletion;                               //@synthesize alongsideAnimationCompletion=_alongsideAnimationCompletion - In the implementation block
-(PXBasicTileAnimationOptions *)animationOptions;
-(void)setAnimationOptions:(PXBasicTileAnimationOptions *)arg1 ;
-(void)setAlongsideAnimationCompletion:(id)arg1 ;
-(id)alongsideAnimationCompletion;
-(void)setAlongsideAnimation:(id)arg1 ;
-(id)alongsideAnimation;
@end

