/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>

@protocol BSInvalidatable, SBGrabberTongueDelegate;
@class UIPanGestureRecognizer, SBIndirectPanGestureRecognizer, UIView, _UIBackdropView, UIImageView, BSMonotonicReferenceTime, NSString;

@interface SBGrabberTongue : NSObject <SBSystemGestureRecognizerDelegate> {

	BOOL _invalidated;
	UIPanGestureRecognizer* _edgePullGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectEdgePullGestureRecognizer;
	UIView* _tongueContainer;
	_UIBackdropView* _tongueBackdropView;
	UIImageView* _tongueChevron;
	BOOL _tongueVisible;
	BOOL _inPullGesture;
	BOOL _inShowTongueGesture;
	BOOL _inDismissTongueGesture;
	BOOL _inAmbiguousGesture;
	BOOL _beganAmbiguousPullGesture;
	unsigned long long _screenEdge;
	unsigned long long _systemGestureType;
	UIView* _containingView;
	BSMonotonicReferenceTime* _gestureStartReferenceTime;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	id<SBGrabberTongueDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<SBGrabberTongueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<SBGrabberTongueDelegate>)delegate;
-(BOOL)isVisible;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_didDismiss;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)_willPresent;
-(BOOL)_shouldReceiveTouch:(id)arg1 ;
-(void)uninstall;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(id)edgePullGestureRecognizer;
-(id)initWithDelegate:(id)arg1 edge:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(void)installInView:(id)arg1 withColorStyle:(long long)arg2 ;
-(BOOL)dismissWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isEdgeLocationInGrabberRegion:(double)arg1 ;
-(void)_willDismiss;
-(void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1 ;
-(void)_presentTongueAnimated:(BOOL)arg1 ;
-(void)_dismissTongueWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(double)_distanceFromEdgeForRecognizer:(id)arg1 ;
-(double)_edgeOrientedVelocityForRecognizer:(id)arg1 ;
-(double)_centerOnScreenEdge;
-(double)_ambiguousActivationMargin;
-(void)_handlePullGesture:(id)arg1 ;
-(id)_createEdgePullGestureRecognizerWithAction:(SEL)arg1 ;
-(id)_newBackdropViewWithColorStyle:(long long)arg1 ;
-(id)_newChevronView;
-(void)_dismissTongue:(id)arg1 ;
-(void)_cancelPendingTongueDismissRequests;
-(CGRect)_frameForTongueWhenVisible:(BOOL)arg1 ;
-(CGRect)_chevronFrameForTongueBounds:(CGRect)arg1 ;
-(CGAffineTransform)_transformForTongueContainer;
-(UIEdgeInsets)_grabberTongueScreenInsets;
-(BOOL)_shouldShowTongueOnFirstSwipeWithRecognizer:(id)arg1 ;
-(double)_ambiguousActivationMarginIfHonored;
-(BOOL)_tongueOrPullEnabledForGestureRecognizer:(id)arg1 ;
-(void)_updateCancelsTouchesWithRecognizer:(id)arg1 ;
-(void)_pullGestureBegan:(id)arg1 ;
-(void)_pullGestureUpdated:(id)arg1 ;
-(void)_pullGestureEnded:(id)arg1 ;
-(void)_pullGestureCanceled:(id)arg1 ;
-(BOOL)_shouldAllowSecondSwipeWithRecognizer:(id)arg1 ;
-(void)_willPresentInteractively:(id)arg1 ;
-(void)_didPresentInteractively:(id)arg1 ;
-(id)indirectEdgePullGestureRecognizer;
-(double)distanceFromEdge;
-(double)edgeOrientedVelocity;
-(double)edgeLocationForTouch:(id)arg1 ;
@end

