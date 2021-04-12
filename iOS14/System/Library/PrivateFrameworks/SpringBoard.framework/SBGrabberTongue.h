/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)uninstall;
-(BOOL)_tongueOrPullEnabledForGestureRecognizer:(id)arg1 ;
-(BOOL)dismissWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_didPresentInteractively:(id)arg1 ;
-(id)init;
-(void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 edge:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(id<SBGrabberTongueDelegate>)delegate;
-(double)distanceFromEdge;
-(CGRect)_frameForTongueWhenVisible:(BOOL)arg1 ;
-(double)edgeLocationForTouch:(id)arg1 ;
-(double)_ambiguousActivationMarginIfHonored;
-(BOOL)_shouldShowTongueOnFirstSwipeWithRecognizer:(id)arg1 ;
-(BOOL)isEdgeLocationInGrabberRegion:(double)arg1 ;
-(void)presentAnimated:(BOOL)arg1 ;
-(double)_edgeOrientedVelocityForRecognizer:(id)arg1 ;
-(void)_presentTongueAnimated:(BOOL)arg1 ;
-(void)_updateCancelsTouchesWithRecognizer:(id)arg1 ;
-(id)edgePullGestureRecognizer;
-(double)_distanceFromEdgeForRecognizer:(id)arg1 ;
-(void)_pullGestureCanceled:(id)arg1 ;
-(id)_createEdgePullGestureRecognizerWithAction:(SEL)arg1 ;
-(UIEdgeInsets)_grabberTongueScreenInsets;
-(CGAffineTransform)_transformForTongueContainer;
-(BOOL)isVisible;
-(void)_willPresentInteractively:(id)arg1 ;
-(double)_centerOnScreenEdge;
-(void)_didDismiss;
-(BOOL)_shouldReceiveTouch:(id)arg1 ;
-(void)_willDismiss;
-(void)_willPresent;
-(void)invalidate;
-(void)_pullGestureUpdated:(id)arg1 ;
-(void)_handlePullGesture:(id)arg1 ;
-(double)_ambiguousActivationMargin;
-(BOOL)_shouldAllowSecondSwipeWithRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_cancelPendingTongueDismissRequests;
-(id)indirectEdgePullGestureRecognizer;
-(id)_newBackdropViewWithColorStyle:(long long)arg1 ;
-(void)_dismissTongueWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)installInView:(id)arg1 withColorStyle:(long long)arg2 ;
-(void)_dismissTongue:(id)arg1 ;
-(void)_pullGestureBegan:(id)arg1 ;
-(void)_pullGestureEnded:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_newChevronView;
-(double)edgeOrientedVelocity;
-(CGRect)_chevronFrameForTongueBounds:(CGRect)arg1 ;
-(void)dealloc;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
@end

