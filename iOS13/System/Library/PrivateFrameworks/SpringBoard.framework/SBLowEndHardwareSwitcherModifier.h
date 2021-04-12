/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {

	unsigned long long _options;
	BOOL _floatingAppVisibleOverSplitView;
	BOOL _floatingAppVisibleOverExclusiveForegroundApp;

}
-(double)wallpaperScale;
-(double)homeScreenScale;
-(double)homeScreenAlpha;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)initWithSimplificationOptions:(unsigned long long)arg1 ;
-(BOOL)_shouldSimplifyForTodayViewOrSpotlight;
-(BOOL)_shouldSimplifyForOpenFolder;
-(BOOL)_shouldResignActiveAppsUnderFloatingApp;
@end

