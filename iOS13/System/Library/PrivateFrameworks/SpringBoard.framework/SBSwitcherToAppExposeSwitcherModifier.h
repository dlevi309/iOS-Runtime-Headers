/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {

	unsigned long long _slideDirection;
	SBSwitcherModifier* _multitaskingModifier;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)layoutSettings;
-(id)initWithTransitionID:(id)arg1 slideDirection:(unsigned long long)arg2 multitaskingModifier:(id)arg3 ;
-(double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)arg1 ;
@end

