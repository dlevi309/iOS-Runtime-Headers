/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBMainDisplayWorkspaceAppInteractionEventSourceObserving.h>

@class SBFluidSwitcherGesture, SBWorkspaceApplicationSceneTransitionContext, SBMainDisplayLayoutState, SBAppLayout, NSDate, SBHomeGestureSettings, NSString;

@interface SBFluidSwitcherLayoutContext : NSObject <BSDescriptionProviding, SBMainDisplayWorkspaceAppInteractionEventSourceObserving> {

	BOOL _hasUserInteractedWithActiveApplication;
	SBFluidSwitcherGesture* _activeGesture;
	SBWorkspaceApplicationSceneTransitionContext* _activeTransitionContext;
	SBMainDisplayLayoutState* _currentLayoutState;
	SBMainDisplayLayoutState* _previousLayoutState;
	long long _previousInterfaceOrientation;
	SBAppLayout* _currentAppLayout;
	SBAppLayout* _transitioningFromAppLayout;
	SBAppLayout* _transitioningToAppLayout;
	NSDate* _lastTransitionCompletionDate;
	SBHomeGestureSettings* _homeGestureSettings;

}

@property (nonatomic,retain) SBMainDisplayLayoutState * currentLayoutState;                                         //@synthesize currentLayoutState=_currentLayoutState - In the implementation block
@property (nonatomic,retain) SBMainDisplayLayoutState * previousLayoutState;                                        //@synthesize previousLayoutState=_previousLayoutState - In the implementation block
@property (assign,nonatomic) long long previousInterfaceOrientation;                                                //@synthesize previousInterfaceOrientation=_previousInterfaceOrientation - In the implementation block
@property (nonatomic,retain) SBAppLayout * currentAppLayout;                                                        //@synthesize currentAppLayout=_currentAppLayout - In the implementation block
@property (nonatomic,retain) SBAppLayout * transitioningFromAppLayout;                                              //@synthesize transitioningFromAppLayout=_transitioningFromAppLayout - In the implementation block
@property (nonatomic,retain) SBAppLayout * transitioningToAppLayout;                                                //@synthesize transitioningToAppLayout=_transitioningToAppLayout - In the implementation block
@property (nonatomic,retain) NSDate * lastTransitionCompletionDate;                                                 //@synthesize lastTransitionCompletionDate=_lastTransitionCompletionDate - In the implementation block
@property (assign,nonatomic) BOOL hasUserInteractedWithActiveApplication;                                           //@synthesize hasUserInteractedWithActiveApplication=_hasUserInteractedWithActiveApplication - In the implementation block
@property (nonatomic,retain) SBHomeGestureSettings * homeGestureSettings;                                           //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,readonly) SBMainDisplayLayoutState * layoutState; 
@property (nonatomic,retain) SBFluidSwitcherGesture * activeGesture;                                                //@synthesize activeGesture=_activeGesture - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationSceneTransitionContext * activeTransitionContext;              //@synthesize activeTransitionContext=_activeTransitionContext - In the implementation block
@property (nonatomic,readonly) SBMainDisplayLayoutState * transitioningFromLayoutState; 
@property (nonatomic,readonly) SBMainDisplayLayoutState * transitioningToLayoutState; 
@property (nonatomic,readonly) double secondsSinceLastTransitionCompletion; 
@property (nonatomic,readonly) unsigned long long supportedOrientationsForGesture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBMainDisplayLayoutState *)previousLayoutState;
-(SBMainDisplayLayoutState *)layoutState;
-(SBFluidSwitcherGesture *)activeGesture;
-(void)setActiveGesture:(SBFluidSwitcherGesture *)arg1 ;
-(long long)previousInterfaceOrientation;
-(void)setPreviousInterfaceOrientation:(long long)arg1 ;
-(SBMainDisplayLayoutState *)currentLayoutState;
-(void)setCurrentLayoutState:(SBMainDisplayLayoutState *)arg1 ;
-(id)initWithLayoutState:(id)arg1 ;
-(SBWorkspaceApplicationSceneTransitionContext *)activeTransitionContext;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 whenBeginningGestureOfType:(long long)arg2 ;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 currentAppLayouts:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(void)didEndTransitioningToLayoutStateWithContext:(id)arg1 ;
-(void)willBeginTransitioningToLayoutStateWithContext:(id)arg1 ;
-(SBMainDisplayLayoutState *)transitioningFromLayoutState;
-(SBHomeGestureSettings *)homeGestureSettings;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2 ;
-(NSDate *)lastTransitionCompletionDate;
-(double)secondsSinceLastTransitionCompletion;
-(BOOL)_shouldUpdateSwitcherModelBasedOnTimeOrUserInteraction;
-(unsigned long long)supportedOrientationsForGesture;
-(SBMainDisplayLayoutState *)transitioningToLayoutState;
-(void)setPreviousLayoutState:(SBMainDisplayLayoutState *)arg1 ;
-(SBAppLayout *)currentAppLayout;
-(void)setCurrentAppLayout:(SBAppLayout *)arg1 ;
-(SBAppLayout *)transitioningFromAppLayout;
-(void)setTransitioningFromAppLayout:(SBAppLayout *)arg1 ;
-(SBAppLayout *)transitioningToAppLayout;
-(void)setTransitioningToAppLayout:(SBAppLayout *)arg1 ;
-(void)setLastTransitionCompletionDate:(NSDate *)arg1 ;
-(BOOL)hasUserInteractedWithActiveApplication;
-(void)setHasUserInteractedWithActiveApplication:(BOOL)arg1 ;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
@end

