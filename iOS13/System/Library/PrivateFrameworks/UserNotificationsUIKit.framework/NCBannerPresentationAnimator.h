/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCViewControllerAnimatedTransitioning.h>

@protocol NCBannerPresentationAnimatorDelegate;
@class UIGestureRecognizer, NSString;

@interface NCBannerPresentationAnimator : NSObject <NCViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	id<NCBannerPresentationAnimatorDelegate> _transitionAnimatorDelegate;
	UIGestureRecognizer* _activeGesture;

}

@property (assign,nonatomic,__weak) id<NCBannerPresentationAnimatorDelegate> transitionAnimatorDelegate;              //@synthesize transitionAnimatorDelegate=_transitionAnimatorDelegate - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                                     //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * activeGesture;                                                     //@synthesize activeGesture=_activeGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(UIGestureRecognizer *)activeGesture;
-(void)setActiveGesture:(UIGestureRecognizer *)arg1 ;
-(void)setTransitionAnimatorDelegate:(id<NCBannerPresentationAnimatorDelegate>)arg1 ;
-(void)_animatePresentationOfViewController:(id)arg1 withContext:(id)arg2 ;
-(void)_animateDismissalOfViewController:(id)arg1 withContext:(id)arg2 ;
-(id<NCBannerPresentationAnimatorDelegate>)transitionAnimatorDelegate;
@end

