/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIViewControllerZoomTransition.h>

@protocol UIViewControllerContextTransitioning;
@class UIView, PXSwipeDownTracker, UIPanGestureRecognizer;

@interface PXUIViewControllerSwipeDownTransition : PXUIViewControllerZoomTransition {

	BOOL _didAnimate;
	BOOL _shouldHandleGestureEnd;
	BOOL _didHandleGestureEnd;
	id<UIViewControllerContextTransitioning> _transitionContext;
	UIView* _swipedView;
	UIView* _dimmingView;
	PXSwipeDownTracker* _swipeDownTracker;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGPoint _swipeViewInitialCenter;

}

@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) UIView * swipedView;                                                     //@synthesize swipedView=_swipedView - In the implementation block
@property (assign,nonatomic) CGPoint swipeViewInitialCenter;                                          //@synthesize swipeViewInitialCenter=_swipeViewInitialCenter - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                    //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) PXSwipeDownTracker * swipeDownTracker;                                   //@synthesize swipeDownTracker=_swipeDownTracker - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                           //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(void)animateTransition:(id)arg1 ;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)isInteractive;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)panGestureRecognizerDidChange;
-(void)_handleGestureEndIfNeeded;
-(void)_updateDimmingViewOrder;
-(CGPoint)swipeViewInitialCenter;
-(void)setSwipeViewInitialCenter:(CGPoint)arg1 ;
-(void)setSwipeDownTracker:(PXSwipeDownTracker *)arg1 ;
-(PXSwipeDownTracker *)swipeDownTracker;
-(UIView *)swipedView;
-(UIView *)dimmingView;
-(void)setSwipedView:(UIView *)arg1 ;
@end

