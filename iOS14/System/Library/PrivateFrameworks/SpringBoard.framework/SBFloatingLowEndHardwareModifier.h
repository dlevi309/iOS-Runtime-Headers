/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {

	unsigned long long _options;
	BOOL _floatingSwitcherVisible;
	BOOL _floatingAppVisibleOverSplitView;
	BOOL _floatingAppVisibleOverExclusiveForegroundApp;
	BOOL _shouldDimAndBlockTouches;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(double)switcherDimmingAlpha;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(BOOL)wantsSwitcherDimmingView;
-(BOOL)switcherDimmingViewBlocksTouches;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)_shouldDimAndBlockTouchesToAppsUnderFloating;
@end

