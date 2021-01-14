/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier {

	BOOL _hasPerformedInitialSetup;

}
-(void)_setup;
-(id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1 ;
-(id)handleScrollEvent:(id)arg1 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg1 ;
-(id)multitaskingModifierForEvent:(id)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(id)removalModifierForRemovalEvent:(id)arg1 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)lowEndHardwareModifier;
-(id)insertionModifierForInsertionEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)floorModifierForTransitionEvent:(id)arg1 ;
-(id)gestureModifierForGestureEvent:(id)arg1 ;
-(id)userScrollingModifierForScrollEvent:(id)arg1 ;
-(id)multitaskingModifier;
-(id)_reduceMotionModifier;
-(void)_handleTransitionEvent:(id)arg1 ;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)floorModifier;
-(id)handleReduceMotionChangedEvent:(id)arg1 ;
-(void)_updateMultitaskingModifierWithEvent:(id)arg1 ;
-(void)_updateFloorModifierWithTransitionEvent:(id)arg1 ;
-(void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)arg1 ;
-(void)_updateLowEndHardwareModifier;
-(id)transitionModifierForInlineTransitionEvent:(id)arg1 ;
-(id)handleSwipeToKillEvent:(id)arg1 ;
-(id)_swipeToKillModifierKeyForAppLayout:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(void)verifyInternalIntegrityAfterHandlingEvent:(id)arg1 ;
@end

