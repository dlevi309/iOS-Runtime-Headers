/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID, SBGestureSwitcherModifierEvent;

@interface SBGestureSwitcherModifier : SBSwitcherModifier {

	NSUUID* _gestureID;
	SBGestureSwitcherModifierEvent* _lastGestureEvent;
	unsigned long long _gesturePhase;

}

@property (nonatomic,readonly) unsigned long long gesturePhase;              //@synthesize gesturePhase=_gesturePhase - In the implementation block
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(BOOL)isPreparingLayout;
-(BOOL)isUpdatingLayout;
-(id)handleGestureEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 ;
-(unsigned long long)gesturePhase;
@end

