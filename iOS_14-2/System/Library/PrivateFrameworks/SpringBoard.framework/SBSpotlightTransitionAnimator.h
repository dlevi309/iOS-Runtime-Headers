/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_SB37 _pulldownInterval;
	id<SBUISpotlightInitiating> _initiatingViewController;
	SPUIRemoteSearchViewController* _spotlightViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(BOOL)supportsRestarting;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(double)_percentVisibleForPercentComplete:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)_restoreSpotlightHeaderToInitiatingViewController;
-(void)_cleanupAfterAnimating:(BOOL)arg1 ;
-(void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)_prototypeSettingsChanged;
-(void)_animateInteractiveTransition:(id)arg1 ;
-(double)percentComplete;
-(void)_prepareToAnimate;
-(BOOL)shouldMoveIntoSearch;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)shouldMoveIntoSearchOnCancel;
-(void)_updateTransitionIntoSearch:(BOOL)arg1 percentComplete:(double)arg2 ;
-(void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(BOOL)arg1 ;
-(void)_animateIntoSearch:(BOOL)arg1 ;
@end

