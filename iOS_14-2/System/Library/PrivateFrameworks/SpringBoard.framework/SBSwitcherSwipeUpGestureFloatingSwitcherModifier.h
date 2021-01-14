/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBGridSwipeUpGestureSwitcherModifier, SBDismissSiriSwitcherModifier;

@interface SBSwitcherSwipeUpGestureFloatingSwitcherModifier : SBGestureSwitcherModifier {

	SBGridSwipeUpGestureSwitcherModifier* _gridSwipeUpGestureModifier;
	SBDismissSiriSwitcherModifier* _dismissSiriModifier;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)contentViewScale;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 ;
-(id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3 ;
@end

