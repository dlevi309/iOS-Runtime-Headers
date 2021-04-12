/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier, SBAppLayout, SBSwitcherToActiveFloatingSwitcherModifier, NSArray;

@interface SBAppExposeToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	unsigned long long _direction;
	SBSwitcherModifier* _multitaskingModifier;
	SBAppLayout* _activeAppLayout;
	SBSwitcherToActiveFloatingSwitcherModifier* _switcherToActiveFloatingAppModifier;
	NSArray* _appLayoutsPriorToTransitionFromAppExpose;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexFullScreenAppLayout:(unsigned long long)arg1 ;
-(double)_unselectedCardScale;
-(id)topMostAppLayouts;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)_isEffectivelyActiveFloatingApp;
-(id)initWithTransitionID:(id)arg1 direction:(unsigned long long)arg2 multitaskingModifier:(id)arg3 activeAppLayout:(id)arg4 switcherToActiveFloatingAppModifier:(id)arg5 ;
@end

