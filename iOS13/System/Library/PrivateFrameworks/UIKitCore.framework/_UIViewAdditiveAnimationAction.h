/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/CAAction.h>

@class CAAnimation, UIViewPropertyAnimator, UIView;

@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {

	CAAnimation* _pendingAnimation;
	UIViewPropertyAnimator* _animationObject;
	UIView* _view;

}

@property (nonatomic,retain,readonly) CAAnimation * pendingAnimation;                        //@synthesize pendingAnimation=_pendingAnimation - In the implementation block
@property (nonatomic,retain,readonly) UIViewPropertyAnimator * animationObject;              //@synthesize animationObject=_animationObject - In the implementation block
@property (nonatomic,retain,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(UIViewPropertyAnimator *)animationObject;
-(CAAnimation *)pendingAnimation;
-(id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3 ;
@end

