/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>
@optional
-(id)_transitionCoordinator;
-(BOOL)isNavigationBarHidden;
-(void)_updatePaletteConstraints;
-(void)_updatePalettesWithBlock:(/*^block*/id)arg1;
-(void)_navigationBarDidChangeStyle:(id)arg1;
-(void)navigationBarDidChangeOpacity:(id)arg1;
-(void)_navigationBarDidEndAnimation:(id)arg1;
-(void)_popNavigationBar:(id)arg1 item:(id)arg2;
-(NSDirectionalEdgeInsets*)_layoutMarginsforNavigationBar:(id)arg1;
-(BOOL)enableBackButtonDuringTransition;
-(void)navigationBarDidResizeForPrompt:(id)arg1;
-(void)_navigationBarChangedSize:(id)arg1;
-(void)_navigationBarWillBeginCoordinatedTransitionAnimations:(id)arg1;
-(CGRect*)_incomingNavigationBarFrame;
-(void)_navigationBar:(id)arg1 itemEnabledAutoScrollTransition:(id)arg2;
-(BOOL)_hasInterruptibleNavigationTransition;
-(BOOL)_willPerformCustomNavigationTransitionForPush;
-(BOOL)_shouldCrossFadeNavigationBar;
-(double)_customNavigationTransitionDuration;
-(BOOL)_willPerformCustomNavigationTransitionForPop;
-(BOOL)_isInteractiveCustomNavigationTransition;
-(BOOL)_navigationBarLayoutIsInInteractiveScroll;
-(BOOL)_navigationBar:(id)arg1 getContentOffsetOfObservedScrollViewIfApplicable:(CGPoint*)arg2;
-(double)_navigationBar:(id)arg1 preferredHeightForTransitionToHeightRange:(SCD_Struct_UI25)arg2;
-(void)_navigationItemDidUpdateSearchController:(id)arg1 oldSearchController:(id)arg2;
-(BOOL)_navigationBarShouldUpdateProgress;

@end

