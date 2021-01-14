/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBHomeGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier {

	SBSwitcherModifier* _multitaskingModifier;

}
-(long long)gestureType;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ;
-(id)initWithMultitaskingModifier:(id)arg1 ;
@end

