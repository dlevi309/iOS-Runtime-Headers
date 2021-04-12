/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProviding;
@class SBSwitcherModifier;

@interface SBForcePressGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {

	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _multitaskingModifier;

}
-(long long)gestureType;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2 ;
@end

