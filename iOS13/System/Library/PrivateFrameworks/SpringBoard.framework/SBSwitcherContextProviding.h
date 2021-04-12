/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherContextProviding <SBChainableModifierContext>
@required
-(double)displayCornerRadius;
-(BOOL)hasHomeButton;
-(CGPoint*)scrollViewContentOffset;
-(BOOL)isReduceMotionEnabled;
-(BOOL)isShowingSpotlightOrTodayView;
-(id)medusaSettings;
-(id)appLayouts;
-(id)switcherSettings;
-(CGRect*)switcherViewBounds;
-(BOOL)isRTLEnabled;
-(CGRect*)containerViewBounds;
-(double)floatingDockHeight;
-(double)floatingDockViewTopMargin;
-(BOOL)isFloatingDockFullyPresented;
-(long long)switcherInterfaceOrientation;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1;
-(unsigned long long)numberOfTetheredAppLayouts;
-(CGSize*)tetheredScrollViewContentSize;
-(double)distanceToTetheredLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
-(BOOL)isFloatingDockGesturePossible;
-(BOOL)homeScreenHasOpenFolder;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1;
-(BOOL)isHomeScreenSidebarVisible;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1;
-(id)homeGestureSettings;
-(id)entityRemovalSettings;
-(long long)numberOfVisibleCards;
-(BOOL)isDevicePad;
-(BOOL)isStudyLogEnabled;
-(CGRect*)homeScreenIconFrameForAppLayout:(id)arg1;
-(double)homeScreenIconScaleForAppLayout:(id)arg1;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1;
-(id)homeScreenIconLocationForAppLayout:(id)arg1;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1;
-(BOOL)isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg1;
-(CGRect*)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
-(double)switcherWindowLevel;
-(double)floatingDockWindowLevel;
-(CGPoint*)morphToPiPTargetCenter;
-(double)morphToPiPTargetScale;
-(double)morphToPiPSourceAlpha;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1;
-(CGPoint*)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2;

@end

