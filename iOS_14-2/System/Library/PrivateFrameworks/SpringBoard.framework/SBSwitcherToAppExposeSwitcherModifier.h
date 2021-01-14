/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppExposeGridSwitcherModifier, NSSet;

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppExposeGridSwitcherModifier* _appExposeModifier;
	NSSet* _appLayoutsVisibleBeforeTransition;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)visibleAppLayouts;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillUpdate;
-(id)handleTimerEvent:(id)arg1 ;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 bundleIdentifier:(id)arg2 appExposeModifier:(id)arg3 ;
-(id)_newAppExposeModifier;
-(double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)arg1 ;
@end

