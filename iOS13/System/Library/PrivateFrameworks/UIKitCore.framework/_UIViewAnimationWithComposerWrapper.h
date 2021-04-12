/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIIntervalAnimating, UIViewAnimationComposing;
@interface _UIViewAnimationWithComposerWrapper : NSObject {

	id<UIIntervalAnimating> _animation;
	id<UIViewAnimationComposing> _composer;

}

@property (nonatomic,retain) id<UIIntervalAnimating> animation;                  //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) id<UIViewAnimationComposing> composer;              //@synthesize composer=_composer - In the implementation block
+(id)instanceWithAnimation:(id)arg1 composer:(id)arg2 ;
-(id<UIIntervalAnimating>)animation;
-(void)setAnimation:(id<UIIntervalAnimating>)arg1 ;
-(id<UIViewAnimationComposing>)composer;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
@end

