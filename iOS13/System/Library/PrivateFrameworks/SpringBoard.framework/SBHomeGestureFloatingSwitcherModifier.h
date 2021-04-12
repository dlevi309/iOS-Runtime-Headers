/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureFinalDestinationSwitcherModifierDelegate.h>

@class SBStackedFloatingSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBAppLayout, UIViewFloatAnimatableProperty, NSString;

@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {

	SBStackedFloatingSwitcherModifier* _stackedLayoutModifier;
	SBHomeGestureDockSwitcherModifier* _dockModifier;
	SBHomeGestureFinalDestinationSwitcherModifier* _finalDestinationModifier;
	SBAppLayout* _selectedAppLayout;
	BOOL _continuingGesture;
	BOOL _lastGestureWasAnArcSwipe;
	CGPoint _translation;
	CGPoint _velocity;
	double _rubberbandedYTranslation;
	double _scaleProgress;
	double _multitaskingHintProgress;
	UIViewFloatAnimatableProperty* _rampingProperty;
	BOOL _gestureHasBegun;
	BOOL _gestureHasEnded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)topMostAppLayouts;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsMinificationFilter;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)layoutSettingsForIndex:(unsigned long long)arg1 ;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(long long)currentFinalDestination;
-(id)_actionForActivatingFinalDestination:(long long)arg1 ;
-(double)unconditionalDistanceThresholdForHome;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 continuingGesture:(BOOL)arg3 lastGestureWasAnArcSwipe:(BOOL)arg4 ;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1 ;
-(void)_beginAnimatingRampingPropertyWithSettings:(id)arg1 ;
@end

