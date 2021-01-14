/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherContextProviding <SBChainableModifierContext>
@required
-(BOOL)isRTLEnabled;
-(unsigned long long)homeScreenIconGridSizeClassForAppLayout:(id)arg1;
-(BOOL)homeScreenHasWidgetCenterOrLibraryOpen;
-(id)homeGestureSettings;
-(CGRect*)homeScreenIconFrameForAppLayout:(id)arg1;
-(id)switcherBackdropLayoutElement;
-(CGPoint*)morphToPiPTargetCenter;
-(double)morphToPiPSourceAlpha;
-(BOOL)isFloatingDockFullyPresented;
-(CGPoint*)scrollableQueryModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2;
-(BOOL)isDevicePad;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1;
-(id)switcherDimmingViewLayoutElement;
-(long long)numberOfVisibleCards;
-(CGRect*)containerViewBounds;
-(CGPoint*)scrollViewContentOffset;
-(BOOL)homeScreenHasOpenFolder;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
-(unsigned long long)appLayoutsGenerationCount;
-(BOOL)isHomeScreenSidebarVisible;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1;
-(BOOL)isStudyLogEnabled;
-(double)homeScreenIconScaleForAppLayout:(id)arg1;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1;
-(CGPoint*)scrollableQueryModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2;
-(double)floatingDockWindowLevel;
-(double)morphToPiPTargetScale;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1;
-(long long)switcherInterfaceOrientation;
-(double)displayCornerRadius;
-(BOOL)isFloatingDockSupported;
-(CGRect*)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
-(double)floatingDockViewTopMargin;
-(BOOL)hasHomeButton;
-(long long)homeScreenInterfaceOrientation;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1;
-(id)switcherSettings;
-(double)floatingDockHeight;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1;
-(BOOL)isAppLayoutMostRecentRepresentationOfDisplayItems:(id)arg1;
-(id)currentVelocityValueForVisibleAppLayout:(id)arg1 key:(id)arg2;
-(id)genericSwitcherAccessoryLayoutElement;
-(BOOL)isReduceMotionEnabled;
-(unsigned long long)newAppLayoutsGenCount;
-(CGPoint*)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2;
-(id)medusaSettings;
-(BOOL)isShowingSpotlightOrTodayView;
-(id)entityRemovalSettings;
-(id)homeScreenIconLocationForAppLayout:(id)arg1;
-(double)switcherWindowLevel;
-(id)appLayouts;
-(BOOL)isFloatingDockGesturePossible;
-(CGRect*)switcherViewBounds;

@end

