/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@protocol SBFluidSwitcherModifierProviding;
@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {

	double _centerYOffsetWhenPresentedInMultitasking;
	id<SBFluidSwitcherModifierProviding> _modifierProvider;

}
-(long long)gestureType;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(id)initWithStartingEnvironmentMode:(long long)arg1 centerYOffsetWhenPresentedInMultitasking:(double)arg2 modifierProvider:(id)arg3 ;
@end

