/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(BOOL)isPreparingLayout;
-(BOOL)isUpdatingLayout;
-(long long)layoutUpdateMode;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 ;
-(unsigned long long)gesturePhase;
@end

