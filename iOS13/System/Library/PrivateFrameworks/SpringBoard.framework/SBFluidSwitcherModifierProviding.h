/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFluidSwitcherModifierProviding
@required
-(id)transitionModifierForMainTransitionEvent:(id)arg1;
-(id)floorModifierForTransitionEvent:(id)arg1;
-(id)multitaskingModifierForEvent:(id)arg1;
-(id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
-(id)gestureModifierForGestureEvent:(id)arg1;
-(id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
-(id)appExposeModifierForAppExposeEvent:(id)arg1;
-(id)insertionModifierForInsertionEvent:(id)arg1;
-(id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1;
-(id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1;
-(id)lowEndHardwareModifier;
-(id)transitionModifierForInlineTransitionEvent:(id)arg1;

@end

