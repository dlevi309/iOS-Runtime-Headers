/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol ARUICountdownAnimation, ARUICountdownAnimatorDelegate;
#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@class ARUICountdownTimeline, ARUICountdownView;

@interface ARUICountdownAnimator : NSObject {

	struct {
		unsigned willBeginAnimating : 1;
		unsigned willBeginAnimation : 1;
		unsigned performingAnimation : 1;
		unsigned completedAnimation : 1;
		unsigned didFinishAnimating : 1;
	}  _delegateFlags;
	BOOL _animating;
	BOOL _canceled;
	id<ARUICountdownAnimation> _currentAnimation;
	ARUICountdownTimeline* _timeline;
	ARUICountdownView* _countdownView;
	id<ARUICountdownAnimatorDelegate> _delegate;

}

@property (nonatomic,retain) ARUICountdownTimeline * timeline;                               //@synthesize timeline=_timeline - In the implementation block
@property (assign,nonatomic,__weak) ARUICountdownView * countdownView;                       //@synthesize countdownView=_countdownView - In the implementation block
@property (assign,nonatomic,__weak) id<ARUICountdownAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ARUICountdownAnimatorDelegate>)delegate;
-(void)setDelegate:(id<ARUICountdownAnimatorDelegate>)arg1 ;
-(BOOL)canceled;
-(BOOL)isAnimating;
-(ARUICountdownTimeline *)timeline;
-(id)initWithTimeline:(id)arg1 ;
-(void)prepareToAnimate;
-(void)_delegate_willBeginAnimating;
-(void)_applyAnimationAtIndex:(unsigned long long)arg1 ;
-(void)_delegate_didFinishAnimating;
-(void)_delegate_willBeginAnimation:(id)arg1 afterDelay:(double)arg2 ;
-(void)_delegate_performingAnimation:(id)arg1 withDuration:(double)arg2 ;
-(void)_delegate_completedAnimation:(id)arg1 ;
-(void)_applyCancelAnimationAtIndex:(unsigned long long)arg1 ;
-(void)cancelAnimations;
-(void)beginAnimations;
-(void)setTimeline:(ARUICountdownTimeline *)arg1 ;
-(ARUICountdownView *)countdownView;
-(void)setCountdownView:(ARUICountdownView *)arg1 ;
@end

