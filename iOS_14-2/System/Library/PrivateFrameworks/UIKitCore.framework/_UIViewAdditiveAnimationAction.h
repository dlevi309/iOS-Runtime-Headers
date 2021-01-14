/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3 ;
-(UIViewPropertyAnimator *)animationObject;
-(UIView *)view;
-(CAAnimation *)pendingAnimation;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
@end

