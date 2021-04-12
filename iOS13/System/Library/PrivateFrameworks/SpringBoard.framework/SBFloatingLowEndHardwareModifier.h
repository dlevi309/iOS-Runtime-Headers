/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {

	unsigned long long _options;
	BOOL _floatingSwitcherVisible;
	BOOL _floatingAppVisibleOverSplitView;
	BOOL _floatingAppVisibleOverExclusiveForegroundApp;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(double)dimmingAlpha;
-(BOOL)dimmingViewBlocksTouches;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(BOOL)_shouldDimAndBlockTouchesToAppsUnderFloating;
@end

