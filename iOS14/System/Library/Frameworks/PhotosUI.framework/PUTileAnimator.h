/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUTilingViewControllerTransition;
@interface PUTileAnimator : NSObject {

	id<PUTilingViewControllerTransition> _currentTransition;

}

@property (nonatomic,__weak,readonly) id<PUTilingViewControllerTransition> currentTransition;              //@synthesize currentTransition=_currentTransition - In the implementation block
-(void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2 ;
-(void)transitionWillBeginAnimation:(id)arg1 ;
-(void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2 ;
-(void)transitionDidBeginAnimation:(id)arg1 ;
-(void)transition:(id)arg1 didComplete:(BOOL)arg2 ;
-(id)freezeTileController:(id)arg1 ;
-(id<PUTilingViewControllerTransition>)currentTransition;
-(void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

