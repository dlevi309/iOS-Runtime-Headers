/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureFinalDestinationSwitcherModifierDelegate.h>

@class SBStackedFloatingSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBDismissSiriSwitcherModifier, SBAppLayout, UIViewFloatAnimatableProperty, NSString;

@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {

	SBStackedFloatingSwitcherModifier* _stackedLayoutModifier;
	SBHomeGestureDockSwitcherModifier* _dockModifier;
	SBHomeGestureFinalDestinationSwitcherModifier* _finalDestinationModifier;
	SBDismissSiriSwitcherModifier* _dismissSiriModifier;
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
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToResignActive;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(long long)currentFinalDestination;
-(id)_responseForActivatingFinalDestination:(long long)arg1 ;
-(double)unconditionalDistanceThresholdForHome;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 continuingGesture:(BOOL)arg3 lastGestureWasAnArcSwipe:(BOOL)arg4 ;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1 ;
-(void)_beginAnimatingRampingPropertyWithSettings:(id)arg1 ;
@end

