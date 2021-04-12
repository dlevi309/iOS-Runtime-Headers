/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBViewControllerContextTransitioning, SBUISpotlightInitiating;
@class SBSystemAnimationSettings, UIView, SBSearchBackdropView, SPUIRemoteSearchViewController, NSString;

@interface SBSpotlightTransitionAnimator : NSObject <PTSettingsKeyObserver, SBViewControllerInteractiveAnimatedTransitioning> {

	SBSystemAnimationSettings* _settings;
	id<SBViewControllerContextTransitioning> _transitionContext;
	double _percentComplete;
	double _transitionDuration;
	unsigned long long _transitionToken;
	unsigned long long _operation;
	UIView* _touchSwallowingView;
	UIView* _containerView;
	UIView* _searchView;
	SBSearchBackdropView* _backdropView;
	BOOL _ownsBackdropView;
	SCD_Struct_SB42 _pulldownInterval;
	id<SBUISpotlightInitiating> _initiatingViewController;
	SPUIRemoteSearchViewController* _spotlightViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)percentComplete;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)supportsRestarting;
-(void)_prepareToAnimate;
-(void)_prototypeSettingsChanged;
-(void)_animateInteractiveTransition:(id)arg1 ;
-(BOOL)shouldMoveIntoSearch;
-(void)_animateIntoSearch:(BOOL)arg1 ;
-(void)_cleanupAfterAnimating:(BOOL)arg1 ;
-(void)_updateTransitionIntoSearch:(BOOL)arg1 percentComplete:(double)arg2 ;
-(void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)shouldMoveIntoSearchOnCancel;
-(void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(double)_percentVisibleForPercentComplete:(double)arg1 ;
-(void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(BOOL)arg1 ;
-(void)_restoreSpotlightHeaderToInitiatingViewController;
@end

