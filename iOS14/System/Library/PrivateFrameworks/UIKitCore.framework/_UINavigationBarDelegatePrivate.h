/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>
@optional
-(void)_navigationItemDidUpdateSearchController:(id)arg1 oldSearchController:(id)arg2;
-(BOOL)_navigationBar:(id)arg1 getContentOffsetOfObservedScrollViewIfApplicable:(CGPoint*)arg2;
-(void)_navigationBarWillBeginCoordinatedTransitionAnimations:(id)arg1;
-(id)_navigationBarAdditionalActionsForBackButtonMenu:(id)arg1;
-(double)_navigationBar:(id)arg1 preferredHeightForTransitionToHeightRange:(SCD_Struct_UI30)arg2;
-(void)_navigationBar:(id)arg1 itemEnabledAutoScrollTransition:(id)arg2;
-(BOOL)_isInteractiveCustomNavigationTransition;
-(BOOL)_navigationBarLayoutIsInInteractiveScroll;
-(id)_navigationBarWindowForInterfaceOrientation:(id)arg1;
-(BOOL)_willPerformCustomNavigationTransitionForPop;
-(void)_navigationBar:(id)arg1 topItemUpdatedContentLayout:(id)arg2;
-(BOOL)_willPerformCustomNavigationTransitionForPush;
-(BOOL)enableBackButtonDuringTransition;
-(void)navigationBarDidResizeForPrompt:(id)arg1;
-(double)_customNavigationTransitionDuration;
-(BOOL)_hasInterruptibleNavigationTransition;
-(BOOL)_shouldCrossFadeNavigationBar;
-(void)navigationBarDidChangeOpacity:(id)arg1;
-(void)_navigationBarDidEndAnimation:(id)arg1;
-(void)_navigationBar:(id)arg1 requestPopToItem:(id)arg2;
-(void)_navigationBarDidUpdateStack:(id)arg1;
-(void)_popNavigationBar:(id)arg1 item:(id)arg2;
-(void)_navigationBarChangedSize:(id)arg1;
-(CGRect*)_incomingNavigationBarFrame;
-(BOOL)_navigationBarShouldUpdateProgress;
-(id)_transitionCoordinator;
-(BOOL)isNavigationBarHidden;
-(void)_updatePaletteConstraints;
-(void)_updatePalettesWithBlock:(/*^block*/id)arg1;
-(void)_navigationBarDidChangeStyle:(id)arg1;
-(NSDirectionalEdgeInsets*)_layoutMarginsforNavigationBar:(id)arg1;

@end

