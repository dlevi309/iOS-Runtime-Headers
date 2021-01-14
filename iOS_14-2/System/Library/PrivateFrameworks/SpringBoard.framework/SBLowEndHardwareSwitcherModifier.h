/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {

	unsigned long long _options;
	BOOL _floatingAppVisibleOverSplitView;
	BOOL _floatingAppVisibleOverExclusiveForegroundApp;

}
-(double)wallpaperScale;
-(id)keyboardSuppressionMode;
-(BOOL)_shouldSimplifyForWidgetCenterAndLibrary;
-(id)initWithSimplificationOptions:(unsigned long long)arg1 ;
-(id)appLayoutsToResignActive;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)_shouldResignActiveAppsUnderFloatingApp;
-(double)homeScreenScale;
-(BOOL)_shouldSimplifyForOpenFolder;
-(double)homeScreenAlpha;
@end

