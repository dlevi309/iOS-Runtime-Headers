/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)completeTransitionImmediately;
-(UIView *)smallView;
-(void)setSmallView:(UIView *)arg1 ;
-(UIView *)largeView;
-(void)setLargeView:(UIView *)arg1 ;
-(BOOL)zoomingUp;
-(void)setZoomingUp:(BOOL)arg1 ;
@end

