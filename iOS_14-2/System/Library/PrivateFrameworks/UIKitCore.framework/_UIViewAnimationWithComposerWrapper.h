/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<UIViewAnimationComposing>)composer;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
-(id<UIIntervalAnimating>)animation;
-(void)setAnimation:(id<UIIntervalAnimating>)arg1 ;
@end

