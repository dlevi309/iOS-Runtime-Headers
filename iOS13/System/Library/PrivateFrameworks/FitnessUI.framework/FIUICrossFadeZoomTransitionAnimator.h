/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <libobjc.A.dylib/FIUIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface FIUICrossFadeZoomTransitionAnimator : NSObject <FIUIViewControllerAnimatedTransitioning> {

	/*^block*/id _animationCompletionBlock;
	BOOL _transitionCompleted;
	BOOL _zoomingUp;
	id _context;
	UIView* _smallView;
	UIView* _largeView;

}

@property (nonatomic,retain) id context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * smallView;                    //@synthesize smallView=_smallView - In the implementation block
@property (nonatomic,retain) UIView * largeView;                    //@synthesize largeView=_largeView - In the implementation block
@property (assign,nonatomic) BOOL zoomingUp;                        //@synthesize zoomingUp=_zoomingUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)context;
-(void)setContext:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)completeTransitionImmediately;
-(UIView *)smallView;
-(void)setSmallView:(UIView *)arg1 ;
-(UIView *)largeView;
-(void)setLargeView:(UIView *)arg1 ;
-(BOOL)zoomingUp;
-(void)setZoomingUp:(BOOL)arg1 ;
@end

