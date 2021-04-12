/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBFluidSwitcherModifierProviding;
@class NSString, SBAppLayout, NSArray, SBSwitcherModifier;

@interface SBAppExposeSwitcherModifier : SBSwitcherModifier {

	NSString* _bundleIdentifier;
	SBAppLayout* _activatingAppLayout;
	unsigned long long _incomingTransitionPhase;
	NSArray* _appLayoutsToKeepDuringIncomingTransition;
	id<SBFluidSwitcherModifierProviding> _modifierProvider;
	SBSwitcherModifier* _outgoingTransitionModifier;
	BOOL _isFloating;
	BOOL _isShowingReopenClosedWindowsButton;
	long long _numberOfHiddenAppLayouts;

}
-(id)handleEvent:(id)arg1 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(long long)plusButtonStyle;
-(double)plusButtonAlpha;
-(double)reopenClosedWindowsButtonAlpha;
-(double)reopenClosedWindowsButtonScale;
-(long long)liveContentRasterizationStyle;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)handleTimerEvent:(id)arg1 ;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(id)appLayoutsForInsertionOrRemoval;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)_updateReopenClosedWindowsButtonPresence;
-(BOOL)isTetheredScrollingEnabled;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleAppExposeEvent:(id)arg1 ;
-(BOOL)_shouldFilteringIncludeAppLayout:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(id)handleTetheredRemovalEvent:(id)arg1 ;
-(id)handleTetheredInsertionEvent:(id)arg1 ;
-(BOOL)_canShowReopenClosedWindowsButton;
-(id)initWithBundleIdentifier:(id)arg1 modifierProvider:(id)arg2 floating:(BOOL)arg3 ;
@end

